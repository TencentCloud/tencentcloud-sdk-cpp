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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/Result.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * SearchFaces返回参数结构体
                */
                class SearchFacesResponse : public AbstractModel
                {
                public:
                    SearchFacesResponse();
                    ~SearchFacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取识别结果。
                     * @return Results 识别结果。
                     * 
                     */
                    std::vector<Result> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

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
                     * 识别结果。
                     */
                    std::vector<Result> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 搜索的人员库中包含的人脸数。
                     */
                    uint64_t m_faceNum;
                    bool m_faceNumHasBeenSet;

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

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESRESPONSE_H_
