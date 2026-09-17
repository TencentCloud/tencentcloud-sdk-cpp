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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_IPINFO_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_IPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 公网Ip信息
                */
                class IpInfo : public AbstractModel
                {
                public:
                    IpInfo();
                    ~IpInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取10.100.0.20
                     * @return Ip 10.100.0.20
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置10.100.0.20
                     * @param _ip 10.100.0.20
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取epn-asdfghjkl
                     * @return NetworkInstanceId epn-asdfghjkl
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置epn-asdfghjkl
                     * @param _networkInstanceId epn-asdfghjkl
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取epm-asdfghjkl
                     * @return InstanceId epm-asdfghjkl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置epm-asdfghjkl
                     * @param _instanceId epm-asdfghjkl
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
                     * 获取Unbound
                     * @return State Unbound
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Unbound
                     * @param _state Unbound
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Ipv4
                     * @return Type Ipv4
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Ipv4
                     * @param _type Ipv4
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取2026-04-07T00:00:00
                     * @return CreatedAt 2026-04-07T00:00:00
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置2026-04-07T00:00:00
                     * @param _createdAt 2026-04-07T00:00:00
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取2026-04-07T00:00:00
                     * @return UpdatedAt 2026-04-07T00:00:00
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置2026-04-07T00:00:00
                     * @param _updatedAt 2026-04-07T00:00:00
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * 10.100.0.20
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * epn-asdfghjkl
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * epm-asdfghjkl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Unbound
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Ipv4
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 2026-04-07T00:00:00
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 2026-04-07T00:00:00
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_IPINFO_H_
