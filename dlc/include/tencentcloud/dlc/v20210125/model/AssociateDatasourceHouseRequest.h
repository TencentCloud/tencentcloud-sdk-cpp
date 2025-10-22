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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ASSOCIATEDATASOURCEHOUSEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ASSOCIATEDATASOURCEHOUSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionConfig.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * AssociateDatasourceHouse请求参数结构体
                */
                class AssociateDatasourceHouseRequest : public AbstractModel
                {
                public:
                    AssociateDatasourceHouseRequest();
                    ~AssociateDatasourceHouseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络配置名称
                     * @return DatasourceConnectionName 网络配置名称
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置网络配置名称
                     * @param _datasourceConnectionName 网络配置名称
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
                     * 获取数据源类型
                     * @return DatasourceConnectionType 数据源类型
                     * 
                     */
                    std::string GetDatasourceConnectionType() const;

                    /**
                     * 设置数据源类型
                     * @param _datasourceConnectionType 数据源类型
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
                     * 获取数据源网络配置
                     * @return DatasourceConnectionConfig 数据源网络配置
                     * 
                     */
                    DatasourceConnectionConfig GetDatasourceConnectionConfig() const;

                    /**
                     * 设置数据源网络配置
                     * @param _datasourceConnectionConfig 数据源网络配置
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
                     * 获取引擎名称，只允许绑定一个引擎
                     * @return DataEngineNames 引擎名称，只允许绑定一个引擎
                     * 
                     */
                    std::vector<std::string> GetDataEngineNames() const;

                    /**
                     * 设置引擎名称，只允许绑定一个引擎
                     * @param _dataEngineNames 引擎名称，只允许绑定一个引擎
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
                     * 获取网络类型，2-跨源型，4-增强型
                     * @return NetworkConnectionType 网络类型，2-跨源型，4-增强型
                     * 
                     */
                    int64_t GetNetworkConnectionType() const;

                    /**
                     * 设置网络类型，2-跨源型，4-增强型
                     * @param _networkConnectionType 网络类型，2-跨源型，4-增强型
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
                     * 获取网络配置描述
                     * @return NetworkConnectionDesc 网络配置描述
                     * 
                     */
                    std::string GetNetworkConnectionDesc() const;

                    /**
                     * 设置网络配置描述
                     * @param _networkConnectionDesc 网络配置描述
                     * 
                     */
                    void SetNetworkConnectionDesc(const std::string& _networkConnectionDesc);

                    /**
                     * 判断参数 NetworkConnectionDesc 是否已赋值
                     * @return NetworkConnectionDesc 是否已赋值
                     * 
                     */
                    bool NetworkConnectionDescHasBeenSet() const;

                private:

                    /**
                     * 网络配置名称
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_datasourceConnectionType;
                    bool m_datasourceConnectionTypeHasBeenSet;

                    /**
                     * 数据源网络配置
                     */
                    DatasourceConnectionConfig m_datasourceConnectionConfig;
                    bool m_datasourceConnectionConfigHasBeenSet;

                    /**
                     * 引擎名称，只允许绑定一个引擎
                     */
                    std::vector<std::string> m_dataEngineNames;
                    bool m_dataEngineNamesHasBeenSet;

                    /**
                     * 网络类型，2-跨源型，4-增强型
                     */
                    int64_t m_networkConnectionType;
                    bool m_networkConnectionTypeHasBeenSet;

                    /**
                     * 网络配置描述
                     */
                    std::string m_networkConnectionDesc;
                    bool m_networkConnectionDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ASSOCIATEDATASOURCEHOUSEREQUEST_H_
