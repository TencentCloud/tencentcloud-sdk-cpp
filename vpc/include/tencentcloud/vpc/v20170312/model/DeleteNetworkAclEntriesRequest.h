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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETENETWORKACLENTRIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETENETWORKACLENTRIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NetworkAclEntrySet.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteNetworkAclEntries请求参数结构体
                */
                class DeleteNetworkAclEntriesRequest : public AbstractModel
                {
                public:
                    DeleteNetworkAclEntriesRequest();
                    ~DeleteNetworkAclEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取三元组网络ACL实例ID。例如：acl-12345678。
                     * @return NetworkAclId 三元组网络ACL实例ID。例如：acl-12345678。
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置三元组网络ACL实例ID。例如：acl-12345678。
                     * @param _networkAclId 三元组网络ACL实例ID。例如：acl-12345678。
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
                     * 获取三元组网络ACL规则集。
                     * @return NetworkAclEntrySet 三元组网络ACL规则集。
                     * 
                     */
                    NetworkAclEntrySet GetNetworkAclEntrySet() const;

                    /**
                     * 设置三元组网络ACL规则集。
                     * @param _networkAclEntrySet 三元组网络ACL规则集。
                     * 
                     */
                    void SetNetworkAclEntrySet(const NetworkAclEntrySet& _networkAclEntrySet);

                    /**
                     * 判断参数 NetworkAclEntrySet 是否已赋值
                     * @return NetworkAclEntrySet 是否已赋值
                     * 
                     */
                    bool NetworkAclEntrySetHasBeenSet() const;

                private:

                    /**
                     * 三元组网络ACL实例ID。例如：acl-12345678。
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * 三元组网络ACL规则集。
                     */
                    NetworkAclEntrySet m_networkAclEntrySet;
                    bool m_networkAclEntrySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETENETWORKACLENTRIESREQUEST_H_
