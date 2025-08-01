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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENETWORKCONNECTIONSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENETWORKCONNECTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeNetworkConnections请求参数结构体
                */
                class DescribeNetworkConnectionsRequest : public AbstractModel
                {
                public:
                    DescribeNetworkConnectionsRequest();
                    ~DescribeNetworkConnectionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络配置类型
                     * @return NetworkConnectionType 网络配置类型
                     * 
                     */
                    int64_t GetNetworkConnectionType() const;

                    /**
                     * 设置网络配置类型
                     * @param _networkConnectionType 网络配置类型
                     * 
                     */
                    void SetNetworkConnectionType(const int64_t& _networkConnectionType);

                    /**
                     * 判断参数 NetworkConnectionType 是否已赋值
                     * @return NetworkConnectionType 是否已赋值
                     * 
                     */
                    bool NetworkConnectionTypeHasBeenSet() const;

                    /**
                     * 获取计算引擎名称
                     * @return DataEngineName 计算引擎名称
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置计算引擎名称
                     * @param _dataEngineName 计算引擎名称
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取数据源vpcid
                     * @return DatasourceConnectionVpcId 数据源vpcid
                     * 
                     */
                    std::string GetDatasourceConnectionVpcId() const;

                    /**
                     * 设置数据源vpcid
                     * @param _datasourceConnectionVpcId 数据源vpcid
                     * 
                     */
                    void SetDatasourceConnectionVpcId(const std::string& _datasourceConnectionVpcId);

                    /**
                     * 判断参数 DatasourceConnectionVpcId 是否已赋值
                     * @return DatasourceConnectionVpcId 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionVpcIdHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param _limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取网络配置名称
                     * @return NetworkConnectionName 网络配置名称
                     * 
                     */
                    std::string GetNetworkConnectionName() const;

                    /**
                     * 设置网络配置名称
                     * @param _networkConnectionName 网络配置名称
                     * 
                     */
                    void SetNetworkConnectionName(const std::string& _networkConnectionName);

                    /**
                     * 判断参数 NetworkConnectionName 是否已赋值
                     * @return NetworkConnectionName 是否已赋值
                     * 
                     */
                    bool NetworkConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 网络配置类型
                     */
                    int64_t m_networkConnectionType;
                    bool m_networkConnectionTypeHasBeenSet;

                    /**
                     * 计算引擎名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 数据源vpcid
                     */
                    std::string m_datasourceConnectionVpcId;
                    bool m_datasourceConnectionVpcIdHasBeenSet;

                    /**
                     * 返回数量，默认为10，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 网络配置名称
                     */
                    std::string m_networkConnectionName;
                    bool m_networkConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENETWORKCONNECTIONSREQUEST_H_
