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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERAUTHENTICATIONOPTIONSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERAUTHENTICATIONOPTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ServiceAccountAuthenticationOptions.h>
#include <tencentcloud/tke/v20180525/model/OIDCConfigAuthenticationOptions.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterAuthenticationOptions请求参数结构体
                */
                class ModifyClusterAuthenticationOptionsRequest : public AbstractModel
                {
                public:
                    ModifyClusterAuthenticationOptionsRequest();
                    ~ModifyClusterAuthenticationOptionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取ServiceAccount认证配置
                     * @return ServiceAccounts ServiceAccount认证配置
                     * 
                     */
                    ServiceAccountAuthenticationOptions GetServiceAccounts() const;

                    /**
                     * 设置ServiceAccount认证配置
                     * @param _serviceAccounts ServiceAccount认证配置
                     * 
                     */
                    void SetServiceAccounts(const ServiceAccountAuthenticationOptions& _serviceAccounts);

                    /**
                     * 判断参数 ServiceAccounts 是否已赋值
                     * @return ServiceAccounts 是否已赋值
                     * 
                     */
                    bool ServiceAccountsHasBeenSet() const;

                    /**
                     * 获取OIDC认证配置
                     * @return OIDCConfig OIDC认证配置
                     * 
                     */
                    OIDCConfigAuthenticationOptions GetOIDCConfig() const;

                    /**
                     * 设置OIDC认证配置
                     * @param _oIDCConfig OIDC认证配置
                     * 
                     */
                    void SetOIDCConfig(const OIDCConfigAuthenticationOptions& _oIDCConfig);

                    /**
                     * 判断参数 OIDCConfig 是否已赋值
                     * @return OIDCConfig 是否已赋值
                     * 
                     */
                    bool OIDCConfigHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ServiceAccount认证配置
                     */
                    ServiceAccountAuthenticationOptions m_serviceAccounts;
                    bool m_serviceAccountsHasBeenSet;

                    /**
                     * OIDC认证配置
                     */
                    OIDCConfigAuthenticationOptions m_oIDCConfig;
                    bool m_oIDCConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERAUTHENTICATIONOPTIONSREQUEST_H_
