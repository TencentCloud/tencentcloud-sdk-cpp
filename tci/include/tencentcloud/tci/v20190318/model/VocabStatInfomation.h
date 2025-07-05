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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_VOCABSTATINFOMATION_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_VOCABSTATINFOMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/StatInfo.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 词汇库中的单词出现在音频中的总次数信息
                */
                class VocabStatInfomation : public AbstractModel
                {
                public:
                    VocabStatInfomation();
                    ~VocabStatInfomation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单词出现在该音频中总次数
                     * @return VocabDetailInfo 单词出现在该音频中总次数
                     * 
                     */
                    std::vector<StatInfo> GetVocabDetailInfo() const;

                    /**
                     * 设置单词出现在该音频中总次数
                     * @param _vocabDetailInfo 单词出现在该音频中总次数
                     * 
                     */
                    void SetVocabDetailInfo(const std::vector<StatInfo>& _vocabDetailInfo);

                    /**
                     * 判断参数 VocabDetailInfo 是否已赋值
                     * @return VocabDetailInfo 是否已赋值
                     * 
                     */
                    bool VocabDetailInfoHasBeenSet() const;

                    /**
                     * 获取词汇库名称
                     * @return VocabLibName 词汇库名称
                     * 
                     */
                    std::string GetVocabLibName() const;

                    /**
                     * 设置词汇库名称
                     * @param _vocabLibName 词汇库名称
                     * 
                     */
                    void SetVocabLibName(const std::string& _vocabLibName);

                    /**
                     * 判断参数 VocabLibName 是否已赋值
                     * @return VocabLibName 是否已赋值
                     * 
                     */
                    bool VocabLibNameHasBeenSet() const;

                private:

                    /**
                     * 单词出现在该音频中总次数
                     */
                    std::vector<StatInfo> m_vocabDetailInfo;
                    bool m_vocabDetailInfoHasBeenSet;

                    /**
                     * 词汇库名称
                     */
                    std::string m_vocabLibName;
                    bool m_vocabLibNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_VOCABSTATINFOMATION_H_
