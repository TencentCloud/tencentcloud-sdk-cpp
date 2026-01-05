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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULETEMPLATESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/OrderField.h>
#include <tencentcloud/wedata/v20250806/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListQualityRuleTemplates请求参数结构体
                */
                class ListQualityRuleTemplatesRequest : public AbstractModel
                {
                public:
                    ListQualityRuleTemplatesRequest();
                    ~ListQualityRuleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间ID
                     * @return ProjectId 工作空间ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置工作空间ID
                     * @param _projectId 工作空间ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取当前页，默认1
                     * @return PageNumber 当前页，默认1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置当前页，默认1
                     * @param _pageNumber 当前页，默认1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页记录数，默认10
                     * @return PageSize 每页记录数，默认10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页记录数，默认10
                     * @param _pageSize 每页记录数，默认10
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取通用排序，
支持的排序字段：
CitationCount - 按引用数量排序
UpdateTime - 按更新时间排序
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * @return OrderFields 通用排序，
支持的排序字段：
CitationCount - 按引用数量排序
UpdateTime - 按更新时间排序
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置通用排序，
支持的排序字段：
CitationCount - 按引用数量排序
UpdateTime - 按更新时间排序
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * @param _orderFields 通用排序，
支持的排序字段：
CitationCount - 按引用数量排序
UpdateTime - 按更新时间排序
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取通用过滤条件
1. Id
描述：模板ID。
取值：模板的唯一标识

2. Keyword
描述：关键字搜索，支持模板名称模糊搜索。
取值：字符串

3. Type
描述：模板类型。
取值：1 - 系统模板；2 - 自定义模板；支持多个值（OR关系）

4. QualityDim
描述：质量检测维度。
取值：1 - 准确性；2 - 唯一性；3 - 完整性；4 - 一致性；5 - 及时性；6 - 有效性；支持多个值（OR关系）

5. SourceObjectType
描述：规则适用的源数据对象类型。
取值：1 - 常量；2 - 离线表级；3 - 离线字段级；4 - 库级；支持多个值（OR关系）

6. SourceEngineTypes
描述：模板适用的源数据引擎类型。
取值：1 - MySQL；2 - Hive；4 - Spark；8 - Livy；16 - DLC；32 - Gbase；64 - TCHouse-P；128 - Doris；256 - TCHouse-D；512 - EMR_StarRocks；1024 - TCHouse-X；支持多个值（OR关系）

                     * @return Filters 通用过滤条件
1. Id
描述：模板ID。
取值：模板的唯一标识

2. Keyword
描述：关键字搜索，支持模板名称模糊搜索。
取值：字符串

3. Type
描述：模板类型。
取值：1 - 系统模板；2 - 自定义模板；支持多个值（OR关系）

4. QualityDim
描述：质量检测维度。
取值：1 - 准确性；2 - 唯一性；3 - 完整性；4 - 一致性；5 - 及时性；6 - 有效性；支持多个值（OR关系）

5. SourceObjectType
描述：规则适用的源数据对象类型。
取值：1 - 常量；2 - 离线表级；3 - 离线字段级；4 - 库级；支持多个值（OR关系）

6. SourceEngineTypes
描述：模板适用的源数据引擎类型。
取值：1 - MySQL；2 - Hive；4 - Spark；8 - Livy；16 - DLC；32 - Gbase；64 - TCHouse-P；128 - Doris；256 - TCHouse-D；512 - EMR_StarRocks；1024 - TCHouse-X；支持多个值（OR关系）

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置通用过滤条件
1. Id
描述：模板ID。
取值：模板的唯一标识

2. Keyword
描述：关键字搜索，支持模板名称模糊搜索。
取值：字符串

3. Type
描述：模板类型。
取值：1 - 系统模板；2 - 自定义模板；支持多个值（OR关系）

4. QualityDim
描述：质量检测维度。
取值：1 - 准确性；2 - 唯一性；3 - 完整性；4 - 一致性；5 - 及时性；6 - 有效性；支持多个值（OR关系）

5. SourceObjectType
描述：规则适用的源数据对象类型。
取值：1 - 常量；2 - 离线表级；3 - 离线字段级；4 - 库级；支持多个值（OR关系）

6. SourceEngineTypes
描述：模板适用的源数据引擎类型。
取值：1 - MySQL；2 - Hive；4 - Spark；8 - Livy；16 - DLC；32 - Gbase；64 - TCHouse-P；128 - Doris；256 - TCHouse-D；512 - EMR_StarRocks；1024 - TCHouse-X；支持多个值（OR关系）

                     * @param _filters 通用过滤条件
1. Id
描述：模板ID。
取值：模板的唯一标识

2. Keyword
描述：关键字搜索，支持模板名称模糊搜索。
取值：字符串

3. Type
描述：模板类型。
取值：1 - 系统模板；2 - 自定义模板；支持多个值（OR关系）

4. QualityDim
描述：质量检测维度。
取值：1 - 准确性；2 - 唯一性；3 - 完整性；4 - 一致性；5 - 及时性；6 - 有效性；支持多个值（OR关系）

5. SourceObjectType
描述：规则适用的源数据对象类型。
取值：1 - 常量；2 - 离线表级；3 - 离线字段级；4 - 库级；支持多个值（OR关系）

6. SourceEngineTypes
描述：模板适用的源数据引擎类型。
取值：1 - MySQL；2 - Hive；4 - Spark；8 - Livy；16 - DLC；32 - Gbase；64 - TCHouse-P；128 - Doris；256 - TCHouse-D；512 - EMR_StarRocks；1024 - TCHouse-X；支持多个值（OR关系）

                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 工作空间ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 当前页，默认1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页记录数，默认10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 通用排序，
支持的排序字段：
CitationCount - 按引用数量排序
UpdateTime - 按更新时间排序
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 通用过滤条件
1. Id
描述：模板ID。
取值：模板的唯一标识

2. Keyword
描述：关键字搜索，支持模板名称模糊搜索。
取值：字符串

3. Type
描述：模板类型。
取值：1 - 系统模板；2 - 自定义模板；支持多个值（OR关系）

4. QualityDim
描述：质量检测维度。
取值：1 - 准确性；2 - 唯一性；3 - 完整性；4 - 一致性；5 - 及时性；6 - 有效性；支持多个值（OR关系）

5. SourceObjectType
描述：规则适用的源数据对象类型。
取值：1 - 常量；2 - 离线表级；3 - 离线字段级；4 - 库级；支持多个值（OR关系）

6. SourceEngineTypes
描述：模板适用的源数据引擎类型。
取值：1 - MySQL；2 - Hive；4 - Spark；8 - Livy；16 - DLC；32 - Gbase；64 - TCHouse-P；128 - Doris；256 - TCHouse-D；512 - EMR_StarRocks；1024 - TCHouse-X；支持多个值（OR关系）

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULETEMPLATESREQUEST_H_
