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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DetectFaceSimilarity返回参数结构体
                */
                class DetectFaceSimilarityResponse : public AbstractModel
                {
                public:
                    DetectFaceSimilarityResponse();
                    ~DetectFaceSimilarityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>取值范围 [0.00, 100.00]。<br>推荐相似度大于等于70时可判断为同一人（采用固定阈值70，误通过率为万分之一，不支持调整阈值）。</p>
                     * @return Score <p>取值范围 [0.00, 100.00]。<br>推荐相似度大于等于70时可判断为同一人（采用固定阈值70，误通过率为万分之一，不支持调整阈值）。</p>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * <p>取值范围 [0.00, 100.00]。<br>推荐相似度大于等于70时可判断为同一人（采用固定阈值70，误通过率为万分之一，不支持调整阈值）。</p>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYRESPONSE_H_
