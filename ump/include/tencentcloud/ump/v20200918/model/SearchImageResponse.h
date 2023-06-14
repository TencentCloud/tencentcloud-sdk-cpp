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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_SEARCHIMAGERESPONSE_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_SEARCHIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/SearchResult.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * SearchImage返回参数结构体
                */
                class SearchImageResponse : public AbstractModel
                {
                public:
                    SearchImageResponse();
                    ~SearchImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取face id
                     * @return FaceId face id
                     * 
                     */
                    std::string GetFaceId() const;

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     * 
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取搜索结果列表
                     * @return Results 搜索结果列表
                     * 
                     */
                    std::vector<SearchResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * face id
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * 搜索结果列表
                     */
                    std::vector<SearchResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_SEARCHIMAGERESPONSE_H_
