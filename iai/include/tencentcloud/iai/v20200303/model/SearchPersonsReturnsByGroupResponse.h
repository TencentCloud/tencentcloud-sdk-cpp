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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSRETURNSBYGROUPRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSRETURNSBYGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/ResultsReturnsByGroup.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * SearchPersonsReturnsByGroup返回参数结构体
                */
                class SearchPersonsReturnsByGroupResponse : public AbstractModel
                {
                public:
                    SearchPersonsReturnsByGroupResponse();
                    ~SearchPersonsReturnsByGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索的人员库中包含的人员数。若输入图片中所有人脸均不符合质量要求，则返回0。
                     * @return PersonNum 搜索的人员库中包含的人员数。若输入图片中所有人脸均不符合质量要求，则返回0。
                     * 
                     */
                    uint64_t GetPersonNum() const;

                    /**
                     * 判断参数 PersonNum 是否已赋值
                     * @return PersonNum 是否已赋值
                     * 
                     */
                    bool PersonNumHasBeenSet() const;

                    /**
                     * 获取识别结果。
                     * @return ResultsReturnsByGroup 识别结果。
                     * 
                     */
                    std::vector<ResultsReturnsByGroup> GetResultsReturnsByGroup() const;

                    /**
                     * 判断参数 ResultsReturnsByGroup 是否已赋值
                     * @return ResultsReturnsByGroup 是否已赋值
                     * 
                     */
                    bool ResultsReturnsByGroupHasBeenSet() const;

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

                private:

                    /**
                     * 搜索的人员库中包含的人员数。若输入图片中所有人脸均不符合质量要求，则返回0。
                     */
                    uint64_t m_personNum;
                    bool m_personNumHasBeenSet;

                    /**
                     * 识别结果。
                     */
                    std::vector<ResultsReturnsByGroup> m_resultsReturnsByGroup;
                    bool m_resultsReturnsByGroupHasBeenSet;

                    /**
                     * 人脸识别所用的算法模型版本。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSRETURNSBYGROUPRESPONSE_H_
