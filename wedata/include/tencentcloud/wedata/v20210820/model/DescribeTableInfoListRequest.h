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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEINFOLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableInfoList请求参数结构体
                */
                class DescribeTableInfoListRequest : public AbstractModel
                {
                public:
                    DescribeTableInfoListRequest();
                    ~DescribeTableInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表名
                     * @return Filters 表名
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置表名
                     * @param _filters 表名
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
                     * 获取如果是hive这里写rpc，如果是其他类型不传
                     * @return ConnectionType 如果是hive这里写rpc，如果是其他类型不传
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置如果是hive这里写rpc，如果是其他类型不传
                     * @param _connectionType 如果是hive这里写rpc，如果是其他类型不传
                     * 
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取数据库源类型
                     * @return Catalog 数据库源类型
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置数据库源类型
                     * @param _catalog 数据库源类型
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                private:

                    /**
                     * 表名
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 如果是hive这里写rpc，如果是其他类型不传
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * 数据库源类型
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEINFOLISTREQUEST_H_
