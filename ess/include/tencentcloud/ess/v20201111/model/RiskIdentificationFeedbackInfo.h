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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_RISKIDENTIFICATIONFEEDBACKINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_RISKIDENTIFICATIONFEEDBACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同审查反馈信息
                */
                class RiskIdentificationFeedbackInfo : public AbstractModel
                {
                public:
                    RiskIdentificationFeedbackInfo();
                    ~RiskIdentificationFeedbackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审查结果ID
                     * @return RiskId 审查结果ID
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置审查结果ID
                     * @param _riskId 审查结果ID
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     * @return FeedbackResult 反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     * 
                     */
                    int64_t GetFeedbackResult() const;

                    /**
                     * 设置反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     * @param _feedbackResult 反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     * 
                     */
                    void SetFeedbackResult(const int64_t& _feedbackResult);

                    /**
                     * 判断参数 FeedbackResult 是否已赋值
                     * @return FeedbackResult 是否已赋值
                     * 
                     */
                    bool FeedbackResultHasBeenSet() const;

                    /**
                     * 获取反馈原因
                     * @return Reason 反馈原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置反馈原因
                     * @param _reason 反馈原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 审查结果ID
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     */
                    int64_t m_feedbackResult;
                    bool m_feedbackResultHasBeenSet;

                    /**
                     * 反馈原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RISKIDENTIFICATIONFEEDBACKINFO_H_
