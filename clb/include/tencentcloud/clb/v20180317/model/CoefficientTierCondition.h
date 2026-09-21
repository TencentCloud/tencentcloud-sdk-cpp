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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENTTIERCONDITION_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENTTIERCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 积分分档匹配条件
                */
                class CoefficientTierCondition : public AbstractModel
                {
                public:
                    CoefficientTierCondition();
                    ~CoefficientTierCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>仅 chat；单位 K Token（1K=1000 Token）；非负整数，最大 2147483647；非空数组首条必须为 0，数组内严格递增、无重复；输入总 Token 严格超过阈值×1000，取满足条件的最大阈值，整单选价</p>
                     * @return InputTokensAbove <p>仅 chat；单位 K Token（1K=1000 Token）；非负整数，最大 2147483647；非空数组首条必须为 0，数组内严格递增、无重复；输入总 Token 严格超过阈值×1000，取满足条件的最大阈值，整单选价</p>
                     * 
                     */
                    uint64_t GetInputTokensAbove() const;

                    /**
                     * 设置<p>仅 chat；单位 K Token（1K=1000 Token）；非负整数，最大 2147483647；非空数组首条必须为 0，数组内严格递增、无重复；输入总 Token 严格超过阈值×1000，取满足条件的最大阈值，整单选价</p>
                     * @param _inputTokensAbove <p>仅 chat；单位 K Token（1K=1000 Token）；非负整数，最大 2147483647；非空数组首条必须为 0，数组内严格递增、无重复；输入总 Token 严格超过阈值×1000，取满足条件的最大阈值，整单选价</p>
                     * 
                     */
                    void SetInputTokensAbove(const uint64_t& _inputTokensAbove);

                    /**
                     * 判断参数 InputTokensAbove 是否已赋值
                     * @return InputTokensAbove 是否已赋值
                     * 
                     */
                    bool InputTokensAboveHasBeenSet() const;

                    /**
                     * 获取<p>video 仅 480p／720p／768p／1024p／1080p／2k／4k，统一小写；只校验全局枚举，不校验模型支持子集；列表内不重复</p>
                     * @return Resolution <p>video 仅 480p／720p／768p／1024p／1080p／2k／4k，统一小写；只校验全局枚举，不校验模型支持子集；列表内不重复</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>video 仅 480p／720p／768p／1024p／1080p／2k／4k，统一小写；只校验全局枚举，不校验模型支持子集；列表内不重复</p>
                     * @param _resolution <p>video 仅 480p／720p／768p／1024p／1080p／2k／4k，统一小写；只校验全局枚举，不校验模型支持子集；列表内不重复</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * <p>仅 chat；单位 K Token（1K=1000 Token）；非负整数，最大 2147483647；非空数组首条必须为 0，数组内严格递增、无重复；输入总 Token 严格超过阈值×1000，取满足条件的最大阈值，整单选价</p>
                     */
                    uint64_t m_inputTokensAbove;
                    bool m_inputTokensAboveHasBeenSet;

                    /**
                     * <p>video 仅 480p／720p／768p／1024p／1080p／2k／4k，统一小写；只校验全局枚举，不校验模型支持子集；列表内不重复</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENTTIERCONDITION_H_
