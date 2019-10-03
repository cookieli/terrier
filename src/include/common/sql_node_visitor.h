#pragma once

namespace terrier {

namespace parser {
class ParseResult;

class SelectStatement;
class CreateStatement;
class CreateFunctionStatement;
class InsertStatement;
class DeleteStatement;
class DropStatement;
class ExplainStatement;
class PrepareStatement;
class ExecuteStatement;
class TransactionStatement;
class UpdateStatement;
class CopyStatement;
class AnalyzeStatement;
class VariableSetStatement;
class JoinDefinition;
class TableRef;

class GroupByDescription;
class OrderByDescription;
class LimitDescription;

class AggregateExpression;
class CaseExpression;
class ColumnValueExpression;
class ComparisonExpression;
class ConjunctionExpression;
class ConstantValueExpression;
class DefaultValueExpression;
class DerivedValueExpression;
class FunctionExpression;
class OperatorExpression;
class ParameterValueExpression;
class StarExpression;
class SubqueryExpression;
class TypeCastExpression;
}  // namespace parser

/**
 * Visitor pattern definitions for the parser statements.
 */
class SqlNodeVisitor {
 public:
  /**
   * Virtual destructor for SqlNodeVisitor.
   */
  virtual ~SqlNodeVisitor() = default;

  /**
   * Visitor pattern for SelectStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::SelectStatement *node, parser::ParseResult *parse_result) {}

  // Some sub query nodes inside SelectStatement
  /**
   * Visitor pattern for JoinDefinition.
   * @param node node to be visited
   */
  virtual void Visit(parser::JoinDefinition *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for TableRef.
   * @param node node to be visited
   */
  virtual void Visit(parser::TableRef *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for GroupByDescription.
   * @param node node to be visited
   */
  virtual void Visit(parser::GroupByDescription *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for OrderByDescription.
   * @param node node to be visited
   */
  virtual void Visit(parser::OrderByDescription *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for LimitDescription.
   * @param node node to be visited
   */
  virtual void Visit(parser::LimitDescription *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for CreateStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::CreateStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for CreateFunctionStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::CreateFunctionStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for InsertStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::InsertStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for DeleteStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::DeleteStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for DropStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::DropStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for PrepareStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::PrepareStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for ExecuteStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::ExecuteStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for TransactionStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::TransactionStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for UpdateStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::UpdateStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for CopyStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::CopyStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for AnalyzeStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::AnalyzeStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for ExplainStatement.
   * @param node node to be visited
   */
  virtual void Visit(parser::ExplainStatement *node, parser::ParseResult *parse_result) {}

  /**
   * Visitor pattern for AggregateExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::AggregateExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for CaseExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::CaseExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for ColumnValueExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::ColumnValueExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for ComparisonExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::ComparisonExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for ConjunctionExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::ConjunctionExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for ConstantValueExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::ConstantValueExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for DefaultValueExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::DefaultValueExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for DerivedValueExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::DerivedValueExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for FunctionExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::FunctionExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for OperatorExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::OperatorExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for ParameterValueExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::ParameterValueExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for StarExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::StarExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for SubqueryExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::SubqueryExpression *expr, parser::ParseResult *parse_result);

  /**
   * Visitor pattern for TypeCastExpression
   * @param expr to be visited
   */
  virtual void Visit(parser::TypeCastExpression *expr, parser::ParseResult *parse_result);
};

}  // namespace terrier
