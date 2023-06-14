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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATESCALINGPOLICYRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATESCALINGPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreateScalingPolicy返回参数结构体
                */
                class CreateScalingPolicyResponse : public AbstractModel
                {
                public:
                    CreateScalingPolicyResponse();
                    ~CreateScalingPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警触发策略ID。
                     * @return AutoScalingPolicyId 告警触发策略ID。
                     * 
                     */
                    std::string GetAutoScalingPolicyId() const;

                    /**
                     * 判断参数 AutoScalingPolicyId 是否已赋值
                     * @return AutoScalingPolicyId 是否已赋值
                     * 
                     */
                    bool AutoScalingPolicyIdHasBeenSet() const;

                private:

                    /**
                     * 告警触发策略ID。
                     */
                    std::string m_autoScalingPolicyId;
                    bool m_autoScalingPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATESCALINGPOLICYRESPONSE_H_
