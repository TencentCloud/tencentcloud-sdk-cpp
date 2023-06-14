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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINSTATUSESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINSTATUSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyAccelerationDomainStatuses请求参数结构体
                */
                class ModifyAccelerationDomainStatusesRequest : public AbstractModel
                {
                public:
                    ModifyAccelerationDomainStatusesRequest();
                    ~ModifyAccelerationDomainStatusesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速域名所属站点ID。
                     * @return ZoneId 加速域名所属站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置加速域名所属站点ID。
                     * @param _zoneId 加速域名所属站点ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取要执行状态变更的加速域名列表。
                     * @return DomainNames 要执行状态变更的加速域名列表。
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置要执行状态变更的加速域名列表。
                     * @param _domainNames 要执行状态变更的加速域名列表。
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取加速域名状态，取值有：
<li>online：启用；</li>
<li>offline：停用。</li>
                     * @return Status 加速域名状态，取值有：
<li>online：启用；</li>
<li>offline：停用。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置加速域名状态，取值有：
<li>online：启用；</li>
<li>offline：停用。</li>
                     * @param _status 加速域名状态，取值有：
<li>online：启用；</li>
<li>offline：停用。</li>
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
                     * 获取是否强制停用。当域名存在关联资源（如马甲域名、流量调度功能）时，是否强制停用该域名，取值有：
<li> true：停用该域名及所有关联资源；</li>
<li> false：当该加速域名存在关联资源时，不允许停用。</li>不填写，默认值为：false。
                     * @return Force 是否强制停用。当域名存在关联资源（如马甲域名、流量调度功能）时，是否强制停用该域名，取值有：
<li> true：停用该域名及所有关联资源；</li>
<li> false：当该加速域名存在关联资源时，不允许停用。</li>不填写，默认值为：false。
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否强制停用。当域名存在关联资源（如马甲域名、流量调度功能）时，是否强制停用该域名，取值有：
<li> true：停用该域名及所有关联资源；</li>
<li> false：当该加速域名存在关联资源时，不允许停用。</li>不填写，默认值为：false。
                     * @param _force 是否强制停用。当域名存在关联资源（如马甲域名、流量调度功能）时，是否强制停用该域名，取值有：
<li> true：停用该域名及所有关联资源；</li>
<li> false：当该加速域名存在关联资源时，不允许停用。</li>不填写，默认值为：false。
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 加速域名所属站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 要执行状态变更的加速域名列表。
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * 加速域名状态，取值有：
<li>online：启用；</li>
<li>offline：停用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否强制停用。当域名存在关联资源（如马甲域名、流量调度功能）时，是否强制停用该域名，取值有：
<li> true：停用该域名及所有关联资源；</li>
<li> false：当该加速域名存在关联资源时，不允许停用。</li>不填写，默认值为：false。
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINSTATUSESREQUEST_H_
