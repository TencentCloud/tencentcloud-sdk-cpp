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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLQUINTUPLEENTRIES_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLQUINTUPLEENTRIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NetworkAclQuintupleEntry.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 网络ACL五元组
                */
                class NetworkAclQuintupleEntries : public AbstractModel
                {
                public:
                    NetworkAclQuintupleEntries();
                    ~NetworkAclQuintupleEntries() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络ACL五元组入站规则。
                     * @return Ingress 网络ACL五元组入站规则。
                     * 
                     */
                    std::vector<NetworkAclQuintupleEntry> GetIngress() const;

                    /**
                     * 设置网络ACL五元组入站规则。
                     * @param _ingress 网络ACL五元组入站规则。
                     * 
                     */
                    void SetIngress(const std::vector<NetworkAclQuintupleEntry>& _ingress);

                    /**
                     * 判断参数 Ingress 是否已赋值
                     * @return Ingress 是否已赋值
                     * 
                     */
                    bool IngressHasBeenSet() const;

                    /**
                     * 获取网络ACL五元组出站规则
                     * @return Egress 网络ACL五元组出站规则
                     * 
                     */
                    std::vector<NetworkAclQuintupleEntry> GetEgress() const;

                    /**
                     * 设置网络ACL五元组出站规则
                     * @param _egress 网络ACL五元组出站规则
                     * 
                     */
                    void SetEgress(const std::vector<NetworkAclQuintupleEntry>& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                private:

                    /**
                     * 网络ACL五元组入站规则。
                     */
                    std::vector<NetworkAclQuintupleEntry> m_ingress;
                    bool m_ingressHasBeenSet;

                    /**
                     * 网络ACL五元组出站规则
                     */
                    std::vector<NetworkAclQuintupleEntry> m_egress;
                    bool m_egressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLQUINTUPLEENTRIES_H_
