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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WORDRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WORDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 字词信息。
                */
                class WordResult : public AbstractModel
                {
                public:
                    WordResult();
                    ~WordResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字词文本。
                     * @return Word 字词文本。
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置字词文本。
                     * @param _word 字词文本。
                     * 
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     * 
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取字词起始时间戳，单位秒。
                     * @return Start 字词起始时间戳，单位秒。
                     * 
                     */
                    double GetStart() const;

                    /**
                     * 设置字词起始时间戳，单位秒。
                     * @param _start 字词起始时间戳，单位秒。
                     * 
                     */
                    void SetStart(const double& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取字词结束时间戳，单位秒。
                     * @return End 字词结束时间戳，单位秒。
                     * 
                     */
                    double GetEnd() const;

                    /**
                     * 设置字词结束时间戳，单位秒。
                     * @param _end 字词结束时间戳，单位秒。
                     * 
                     */
                    void SetEnd(const double& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取翻译文本
                     * @return Trans 翻译文本
                     * 
                     */
                    std::string GetTrans() const;

                    /**
                     * 设置翻译文本
                     * @param _trans 翻译文本
                     * 
                     */
                    void SetTrans(const std::string& _trans);

                    /**
                     * 判断参数 Trans 是否已赋值
                     * @return Trans 是否已赋值
                     * 
                     */
                    bool TransHasBeenSet() const;

                private:

                    /**
                     * 字词文本。
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 字词起始时间戳，单位秒。
                     */
                    double m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 字词结束时间戳，单位秒。
                     */
                    double m_end;
                    bool m_endHasBeenSet;

                    /**
                     * 翻译文本
                     */
                    std::string m_trans;
                    bool m_transHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORDRESULT_H_
