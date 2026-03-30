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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_VIDEOLLMDETAIL_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_VIDEOLLMDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 大模型原子能力审核明细
                */
                class VideoLLMDetail : public AbstractModel
                {
                public:
                    VideoLLMDetail();
                    ~VideoLLMDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>命中的标签名</p>
                     * @return LabelName <p>命中的标签名</p>
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置<p>命中的标签名</p>
                     * @param _labelName <p>命中的标签名</p>
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取<p>命中标签的原因</p>
                     * @return Reason <p>命中标签的原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>命中标签的原因</p>
                     * @param _reason <p>命中标签的原因</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>命中的文本内容</p>
                     * @return TargetText <p>命中的文本内容</p>
                     * 
                     */
                    std::vector<std::string> GetTargetText() const;

                    /**
                     * 设置<p>命中的文本内容</p>
                     * @param _targetText <p>命中的文本内容</p>
                     * 
                     */
                    void SetTargetText(const std::vector<std::string>& _targetText);

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取<p>违规建议</p>
                     * @return Suggestion <p>违规建议</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>违规建议</p>
                     * @param _suggestion <p>违规建议</p>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                private:

                    /**
                     * <p>命中的标签名</p>
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * <p>命中标签的原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>命中的文本内容</p>
                     */
                    std::vector<std::string> m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * <p>违规建议</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_VIDEOLLMDETAIL_H_
