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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_VALUEPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_VALUEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ReplaceParam.h>
#include <tencentcloud/ckafka/v20190819/model/SubstrParam.h>
#include <tencentcloud/ckafka/v20190819/model/DateParam.h>
#include <tencentcloud/ckafka/v20190819/model/RegexReplaceParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 数据处理——Value处理参数
                */
                class ValueParam : public AbstractModel
                {
                public:
                    ValueParam();
                    ~ValueParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换
                     * @return Type 处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换
                     */
                    std::string GetType() const;

                    /**
                     * 设置处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换
                     * @param Type 处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取替换，TYPE=REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replace 替换，TYPE=REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReplaceParam GetReplace() const;

                    /**
                     * 设置替换，TYPE=REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Replace 替换，TYPE=REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReplace(const ReplaceParam& _replace);

                    /**
                     * 判断参数 Replace 是否已赋值
                     * @return Replace 是否已赋值
                     */
                    bool ReplaceHasBeenSet() const;

                    /**
                     * 获取截取，TYPE=SUBSTR时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Substr 截取，TYPE=SUBSTR时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubstrParam GetSubstr() const;

                    /**
                     * 设置截取，TYPE=SUBSTR时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Substr 截取，TYPE=SUBSTR时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubstr(const SubstrParam& _substr);

                    /**
                     * 判断参数 Substr 是否已赋值
                     * @return Substr 是否已赋值
                     */
                    bool SubstrHasBeenSet() const;

                    /**
                     * 获取时间转换，TYPE=DATE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date 时间转换，TYPE=DATE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DateParam GetDate() const;

                    /**
                     * 设置时间转换，TYPE=DATE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Date 时间转换，TYPE=DATE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDate(const DateParam& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取正则替换，TYPE=REGEX_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegexReplace 正则替换，TYPE=REGEX_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RegexReplaceParam GetRegexReplace() const;

                    /**
                     * 设置正则替换，TYPE=REGEX_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegexReplace 正则替换，TYPE=REGEX_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegexReplace(const RegexReplaceParam& _regexReplace);

                    /**
                     * 判断参数 RegexReplace 是否已赋值
                     * @return RegexReplace 是否已赋值
                     */
                    bool RegexReplaceHasBeenSet() const;

                private:

                    /**
                     * 处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 替换，TYPE=REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReplaceParam m_replace;
                    bool m_replaceHasBeenSet;

                    /**
                     * 截取，TYPE=SUBSTR时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubstrParam m_substr;
                    bool m_substrHasBeenSet;

                    /**
                     * 时间转换，TYPE=DATE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DateParam m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 正则替换，TYPE=REGEX_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RegexReplaceParam m_regexReplace;
                    bool m_regexReplaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_VALUEPARAM_H_
