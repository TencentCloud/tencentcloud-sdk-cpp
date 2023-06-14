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
#include <tencentcloud/ckafka/v20190819/model/SplitParam.h>
#include <tencentcloud/ckafka/v20190819/model/KVParam.h>
#include <tencentcloud/ckafka/v20190819/model/JsonPathReplaceParam.h>
#include <tencentcloud/ckafka/v20190819/model/UrlDecodeParam.h>
#include <tencentcloud/ckafka/v20190819/model/LowercaseParam.h>


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
                     * 获取处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换，URL_DECODE，LOWERCASE转换为小写
                     * @return Type 处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换，URL_DECODE，LOWERCASE转换为小写
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换，URL_DECODE，LOWERCASE转换为小写
                     * @param _type 处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换，URL_DECODE，LOWERCASE转换为小写
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
                     * 获取替换，TYPE=REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replace 替换，TYPE=REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReplaceParam GetReplace() const;

                    /**
                     * 设置替换，TYPE=REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replace 替换，TYPE=REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplace(const ReplaceParam& _replace);

                    /**
                     * 判断参数 Replace 是否已赋值
                     * @return Replace 是否已赋值
                     * 
                     */
                    bool ReplaceHasBeenSet() const;

                    /**
                     * 获取截取，TYPE=SUBSTR时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Substr 截取，TYPE=SUBSTR时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubstrParam GetSubstr() const;

                    /**
                     * 设置截取，TYPE=SUBSTR时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _substr 截取，TYPE=SUBSTR时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubstr(const SubstrParam& _substr);

                    /**
                     * 判断参数 Substr 是否已赋值
                     * @return Substr 是否已赋值
                     * 
                     */
                    bool SubstrHasBeenSet() const;

                    /**
                     * 获取时间转换，TYPE=DATE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date 时间转换，TYPE=DATE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DateParam GetDate() const;

                    /**
                     * 设置时间转换，TYPE=DATE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _date 时间转换，TYPE=DATE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDate(const DateParam& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取正则替换，TYPE=REGEX_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegexReplace 正则替换，TYPE=REGEX_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RegexReplaceParam GetRegexReplace() const;

                    /**
                     * 设置正则替换，TYPE=REGEX_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regexReplace 正则替换，TYPE=REGEX_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegexReplace(const RegexReplaceParam& _regexReplace);

                    /**
                     * 判断参数 RegexReplace 是否已赋值
                     * @return RegexReplace 是否已赋值
                     * 
                     */
                    bool RegexReplaceHasBeenSet() const;

                    /**
                     * 获取值支持一拆多，TYPE=SPLIT时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Split 值支持一拆多，TYPE=SPLIT时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SplitParam GetSplit() const;

                    /**
                     * 设置值支持一拆多，TYPE=SPLIT时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _split 值支持一拆多，TYPE=SPLIT时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSplit(const SplitParam& _split);

                    /**
                     * 判断参数 Split 是否已赋值
                     * @return Split 是否已赋值
                     * 
                     */
                    bool SplitHasBeenSet() const;

                    /**
                     * 获取key-value二次解析，TYPE=KV时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KV key-value二次解析，TYPE=KV时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KVParam GetKV() const;

                    /**
                     * 设置key-value二次解析，TYPE=KV时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kV key-value二次解析，TYPE=KV时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKV(const KVParam& _kV);

                    /**
                     * 判断参数 KV 是否已赋值
                     * @return KV 是否已赋值
                     * 
                     */
                    bool KVHasBeenSet() const;

                    /**
                     * 获取处理结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 处理结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置处理结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 处理结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取JsonPath替换，TYPE=JSON_PATH_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JsonPathReplace JsonPath替换，TYPE=JSON_PATH_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JsonPathReplaceParam GetJsonPathReplace() const;

                    /**
                     * 设置JsonPath替换，TYPE=JSON_PATH_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jsonPathReplace JsonPath替换，TYPE=JSON_PATH_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJsonPathReplace(const JsonPathReplaceParam& _jsonPathReplace);

                    /**
                     * 判断参数 JsonPathReplace 是否已赋值
                     * @return JsonPathReplace 是否已赋值
                     * 
                     */
                    bool JsonPathReplaceHasBeenSet() const;

                    /**
                     * 获取Url解析
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UrlDecode Url解析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UrlDecodeParam GetUrlDecode() const;

                    /**
                     * 设置Url解析
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _urlDecode Url解析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrlDecode(const UrlDecodeParam& _urlDecode);

                    /**
                     * 判断参数 UrlDecode 是否已赋值
                     * @return UrlDecode 是否已赋值
                     * 
                     */
                    bool UrlDecodeHasBeenSet() const;

                    /**
                     * 获取小写字符解析
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lowercase 小写字符解析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LowercaseParam GetLowercase() const;

                    /**
                     * 设置小写字符解析
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lowercase 小写字符解析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLowercase(const LowercaseParam& _lowercase);

                    /**
                     * 判断参数 Lowercase 是否已赋值
                     * @return Lowercase 是否已赋值
                     * 
                     */
                    bool LowercaseHasBeenSet() const;

                private:

                    /**
                     * 处理模式，REPLACE替换，SUBSTR截取，DATE日期转换，TRIM去除前后空格，REGEX_REPLACE正则替换，URL_DECODE，LOWERCASE转换为小写
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

                    /**
                     * 值支持一拆多，TYPE=SPLIT时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SplitParam m_split;
                    bool m_splitHasBeenSet;

                    /**
                     * key-value二次解析，TYPE=KV时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KVParam m_kV;
                    bool m_kVHasBeenSet;

                    /**
                     * 处理结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * JsonPath替换，TYPE=JSON_PATH_REPLACE时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JsonPathReplaceParam m_jsonPathReplace;
                    bool m_jsonPathReplaceHasBeenSet;

                    /**
                     * Url解析
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UrlDecodeParam m_urlDecode;
                    bool m_urlDecodeHasBeenSet;

                    /**
                     * 小写字符解析
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LowercaseParam m_lowercase;
                    bool m_lowercaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_VALUEPARAM_H_
