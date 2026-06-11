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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeInstanceSpecs请求参数结构体
                */
                class DescribeInstanceSpecsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSpecsRequest();
                    ~DescribeInstanceSpecsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据库类型，取值范围: </p><li> MYSQL </li>
                     * @return DbType <p>数据库类型，取值范围: </p><li> MYSQL </li>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>数据库类型，取值范围: </p><li> MYSQL </li>
                     * @param _dbType <p>数据库类型，取值范围: </p><li> MYSQL </li>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否需要返回可用区信息</p>
                     * @return IncludeZoneStocks <p>是否需要返回可用区信息</p>
                     * 
                     */
                    bool GetIncludeZoneStocks() const;

                    /**
                     * 设置<p>是否需要返回可用区信息</p>
                     * @param _includeZoneStocks <p>是否需要返回可用区信息</p>
                     * 
                     */
                    void SetIncludeZoneStocks(const bool& _includeZoneStocks);

                    /**
                     * 判断参数 IncludeZoneStocks 是否已赋值
                     * @return IncludeZoneStocks 是否已赋值
                     * 
                     */
                    bool IncludeZoneStocksHasBeenSet() const;

                    /**
                     * 获取<p>实例机器类型</p>
                     * @return DeviceType <p>实例机器类型</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例机器类型</p>
                     * @param _deviceType <p>实例机器类型</p>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群级别，可空。例如 P0, P1</p>
                     * @return ClusterLevel <p>集群级别，可空。例如 P0, P1</p>
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置<p>集群级别，可空。例如 P0, P1</p>
                     * @param _clusterLevel <p>集群级别，可空。例如 P0, P1</p>
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                private:

                    /**
                     * <p>数据库类型，取值范围: </p><li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>是否需要返回可用区信息</p>
                     */
                    bool m_includeZoneStocks;
                    bool m_includeZoneStocksHasBeenSet;

                    /**
                     * <p>实例机器类型</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>集群级别，可空。例如 P0, P1</p>
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSREQUEST_H_
