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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVALSETTING_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVALSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 检索参数设置
                */
                class RetrievalSetting : public AbstractModel
                {
                public:
                    RetrievalSetting();
                    ~RetrievalSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索的类型，不填该参数则检索全部。
- `DOC`：文档
- `QA`：QA

仅RetrieveKnowledge接口支持该参数
                     * @return Type 检索的类型，不填该参数则检索全部。
- `DOC`：文档
- `QA`：QA

仅RetrieveKnowledge接口支持该参数
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置检索的类型，不填该参数则检索全部。
- `DOC`：文档
- `QA`：QA

仅RetrieveKnowledge接口支持该参数
                     * @param _type 检索的类型，不填该参数则检索全部。
- `DOC`：文档
- `QA`：QA

仅RetrieveKnowledge接口支持该参数
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取返回个数
                     * @return TopK 返回个数
                     * 
                     */
                    int64_t GetTopK() const;

                    /**
                     * 设置返回个数
                     * @param _topK 返回个数
                     * 
                     */
                    void SetTopK(const int64_t& _topK);

                    /**
                     * 判断参数 TopK 是否已赋值
                     * @return TopK 是否已赋值
                     * 
                     */
                    bool TopKHasBeenSet() const;

                    /**
                     * 获取分数过滤
                     * @return ScoreThreshold 分数过滤
                     * 
                     */
                    double GetScoreThreshold() const;

                    /**
                     * 设置分数过滤
                     * @param _scoreThreshold 分数过滤
                     * 
                     */
                    void SetScoreThreshold(const double& _scoreThreshold);

                    /**
                     * 判断参数 ScoreThreshold 是否已赋值
                     * @return ScoreThreshold 是否已赋值
                     * 
                     */
                    bool ScoreThresholdHasBeenSet() const;

                private:

                    /**
                     * 检索的类型，不填该参数则检索全部。
- `DOC`：文档
- `QA`：QA

仅RetrieveKnowledge接口支持该参数
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 返回个数
                     */
                    int64_t m_topK;
                    bool m_topKHasBeenSet;

                    /**
                     * 分数过滤
                     */
                    double m_scoreThreshold;
                    bool m_scoreThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVALSETTING_H_
