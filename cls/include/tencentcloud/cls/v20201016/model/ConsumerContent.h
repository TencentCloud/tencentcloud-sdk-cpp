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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_

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
                * 投递任务出入参 Content
                */
                class ConsumerContent : public AbstractModel
                {
                public:
                    ConsumerContent();
                    ~ConsumerContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否投递 TAG 信息。<br>当EnableTag为true时，表示投递TAG元信息。</p>
                     * @return EnableTag <p>是否投递 TAG 信息。<br>当EnableTag为true时，表示投递TAG元信息。</p>
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置<p>是否投递 TAG 信息。<br>当EnableTag为true时，表示投递TAG元信息。</p>
                     * @param _enableTag <p>是否投递 TAG 信息。<br>当EnableTag为true时，表示投递TAG元信息。</p>
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
                     * 获取<p>需要投递的元数据列表，目前仅支持：__SOURCE__，__FILENAME__，__TIMESTAMP__，__HOSTNAME__和__PKGID__</p>
                     * @return MetaFields <p>需要投递的元数据列表，目前仅支持：__SOURCE__，__FILENAME__，__TIMESTAMP__，__HOSTNAME__和__PKGID__</p>
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置<p>需要投递的元数据列表，目前仅支持：__SOURCE__，__FILENAME__，__TIMESTAMP__，__HOSTNAME__和__PKGID__</p>
                     * @param _metaFields <p>需要投递的元数据列表，目前仅支持：__SOURCE__，__FILENAME__，__TIMESTAMP__，__HOSTNAME__和__PKGID__</p>
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
                     * 获取<p>当EnableTag为true时，必须填写TagJsonNotTiled字段。<br>TagJsonNotTiled用于标识tag信息是否json平铺。</p><p>TagJsonNotTiled为true时不平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>TagJsonNotTiled为false时平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * @return TagJsonNotTiled <p>当EnableTag为true时，必须填写TagJsonNotTiled字段。<br>TagJsonNotTiled用于标识tag信息是否json平铺。</p><p>TagJsonNotTiled为true时不平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>TagJsonNotTiled为false时平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * 
                     */
                    bool GetTagJsonNotTiled() const;

                    /**
                     * 设置<p>当EnableTag为true时，必须填写TagJsonNotTiled字段。<br>TagJsonNotTiled用于标识tag信息是否json平铺。</p><p>TagJsonNotTiled为true时不平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>TagJsonNotTiled为false时平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * @param _tagJsonNotTiled <p>当EnableTag为true时，必须填写TagJsonNotTiled字段。<br>TagJsonNotTiled用于标识tag信息是否json平铺。</p><p>TagJsonNotTiled为true时不平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>TagJsonNotTiled为false时平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * 
                     */
                    void SetTagJsonNotTiled(const bool& _tagJsonNotTiled);

                    /**
                     * 判断参数 TagJsonNotTiled 是否已赋值
                     * @return TagJsonNotTiled 是否已赋值
                     * 
                     */
                    bool TagJsonNotTiledHasBeenSet() const;

                    /**
                     * 获取<p>投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。</p>
                     * @return TimestampAccuracy <p>投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。</p>
                     * 
                     */
                    int64_t GetTimestampAccuracy() const;

                    /**
                     * 设置<p>投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。</p>
                     * @param _timestampAccuracy <p>投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。</p>
                     * 
                     */
                    void SetTimestampAccuracy(const int64_t& _timestampAccuracy);

                    /**
                     * 判断参数 TimestampAccuracy 是否已赋值
                     * @return TimestampAccuracy 是否已赋值
                     * 
                     */
                    bool TimestampAccuracyHasBeenSet() const;

                    /**
                     * 获取<p>投递Json格式。</p><p>枚举值：</p><ul><li>0： 转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1： 和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
                     * @return JsonType <p>投递Json格式。</p><p>枚举值：</p><ul><li>0： 转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1： 和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
                     * 
                     */
                    int64_t GetJsonType() const;

                    /**
                     * 设置<p>投递Json格式。</p><p>枚举值：</p><ul><li>0： 转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1： 和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
                     * @param _jsonType <p>投递Json格式。</p><p>枚举值：</p><ul><li>0： 转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1： 和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
                     * 
                     */
                    void SetJsonType(const int64_t& _jsonType);

                    /**
                     * 判断参数 JsonType 是否已赋值
                     * @return JsonType 是否已赋值
                     * 
                     */
                    bool JsonTypeHasBeenSet() const;

                private:

                    /**
                     * <p>是否投递 TAG 信息。<br>当EnableTag为true时，表示投递TAG元信息。</p>
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * <p>需要投递的元数据列表，目前仅支持：__SOURCE__，__FILENAME__，__TIMESTAMP__，__HOSTNAME__和__PKGID__</p>
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * <p>当EnableTag为true时，必须填写TagJsonNotTiled字段。<br>TagJsonNotTiled用于标识tag信息是否json平铺。</p><p>TagJsonNotTiled为true时不平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>不平铺：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>TagJsonNotTiled为false时平铺，示例：<br>TAG信息：<code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>平铺：<code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     */
                    bool m_tagJsonNotTiled;
                    bool m_tagJsonNotTiledHasBeenSet;

                    /**
                     * <p>投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。</p>
                     */
                    int64_t m_timestampAccuracy;
                    bool m_timestampAccuracyHasBeenSet;

                    /**
                     * <p>投递Json格式。</p><p>枚举值：</p><ul><li>0： 转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1： 和原始日志一致，不转义。示例：<br>日志原文：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>投递到Ckafka：<code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
                     */
                    int64_t m_jsonType;
                    bool m_jsonTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_
