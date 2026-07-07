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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_NOTIFYUNBINDTARGETREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_NOTIFYUNBINDTARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * NotifyUnbindTarget请求参数结构体
                */
                class NotifyUnbindTargetRequest : public AbstractModel
                {
                public:
                    NotifyUnbindTargetRequest();
                    ~NotifyUnbindTargetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取后端服务的IP列表。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     * @return Ips 后端服务的IP列表。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置后端服务的IP列表。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     * @param _ips 后端服务的IP列表。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                    /**
                     * 获取后端服务所属VPC的数字ID。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     * @return NumericVpcId 后端服务所属VPC的数字ID。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     * 
                     */
                    uint64_t GetNumericVpcId() const;

                    /**
                     * 设置后端服务所属VPC的数字ID。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     * @param _numericVpcId 后端服务所属VPC的数字ID。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     * 
                     */
                    void SetNumericVpcId(const uint64_t& _numericVpcId);

                    /**
                     * 判断参数 NumericVpcId 是否已赋值
                     * @return NumericVpcId 是否已赋值
                     * 
                     */
                    bool NumericVpcIdHasBeenSet() const;

                private:

                    /**
                     * 后端服务的IP列表。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * 后端服务所属VPC的数字ID。
> **VpcId**（**NumericVpcId**）、**Ips**必须同时设置。
                     */
                    uint64_t m_numericVpcId;
                    bool m_numericVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_NOTIFYUNBINDTARGETREQUEST_H_
