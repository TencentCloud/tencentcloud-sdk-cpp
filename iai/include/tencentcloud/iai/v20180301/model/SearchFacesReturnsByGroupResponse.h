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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_SEARCHFACESRETURNSBYGROUPRESPONSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_SEARCHFACESRETURNSBYGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/ResultsReturnsByGroup.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * SearchFacesReturnsByGroup返回参数结构体
                */
                class SearchFacesReturnsByGroupResponse : public AbstractModel
                {
                public:
                    SearchFacesReturnsByGroupResponse();
                    ~SearchFacesReturnsByGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索的人员库中包含的人脸数。
                     * @return FaceNum 搜索的人员库中包含的人脸数。
                     * 
                     */
                    uint64_t GetFaceNum() const;

                    /**
                     * 判断参数 FaceNum 是否已赋值
                     * @return FaceNum 是否已赋值
                     * 
                     */
                    bool FaceNumHasBeenSet() const;

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
                     * 搜索的人员库中包含的人脸数。
                     */
                    uint64_t m_faceNum;
                    bool m_faceNumHasBeenSet;

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

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_SEARCHFACESRETURNSBYGROUPRESPONSE_H_
