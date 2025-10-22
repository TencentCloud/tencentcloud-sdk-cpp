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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_FINANCIALLLMVIOLATIONDETAIL_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_FINANCIALLLMVIOLATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/FinancialLLMViolationReason.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 金融大模型审校 违规明细
                */
                class FinancialLLMViolationDetail : public AbstractModel
                {
                public:
                    FinancialLLMViolationDetail();
                    ~FinancialLLMViolationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取违规点
                     * @return Label 违规点
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置违规点
                     * @param _label 违规点
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取处置建议
                     * @return Suggestion 处置建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置处置建议
                     * @param _suggestion 处置建议
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取违规原因列表
                     * @return Reasons 违规原因列表
                     * 
                     */
                    std::vector<FinancialLLMViolationReason> GetReasons() const;

                    /**
                     * 设置违规原因列表
                     * @param _reasons 违规原因列表
                     * 
                     */
                    void SetReasons(const std::vector<FinancialLLMViolationReason>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                private:

                    /**
                     * 违规点
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 处置建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 违规原因列表
                     */
                    std::vector<FinancialLLMViolationReason> m_reasons;
                    bool m_reasonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_FINANCIALLLMVIOLATIONDETAIL_H_
