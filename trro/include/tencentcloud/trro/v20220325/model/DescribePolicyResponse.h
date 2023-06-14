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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPOLICYRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/PolicyInfo.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribePolicy返回参数结构体
                */
                class DescribePolicyResponse : public AbstractModel
                {
                public:
                    DescribePolicyResponse();
                    ~DescribePolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取权限模式
                     * @return PolicyMode 权限模式
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                    /**
                     * 获取返回的权限模式是否为当前生效的权限模式
                     * @return PolicyEnabled 返回的权限模式是否为当前生效的权限模式
                     * 
                     */
                    bool GetPolicyEnabled() const;

                    /**
                     * 判断参数 PolicyEnabled 是否已赋值
                     * @return PolicyEnabled 是否已赋值
                     * 
                     */
                    bool PolicyEnabledHasBeenSet() const;

                    /**
                     * 获取权限信息列表
                     * @return PolicyInfo 权限信息列表
                     * 
                     */
                    std::vector<PolicyInfo> GetPolicyInfo() const;

                    /**
                     * 判断参数 PolicyInfo 是否已赋值
                     * @return PolicyInfo 是否已赋值
                     * 
                     */
                    bool PolicyInfoHasBeenSet() const;

                    /**
                     * 获取本次返回的权限信息数量
                     * @return Num 本次返回的权限信息数量
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取权限信息总数
                     * @return Total 权限信息总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 权限模式
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                    /**
                     * 返回的权限模式是否为当前生效的权限模式
                     */
                    bool m_policyEnabled;
                    bool m_policyEnabledHasBeenSet;

                    /**
                     * 权限信息列表
                     */
                    std::vector<PolicyInfo> m_policyInfo;
                    bool m_policyInfoHasBeenSet;

                    /**
                     * 本次返回的权限信息数量
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 权限信息总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPOLICYRESPONSE_H_
