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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TURNDETECTION_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TURNDETECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 断句配置
                */
                class TurnDetection : public AbstractModel
                {
                public:
                    TurnDetection();
                    ~TurnDetection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TurnDetectionMode为3时生效，语义断句的灵敏程度


功能简介：根据用户所说的话来判断其已完成发言来分割音频


可选: "low" | "medium" | "high" | "auto"


auto 是默认值，与 medium 相同。
low 将让用户有足够的时间说话。
high 将尽快对音频进行分块。


如果您希望模型在对话模式下更频繁地响应，可以将 SemanticEagerness 设置为 high
如果您希望在用户停顿时，AI能够等待片刻，可以将 SemanticEagerness 设置为 low
无论什么模式，最终都会分割送个大模型进行回复

                     * @return SemanticEagerness TurnDetectionMode为3时生效，语义断句的灵敏程度


功能简介：根据用户所说的话来判断其已完成发言来分割音频


可选: "low" | "medium" | "high" | "auto"


auto 是默认值，与 medium 相同。
low 将让用户有足够的时间说话。
high 将尽快对音频进行分块。


如果您希望模型在对话模式下更频繁地响应，可以将 SemanticEagerness 设置为 high
如果您希望在用户停顿时，AI能够等待片刻，可以将 SemanticEagerness 设置为 low
无论什么模式，最终都会分割送个大模型进行回复

                     * 
                     */
                    std::string GetSemanticEagerness() const;

                    /**
                     * 设置TurnDetectionMode为3时生效，语义断句的灵敏程度


功能简介：根据用户所说的话来判断其已完成发言来分割音频


可选: "low" | "medium" | "high" | "auto"


auto 是默认值，与 medium 相同。
low 将让用户有足够的时间说话。
high 将尽快对音频进行分块。


如果您希望模型在对话模式下更频繁地响应，可以将 SemanticEagerness 设置为 high
如果您希望在用户停顿时，AI能够等待片刻，可以将 SemanticEagerness 设置为 low
无论什么模式，最终都会分割送个大模型进行回复

                     * @param _semanticEagerness TurnDetectionMode为3时生效，语义断句的灵敏程度


功能简介：根据用户所说的话来判断其已完成发言来分割音频


可选: "low" | "medium" | "high" | "auto"


auto 是默认值，与 medium 相同。
low 将让用户有足够的时间说话。
high 将尽快对音频进行分块。


如果您希望模型在对话模式下更频繁地响应，可以将 SemanticEagerness 设置为 high
如果您希望在用户停顿时，AI能够等待片刻，可以将 SemanticEagerness 设置为 low
无论什么模式，最终都会分割送个大模型进行回复

                     * 
                     */
                    void SetSemanticEagerness(const std::string& _semanticEagerness);

                    /**
                     * 判断参数 SemanticEagerness 是否已赋值
                     * @return SemanticEagerness 是否已赋值
                     * 
                     */
                    bool SemanticEagernessHasBeenSet() const;

                private:

                    /**
                     * TurnDetectionMode为3时生效，语义断句的灵敏程度


功能简介：根据用户所说的话来判断其已完成发言来分割音频


可选: "low" | "medium" | "high" | "auto"


auto 是默认值，与 medium 相同。
low 将让用户有足够的时间说话。
high 将尽快对音频进行分块。


如果您希望模型在对话模式下更频繁地响应，可以将 SemanticEagerness 设置为 high
如果您希望在用户停顿时，AI能够等待片刻，可以将 SemanticEagerness 设置为 low
无论什么模式，最终都会分割送个大模型进行回复

                     */
                    std::string m_semanticEagerness;
                    bool m_semanticEagernessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TURNDETECTION_H_
