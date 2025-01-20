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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKACLATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKACLATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyNetworkAclAttribute请求参数结构体
                */
                class ModifyNetworkAclAttributeRequest : public AbstractModel
                {
                public:
                    ModifyNetworkAclAttributeRequest();
                    ~ModifyNetworkAclAttributeRequest() = default;
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
                     * 获取网络ACL名称，最大长度不能超过60个字节。
                     * @return NetworkAclName 网络ACL名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetNetworkAclName() const;

                    /**
                     * 设置网络ACL名称，最大长度不能超过60个字节。
                     * @param _networkAclName 网络ACL名称，最大长度不能超过60个字节。
                     * 
                     */
                    void SetNetworkAclName(const std::string& _networkAclName);

                    /**
                     * 判断参数 NetworkAclName 是否已赋值
                     * @return NetworkAclName 是否已赋值
                     * 
                     */
                    bool NetworkAclNameHasBeenSet() const;

                private:

                    /**
                     * 网络ACL实例ID。例如：acl-12345678。
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * 网络ACL名称，最大长度不能超过60个字节。
                     */
                    std::string m_networkAclName;
                    bool m_networkAclNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKACLATTRIBUTEREQUEST_H_
