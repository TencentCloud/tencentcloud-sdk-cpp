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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LLMDETECTIONREPORT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LLMDETECTIONREPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LLMDetectionResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * LLM 大模型检测结果报告
                */
                class LLMDetectionReport : public AbstractModel
                {
                public:
                    LLMDetectionReport();
                    ~LLMDetectionReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检测结果数量。</p>
                     * @return ResultCount <p>检测结果数量。</p>
                     * 
                     */
                    int64_t GetResultCount() const;

                    /**
                     * 设置<p>检测结果数量。</p>
                     * @param _resultCount <p>检测结果数量。</p>
                     * 
                     */
                    void SetResultCount(const int64_t& _resultCount);

                    /**
                     * 判断参数 ResultCount 是否已赋值
                     * @return ResultCount 是否已赋值
                     * 
                     */
                    bool ResultCountHasBeenSet() const;

                    /**
                     * 获取<p>各检测项结果列表。</p>
                     * @return ResultSet <p>各检测项结果列表。</p>
                     * 
                     */
                    std::vector<LLMDetectionResultItem> GetResultSet() const;

                    /**
                     * 设置<p>各检测项结果列表。</p>
                     * @param _resultSet <p>各检测项结果列表。</p>
                     * 
                     */
                    void SetResultSet(const std::vector<LLMDetectionResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                private:

                    /**
                     * <p>检测结果数量。</p>
                     */
                    int64_t m_resultCount;
                    bool m_resultCountHasBeenSet;

                    /**
                     * <p>各检测项结果列表。</p>
                     */
                    std::vector<LLMDetectionResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LLMDETECTIONREPORT_H_
