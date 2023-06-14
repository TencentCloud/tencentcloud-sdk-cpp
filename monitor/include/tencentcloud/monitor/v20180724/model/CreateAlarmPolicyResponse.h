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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMPOLICYRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateAlarmPolicy返回参数结构体
                */
                class CreateAlarmPolicyResponse : public AbstractModel
                {
                public:
                    CreateAlarmPolicyResponse();
                    ~CreateAlarmPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警策略 ID
                     * @return PolicyId 告警策略 ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取可用于实例、实例组的绑定和解绑接口（[BindingPolicyObject](https://cloud.tencent.com/document/product/248/40421)、[UnBindingAllPolicyObject](https://cloud.tencent.com/document/product/248/40568)、[UnBindingPolicyObject](https://cloud.tencent.com/document/product/248/40567)）的策略 ID
                     * @return OriginId 可用于实例、实例组的绑定和解绑接口（[BindingPolicyObject](https://cloud.tencent.com/document/product/248/40421)、[UnBindingAllPolicyObject](https://cloud.tencent.com/document/product/248/40568)、[UnBindingPolicyObject](https://cloud.tencent.com/document/product/248/40567)）的策略 ID
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                private:

                    /**
                     * 告警策略 ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 可用于实例、实例组的绑定和解绑接口（[BindingPolicyObject](https://cloud.tencent.com/document/product/248/40421)、[UnBindingAllPolicyObject](https://cloud.tencent.com/document/product/248/40568)、[UnBindingPolicyObject](https://cloud.tencent.com/document/product/248/40567)）的策略 ID
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMPOLICYRESPONSE_H_
