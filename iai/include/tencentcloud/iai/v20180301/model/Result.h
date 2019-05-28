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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_RESULT_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_RESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/Candidate.h>
#include <tencentcloud/iai/v20180301/model/FaceRect.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 人脸的识别结果
                */
                class Result : public AbstractModel
                {
                public:
                    Result();
                    ~Result() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的最相似候选人
                     * @return Candidates 识别出的最相似候选人
                     */
                    std::vector<Candidate> GetCandidates() const;

                    /**
                     * 设置识别出的最相似候选人
                     * @param Candidates 识别出的最相似候选人
                     */
                    void SetCandidates(const std::vector<Candidate>& _candidates);

                    /**
                     * 判断参数 Candidates 是否已赋值
                     * @return Candidates 是否已赋值
                     */
                    bool CandidatesHasBeenSet() const;

                    /**
                     * 获取检测出的人脸框位置
                     * @return FaceRect 检测出的人脸框位置
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 设置检测出的人脸框位置
                     * @param FaceRect 检测出的人脸框位置
                     */
                    void SetFaceRect(const FaceRect& _faceRect);

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     */
                    bool FaceRectHasBeenSet() const;

                private:

                    /**
                     * 识别出的最相似候选人
                     */
                    std::vector<Candidate> m_candidates;
                    bool m_candidatesHasBeenSet;

                    /**
                     * 检测出的人脸框位置
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_RESULT_H_
