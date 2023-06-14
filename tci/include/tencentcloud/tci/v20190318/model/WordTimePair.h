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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_WORDTIMEPAIR_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_WORDTIMEPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class WordTimePair : public AbstractModel
                {
                public:
                    WordTimePair();
                    ~WordTimePair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单词出现的那个句子的起始时间
                     * @return Mbtm 单词出现的那个句子的起始时间
                     * 
                     */
                    int64_t GetMbtm() const;

                    /**
                     * 设置单词出现的那个句子的起始时间
                     * @param _mbtm 单词出现的那个句子的起始时间
                     * 
                     */
                    void SetMbtm(const int64_t& _mbtm);

                    /**
                     * 判断参数 Mbtm 是否已赋值
                     * @return Mbtm 是否已赋值
                     * 
                     */
                    bool MbtmHasBeenSet() const;

                    /**
                     * 获取	单词出现的那个句子的结束时间
                     * @return Metm 	单词出现的那个句子的结束时间
                     * 
                     */
                    int64_t GetMetm() const;

                    /**
                     * 设置	单词出现的那个句子的结束时间
                     * @param _metm 	单词出现的那个句子的结束时间
                     * 
                     */
                    void SetMetm(const int64_t& _metm);

                    /**
                     * 判断参数 Metm 是否已赋值
                     * @return Metm 是否已赋值
                     * 
                     */
                    bool MetmHasBeenSet() const;

                private:

                    /**
                     * 单词出现的那个句子的起始时间
                     */
                    int64_t m_mbtm;
                    bool m_mbtmHasBeenSet;

                    /**
                     * 	单词出现的那个句子的结束时间
                     */
                    int64_t m_metm;
                    bool m_metmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_WORDTIMEPAIR_H_
