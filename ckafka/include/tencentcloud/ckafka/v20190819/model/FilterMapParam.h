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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FILTERMAPPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FILTERMAPPARAM_H_

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
                * 过滤器参数
                */
                class FilterMapParam : public AbstractModel
                {
                public:
                    FilterMapParam();
                    ~FilterMapParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key值
                     * @return Key Key值
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key值
                     * @param _key Key值
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取匹配模式，前缀匹配PREFIX，后缀匹配SUFFIX，包含匹配CONTAINS，EXCEPT除外匹配，数值匹配NUMBER，IP匹配IP
                     * @return MatchMode 匹配模式，前缀匹配PREFIX，后缀匹配SUFFIX，包含匹配CONTAINS，EXCEPT除外匹配，数值匹配NUMBER，IP匹配IP
                     * 
                     */
                    std::string GetMatchMode() const;

                    /**
                     * 设置匹配模式，前缀匹配PREFIX，后缀匹配SUFFIX，包含匹配CONTAINS，EXCEPT除外匹配，数值匹配NUMBER，IP匹配IP
                     * @param _matchMode 匹配模式，前缀匹配PREFIX，后缀匹配SUFFIX，包含匹配CONTAINS，EXCEPT除外匹配，数值匹配NUMBER，IP匹配IP
                     * 
                     */
                    void SetMatchMode(const std::string& _matchMode);

                    /**
                     * 判断参数 MatchMode 是否已赋值
                     * @return MatchMode 是否已赋值
                     * 
                     */
                    bool MatchModeHasBeenSet() const;

                    /**
                     * 获取Value值
                     * @return Value Value值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value值
                     * @param _value Value值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取固定REGULAR
                     * @return Type 固定REGULAR
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置固定REGULAR
                     * @param _type 固定REGULAR
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Key值
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 匹配模式，前缀匹配PREFIX，后缀匹配SUFFIX，包含匹配CONTAINS，EXCEPT除外匹配，数值匹配NUMBER，IP匹配IP
                     */
                    std::string m_matchMode;
                    bool m_matchModeHasBeenSet;

                    /**
                     * Value值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 固定REGULAR
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FILTERMAPPARAM_H_
