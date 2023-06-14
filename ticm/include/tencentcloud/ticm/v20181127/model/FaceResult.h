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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_FACERESULT_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_FACERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ticm/v20181127/model/FaceRect.h>
#include <tencentcloud/ticm/v20181127/model/Candidate.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * 人脸识别结果。
                */
                class FaceResult : public AbstractModel
                {
                public:
                    FaceResult();
                    ~FaceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测出的人脸框位置。
                     * @return FaceRect 检测出的人脸框位置。
                     * 
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 设置检测出的人脸框位置。
                     * @param _faceRect 检测出的人脸框位置。
                     * 
                     */
                    void SetFaceRect(const FaceRect& _faceRect);

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     * 
                     */
                    bool FaceRectHasBeenSet() const;

                    /**
                     * 获取候选人列表。当前返回相似度最高的候选人。
                     * @return Candidates 候选人列表。当前返回相似度最高的候选人。
                     * 
                     */
                    std::vector<Candidate> GetCandidates() const;

                    /**
                     * 设置候选人列表。当前返回相似度最高的候选人。
                     * @param _candidates 候选人列表。当前返回相似度最高的候选人。
                     * 
                     */
                    void SetCandidates(const std::vector<Candidate>& _candidates);

                    /**
                     * 判断参数 Candidates 是否已赋值
                     * @return Candidates 是否已赋值
                     * 
                     */
                    bool CandidatesHasBeenSet() const;

                private:

                    /**
                     * 检测出的人脸框位置。
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * 候选人列表。当前返回相似度最高的候选人。
                     */
                    std::vector<Candidate> m_candidates;
                    bool m_candidatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_FACERESULT_H_
