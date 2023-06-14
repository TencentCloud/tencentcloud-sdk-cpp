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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_RESULTSRETURNSBYGROUP_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_RESULTSRETURNSBYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/FaceRect.h>
#include <tencentcloud/iai/v20180301/model/GroupCandidate.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 识别结果。

                */
                class ResultsReturnsByGroup : public AbstractModel
                {
                public:
                    ResultsReturnsByGroup();
                    ~ResultsReturnsByGroup() = default;
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
                     * 获取识别结果。
                     * @return GroupCandidates 识别结果。
                     * 
                     */
                    std::vector<GroupCandidate> GetGroupCandidates() const;

                    /**
                     * 设置识别结果。
                     * @param _groupCandidates 识别结果。
                     * 
                     */
                    void SetGroupCandidates(const std::vector<GroupCandidate>& _groupCandidates);

                    /**
                     * 判断参数 GroupCandidates 是否已赋值
                     * @return GroupCandidates 是否已赋值
                     * 
                     */
                    bool GroupCandidatesHasBeenSet() const;

                    /**
                     * 获取检测出的人脸图片状态返回码。0 表示正常。 
-1601代表不符合图片质量控制要求，此时Candidate内容为空。
                     * @return RetCode 检测出的人脸图片状态返回码。0 表示正常。 
-1601代表不符合图片质量控制要求，此时Candidate内容为空。
                     * 
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 设置检测出的人脸图片状态返回码。0 表示正常。 
-1601代表不符合图片质量控制要求，此时Candidate内容为空。
                     * @param _retCode 检测出的人脸图片状态返回码。0 表示正常。 
-1601代表不符合图片质量控制要求，此时Candidate内容为空。
                     * 
                     */
                    void SetRetCode(const int64_t& _retCode);

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                private:

                    /**
                     * 检测出的人脸框位置。
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * 识别结果。
                     */
                    std::vector<GroupCandidate> m_groupCandidates;
                    bool m_groupCandidatesHasBeenSet;

                    /**
                     * 检测出的人脸图片状态返回码。0 表示正常。 
-1601代表不符合图片质量控制要求，此时Candidate内容为空。
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_RESULTSRETURNSBYGROUP_H_
