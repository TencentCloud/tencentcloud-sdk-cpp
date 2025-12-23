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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_CREATECLOUDRUNSERVERREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_CREATECLOUDRUNSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/DeployParam.h>
#include <tencentcloud/tcbr/v20220217/model/ServerBaseConfig.h>
#include <tencentcloud/tcbr/v20220217/model/DiffConfigItem.h>
#include <tencentcloud/tcbr/v20220217/model/CreateVpcInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * CreateCloudRunServer请求参数结构体
                */
                class CreateCloudRunServerRequest : public AbstractModel
                {
                public:
                    CreateCloudRunServerRequest();
                    ~CreateCloudRunServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境Id</p>
                     * @return EnvId <p>环境Id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境Id</p>
                     * @param _envId <p>环境Id</p>
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
                     * 获取<p>服务名</p>
                     * @return ServerName <p>服务名</p>
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置<p>服务名</p>
                     * @param _serverName <p>服务名</p>
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
                     * 获取<p>部署信息</p>
                     * @return DeployInfo <p>部署信息</p>
                     * 
                     */
                    DeployParam GetDeployInfo() const;

                    /**
                     * 设置<p>部署信息</p>
                     * @param _deployInfo <p>部署信息</p>
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
                     * 获取<p>服务配置信息(已废弃)</p>
                     * @return ServerConfig <p>服务配置信息(已废弃)</p>
                     * 
                     */
                    ServerBaseConfig GetServerConfig() const;

                    /**
                     * 设置<p>服务配置信息(已废弃)</p>
                     * @param _serverConfig <p>服务配置信息(已废弃)</p>
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
                     * 获取<p>服务配置信息</p>
                     * @return Items <p>服务配置信息</p>
                     * 
                     */
                    std::vector<DiffConfigItem> GetItems() const;

                    /**
                     * 设置<p>服务配置信息</p>
                     * @param _items <p>服务配置信息</p>
                     * 
                     */
                    void SetItems(const std::vector<DiffConfigItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>vpc 信息</p>
                     * @return VpcInfo <p>vpc 信息</p>
                     * 
                     */
                    CreateVpcInfo GetVpcInfo() const;

                    /**
                     * 设置<p>vpc 信息</p>
                     * @param _vpcInfo <p>vpc 信息</p>
                     * 
                     */
                    void SetVpcInfo(const CreateVpcInfo& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                private:

                    /**
                     * <p>环境Id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>服务名</p>
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * <p>部署信息</p>
                     */
                    DeployParam m_deployInfo;
                    bool m_deployInfoHasBeenSet;

                    /**
                     * <p>服务配置信息(已废弃)</p>
                     */
                    ServerBaseConfig m_serverConfig;
                    bool m_serverConfigHasBeenSet;

                    /**
                     * <p>服务配置信息</p>
                     */
                    std::vector<DiffConfigItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>vpc 信息</p>
                     */
                    CreateVpcInfo m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_CREATECLOUDRUNSERVERREQUEST_H_
