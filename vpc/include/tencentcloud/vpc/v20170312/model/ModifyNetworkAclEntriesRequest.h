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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKACLENTRIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKACLENTRIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NetworkAclEntrySet.h>
#include <tencentcloud/vpc/v20170312/model/NetworkAclQuintupleEntries.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyNetworkAclEntries请求参数结构体
                */
                class ModifyNetworkAclEntriesRequest : public AbstractModel
                {
                public:
                    ModifyNetworkAclEntriesRequest();
                    ~ModifyNetworkAclEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ACL实例ID。例如：acl-12345678。
                     * @return NetworkAclId 网络ACL实例ID。例如：acl-12345678。
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置网络ACL实例ID。例如：acl-12345678。
                     * @param _networkAclId 网络ACL实例ID。例如：acl-12345678。
                     * 
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     * 
                     */
                    bool NetworkAclIdHasBeenSet() const;

                    /**
                     * 获取网络ACL规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     * @return NetworkAclEntrySet 网络ACL规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     * 
                     */
                    NetworkAclEntrySet GetNetworkAclEntrySet() const;

                    /**
                     * 设置网络ACL规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     * @param _networkAclEntrySet 网络ACL规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     * 
                     */
                    void SetNetworkAclEntrySet(const NetworkAclEntrySet& _networkAclEntrySet);

                    /**
                     * 判断参数 NetworkAclEntrySet 是否已赋值
                     * @return NetworkAclEntrySet 是否已赋值
                     * 
                     */
                    bool NetworkAclEntrySetHasBeenSet() const;

                    /**
                     * 获取网络ACL五元组规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     * @return NetworkAclQuintupleSet 网络ACL五元组规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     * 
                     */
                    NetworkAclQuintupleEntries GetNetworkAclQuintupleSet() const;

                    /**
                     * 设置网络ACL五元组规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     * @param _networkAclQuintupleSet 网络ACL五元组规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     * 
                     */
                    void SetNetworkAclQuintupleSet(const NetworkAclQuintupleEntries& _networkAclQuintupleSet);

                    /**
                     * 判断参数 NetworkAclQuintupleSet 是否已赋值
                     * @return NetworkAclQuintupleSet 是否已赋值
                     * 
                     */
                    bool NetworkAclQuintupleSetHasBeenSet() const;

                    /**
                     * 获取三元组的增量更新。该接口的默认语义为全量覆盖。当需要实现增量更新语义时，设置该参数为True。
                     * @return EnableUpdateAclEntries 三元组的增量更新。该接口的默认语义为全量覆盖。当需要实现增量更新语义时，设置该参数为True。
                     * 
                     */
                    bool GetEnableUpdateAclEntries() const;

                    /**
                     * 设置三元组的增量更新。该接口的默认语义为全量覆盖。当需要实现增量更新语义时，设置该参数为True。
                     * @param _enableUpdateAclEntries 三元组的增量更新。该接口的默认语义为全量覆盖。当需要实现增量更新语义时，设置该参数为True。
                     * 
                     */
                    void SetEnableUpdateAclEntries(const bool& _enableUpdateAclEntries);

                    /**
                     * 判断参数 EnableUpdateAclEntries 是否已赋值
                     * @return EnableUpdateAclEntries 是否已赋值
                     * 
                     */
                    bool EnableUpdateAclEntriesHasBeenSet() const;

                private:

                    /**
                     * 网络ACL实例ID。例如：acl-12345678。
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * 网络ACL规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     */
                    NetworkAclEntrySet m_networkAclEntrySet;
                    bool m_networkAclEntrySetHasBeenSet;

                    /**
                     * 网络ACL五元组规则集。NetworkAclEntrySet和NetworkAclQuintupleSet只能输入一个。
                     */
                    NetworkAclQuintupleEntries m_networkAclQuintupleSet;
                    bool m_networkAclQuintupleSetHasBeenSet;

                    /**
                     * 三元组的增量更新。该接口的默认语义为全量覆盖。当需要实现增量更新语义时，设置该参数为True。
                     */
                    bool m_enableUpdateAclEntries;
                    bool m_enableUpdateAclEntriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKACLENTRIESREQUEST_H_
