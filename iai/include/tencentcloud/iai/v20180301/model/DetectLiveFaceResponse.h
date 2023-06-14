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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_DETECTLIVEFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_DETECTLIVEFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectLiveFace返回参数结构体
                */
                class DetectLiveFaceResponse : public AbstractModel
                {
                public:
                    DetectLiveFaceResponse();
                    ~DetectLiveFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取活体打分，取值范围 [0,100]，分数一般落于[80, 100]区间内，0分也为常见值。推荐相大于 87 时可判断为活体。可根据具体场景自行调整阈值。
本字段当且仅当FaceModelVersion为2.0时才具备参考意义。
                     * @return Score 活体打分，取值范围 [0,100]，分数一般落于[80, 100]区间内，0分也为常见值。推荐相大于 87 时可判断为活体。可根据具体场景自行调整阈值。
本字段当且仅当FaceModelVersion为2.0时才具备参考意义。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取人脸识别所用的算法模型版本。
                     * @return FaceModelVersion 人脸识别所用的算法模型版本。
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                    /**
                     * 获取活体检测是否通过。
本字段只有FaceModelVersion为3.0时才具备参考意义。
                     * @return IsLiveness 活体检测是否通过。
本字段只有FaceModelVersion为3.0时才具备参考意义。
                     * 
                     */
                    bool GetIsLiveness() const;

                    /**
                     * 判断参数 IsLiveness 是否已赋值
                     * @return IsLiveness 是否已赋值
                     * 
                     */
                    bool IsLivenessHasBeenSet() const;

                private:

                    /**
                     * 活体打分，取值范围 [0,100]，分数一般落于[80, 100]区间内，0分也为常见值。推荐相大于 87 时可判断为活体。可根据具体场景自行调整阈值。
本字段当且仅当FaceModelVersion为2.0时才具备参考意义。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 人脸识别所用的算法模型版本。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                    /**
                     * 活体检测是否通过。
本字段只有FaceModelVersion为3.0时才具备参考意义。
                     */
                    bool m_isLiveness;
                    bool m_isLivenessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_DETECTLIVEFACERESPONSE_H_
