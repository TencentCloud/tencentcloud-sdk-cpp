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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_ANSWERSTAT_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_ANSWERSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 每个选项答题人数统计
                */
                class AnswerStat : public AbstractModel
                {
                public:
                    AnswerStat();
                    ~AnswerStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取选项（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * @return Answer 选项（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * 
                     */
                    int64_t GetAnswer() const;

                    /**
                     * 设置选项（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * @param _answer 选项（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * 
                     */
                    void SetAnswer(const int64_t& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取答题人数
                     * @return Count 答题人数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置答题人数
                     * @param _count 答题人数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 选项（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     */
                    int64_t m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 答题人数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_ANSWERSTAT_H_
