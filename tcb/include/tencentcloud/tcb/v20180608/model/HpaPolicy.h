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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HPAPOLICY_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HPAPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 扩缩容策略
                */
                class HpaPolicy : public AbstractModel
                {
                public:
                    HpaPolicy();
                    ~HpaPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略类型
                     * @return PolicyType 策略类型
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型
                     * @param _policyType 策略类型
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略阈值
                     * @return PolicyThreshold 策略阈值
                     * 
                     */
                    int64_t GetPolicyThreshold() const;

                    /**
                     * 设置策略阈值
                     * @param _policyThreshold 策略阈值
                     * 
                     */
                    void SetPolicyThreshold(const int64_t& _policyThreshold);

                    /**
                     * 判断参数 PolicyThreshold 是否已赋值
                     * @return PolicyThreshold 是否已赋值
                     * 
                     */
                    bool PolicyThresholdHasBeenSet() const;

                private:

                    /**
                     * 策略类型
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略阈值
                     */
                    int64_t m_policyThreshold;
                    bool m_policyThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HPAPOLICY_H_
