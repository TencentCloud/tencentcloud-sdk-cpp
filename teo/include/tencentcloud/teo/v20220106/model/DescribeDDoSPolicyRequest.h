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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDDoSPolicy请求参数结构体
                */
                class DescribeDDoSPolicyRequest : public AbstractModel
                {
                public:
                    DescribeDDoSPolicyRequest();
                    ~DescribeDDoSPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略组id
                     * @return PolicyId 策略组id
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略组id
                     * @param PolicyId 策略组id
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取一级域名zone
                     * @return ZoneId 一级域名zone
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置一级域名zone
                     * @param ZoneId 一级域名zone
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 策略组id
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 一级域名zone
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSPOLICYREQUEST_H_
