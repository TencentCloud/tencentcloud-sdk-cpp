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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TERRORISMOCRREVIEWTEMPLATEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TERRORISMOCRREVIEWTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 文本涉敏任务控制参数
                */
                class TerrorismOcrReviewTemplateInfo : public AbstractModel
                {
                public:
                    TerrorismOcrReviewTemplateInfo();
                    ~TerrorismOcrReviewTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本涉敏任务开关，可选值：
<li>ON：开启文本涉敏任务；</li>
<li>OFF：关闭文本涉敏任务。</li>
                     * @return Switch 文本涉敏任务开关，可选值：
<li>ON：开启文本涉敏任务；</li>
<li>OFF：关闭文本涉敏任务。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置文本涉敏任务开关，可选值：
<li>ON：开启文本涉敏任务；</li>
<li>OFF：关闭文本涉敏任务。</li>
                     * @param _switch 文本涉敏任务开关，可选值：
<li>ON：开启文本涉敏任务；</li>
<li>OFF：关闭文本涉敏任务。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取判定涉嫌违规的分数阈值，当智能审核达到该分数以上，认为涉嫌违规，不填默认为 100 分。取值范围：0~100。
                     * @return BlockConfidence 判定涉嫌违规的分数阈值，当智能审核达到该分数以上，认为涉嫌违规，不填默认为 100 分。取值范围：0~100。
                     * 
                     */
                    int64_t GetBlockConfidence() const;

                    /**
                     * 设置判定涉嫌违规的分数阈值，当智能审核达到该分数以上，认为涉嫌违规，不填默认为 100 分。取值范围：0~100。
                     * @param _blockConfidence 判定涉嫌违规的分数阈值，当智能审核达到该分数以上，认为涉嫌违规，不填默认为 100 分。取值范围：0~100。
                     * 
                     */
                    void SetBlockConfidence(const int64_t& _blockConfidence);

                    /**
                     * 判断参数 BlockConfidence 是否已赋值
                     * @return BlockConfidence 是否已赋值
                     * 
                     */
                    bool BlockConfidenceHasBeenSet() const;

                    /**
                     * 获取判定需人工复核是否违规的分数阈值，当智能审核达到该分数以上，认为需人工复核，不填默认为 75 分。取值范围：0~100。
                     * @return ReviewConfidence 判定需人工复核是否违规的分数阈值，当智能审核达到该分数以上，认为需人工复核，不填默认为 75 分。取值范围：0~100。
                     * 
                     */
                    int64_t GetReviewConfidence() const;

                    /**
                     * 设置判定需人工复核是否违规的分数阈值，当智能审核达到该分数以上，认为需人工复核，不填默认为 75 分。取值范围：0~100。
                     * @param _reviewConfidence 判定需人工复核是否违规的分数阈值，当智能审核达到该分数以上，认为需人工复核，不填默认为 75 分。取值范围：0~100。
                     * 
                     */
                    void SetReviewConfidence(const int64_t& _reviewConfidence);

                    /**
                     * 判断参数 ReviewConfidence 是否已赋值
                     * @return ReviewConfidence 是否已赋值
                     * 
                     */
                    bool ReviewConfidenceHasBeenSet() const;

                private:

                    /**
                     * 文本涉敏任务开关，可选值：
<li>ON：开启文本涉敏任务；</li>
<li>OFF：关闭文本涉敏任务。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 判定涉嫌违规的分数阈值，当智能审核达到该分数以上，认为涉嫌违规，不填默认为 100 分。取值范围：0~100。
                     */
                    int64_t m_blockConfidence;
                    bool m_blockConfidenceHasBeenSet;

                    /**
                     * 判定需人工复核是否违规的分数阈值，当智能审核达到该分数以上，认为需人工复核，不填默认为 75 分。取值范围：0~100。
                     */
                    int64_t m_reviewConfidence;
                    bool m_reviewConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TERRORISMOCRREVIEWTEMPLATEINFO_H_
