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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORDSAMPLESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORDSAMPLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiSampleWord.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeWordSamples返回参数结构体
                */
                class DescribeWordSamplesResponse : public AbstractModel
                {
                public:
                    DescribeWordSamplesResponse();
                    ~DescribeWordSamplesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的记录总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 符合条件的记录总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取关键词信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordSet 关键词信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AiSampleWord> GetWordSet() const;

                    /**
                     * 判断参数 WordSet 是否已赋值
                     * @return WordSet 是否已赋值
                     * 
                     */
                    bool WordSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的记录总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 关键词信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AiSampleWord> m_wordSet;
                    bool m_wordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORDSAMPLESRESPONSE_H_
