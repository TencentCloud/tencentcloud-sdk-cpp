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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_REGEXREPLACEPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_REGEXREPLACEPARAM_H_

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
                * 数据处理——Value处理参数——正则替换参数
                */
                class RegexReplaceParam : public AbstractModel
                {
                public:
                    RegexReplaceParam();
                    ~RegexReplaceParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正则表达式
                     * @return Regex 正则表达式
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置正则表达式
                     * @param _regex 正则表达式
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
                     * 获取替换新值
                     * @return NewValue 替换新值
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置替换新值
                     * @param _newValue 替换新值
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                private:

                    /**
                     * 正则表达式
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * 替换新值
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_REGEXREPLACEPARAM_H_
