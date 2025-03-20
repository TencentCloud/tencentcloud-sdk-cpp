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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ANALYSEPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ANALYSEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 数据处理-解析参数
                */
                class AnalyseParam : public AbstractModel
                {
                public:
                    AnalyseParam();
                    ~AnalyseParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解析格式，JSON，DELIMITER分隔符，REGULAR正则提取，SOURCE处理上层所有结果
                     * @return Format 解析格式，JSON，DELIMITER分隔符，REGULAR正则提取，SOURCE处理上层所有结果
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置解析格式，JSON，DELIMITER分隔符，REGULAR正则提取，SOURCE处理上层所有结果
                     * @param _format 解析格式，JSON，DELIMITER分隔符，REGULAR正则提取，SOURCE处理上层所有结果
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
                     * 获取分隔符、正则表达式
                     * @return Regex 分隔符、正则表达式
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置分隔符、正则表达式
                     * @param _regex 分隔符、正则表达式
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取需再次处理的KEY——模式
                     * @return InputValueType 需再次处理的KEY——模式
                     * 
                     */
                    std::string GetInputValueType() const;

                    /**
                     * 设置需再次处理的KEY——模式
                     * @param _inputValueType 需再次处理的KEY——模式
                     * 
                     */
                    void SetInputValueType(const std::string& _inputValueType);

                    /**
                     * 判断参数 InputValueType 是否已赋值
                     * @return InputValueType 是否已赋值
                     * 
                     */
                    bool InputValueTypeHasBeenSet() const;

                    /**
                     * 获取需再次处理的KEY——KEY表达式
                     * @return InputValue 需再次处理的KEY——KEY表达式
                     * 
                     */
                    std::string GetInputValue() const;

                    /**
                     * 设置需再次处理的KEY——KEY表达式
                     * @param _inputValue 需再次处理的KEY——KEY表达式
                     * 
                     */
                    void SetInputValue(const std::string& _inputValue);

                    /**
                     * 判断参数 InputValue 是否已赋值
                     * @return InputValue 是否已赋值
                     * 
                     */
                    bool InputValueHasBeenSet() const;

                private:

                    /**
                     * 解析格式，JSON，DELIMITER分隔符，REGULAR正则提取，SOURCE处理上层所有结果
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 分隔符、正则表达式
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * 需再次处理的KEY——模式
                     */
                    std::string m_inputValueType;
                    bool m_inputValueTypeHasBeenSet;

                    /**
                     * 需再次处理的KEY——KEY表达式
                     */
                    std::string m_inputValue;
                    bool m_inputValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ANALYSEPARAM_H_
