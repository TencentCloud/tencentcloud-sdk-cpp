/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETAREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableNameFilter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableMeta请求参数结构体
                */
                class DescribeTableMetaRequest : public AbstractModel
                {
                public:
                    DescribeTableMetaRequest();
                    ~DescribeTableMetaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表唯一id
                     * @return TableId 表唯一id
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表唯一id
                     * @param _tableId 表唯一id
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取按名称查询的条件
                     * @return TableNameFilter 按名称查询的条件
                     * 
                     */
                    TableNameFilter GetTableNameFilter() const;

                    /**
                     * 设置按名称查询的条件
                     * @param _tableNameFilter 按名称查询的条件
                     * 
                     */
                    void SetTableNameFilter(const TableNameFilter& _tableNameFilter);

                    /**
                     * 判断参数 TableNameFilter 是否已赋值
                     * @return TableNameFilter 是否已赋值
                     * 
                     */
                    bool TableNameFilterHasBeenSet() const;

                    /**
                     * 获取查询条件类型0按id，1按名称，默认为0
                     * @return TableFilterType 查询条件类型0按id，1按名称，默认为0
                     * 
                     */
                    uint64_t GetTableFilterType() const;

                    /**
                     * 设置查询条件类型0按id，1按名称，默认为0
                     * @param _tableFilterType 查询条件类型0按id，1按名称，默认为0
                     * 
                     */
                    void SetTableFilterType(const uint64_t& _tableFilterType);

                    /**
                     * 判断参数 TableFilterType 是否已赋值
                     * @return TableFilterType 是否已赋值
                     * 
                     */
                    bool TableFilterTypeHasBeenSet() const;

                    /**
                     * 获取查询字段列表
                     * @return SearchNames 查询字段列表
                     * 
                     */
                    std::vector<std::string> GetSearchNames() const;

                    /**
                     * 设置查询字段列表
                     * @param _searchNames 查询字段列表
                     * 
                     */
                    void SetSearchNames(const std::vector<std::string>& _searchNames);

                    /**
                     * 判断参数 SearchNames 是否已赋值
                     * @return SearchNames 是否已赋值
                     * 
                     */
                    bool SearchNamesHasBeenSet() const;

                private:

                    /**
                     * 表唯一id
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 按名称查询的条件
                     */
                    TableNameFilter m_tableNameFilter;
                    bool m_tableNameFilterHasBeenSet;

                    /**
                     * 查询条件类型0按id，1按名称，默认为0
                     */
                    uint64_t m_tableFilterType;
                    bool m_tableFilterTypeHasBeenSet;

                    /**
                     * 查询字段列表
                     */
                    std::vector<std::string> m_searchNames;
                    bool m_searchNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETAREQUEST_H_
