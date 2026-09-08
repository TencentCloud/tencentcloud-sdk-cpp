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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_KAFKACONSUMERCONTENT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_KAFKACONSUMERCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * kafka协议消费内容
                */
                class KafkaConsumerContent : public AbstractModel
                {
                public:
                    KafkaConsumerContent();
                    ~KafkaConsumerContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消费数据格式。 0：原始内容；1：JSON。</p>
                     * @return Format <p>消费数据格式。 0：原始内容；1：JSON。</p>
                     * 
                     */
                    int64_t GetFormat() const;

                    /**
                     * 设置<p>消费数据格式。 0：原始内容；1：JSON。</p>
                     * @param _format <p>消费数据格式。 0：原始内容；1：JSON。</p>
                     * 
                     */
                    void SetFormat(const int64_t& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>是否投递 TAG 信息<br>Format为0时，此字段不需要赋值</p>
                     * @return EnableTag <p>是否投递 TAG 信息<br>Format为0时，此字段不需要赋值</p>
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置<p>是否投递 TAG 信息<br>Format为0时，此字段不需要赋值</p>
                     * @param _enableTag <p>是否投递 TAG 信息<br>Format为0时，此字段不需要赋值</p>
                     * 
                     */
                    void SetEnableTag(const bool& _enableTag);

                    /**
                     * 判断参数 EnableTag 是否已赋值
                     * @return EnableTag 是否已赋值
                     * 
                     */
                    bool EnableTagHasBeenSet() const;

                    /**
                     * 获取<p>元数据信息列表, 可选值为：__SOURCE__、__FILENAME__<br>、__TIMESTAMP__、__HOSTNAME__、__PKGID__<br>Format为0时，此字段不需要赋值</p>
                     * @return MetaFields <p>元数据信息列表, 可选值为：__SOURCE__、__FILENAME__<br>、__TIMESTAMP__、__HOSTNAME__、__PKGID__<br>Format为0时，此字段不需要赋值</p>
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置<p>元数据信息列表, 可选值为：__SOURCE__、__FILENAME__<br>、__TIMESTAMP__、__HOSTNAME__、__PKGID__<br>Format为0时，此字段不需要赋值</p>
                     * @param _metaFields <p>元数据信息列表, 可选值为：__SOURCE__、__FILENAME__<br>、__TIMESTAMP__、__HOSTNAME__、__PKGID__<br>Format为0时，此字段不需要赋值</p>
                     * 
                     */
                    void SetMetaFields(const std::vector<std::string>& _metaFields);

                    /**
                     * 判断参数 MetaFields 是否已赋值
                     * @return MetaFields 是否已赋值
                     * 
                     */
                    bool MetaFieldsHasBeenSet() const;

                    /**
                     * 获取<p>tag数据处理方式：1:不平铺（默认值）；2:平铺。</p><p>不平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * @return TagTransaction <p>tag数据处理方式：1:不平铺（默认值）；2:平铺。</p><p>不平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * 
                     */
                    int64_t GetTagTransaction() const;

                    /**
                     * 设置<p>tag数据处理方式：1:不平铺（默认值）；2:平铺。</p><p>不平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * @param _tagTransaction <p>tag数据处理方式：1:不平铺（默认值）；2:平铺。</p><p>不平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * 
                     */
                    void SetTagTransaction(const int64_t& _tagTransaction);

                    /**
                     * 判断参数 TagTransaction 是否已赋值
                     * @return TagTransaction 是否已赋值
                     * 
                     */
                    bool TagTransactionHasBeenSet() const;

                    /**
                     * 获取<p>消费数据Json格式：<br>1：不转义（默认格式）<br>2：转义</p><p>投递Json格式。<br>JsonType为1：和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>JsonType为2：转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     * @return JsonType <p>消费数据Json格式：<br>1：不转义（默认格式）<br>2：转义</p><p>投递Json格式。<br>JsonType为1：和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>JsonType为2：转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     * 
                     */
                    int64_t GetJsonType() const;

                    /**
                     * 设置<p>消费数据Json格式：<br>1：不转义（默认格式）<br>2：转义</p><p>投递Json格式。<br>JsonType为1：和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>JsonType为2：转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     * @param _jsonType <p>消费数据Json格式：<br>1：不转义（默认格式）<br>2：转义</p><p>投递Json格式。<br>JsonType为1：和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>JsonType为2：转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     * 
                     */
                    void SetJsonType(const int64_t& _jsonType);

                    /**
                     * 判断参数 JsonType 是否已赋值
                     * @return JsonType 是否已赋值
                     * 
                     */
                    bool JsonTypeHasBeenSet() const;

                    /**
                     * 获取<p>数值类型自动转换开关</p><p>枚举值：</p><ul><li>true： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）会被自动转换为数值类型（int / float）。</li><li>false： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）为字符串。</li></ul><p>默认值：false</p>
                     * @return AutoConvertNumber <p>数值类型自动转换开关</p><p>枚举值：</p><ul><li>true： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）会被自动转换为数值类型（int / float）。</li><li>false： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）为字符串。</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetAutoConvertNumber() const;

                    /**
                     * 设置<p>数值类型自动转换开关</p><p>枚举值：</p><ul><li>true： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）会被自动转换为数值类型（int / float）。</li><li>false： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）为字符串。</li></ul><p>默认值：false</p>
                     * @param _autoConvertNumber <p>数值类型自动转换开关</p><p>枚举值：</p><ul><li>true： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）会被自动转换为数值类型（int / float）。</li><li>false： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）为字符串。</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetAutoConvertNumber(const bool& _autoConvertNumber);

                    /**
                     * 判断参数 AutoConvertNumber 是否已赋值
                     * @return AutoConvertNumber 是否已赋值
                     * 
                     */
                    bool AutoConvertNumberHasBeenSet() const;

                private:

                    /**
                     * <p>消费数据格式。 0：原始内容；1：JSON。</p>
                     */
                    int64_t m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>是否投递 TAG 信息<br>Format为0时，此字段不需要赋值</p>
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * <p>元数据信息列表, 可选值为：__SOURCE__、__FILENAME__<br>、__TIMESTAMP__、__HOSTNAME__、__PKGID__<br>Format为0时，此字段不需要赋值</p>
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * <p>tag数据处理方式：1:不平铺（默认值）；2:平铺。</p><p>不平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>平铺示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     */
                    int64_t m_tagTransaction;
                    bool m_tagTransactionHasBeenSet;

                    /**
                     * <p>消费数据Json格式：<br>1：不转义（默认格式）<br>2：转义</p><p>投递Json格式。<br>JsonType为1：和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>JsonType为2：转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     */
                    int64_t m_jsonType;
                    bool m_jsonTypeHasBeenSet;

                    /**
                     * <p>数值类型自动转换开关</p><p>枚举值：</p><ul><li>true： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）会被自动转换为数值类型（int / float）。</li><li>false： JSON 结构中第一层级的 value 中的数字字符串（如 &quot;123&quot; ）为字符串。</li></ul><p>默认值：false</p>
                     */
                    bool m_autoConvertNumber;
                    bool m_autoConvertNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKACONSUMERCONTENT_H_
