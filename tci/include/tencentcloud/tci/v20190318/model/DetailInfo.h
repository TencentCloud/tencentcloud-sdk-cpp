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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DETAILINFO_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/WordTimePair.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 单词出现的那个句子的起始时间和结束时间信息
                */
                class DetailInfo : public AbstractModel
                {
                public:
                    DetailInfo();
                    ~DetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单词出现在该音频中的那个句子的时间戳，出现了几次， 就返回对应次数的起始和结束时间戳
                     * @return Value 单词出现在该音频中的那个句子的时间戳，出现了几次， 就返回对应次数的起始和结束时间戳
                     * 
                     */
                    std::vector<WordTimePair> GetValue() const;

                    /**
                     * 设置单词出现在该音频中的那个句子的时间戳，出现了几次， 就返回对应次数的起始和结束时间戳
                     * @param _value 单词出现在该音频中的那个句子的时间戳，出现了几次， 就返回对应次数的起始和结束时间戳
                     * 
                     */
                    void SetValue(const std::vector<WordTimePair>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取词汇库中的单词
                     * @return Keyword 词汇库中的单词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置词汇库中的单词
                     * @param _keyword 词汇库中的单词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 单词出现在该音频中的那个句子的时间戳，出现了几次， 就返回对应次数的起始和结束时间戳
                     */
                    std::vector<WordTimePair> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 词汇库中的单词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DETAILINFO_H_
