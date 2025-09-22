/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDLIST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/OrderDto.h>
#include <tencentcloud/billing/v20180709/model/BudgetRemindRecords.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 预算管理的分页数据
                */
                class BudgetRemindRecordList : public AbstractModel
                {
                public:
                    BudgetRemindRecordList();
                    ~BudgetRemindRecordList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动优化 COUNT SQL 如果遇到 jSqlParser 无法解析情况，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptimizeCountSql 自动优化 COUNT SQL 如果遇到 jSqlParser 无法解析情况，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOptimizeCountSql() const;

                    /**
                     * 设置自动优化 COUNT SQL 如果遇到 jSqlParser 无法解析情况，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optimizeCountSql 自动优化 COUNT SQL 如果遇到 jSqlParser 无法解析情况，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOptimizeCountSql(const bool& _optimizeCountSql);

                    /**
                     * 判断参数 OptimizeCountSql 是否已赋值
                     * @return OptimizeCountSql 是否已赋值
                     * 
                     */
                    bool OptimizeCountSqlHasBeenSet() const;

                    /**
                     * 获取分页
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pages 分页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPages() const;

                    /**
                     * 设置分页
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pages 分页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPages(const uint64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取排序字段信息，允许前端传入的时候，注意 SQL 注入问题，可以使用 SqlInjectionUtils.check(...) 检查文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Orders 排序字段信息，允许前端传入的时候，注意 SQL 注入问题，可以使用 SqlInjectionUtils.check(...) 检查文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OrderDto> GetOrders() const;

                    /**
                     * 设置排序字段信息，允许前端传入的时候，注意 SQL 注入问题，可以使用 SqlInjectionUtils.check(...) 检查文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orders 排序字段信息，允许前端传入的时候，注意 SQL 注入问题，可以使用 SqlInjectionUtils.check(...) 检查文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrders(const std::vector<OrderDto>& _orders);

                    /**
                     * 判断参数 Orders 是否已赋值
                     * @return Orders 是否已赋值
                     * 
                     */
                    bool OrdersHasBeenSet() const;

                    /**
                     * 获取xml 自定义 count 查询的 statementId 也可以不用指定在分页 statementId 后面加上 _mpCount 例如分页 selectPageById 指定 count 的查询 statementId 设置为 selectPageById_mpCount 即可默认找到该 SQL 执行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountId xml 自定义 count 查询的 statementId 也可以不用指定在分页 statementId 后面加上 _mpCount 例如分页 selectPageById 指定 count 的查询 statementId 设置为 selectPageById_mpCount 即可默认找到该 SQL 执行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountId() const;

                    /**
                     * 设置xml 自定义 count 查询的 statementId 也可以不用指定在分页 statementId 后面加上 _mpCount 例如分页 selectPageById 指定 count 的查询 statementId 设置为 selectPageById_mpCount 即可默认找到该 SQL 执行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countId xml 自定义 count 查询的 statementId 也可以不用指定在分页 statementId 后面加上 _mpCount 例如分页 selectPageById 指定 count 的查询 statementId 设置为 selectPageById_mpCount 即可默认找到该 SQL 执行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountId(const std::string& _countId);

                    /**
                     * 判断参数 CountId 是否已赋值
                     * @return CountId 是否已赋值
                     * 
                     */
                    bool CountIdHasBeenSet() const;

                    /**
                     * 获取分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取单页分页条数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxLimit 单页分页条数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaxLimit() const;

                    /**
                     * 设置单页分页条数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxLimit 单页分页条数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxLimit(const std::string& _maxLimit);

                    /**
                     * 判断参数 MaxLimit 是否已赋值
                     * @return MaxLimit 是否已赋值
                     * 
                     */
                    bool MaxLimitHasBeenSet() const;

                    /**
                     * 获取查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Records 查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BudgetRemindRecords> GetRecords() const;

                    /**
                     * 设置查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _records 查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecords(const std::vector<BudgetRemindRecords>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取当前页
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Current 当前页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCurrent() const;

                    /**
                     * 设置当前页
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _current 当前页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrent(const uint64_t& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                    /**
                     * 获取是否进行 count 查询，如果只想查询到列表不要查询总记录数，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchCount 是否进行 count 查询，如果只想查询到列表不要查询总记录数，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSearchCount() const;

                    /**
                     * 设置是否进行 count 查询，如果只想查询到列表不要查询总记录数，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchCount 是否进行 count 查询，如果只想查询到列表不要查询总记录数，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchCount(const bool& _searchCount);

                    /**
                     * 判断参数 SearchCount 是否已赋值
                     * @return SearchCount 是否已赋值
                     * 
                     */
                    bool SearchCountHasBeenSet() const;

                private:

                    /**
                     * 自动优化 COUNT SQL 如果遇到 jSqlParser 无法解析情况，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_optimizeCountSql;
                    bool m_optimizeCountSqlHasBeenSet;

                    /**
                     * 分页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * 排序字段信息，允许前端传入的时候，注意 SQL 注入问题，可以使用 SqlInjectionUtils.check(...) 检查文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OrderDto> m_orders;
                    bool m_ordersHasBeenSet;

                    /**
                     * xml 自定义 count 查询的 statementId 也可以不用指定在分页 statementId 后面加上 _mpCount 例如分页 selectPageById 指定 count 的查询 statementId 设置为 selectPageById_mpCount 即可默认找到该 SQL 执行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_countId;
                    bool m_countIdHasBeenSet;

                    /**
                     * 分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 单页分页条数限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxLimit;
                    bool m_maxLimitHasBeenSet;

                    /**
                     * 查询数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BudgetRemindRecords> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 当前页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_current;
                    bool m_currentHasBeenSet;

                    /**
                     * 是否进行 count 查询，如果只想查询到列表不要查询总记录数，设置该参数为 false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_searchCount;
                    bool m_searchCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDLIST_H_
