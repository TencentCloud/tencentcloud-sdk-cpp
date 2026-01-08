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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULEGROUPSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/Filter.h>
#include <tencentcloud/wedata/v20250806/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListQualityRuleGroups请求参数结构体
                */
                class ListQualityRuleGroupsRequest : public AbstractModel
                {
                public:
                    ListQualityRuleGroupsRequest();
                    ~ListQualityRuleGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取分页序号，默认1
                     * @return PageNumber 分页序号，默认1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页序号，默认1
                     * @param _pageNumber 分页序号，默认1
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
                     * 获取分页大小，默认10
                     * @return PageSize 分页大小，默认10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小，默认10
                     * @param _pageSize 分页大小，默认10
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
                     * 获取过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5，可选过滤条件如下：

1. RuleGroupId
描述：规则组ID。
取值：整数

2. RuleGroupName
描述：规则组名称。
取值：字符串

3. TableId
描述：数据源表id
取值：字符串

4. TableName
描述：数据源表名称，支持模糊匹配。
取值：字符串

5. TableOwnerName
描述：表负责人名称，支持模糊匹配。
取值：字符串


6. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

7. DatasourceId
描述：数据源ID。
取值：字符串

8. DatabaseName
描述：数据库名称。
取值：字符串

9. SchemaName
描述：Schema名称。
取值：字符串

10. CatalogName
描述：数据目录名称。
取值：字符串


                     * @return Filters 过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5，可选过滤条件如下：

1. RuleGroupId
描述：规则组ID。
取值：整数

2. RuleGroupName
描述：规则组名称。
取值：字符串

3. TableId
描述：数据源表id
取值：字符串

4. TableName
描述：数据源表名称，支持模糊匹配。
取值：字符串

5. TableOwnerName
描述：表负责人名称，支持模糊匹配。
取值：字符串


6. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

7. DatasourceId
描述：数据源ID。
取值：字符串

8. DatabaseName
描述：数据库名称。
取值：字符串

9. SchemaName
描述：Schema名称。
取值：字符串

10. CatalogName
描述：数据目录名称。
取值：字符串


                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5，可选过滤条件如下：

1. RuleGroupId
描述：规则组ID。
取值：整数

2. RuleGroupName
描述：规则组名称。
取值：字符串

3. TableId
描述：数据源表id
取值：字符串

4. TableName
描述：数据源表名称，支持模糊匹配。
取值：字符串

5. TableOwnerName
描述：表负责人名称，支持模糊匹配。
取值：字符串


6. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

7. DatasourceId
描述：数据源ID。
取值：字符串

8. DatabaseName
描述：数据库名称。
取值：字符串

9. SchemaName
描述：Schema名称。
取值：字符串

10. CatalogName
描述：数据目录名称。
取值：字符串


                     * @param _filters 过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5，可选过滤条件如下：

1. RuleGroupId
描述：规则组ID。
取值：整数

2. RuleGroupName
描述：规则组名称。
取值：字符串

3. TableId
描述：数据源表id
取值：字符串

4. TableName
描述：数据源表名称，支持模糊匹配。
取值：字符串

5. TableOwnerName
描述：表负责人名称，支持模糊匹配。
取值：字符串


6. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

7. DatasourceId
描述：数据源ID。
取值：字符串

8. DatabaseName
描述：数据库名称。
取值：字符串

9. SchemaName
描述：Schema名称。
取值：字符串

10. CatalogName
描述：数据目录名称。
取值：字符串


                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取通用排序，支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * @return OrderFields 通用排序，支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置通用排序，支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * @param _orderFields 通用排序，支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
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

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分页序号，默认1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小，默认10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5，可选过滤条件如下：

1. RuleGroupId
描述：规则组ID。
取值：整数

2. RuleGroupName
描述：规则组名称。
取值：字符串

3. TableId
描述：数据源表id
取值：字符串

4. TableName
描述：数据源表名称，支持模糊匹配。
取值：字符串

5. TableOwnerName
描述：表负责人名称，支持模糊匹配。
取值：字符串


6. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

7. DatasourceId
描述：数据源ID。
取值：字符串

8. DatabaseName
描述：数据库名称。
取值：字符串

9. SchemaName
描述：Schema名称。
取值：字符串

10. CatalogName
描述：数据目录名称。
取值：字符串


                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 通用排序，支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULEGROUPSREQUEST_H_
