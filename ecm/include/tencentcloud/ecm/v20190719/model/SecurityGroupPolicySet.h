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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPPOLICYSET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPPOLICYSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SecurityGroupPolicy.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 安全组规则集合
                */
                class SecurityGroupPolicySet : public AbstractModel
                {
                public:
                    SecurityGroupPolicySet();
                    ~SecurityGroupPolicySet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     * @return Version 安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     * @param _version 安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取出站规则。其中出站规则和入站规则必须选一个。
                     * @return Egress 出站规则。其中出站规则和入站规则必须选一个。
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetEgress() const;

                    /**
                     * 设置出站规则。其中出站规则和入站规则必须选一个。
                     * @param _egress 出站规则。其中出站规则和入站规则必须选一个。
                     * 
                     */
                    void SetEgress(const std::vector<SecurityGroupPolicy>& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                    /**
                     * 获取入站规则。其中出站规则和入站规则必须选一个。
                     * @return Ingress 入站规则。其中出站规则和入站规则必须选一个。
                     * 
                     */
                    std::vector<SecurityGroupPolicy> GetIngress() const;

                    /**
                     * 设置入站规则。其中出站规则和入站规则必须选一个。
                     * @param _ingress 入站规则。其中出站规则和入站规则必须选一个。
                     * 
                     */
                    void SetIngress(const std::vector<SecurityGroupPolicy>& _ingress);

                    /**
                     * 判断参数 Ingress 是否已赋值
                     * @return Ingress 是否已赋值
                     * 
                     */
                    bool IngressHasBeenSet() const;

                private:

                    /**
                     * 安全组规则当前版本。用户每次更新安全规则版本会自动加1，防止更新的路由规则已过期，不填不考虑冲突。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 出站规则。其中出站规则和入站规则必须选一个。
                     */
                    std::vector<SecurityGroupPolicy> m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * 入站规则。其中出站规则和入站规则必须选一个。
                     */
                    std::vector<SecurityGroupPolicy> m_ingress;
                    bool m_ingressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPPOLICYSET_H_
