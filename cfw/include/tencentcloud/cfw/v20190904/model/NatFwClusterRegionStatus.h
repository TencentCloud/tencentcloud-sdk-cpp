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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATFWCLUSTERREGIONSTATUS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATFWCLUSTERREGIONSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NAT防火墙引流集群地域状态
                */
                class NatFwClusterRegionStatus : public AbstractModel
                {
                public:
                    NatFwClusterRegionStatus();
                    ~NatFwClusterRegionStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>NAT网关ID</p>
                     * @return NatInsId <p>NAT网关ID</p>
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置<p>NAT网关ID</p>
                     * @param _natInsId <p>NAT网关ID</p>
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

                    /**
                     * 获取<p>云联网ID</p>
                     * @return CcnId <p>云联网ID</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网ID</p>
                     * @param _ccnId <p>云联网ID</p>
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取<p>地域，如 ap-guangzhou</p>
                     * @return Region <p>地域，如 ap-guangzhou</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域，如 ap-guangzhou</p>
                     * @param _region <p>地域，如 ap-guangzhou</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>地域集群状态，取值：<br>NotDeployed-未部署集群，<br>Deployed-已部署集群但未创建引流网络，<br>DeployedCustomOnly-已部署集群但内网段被覆盖，无法自动选择引流网段，需自定义设置引流网段<br>Auto-已创建引流网络(自动分配CIDR)，<br>Custom-已创建引流网络(自定义CIDR)</p>
                     * @return Status <p>地域集群状态，取值：<br>NotDeployed-未部署集群，<br>Deployed-已部署集群但未创建引流网络，<br>DeployedCustomOnly-已部署集群但内网段被覆盖，无法自动选择引流网段，需自定义设置引流网段<br>Auto-已创建引流网络(自动分配CIDR)，<br>Custom-已创建引流网络(自定义CIDR)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>地域集群状态，取值：<br>NotDeployed-未部署集群，<br>Deployed-已部署集群但未创建引流网络，<br>DeployedCustomOnly-已部署集群但内网段被覆盖，无法自动选择引流网段，需自定义设置引流网段<br>Auto-已创建引流网络(自动分配CIDR)，<br>Custom-已创建引流网络(自定义CIDR)</p>
                     * @param _status <p>地域集群状态，取值：<br>NotDeployed-未部署集群，<br>Deployed-已部署集群但未创建引流网络，<br>DeployedCustomOnly-已部署集群但内网段被覆盖，无法自动选择引流网段，需自定义设置引流网段<br>Auto-已创建引流网络(自动分配CIDR)，<br>Custom-已创建引流网络(自定义CIDR)</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>引流网络 CIDR，仅当 Status 为 Auto 或 Custom 时有值</p>
                     * @return Cidr <p>引流网络 CIDR，仅当 Status 为 Auto 或 Custom 时有值</p>
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置<p>引流网络 CIDR，仅当 Status 为 Auto 或 Custom 时有值</p>
                     * @param _cidr <p>引流网络 CIDR，仅当 Status 为 Auto 或 Custom 时有值</p>
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                    /**
                     * 获取<p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     * @return RoutingMode <p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     * 
                     */
                    int64_t GetRoutingMode() const;

                    /**
                     * 设置<p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     * @param _routingMode <p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     * 
                     */
                    void SetRoutingMode(const int64_t& _routingMode);

                    /**
                     * 判断参数 RoutingMode 是否已赋值
                     * @return RoutingMode 是否已赋值
                     * 
                     */
                    bool RoutingModeHasBeenSet() const;

                private:

                    /**
                     * <p>NAT网关ID</p>
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                    /**
                     * <p>云联网ID</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>地域，如 ap-guangzhou</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>地域集群状态，取值：<br>NotDeployed-未部署集群，<br>Deployed-已部署集群但未创建引流网络，<br>DeployedCustomOnly-已部署集群但内网段被覆盖，无法自动选择引流网段，需自定义设置引流网段<br>Auto-已创建引流网络(自动分配CIDR)，<br>Custom-已创建引流网络(自定义CIDR)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>引流网络 CIDR，仅当 Status 为 Auto 或 Custom 时有值</p>
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                    /**
                     * <p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     */
                    int64_t m_routingMode;
                    bool m_routingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATFWCLUSTERREGIONSTATUS_H_
