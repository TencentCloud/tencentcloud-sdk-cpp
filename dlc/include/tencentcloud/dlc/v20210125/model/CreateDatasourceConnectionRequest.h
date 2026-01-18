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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATASOURCECONNECTIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATASOURCECONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionConfig.h>
#include <tencentcloud/dlc/v20210125/model/CustomConfig.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateDatasourceConnection请求参数结构体
                */
                class CreateDatasourceConnectionRequest : public AbstractModel
                {
                public:
                    CreateDatasourceConnectionRequest();
                    ~CreateDatasourceConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据连接名称
                     * @return DatasourceConnectionName 数据连接名称
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据连接名称
                     * @param _datasourceConnectionName 数据连接名称
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取数据连接类型
                     * @return DatasourceConnectionType 数据连接类型
                     * 
                     */
                    std::string GetDatasourceConnectionType() const;

                    /**
                     * 设置数据连接类型
                     * @param _datasourceConnectionType 数据连接类型
                     * 
                     */
                    void SetDatasourceConnectionType(const std::string& _datasourceConnectionType);

                    /**
                     * 判断参数 DatasourceConnectionType 是否已赋值
                     * @return DatasourceConnectionType 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionTypeHasBeenSet() const;

                    /**
                     * 获取数据连接属性
                     * @return DatasourceConnectionConfig 数据连接属性
                     * 
                     */
                    DatasourceConnectionConfig GetDatasourceConnectionConfig() const;

                    /**
                     * 设置数据连接属性
                     * @param _datasourceConnectionConfig 数据连接属性
                     * 
                     */
                    void SetDatasourceConnectionConfig(const DatasourceConnectionConfig& _datasourceConnectionConfig);

                    /**
                     * 判断参数 DatasourceConnectionConfig 是否已赋值
                     * @return DatasourceConnectionConfig 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionConfigHasBeenSet() const;

                    /**
                     * 获取数据连接所属服务
                     * @return ServiceType 数据连接所属服务
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置数据连接所属服务
                     * @param _serviceType 数据连接所属服务
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取数据连接描述
                     * @return DatasourceConnectionDesc 数据连接描述
                     * 
                     */
                    std::string GetDatasourceConnectionDesc() const;

                    /**
                     * 设置数据连接描述
                     * @param _datasourceConnectionDesc 数据连接描述
                     * 
                     */
                    void SetDatasourceConnectionDesc(const std::string& _datasourceConnectionDesc);

                    /**
                     * 判断参数 DatasourceConnectionDesc 是否已赋值
                     * @return DatasourceConnectionDesc 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionDescHasBeenSet() const;

                    /**
                     * 获取数据引擎名称数组
                     * @return DataEngineNames 数据引擎名称数组
                     * 
                     */
                    std::vector<std::string> GetDataEngineNames() const;

                    /**
                     * 设置数据引擎名称数组
                     * @param _dataEngineNames 数据引擎名称数组
                     * 
                     */
                    void SetDataEngineNames(const std::vector<std::string>& _dataEngineNames);

                    /**
                     * 判断参数 DataEngineNames 是否已赋值
                     * @return DataEngineNames 是否已赋值
                     * 
                     */
                    bool DataEngineNamesHasBeenSet() const;

                    /**
                     * 获取网络连接名称
                     * @return NetworkConnectionName 网络连接名称
                     * 
                     */
                    std::string GetNetworkConnectionName() const;

                    /**
                     * 设置网络连接名称
                     * @param _networkConnectionName 网络连接名称
                     * 
                     */
                    void SetNetworkConnectionName(const std::string& _networkConnectionName);

                    /**
                     * 判断参数 NetworkConnectionName 是否已赋值
                     * @return NetworkConnectionName 是否已赋值
                     * 
                     */
                    bool NetworkConnectionNameHasBeenSet() const;

                    /**
                     * 获取网络连接描述
                     * @return NetworkConnectionDesc 网络连接描述
                     * 
                     */
                    std::string GetNetworkConnectionDesc() const;

                    /**
                     * 设置网络连接描述
                     * @param _networkConnectionDesc 网络连接描述
                     * 
                     */
                    void SetNetworkConnectionDesc(const std::string& _networkConnectionDesc);

                    /**
                     * 判断参数 NetworkConnectionDesc 是否已赋值
                     * @return NetworkConnectionDesc 是否已赋值
                     * 
                     */
                    bool NetworkConnectionDescHasBeenSet() const;

                    /**
                     * 获取网络连接类型 （2-夸源型，4-增强型）
                     * @return NetworkConnectionType 网络连接类型 （2-夸源型，4-增强型）
                     * 
                     */
                    int64_t GetNetworkConnectionType() const;

                    /**
                     * 设置网络连接类型 （2-夸源型，4-增强型）
                     * @param _networkConnectionType 网络连接类型 （2-夸源型，4-增强型）
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
                     * 获取自定义配置
                     * @return CustomConfig 自定义配置
                     * 
                     */
                    std::vector<CustomConfig> GetCustomConfig() const;

                    /**
                     * 设置自定义配置
                     * @param _customConfig 自定义配置
                     * 
                     */
                    void SetCustomConfig(const std::vector<CustomConfig>& _customConfig);

                    /**
                     * 判断参数 CustomConfig 是否已赋值
                     * @return CustomConfig 是否已赋值
                     * 
                     */
                    bool CustomConfigHasBeenSet() const;

                private:

                    /**
                     * 数据连接名称
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 数据连接类型
                     */
                    std::string m_datasourceConnectionType;
                    bool m_datasourceConnectionTypeHasBeenSet;

                    /**
                     * 数据连接属性
                     */
                    DatasourceConnectionConfig m_datasourceConnectionConfig;
                    bool m_datasourceConnectionConfigHasBeenSet;

                    /**
                     * 数据连接所属服务
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 数据连接描述
                     */
                    std::string m_datasourceConnectionDesc;
                    bool m_datasourceConnectionDescHasBeenSet;

                    /**
                     * 数据引擎名称数组
                     */
                    std::vector<std::string> m_dataEngineNames;
                    bool m_dataEngineNamesHasBeenSet;

                    /**
                     * 网络连接名称
                     */
                    std::string m_networkConnectionName;
                    bool m_networkConnectionNameHasBeenSet;

                    /**
                     * 网络连接描述
                     */
                    std::string m_networkConnectionDesc;
                    bool m_networkConnectionDescHasBeenSet;

                    /**
                     * 网络连接类型 （2-夸源型，4-增强型）
                     */
                    int64_t m_networkConnectionType;
                    bool m_networkConnectionTypeHasBeenSet;

                    /**
                     * 自定义配置
                     */
                    std::vector<CustomConfig> m_customConfig;
                    bool m_customConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATASOURCECONNECTIONREQUEST_H_
