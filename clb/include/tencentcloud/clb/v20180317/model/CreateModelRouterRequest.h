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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATEMODELROUTERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATEMODELROUTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ClusterInfo.h>
#include <tencentcloud/clb/v20180317/model/RateLimitConfigForModelRouter.h>
#include <tencentcloud/clb/v20180317/model/RouterSettingWithoutFallBack.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateModelRouter请求参数结构体
                */
                class CreateModelRouterRequest : public AbstractModel
                {
                public:
                    CreateModelRouterRequest();
                    ~CreateModelRouterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     * @return ModelRouterType <p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     * 
                     */
                    std::string GetModelRouterType() const;

                    /**
                     * 设置<p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     * @param _modelRouterType <p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     * 
                     */
                    void SetModelRouterType(const std::string& _modelRouterType);

                    /**
                     * 判断参数 ModelRouterType 是否已赋值
                     * @return ModelRouterType 是否已赋值
                     * 
                     */
                    bool ModelRouterTypeHasBeenSet() const;

                    /**
                     * 获取<p>关联的积分预算ID</p>
                     * @return BudgetId <p>关联的积分预算ID</p>
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>关联的积分预算ID</p>
                     * @param _budgetId <p>关联的积分预算ID</p>
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                    /**
                     * 获取<p>证书ID</p><p>入参限制：当Schema为HTTPS时，该参数必传</p>
                     * @return CertId <p>证书ID</p><p>入参限制：当Schema为HTTPS时，该参数必传</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>证书ID</p><p>入参限制：当Schema为HTTPS时，该参数必传</p>
                     * @param _certId <p>证书ID</p><p>入参限制：当Schema为HTTPS时，该参数必传</p>
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>集群信息</p>
                     * @return ClusterInfo <p>集群信息</p>
                     * 
                     */
                    ClusterInfo GetClusterInfo() const;

                    /**
                     * 设置<p>集群信息</p>
                     * @param _clusterInfo <p>集群信息</p>
                     * 
                     */
                    void SetClusterInfo(const ClusterInfo& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例名称</p><p>默认值：-</p>
                     * @return ModelRouterName <p>模型路由实例名称</p><p>默认值：-</p>
                     * 
                     */
                    std::string GetModelRouterName() const;

                    /**
                     * 设置<p>模型路由实例名称</p><p>默认值：-</p>
                     * @param _modelRouterName <p>模型路由实例名称</p><p>默认值：-</p>
                     * 
                     */
                    void SetModelRouterName(const std::string& _modelRouterName);

                    /**
                     * 判断参数 ModelRouterName 是否已赋值
                     * @return ModelRouterName 是否已赋值
                     * 
                     */
                    bool ModelRouterNameHasBeenSet() const;

                    /**
                     * 获取<p>网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     * @return NetworkType <p>网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     * @param _networkType <p>网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型路由的监听端口</p><p>取值范围：[1, 65535]</p>
                     * @return Port <p>模型路由的监听端口</p><p>取值范围：[1, 65535]</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>模型路由的监听端口</p><p>取值范围：[1, 65535]</p>
                     * @param _port <p>模型路由的监听端口</p><p>取值范围：[1, 65535]</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>限速配置</p>
                     * @return RateLimitConfig <p>限速配置</p>
                     * 
                     */
                    RateLimitConfigForModelRouter GetRateLimitConfig() const;

                    /**
                     * 设置<p>限速配置</p>
                     * @param _rateLimitConfig <p>限速配置</p>
                     * 
                     */
                    void SetRateLimitConfig(const RateLimitConfigForModelRouter& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     * 
                     */
                    bool RateLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>路由配置</p>
                     * @return RouterSetting <p>路由配置</p>
                     * 
                     */
                    RouterSettingWithoutFallBack GetRouterSetting() const;

                    /**
                     * 设置<p>路由配置</p>
                     * @param _routerSetting <p>路由配置</p>
                     * 
                     */
                    void SetRouterSetting(const RouterSettingWithoutFallBack& _routerSetting);

                    /**
                     * 判断参数 RouterSetting 是否已赋值
                     * @return RouterSetting 是否已赋值
                     * 
                     */
                    bool RouterSettingHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例的网络协议</p><p>枚举值：</p><ul><li>HTTP： HTTP协议</li><li>HTTPS： HTTPS协议</li></ul>
                     * @return Schema <p>模型路由实例的网络协议</p><p>枚举值：</p><ul><li>HTTP： HTTP协议</li><li>HTTPS： HTTPS协议</li></ul>
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置<p>模型路由实例的网络协议</p><p>枚举值：</p><ul><li>HTTP： HTTP协议</li><li>HTTPS： HTTPS协议</li></ul>
                     * @param _schema <p>模型路由实例的网络协议</p><p>枚举值：</p><ul><li>HTTP： HTTP协议</li><li>HTTPS： HTTPS协议</li></ul>
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例所属子网的ID</p>
                     * @return SubnetId <p>模型路由实例所属子网的ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>模型路由实例所属子网的ID</p>
                     * @param _subnetId <p>模型路由实例所属子网的ID</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例所属VPC的ID</p>
                     * @return VpcId <p>模型路由实例所属VPC的ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>模型路由实例所属VPC的ID</p>
                     * @param _vpcId <p>模型路由实例所属VPC的ID</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由类型</p><p>枚举值：</p><ul><li>Shared： 共享型</li><li>Enterprise： 企业级</li></ul>
                     */
                    std::string m_modelRouterType;
                    bool m_modelRouterTypeHasBeenSet;

                    /**
                     * <p>关联的积分预算ID</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>证书ID</p><p>入参限制：当Schema为HTTPS时，该参数必传</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>集群信息</p>
                     */
                    ClusterInfo m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * <p>模型路由实例名称</p><p>默认值：-</p>
                     */
                    std::string m_modelRouterName;
                    bool m_modelRouterNameHasBeenSet;

                    /**
                     * <p>网络类型</p><p>枚举值：</p><ul><li>Internet： 公网</li><li>Intranet： 内网</li></ul>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>模型路由的监听端口</p><p>取值范围：[1, 65535]</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>限速配置</p>
                     */
                    RateLimitConfigForModelRouter m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * <p>路由配置</p>
                     */
                    RouterSettingWithoutFallBack m_routerSetting;
                    bool m_routerSettingHasBeenSet;

                    /**
                     * <p>模型路由实例的网络协议</p><p>枚举值：</p><ul><li>HTTP： HTTP协议</li><li>HTTPS： HTTPS协议</li></ul>
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * <p>模型路由实例所属子网的ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>模型路由实例所属VPC的ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATEMODELROUTERREQUEST_H_
