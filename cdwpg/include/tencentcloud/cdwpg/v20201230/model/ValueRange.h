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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_VALUERANGE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_VALUERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/Range.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ValueRange值
                */
                class ValueRange : public AbstractModel
                {
                public:
                    ValueRange();
                    ~ValueRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数类型，可以为 enum，string，section; 其中enum表示枚举，类似： utf8,latin1,gbk; string表示返回的参数值是字符串; section表示返回的参数值是一个取值范围，类似：[4-8]
                     * @return Type 参数类型，可以为 enum，string，section; 其中enum表示枚举，类似： utf8,latin1,gbk; string表示返回的参数值是字符串; section表示返回的参数值是一个取值范围，类似：[4-8]
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置参数类型，可以为 enum，string，section; 其中enum表示枚举，类似： utf8,latin1,gbk; string表示返回的参数值是字符串; section表示返回的参数值是一个取值范围，类似：[4-8]
                     * @param _type 参数类型，可以为 enum，string，section; 其中enum表示枚举，类似： utf8,latin1,gbk; string表示返回的参数值是字符串; section表示返回的参数值是一个取值范围，类似：[4-8]
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取type 取section的时候，返回的参数值
                     * @return Range type 取section的时候，返回的参数值
                     * 
                     */
                    Range GetRange() const;

                    /**
                     * 设置type 取section的时候，返回的参数值
                     * @param _range type 取section的时候，返回的参数值
                     * 
                     */
                    void SetRange(const Range& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取type 取enum的时候，返回参数值
                     * @return Enum type 取enum的时候，返回参数值
                     * 
                     */
                    std::vector<std::string> GetEnum() const;

                    /**
                     * 设置type 取enum的时候，返回参数值
                     * @param _enum type 取enum的时候，返回参数值
                     * 
                     */
                    void SetEnum(const std::vector<std::string>& _enum);

                    /**
                     * 判断参数 Enum 是否已赋值
                     * @return Enum 是否已赋值
                     * 
                     */
                    bool EnumHasBeenSet() const;

                    /**
                     * 获取type 取string的时候，返回的参数值
                     * @return String type 取string的时候，返回的参数值
                     * 
                     */
                    std::string GetString() const;

                    /**
                     * 设置type 取string的时候，返回的参数值
                     * @param _string type 取string的时候，返回的参数值
                     * 
                     */
                    void SetString(const std::string& _string);

                    /**
                     * 判断参数 String 是否已赋值
                     * @return String 是否已赋值
                     * 
                     */
                    bool StringHasBeenSet() const;

                private:

                    /**
                     * 参数类型，可以为 enum，string，section; 其中enum表示枚举，类似： utf8,latin1,gbk; string表示返回的参数值是字符串; section表示返回的参数值是一个取值范围，类似：[4-8]
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * type 取section的时候，返回的参数值
                     */
                    Range m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * type 取enum的时候，返回参数值
                     */
                    std::vector<std::string> m_enum;
                    bool m_enumHasBeenSet;

                    /**
                     * type 取string的时候，返回的参数值
                     */
                    std::string m_string;
                    bool m_stringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_VALUERANGE_H_
