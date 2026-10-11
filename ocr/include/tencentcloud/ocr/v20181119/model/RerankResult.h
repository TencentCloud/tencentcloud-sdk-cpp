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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RERANKRESULT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RERANKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 重排序结果
                */
                class RerankResult : public AbstractModel
                {
                public:
                    RerankResult();
                    ~RerankResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档在输入 Docs 列表中的索引，从 0 开始，用于回溯原文档。
                     * @return Index 文档在输入 Docs 列表中的索引，从 0 开始，用于回溯原文档。
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置文档在输入 Docs 列表中的索引，从 0 开始，用于回溯原文档。
                     * @param _index 文档在输入 Docs 列表中的索引，从 0 开始，用于回溯原文档。
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取文档与查询内容的相关性得分，数值越大越相关。
                     * @return Score 文档与查询内容的相关性得分，数值越大越相关。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置文档与查询内容的相关性得分，数值越大越相关。
                     * @param _score 文档与查询内容的相关性得分，数值越大越相关。
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 文档在输入 Docs 列表中的索引，从 0 开始，用于回溯原文档。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 文档与查询内容的相关性得分，数值越大越相关。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RERANKRESULT_H_
