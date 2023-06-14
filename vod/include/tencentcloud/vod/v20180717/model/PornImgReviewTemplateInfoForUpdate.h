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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PORNIMGREVIEWTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PORNIMGREVIEWTEMPLATEINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 画面鉴别涉及令人反感的信息的任务控制参数。
                */
                class PornImgReviewTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    PornImgReviewTemplateInfoForUpdate();
                    ~PornImgReviewTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画面鉴别涉及令人反感的信息的任务开关，可选值：
<li>ON：开启画面鉴别涉及令人反感的信息的任务；</li>
<li>OFF：关闭画面鉴别涉及令人反感的信息的任务。</li>
                     * @return Switch 画面鉴别涉及令人反感的信息的任务开关，可选值：
<li>ON：开启画面鉴别涉及令人反感的信息的任务；</li>
<li>OFF：关闭画面鉴别涉及令人反感的信息的任务。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置画面鉴别涉及令人反感的信息的任务开关，可选值：
<li>ON：开启画面鉴别涉及令人反感的信息的任务；</li>
<li>OFF：关闭画面鉴别涉及令人反感的信息的任务。</li>
                     * @param _switch 画面鉴别涉及令人反感的信息的任务开关，可选值：
<li>ON：开启画面鉴别涉及令人反感的信息的任务；</li>
<li>OFF：关闭画面鉴别涉及令人反感的信息的任务。</li>
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
                     * 获取画面鉴别涉及令人反感的信息的过滤标签，审核结果包含选择的标签则返回结果，如果过滤标签为空，则审核结果全部返回，可选值为：
<li>porn：色情；</li>
<li>vulgar：低俗；</li>
<li>intimacy：亲密行为；</li>
<li>sexy：性感。</li>
                     * @return LabelSet 画面鉴别涉及令人反感的信息的过滤标签，审核结果包含选择的标签则返回结果，如果过滤标签为空，则审核结果全部返回，可选值为：
<li>porn：色情；</li>
<li>vulgar：低俗；</li>
<li>intimacy：亲密行为；</li>
<li>sexy：性感。</li>
                     * 
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置画面鉴别涉及令人反感的信息的过滤标签，审核结果包含选择的标签则返回结果，如果过滤标签为空，则审核结果全部返回，可选值为：
<li>porn：色情；</li>
<li>vulgar：低俗；</li>
<li>intimacy：亲密行为；</li>
<li>sexy：性感。</li>
                     * @param _labelSet 画面鉴别涉及令人反感的信息的过滤标签，审核结果包含选择的标签则返回结果，如果过滤标签为空，则审核结果全部返回，可选值为：
<li>porn：色情；</li>
<li>vulgar：低俗；</li>
<li>intimacy：亲密行为；</li>
<li>sexy：性感。</li>
                     * 
                     */
                    void SetLabelSet(const std::vector<std::string>& _labelSet);

                    /**
                     * 判断参数 LabelSet 是否已赋值
                     * @return LabelSet 是否已赋值
                     * 
                     */
                    bool LabelSetHasBeenSet() const;

                    /**
                     * 获取判定涉嫌违规的分数阈值，当审核达到该分数以上，认为涉嫌违规。取值范围：0~100。
                     * @return BlockConfidence 判定涉嫌违规的分数阈值，当审核达到该分数以上，认为涉嫌违规。取值范围：0~100。
                     * 
                     */
                    int64_t GetBlockConfidence() const;

                    /**
                     * 设置判定涉嫌违规的分数阈值，当审核达到该分数以上，认为涉嫌违规。取值范围：0~100。
                     * @param _blockConfidence 判定涉嫌违规的分数阈值，当审核达到该分数以上，认为涉嫌违规。取值范围：0~100。
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
                     * 获取判定需人工复核是否违规的分数阈值，当审核达到该分数以上，认为需人工复核。取值范围：0~100。
                     * @return ReviewConfidence 判定需人工复核是否违规的分数阈值，当审核达到该分数以上，认为需人工复核。取值范围：0~100。
                     * 
                     */
                    int64_t GetReviewConfidence() const;

                    /**
                     * 设置判定需人工复核是否违规的分数阈值，当审核达到该分数以上，认为需人工复核。取值范围：0~100。
                     * @param _reviewConfidence 判定需人工复核是否违规的分数阈值，当审核达到该分数以上，认为需人工复核。取值范围：0~100。
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
                     * 画面鉴别涉及令人反感的信息的任务开关，可选值：
<li>ON：开启画面鉴别涉及令人反感的信息的任务；</li>
<li>OFF：关闭画面鉴别涉及令人反感的信息的任务。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 画面鉴别涉及令人反感的信息的过滤标签，审核结果包含选择的标签则返回结果，如果过滤标签为空，则审核结果全部返回，可选值为：
<li>porn：色情；</li>
<li>vulgar：低俗；</li>
<li>intimacy：亲密行为；</li>
<li>sexy：性感。</li>
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                    /**
                     * 判定涉嫌违规的分数阈值，当审核达到该分数以上，认为涉嫌违规。取值范围：0~100。
                     */
                    int64_t m_blockConfidence;
                    bool m_blockConfidenceHasBeenSet;

                    /**
                     * 判定需人工复核是否违规的分数阈值，当审核达到该分数以上，认为需人工复核。取值范围：0~100。
                     */
                    int64_t m_reviewConfidence;
                    bool m_reviewConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PORNIMGREVIEWTEMPLATEINFOFORUPDATE_H_
