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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_SEARCHRESULT_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_SEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 以图搜图检索结果
                */
                class SearchResult : public AbstractModel
                {
                public:
                    SearchResult();
                    ~SearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片base64数据
                     * @return Image 图片base64数据
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片base64数据
                     * @param _image 图片base64数据
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取身份ID
                     * @return PersonId 身份ID
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置身份ID
                     * @param _personId 身份ID
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取相似度
                     * @return Similarity 相似度
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 设置相似度
                     * @param _similarity 相似度
                     * 
                     */
                    void SetSimilarity(const double& _similarity);

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     * 
                     */
                    bool SimilarityHasBeenSet() const;

                private:

                    /**
                     * 图片base64数据
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 身份ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 相似度
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_SEARCHRESULT_H_
