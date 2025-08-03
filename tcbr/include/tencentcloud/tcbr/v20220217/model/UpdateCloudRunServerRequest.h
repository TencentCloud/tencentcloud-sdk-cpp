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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_UPDATECLOUDRUNSERVERREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_UPDATECLOUDRUNSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/DeployParam.h>
#include <tencentcloud/tcbr/v20220217/model/ServerBaseConfig.h>
#include <tencentcloud/tcbr/v20220217/model/DiffConfigItem.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * UpdateCloudRunServer请求参数结构体
                */
                class UpdateCloudRunServerRequest : public AbstractModel
                {
                public:
                    UpdateCloudRunServerRequest();
                    ~UpdateCloudRunServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境Id
                     * @return EnvId 环境Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境Id
                     * @param _envId 环境Id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param _serverName 服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取部署信息
                     * @return DeployInfo 部署信息
                     * 
                     */
                    DeployParam GetDeployInfo() const;

                    /**
                     * 设置部署信息
                     * @param _deployInfo 部署信息
                     * 
                     */
                    void SetDeployInfo(const DeployParam& _deployInfo);

                    /**
                     * 判断参数 DeployInfo 是否已赋值
                     * @return DeployInfo 是否已赋值
                     * 
                     */
                    bool DeployInfoHasBeenSet() const;

                    /**
                     * 获取服务配置信息(已废弃)
                     * @return ServerConfig 服务配置信息(已废弃)
                     * 
                     */
                    ServerBaseConfig GetServerConfig() const;

                    /**
                     * 设置服务配置信息(已废弃)
                     * @param _serverConfig 服务配置信息(已废弃)
                     * 
                     */
                    void SetServerConfig(const ServerBaseConfig& _serverConfig);

                    /**
                     * 判断参数 ServerConfig 是否已赋值
                     * @return ServerConfig 是否已赋值
                     * 
                     */
                    bool ServerConfigHasBeenSet() const;

                    /**
                     * 获取业务类型，默认tcr
                     * @return Business 业务类型，默认tcr
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置业务类型，默认tcr
                     * @param _business 业务类型，默认tcr
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取服务配置信息
                     * @return Items 服务配置信息
                     * 
                     */
                    std::vector<DiffConfigItem> GetItems() const;

                    /**
                     * 设置服务配置信息
                     * @param _items 服务配置信息
                     * 
                     */
                    void SetItems(const std::vector<DiffConfigItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 环境Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 部署信息
                     */
                    DeployParam m_deployInfo;
                    bool m_deployInfoHasBeenSet;

                    /**
                     * 服务配置信息(已废弃)
                     */
                    ServerBaseConfig m_serverConfig;
                    bool m_serverConfigHasBeenSet;

                    /**
                     * 业务类型，默认tcr
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 服务配置信息
                     */
                    std::vector<DiffConfigItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_UPDATECLOUDRUNSERVERREQUEST_H_
