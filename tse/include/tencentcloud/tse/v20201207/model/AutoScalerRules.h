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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERRULES_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AutoScalerPolicy.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 指标伸缩的规则
                */
                class AutoScalerRules : public AbstractModel
                {
                public:
                    AutoScalerRules();
                    ~AutoScalerRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取稳定窗口时间，扩容时默认0，缩容时默认300
                     * @return StabilizationWindowSeconds 稳定窗口时间，扩容时默认0，缩容时默认300
                     * 
                     */
                    int64_t GetStabilizationWindowSeconds() const;

                    /**
                     * 设置稳定窗口时间，扩容时默认0，缩容时默认300
                     * @param _stabilizationWindowSeconds 稳定窗口时间，扩容时默认0，缩容时默认300
                     * 
                     */
                    void SetStabilizationWindowSeconds(const int64_t& _stabilizationWindowSeconds);

                    /**
                     * 判断参数 StabilizationWindowSeconds 是否已赋值
                     * @return StabilizationWindowSeconds 是否已赋值
                     * 
                     */
                    bool StabilizationWindowSecondsHasBeenSet() const;

                    /**
                     * 获取选择策略依据
                     * @return SelectPolicy 选择策略依据
                     * 
                     */
                    std::string GetSelectPolicy() const;

                    /**
                     * 设置选择策略依据
                     * @param _selectPolicy 选择策略依据
                     * 
                     */
                    void SetSelectPolicy(const std::string& _selectPolicy);

                    /**
                     * 判断参数 SelectPolicy 是否已赋值
                     * @return SelectPolicy 是否已赋值
                     * 
                     */
                    bool SelectPolicyHasBeenSet() const;

                    /**
                     * 获取扩缩容策略
                     * @return Policies 扩缩容策略
                     * 
                     */
                    std::vector<AutoScalerPolicy> GetPolicies() const;

                    /**
                     * 设置扩缩容策略
                     * @param _policies 扩缩容策略
                     * 
                     */
                    void SetPolicies(const std::vector<AutoScalerPolicy>& _policies);

                    /**
                     * 判断参数 Policies 是否已赋值
                     * @return Policies 是否已赋值
                     * 
                     */
                    bool PoliciesHasBeenSet() const;

                private:

                    /**
                     * 稳定窗口时间，扩容时默认0，缩容时默认300
                     */
                    int64_t m_stabilizationWindowSeconds;
                    bool m_stabilizationWindowSecondsHasBeenSet;

                    /**
                     * 选择策略依据
                     */
                    std::string m_selectPolicy;
                    bool m_selectPolicyHasBeenSet;

                    /**
                     * 扩缩容策略
                     */
                    std::vector<AutoScalerPolicy> m_policies;
                    bool m_policiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERRULES_H_
