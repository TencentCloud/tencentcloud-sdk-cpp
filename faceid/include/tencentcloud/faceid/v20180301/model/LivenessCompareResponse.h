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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPARERESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPARERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * LivenessCompare返回参数结构体
                */
                class LivenessCompareResponse : public AbstractModel
                {
                public:
                    LivenessCompareResponse();
                    ~LivenessCompareResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>验证通过后的视频最佳截图照片。</p><ul><li>照片为BASE64编码后的值，jpg格式。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrameBase64 <p>验证通过后的视频最佳截图照片。</p><ul><li>照片为BASE64编码后的值，jpg格式。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBestFrameBase64() const;

                    /**
                     * 判断参数 BestFrameBase64 是否已赋值
                     * @return BestFrameBase64 是否已赋值
                     * 
                     */
                    bool BestFrameBase64HasBeenSet() const;

                    /**
                     * 获取<p>相似度。- 取值范围 [0.00, 100.00]。- 推荐相似度大于等于70时可判断为同一人，可根据具体场景自行调整阈值（阈值70的误通过率为万分之一）。</p>
                     * @return Sim <p>相似度。- 取值范围 [0.00, 100.00]。- 推荐相似度大于等于70时可判断为同一人，可根据具体场景自行调整阈值（阈值70的误通过率为万分之一）。</p>
                     * 
                     */
                    double GetSim() const;

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     * 
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取<p>业务错误码。</p><ul><li>成功情况返回Success。</li><li>错误情况请参考下方错误码，列表中FailedOperation部分。</li></ul>
                     * @return Result <p>业务错误码。</p><ul><li>成功情况返回Success。</li><li>错误情况请参考下方错误码，列表中FailedOperation部分。</li></ul>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>业务结果描述。</p>
                     * @return Description <p>业务结果描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>最佳截图列表。</p><ul><li>仅在配置了返回多张最佳截图时返回。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrameList <p>最佳截图列表。</p><ul><li>仅在配置了返回多张最佳截图时返回。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBestFrameList() const;

                    /**
                     * 判断参数 BestFrameList 是否已赋值
                     * @return BestFrameList 是否已赋值
                     * 
                     */
                    bool BestFrameListHasBeenSet() const;

                private:

                    /**
                     * <p>验证通过后的视频最佳截图照片。</p><ul><li>照片为BASE64编码后的值，jpg格式。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bestFrameBase64;
                    bool m_bestFrameBase64HasBeenSet;

                    /**
                     * <p>相似度。- 取值范围 [0.00, 100.00]。- 推荐相似度大于等于70时可判断为同一人，可根据具体场景自行调整阈值（阈值70的误通过率为万分之一）。</p>
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * <p>业务错误码。</p><ul><li>成功情况返回Success。</li><li>错误情况请参考下方错误码，列表中FailedOperation部分。</li></ul>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>业务结果描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>最佳截图列表。</p><ul><li>仅在配置了返回多张最佳截图时返回。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bestFrameList;
                    bool m_bestFrameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPARERESPONSE_H_
