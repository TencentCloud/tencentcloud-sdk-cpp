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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEWORDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEWORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI 样本管理，关键词输入信息。
                */
                class AiSampleWordInfo : public AbstractModel
                {
                public:
                    AiSampleWordInfo();
                    ~AiSampleWordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词，长度限制：20 个字符。
                     * @return Keyword 关键词，长度限制：20 个字符。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词，长度限制：20 个字符。
                     * @param _keyword 关键词，长度限制：20 个字符。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取关键词标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     * @return Tags 关键词标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置关键词标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     * @param _tags 关键词标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 关键词，长度限制：20 个字符。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 关键词标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEWORDINFO_H_
