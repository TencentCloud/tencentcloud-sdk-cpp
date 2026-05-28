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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPLAINROW_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPLAINROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 执行计划列表
                */
                class ExplainRow : public AbstractModel
                {
                public:
                    ExplainRow();
                    ~ExplainRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>查询的序列号</p>
                     * @return Id <p>查询的序列号</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>查询的序列号</p>
                     * @param _id <p>查询的序列号</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>查询的类型，常见值：SIMPLE（简单查询，不含子查询或 UNION）、PRIMARY（最外层查询）、SUBQUERY（子查询中的第一个 SELECT）、DERIVED（派生表/FROM 子句中的子查询）、UNION（UNION 中第二个及之后的 SELECT）、UNION RESULT（UNION 的结果集）。</p>
                     * @return SelectType <p>查询的类型，常见值：SIMPLE（简单查询，不含子查询或 UNION）、PRIMARY（最外层查询）、SUBQUERY（子查询中的第一个 SELECT）、DERIVED（派生表/FROM 子句中的子查询）、UNION（UNION 中第二个及之后的 SELECT）、UNION RESULT（UNION 的结果集）。</p>
                     * 
                     */
                    std::string GetSelectType() const;

                    /**
                     * 设置<p>查询的类型，常见值：SIMPLE（简单查询，不含子查询或 UNION）、PRIMARY（最外层查询）、SUBQUERY（子查询中的第一个 SELECT）、DERIVED（派生表/FROM 子句中的子查询）、UNION（UNION 中第二个及之后的 SELECT）、UNION RESULT（UNION 的结果集）。</p>
                     * @param _selectType <p>查询的类型，常见值：SIMPLE（简单查询，不含子查询或 UNION）、PRIMARY（最外层查询）、SUBQUERY（子查询中的第一个 SELECT）、DERIVED（派生表/FROM 子句中的子查询）、UNION（UNION 中第二个及之后的 SELECT）、UNION RESULT（UNION 的结果集）。</p>
                     * 
                     */
                    void SetSelectType(const std::string& _selectType);

                    /**
                     * 判断参数 SelectType 是否已赋值
                     * @return SelectType 是否已赋值
                     * 
                     */
                    bool SelectTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据表名</p>
                     * @return Table <p>数据表名</p>
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置<p>数据表名</p>
                     * @param _table <p>数据表名</p>
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取<p>查询匹配的分区</p>
                     * @return Partitions <p>查询匹配的分区</p>
                     * 
                     */
                    std::string GetPartitions() const;

                    /**
                     * 设置<p>查询匹配的分区</p>
                     * @param _partitions <p>查询匹配的分区</p>
                     * 
                     */
                    void SetPartitions(const std::string& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取<p>访问类型（非常重要，衡量查询效率的关键指标），从优到差排列：system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL。常见值说明： • system：表只有一行记录（系统表） • const：通过主键或唯一索引匹配一行，常见于 WHERE pk = 1 • eq_ref：连接时使用主键或唯一索引，每个索引值只匹配一行 • ref：使用非唯一索引查找，可能匹配多行 • range：索引范围扫描，如 BETWEEN、&gt;、&lt;、IN • index：全索引扫描（遍历整棵索引树） • ALL：全表扫描（最差，需优化）</p>
                     * @return Type <p>访问类型（非常重要，衡量查询效率的关键指标），从优到差排列：system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL。常见值说明： • system：表只有一行记录（系统表） • const：通过主键或唯一索引匹配一行，常见于 WHERE pk = 1 • eq_ref：连接时使用主键或唯一索引，每个索引值只匹配一行 • ref：使用非唯一索引查找，可能匹配多行 • range：索引范围扫描，如 BETWEEN、&gt;、&lt;、IN • index：全索引扫描（遍历整棵索引树） • ALL：全表扫描（最差，需优化）</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>访问类型（非常重要，衡量查询效率的关键指标），从优到差排列：system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL。常见值说明： • system：表只有一行记录（系统表） • const：通过主键或唯一索引匹配一行，常见于 WHERE pk = 1 • eq_ref：连接时使用主键或唯一索引，每个索引值只匹配一行 • ref：使用非唯一索引查找，可能匹配多行 • range：索引范围扫描，如 BETWEEN、&gt;、&lt;、IN • index：全索引扫描（遍历整棵索引树） • ALL：全表扫描（最差，需优化）</p>
                     * @param _type <p>访问类型（非常重要，衡量查询效率的关键指标），从优到差排列：system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL。常见值说明： • system：表只有一行记录（系统表） • const：通过主键或唯一索引匹配一行，常见于 WHERE pk = 1 • eq_ref：连接时使用主键或唯一索引，每个索引值只匹配一行 • ref：使用非唯一索引查找，可能匹配多行 • range：索引范围扫描，如 BETWEEN、&gt;、&lt;、IN • index：全索引扫描（遍历整棵索引树） • ALL：全表扫描（最差，需优化）</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>查询中可能使用到的索引。为 NULL 表示没有可用索引。</p>
                     * @return PossibleKeys <p>查询中可能使用到的索引。为 NULL 表示没有可用索引。</p>
                     * 
                     */
                    std::string GetPossibleKeys() const;

                    /**
                     * 设置<p>查询中可能使用到的索引。为 NULL 表示没有可用索引。</p>
                     * @param _possibleKeys <p>查询中可能使用到的索引。为 NULL 表示没有可用索引。</p>
                     * 
                     */
                    void SetPossibleKeys(const std::string& _possibleKeys);

                    /**
                     * 判断参数 PossibleKeys 是否已赋值
                     * @return PossibleKeys 是否已赋值
                     * 
                     */
                    bool PossibleKeysHasBeenSet() const;

                    /**
                     * 获取<p>实际使用的索引。为 NULL 表示未使用任何索引。</p>
                     * @return Key <p>实际使用的索引。为 NULL 表示未使用任何索引。</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>实际使用的索引。为 NULL 表示未使用任何索引。</p>
                     * @param _key <p>实际使用的索引。为 NULL 表示未使用任何索引。</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>实际使用的索引长度（字节数）。可用来判断联合索引中实际使用了哪几个列。值越短说明使用的索引列越少。</p>
                     * @return KeyLen <p>实际使用的索引长度（字节数）。可用来判断联合索引中实际使用了哪几个列。值越短说明使用的索引列越少。</p>
                     * 
                     */
                    std::string GetKeyLen() const;

                    /**
                     * 设置<p>实际使用的索引长度（字节数）。可用来判断联合索引中实际使用了哪几个列。值越短说明使用的索引列越少。</p>
                     * @param _keyLen <p>实际使用的索引长度（字节数）。可用来判断联合索引中实际使用了哪几个列。值越短说明使用的索引列越少。</p>
                     * 
                     */
                    void SetKeyLen(const std::string& _keyLen);

                    /**
                     * 判断参数 KeyLen 是否已赋值
                     * @return KeyLen 是否已赋值
                     * 
                     */
                    bool KeyLenHasBeenSet() const;

                    /**
                     * 获取<p>显示哪些列或常量与 key 列中的索引进行比较。常见值：const（常量）、某个列名、func（函数结果）。</p>
                     * @return Ref <p>显示哪些列或常量与 key 列中的索引进行比较。常见值：const（常量）、某个列名、func（函数结果）。</p>
                     * 
                     */
                    std::string GetRef() const;

                    /**
                     * 设置<p>显示哪些列或常量与 key 列中的索引进行比较。常见值：const（常量）、某个列名、func（函数结果）。</p>
                     * @param _ref <p>显示哪些列或常量与 key 列中的索引进行比较。常见值：const（常量）、某个列名、func（函数结果）。</p>
                     * 
                     */
                    void SetRef(const std::string& _ref);

                    /**
                     * 判断参数 Ref 是否已赋值
                     * @return Ref 是否已赋值
                     * 
                     */
                    bool RefHasBeenSet() const;

                    /**
                     * 获取<p>预估要扫描的行数</p>
                     * @return Rows <p>预估要扫描的行数</p>
                     * 
                     */
                    int64_t GetRows() const;

                    /**
                     * 设置<p>预估要扫描的行数</p>
                     * @param _rows <p>预估要扫描的行数</p>
                     * 
                     */
                    void SetRows(const int64_t& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取<p>表示经过表条件过滤后，剩余行数占 rows 的百分比估算。100% 表示没有额外过滤，值越高越好。</p>
                     * @return Filtered <p>表示经过表条件过滤后，剩余行数占 rows 的百分比估算。100% 表示没有额外过滤，值越高越好。</p>
                     * 
                     */
                    double GetFiltered() const;

                    /**
                     * 设置<p>表示经过表条件过滤后，剩余行数占 rows 的百分比估算。100% 表示没有额外过滤，值越高越好。</p>
                     * @param _filtered <p>表示经过表条件过滤后，剩余行数占 rows 的百分比估算。100% 表示没有额外过滤，值越高越好。</p>
                     * 
                     */
                    void SetFiltered(const double& _filtered);

                    /**
                     * 判断参数 Filtered 是否已赋值
                     * @return Filtered 是否已赋值
                     * 
                     */
                    bool FilteredHasBeenSet() const;

                    /**
                     * 获取<p>附加信息（非常重要），常见值： • Using index：覆盖索引，无需回表（好） • Using where：在存储引擎返回行后再用 WHERE 过滤 • Using temporary：使用了临时表（常见于 GROUP BY/ORDER BY，需优化） • Using filesort：使用了文件排序而非索引排序（需优化） • Using index condition：使用了索引下推（ICP）</p>
                     * @return Extra <p>附加信息（非常重要），常见值： • Using index：覆盖索引，无需回表（好） • Using where：在存储引擎返回行后再用 WHERE 过滤 • Using temporary：使用了临时表（常见于 GROUP BY/ORDER BY，需优化） • Using filesort：使用了文件排序而非索引排序（需优化） • Using index condition：使用了索引下推（ICP）</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>附加信息（非常重要），常见值： • Using index：覆盖索引，无需回表（好） • Using where：在存储引擎返回行后再用 WHERE 过滤 • Using temporary：使用了临时表（常见于 GROUP BY/ORDER BY，需优化） • Using filesort：使用了文件排序而非索引排序（需优化） • Using index condition：使用了索引下推（ICP）</p>
                     * @param _extra <p>附加信息（非常重要），常见值： • Using index：覆盖索引，无需回表（好） • Using where：在存储引擎返回行后再用 WHERE 过滤 • Using temporary：使用了临时表（常见于 GROUP BY/ORDER BY，需优化） • Using filesort：使用了文件排序而非索引排序（需优化） • Using index condition：使用了索引下推（ICP）</p>
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * <p>查询的序列号</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>查询的类型，常见值：SIMPLE（简单查询，不含子查询或 UNION）、PRIMARY（最外层查询）、SUBQUERY（子查询中的第一个 SELECT）、DERIVED（派生表/FROM 子句中的子查询）、UNION（UNION 中第二个及之后的 SELECT）、UNION RESULT（UNION 的结果集）。</p>
                     */
                    std::string m_selectType;
                    bool m_selectTypeHasBeenSet;

                    /**
                     * <p>数据表名</p>
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * <p>查询匹配的分区</p>
                     */
                    std::string m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * <p>访问类型（非常重要，衡量查询效率的关键指标），从优到差排列：system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL。常见值说明： • system：表只有一行记录（系统表） • const：通过主键或唯一索引匹配一行，常见于 WHERE pk = 1 • eq_ref：连接时使用主键或唯一索引，每个索引值只匹配一行 • ref：使用非唯一索引查找，可能匹配多行 • range：索引范围扫描，如 BETWEEN、&gt;、&lt;、IN • index：全索引扫描（遍历整棵索引树） • ALL：全表扫描（最差，需优化）</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>查询中可能使用到的索引。为 NULL 表示没有可用索引。</p>
                     */
                    std::string m_possibleKeys;
                    bool m_possibleKeysHasBeenSet;

                    /**
                     * <p>实际使用的索引。为 NULL 表示未使用任何索引。</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>实际使用的索引长度（字节数）。可用来判断联合索引中实际使用了哪几个列。值越短说明使用的索引列越少。</p>
                     */
                    std::string m_keyLen;
                    bool m_keyLenHasBeenSet;

                    /**
                     * <p>显示哪些列或常量与 key 列中的索引进行比较。常见值：const（常量）、某个列名、func（函数结果）。</p>
                     */
                    std::string m_ref;
                    bool m_refHasBeenSet;

                    /**
                     * <p>预估要扫描的行数</p>
                     */
                    int64_t m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * <p>表示经过表条件过滤后，剩余行数占 rows 的百分比估算。100% 表示没有额外过滤，值越高越好。</p>
                     */
                    double m_filtered;
                    bool m_filteredHasBeenSet;

                    /**
                     * <p>附加信息（非常重要），常见值： • Using index：覆盖索引，无需回表（好） • Using where：在存储引擎返回行后再用 WHERE 过滤 • Using temporary：使用了临时表（常见于 GROUP BY/ORDER BY，需优化） • Using filesort：使用了文件排序而非索引排序（需优化） • Using index condition：使用了索引下推（ICP）</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPLAINROW_H_
