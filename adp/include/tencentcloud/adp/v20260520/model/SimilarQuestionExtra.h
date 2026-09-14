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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SIMILARQUESTIONEXTRA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SIMILARQUESTIONEXTRA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 相似问额外信息
                */
                class SimilarQuestionExtra : public AbstractModel
                {
                public:
                    SimilarQuestionExtra();
                    ~SimilarQuestionExtra() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>相似问文本内容</p>
                     * @return Content <p>相似问文本内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>相似问文本内容</p>
                     * @param _content <p>相似问文本内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>相似问 ID</p>
                     * @return SimilarQuestionId <p>相似问 ID</p>
                     * 
                     */
                    std::string GetSimilarQuestionId() const;

                    /**
                     * 设置<p>相似问 ID</p>
                     * @param _similarQuestionId <p>相似问 ID</p>
                     * 
                     */
                    void SetSimilarQuestionId(const std::string& _similarQuestionId);

                    /**
                     * 判断参数 SimilarQuestionId 是否已赋值
                     * @return SimilarQuestionId 是否已赋值
                     * 
                     */
                    bool SimilarQuestionIdHasBeenSet() const;

                private:

                    /**
                     * <p>相似问文本内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>相似问 ID</p>
                     */
                    std::string m_similarQuestionId;
                    bool m_similarQuestionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SIMILARQUESTIONEXTRA_H_
