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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINEPOLICYSTATEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINEPOLICYSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBaselinePolicyState请求参数结构体
                */
                class ModifyBaselinePolicyStateRequest : public AbstractModel
                {
                public:
                    ModifyBaselinePolicyStateRequest();
                    ~ModifyBaselinePolicyStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略Id
                     * @return PolicyId 策略Id
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略Id
                     * @param _policyId 策略Id
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取开启状态[1:开启|0:未开启]
                     * @return IsEnabled 开启状态[1:开启|0:未开启]
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置开启状态[1:开启|0:未开启]
                     * @param _isEnabled 开启状态[1:开启|0:未开启]
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                private:

                    /**
                     * 策略Id
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 开启状态[1:开启|0:未开启]
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINEPOLICYSTATEREQUEST_H_
