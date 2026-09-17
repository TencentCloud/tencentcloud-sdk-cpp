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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * ModifyInstanceAttribute请求参数结构体
                */
                class ModifyInstanceAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAttributeRequest();
                    ~ModifyInstanceAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取新的实例名称，1-60字符。与 NewPublicIp 至少传入一个。
                     * @return InstanceName 新的实例名称，1-60字符。与 NewPublicIp 至少传入一个。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置新的实例名称，1-60字符。与 NewPublicIp 至少传入一个。
                     * @param _instanceName 新的实例名称，1-60字符。与 NewPublicIp 至少传入一个。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取新的公网IP（需从该实例所绑定公网实例的可用IP中选择）。与 InstanceName 至少传入一个。
                     * @return NewPublicIp 新的公网IP（需从该实例所绑定公网实例的可用IP中选择）。与 InstanceName 至少传入一个。
                     * @deprecated
                     */
                    std::string GetNewPublicIp() const;

                    /**
                     * 设置新的公网IP（需从该实例所绑定公网实例的可用IP中选择）。与 InstanceName 至少传入一个。
                     * @param _newPublicIp 新的公网IP（需从该实例所绑定公网实例的可用IP中选择）。与 InstanceName 至少传入一个。
                     * @deprecated
                     */
                    void SetNewPublicIp(const std::string& _newPublicIp);

                    /**
                     * 判断参数 NewPublicIp 是否已赋值
                     * @return NewPublicIp 是否已赋值
                     * @deprecated
                     */
                    bool NewPublicIpHasBeenSet() const;

                    /**
                     * 获取IP类型，ipv4 或 ipv6，默认 ipv4。仅在指定 NewPublicIp 时有效。
                     * @return IpType IP类型，ipv4 或 ipv6，默认 ipv4。仅在指定 NewPublicIp 时有效。
                     * @deprecated
                     */
                    std::string GetIpType() const;

                    /**
                     * 设置IP类型，ipv4 或 ipv6，默认 ipv4。仅在指定 NewPublicIp 时有效。
                     * @param _ipType IP类型，ipv4 或 ipv6，默认 ipv4。仅在指定 NewPublicIp 时有效。
                     * @deprecated
                     */
                    void SetIpType(const std::string& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     * @deprecated
                     */
                    bool IpTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 新的实例名称，1-60字符。与 NewPublicIp 至少传入一个。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 新的公网IP（需从该实例所绑定公网实例的可用IP中选择）。与 InstanceName 至少传入一个。
                     */
                    std::string m_newPublicIp;
                    bool m_newPublicIpHasBeenSet;

                    /**
                     * IP类型，ipv4 或 ipv6，默认 ipv4。仅在指定 NewPublicIp 时有效。
                     */
                    std::string m_ipType;
                    bool m_ipTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_
