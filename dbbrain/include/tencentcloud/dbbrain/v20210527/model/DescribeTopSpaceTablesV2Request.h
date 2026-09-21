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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLESV2REQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLESV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeTopSpaceTablesV2请求参数结构体
                */
                class DescribeTopSpaceTablesV2Request : public AbstractModel
                {
                public:
                    DescribeTopSpaceTablesV2Request();
                    ~DescribeTopSpaceTablesV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务产品类型，支持值包括：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）、dcdb（TDSQL MySQL 版）、tdsql（TDSQL）、mariadb（云数据库 MariaDB）。</p>
                     * @return Product <p>服务产品类型，支持值包括：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）、dcdb（TDSQL MySQL 版）、tdsql（TDSQL）、mariadb（云数据库 MariaDB）。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值包括：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）、dcdb（TDSQL MySQL 版）、tdsql（TDSQL）、mariadb（云数据库 MariaDB）。</p>
                     * @param _product <p>服务产品类型，支持值包括：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）、dcdb（TDSQL MySQL 版）、tdsql（TDSQL）、mariadb（云数据库 MariaDB）。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>查询日期，格式：yyyy-MM-dd。默认当天。</p>
                     * @return Date <p>查询日期，格式：yyyy-MM-dd。默认当天。</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>查询日期，格式：yyyy-MM-dd。默认当天。</p>
                     * @param _date <p>查询日期，格式：yyyy-MM-dd。默认当天。</p>
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取<p>排序字段。MySQL/PG/TDSQL 系列支持：PhysicalFileSize/DataLength/IndexLength/TotalLength/DataFree/FragRatio/TableRows，默认 PhysicalFileSize。MongoDB 支持：Collection.CollectionSize/Collection.StorageSize/Collection.Size/Collection.AvgObjSize/Collection.Count/Collection.TotalIndexSize，默认 Collection.CollectionSize。</p>
                     * @return SortBy <p>排序字段。MySQL/PG/TDSQL 系列支持：PhysicalFileSize/DataLength/IndexLength/TotalLength/DataFree/FragRatio/TableRows，默认 PhysicalFileSize。MongoDB 支持：Collection.CollectionSize/Collection.StorageSize/Collection.Size/Collection.AvgObjSize/Collection.Count/Collection.TotalIndexSize，默认 Collection.CollectionSize。</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段。MySQL/PG/TDSQL 系列支持：PhysicalFileSize/DataLength/IndexLength/TotalLength/DataFree/FragRatio/TableRows，默认 PhysicalFileSize。MongoDB 支持：Collection.CollectionSize/Collection.StorageSize/Collection.Size/Collection.AvgObjSize/Collection.Count/Collection.TotalIndexSize，默认 Collection.CollectionSize。</p>
                     * @param _sortBy <p>排序字段。MySQL/PG/TDSQL 系列支持：PhysicalFileSize/DataLength/IndexLength/TotalLength/DataFree/FragRatio/TableRows，默认 PhysicalFileSize。MongoDB 支持：Collection.CollectionSize/Collection.StorageSize/Collection.Size/Collection.AvgObjSize/Collection.Count/Collection.TotalIndexSize，默认 Collection.CollectionSize。</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认20，最大100。</p>
                     * @return Limit <p>返回数量，默认20，最大100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认20，最大100。</p>
                     * @param _limit <p>返回数量，默认20，最大100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值包括：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）、dcdb（TDSQL MySQL 版）、tdsql（TDSQL）、mariadb（云数据库 MariaDB）。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>查询日期，格式：yyyy-MM-dd。默认当天。</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>排序字段。MySQL/PG/TDSQL 系列支持：PhysicalFileSize/DataLength/IndexLength/TotalLength/DataFree/FragRatio/TableRows，默认 PhysicalFileSize。MongoDB 支持：Collection.CollectionSize/Collection.StorageSize/Collection.Size/Collection.AvgObjSize/Collection.Count/Collection.TotalIndexSize，默认 Collection.CollectionSize。</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>返回数量，默认20，最大100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLESV2REQUEST_H_
