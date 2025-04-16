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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TEXTFILE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TEXTFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 文本格式
                */
                class TextFile : public AbstractModel
                {
                public:
                    TextFile();
                    ~TextFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本类型，本参数取值为TextFile。
                     * @return Format 文本类型，本参数取值为TextFile。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置文本类型，本参数取值为TextFile。
                     * @param _format 文本类型，本参数取值为TextFile。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取处理文本用的正则表达式。
                     * @return Regex 处理文本用的正则表达式。
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置处理文本用的正则表达式。
                     * @param _regex 处理文本用的正则表达式。
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                private:

                    /**
                     * 文本类型，本参数取值为TextFile。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 处理文本用的正则表达式。
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TEXTFILE_H_
