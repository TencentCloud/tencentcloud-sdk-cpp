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
                     * 获取是否投递 TAG 信息。
当EnableTag为true时，表示投递TAG元信息。
                     * @return EnableTag 是否投递 TAG 信息。
当EnableTag为true时，表示投递TAG元信息。
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置是否投递 TAG 信息。
当EnableTag为true时，表示投递TAG元信息。
                     * @param _enableTag 是否投递 TAG 信息。
当EnableTag为true时，表示投递TAG元信息。
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
                     * 获取需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_，\_\_TIMESTAMP\_\_，\_\_HOSTNAME\_\_和\_\_PKGID\_\_
                     * @return MetaFields 需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_，\_\_TIMESTAMP\_\_，\_\_HOSTNAME\_\_和\_\_PKGID\_\_
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_，\_\_TIMESTAMP\_\_，\_\_HOSTNAME\_\_和\_\_PKGID\_\_
                     * @param _metaFields 需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_，\_\_TIMESTAMP\_\_，\_\_HOSTNAME\_\_和\_\_PKGID\_\_
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
                     * 获取当EnableTag为true时，必须填写TagJsonNotTiled字段。
TagJsonNotTiled用于标识tag信息是否json平铺。

TagJsonNotTiled为true时不平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
不平铺：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`

TagJsonNotTiled为false时平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
平铺：`{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
                     * @return TagJsonNotTiled 当EnableTag为true时，必须填写TagJsonNotTiled字段。
TagJsonNotTiled用于标识tag信息是否json平铺。

TagJsonNotTiled为true时不平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
不平铺：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`

TagJsonNotTiled为false时平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
平铺：`{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
                     * 
                     */
                    bool GetTagJsonNotTiled() const;

                    /**
                     * 设置当EnableTag为true时，必须填写TagJsonNotTiled字段。
TagJsonNotTiled用于标识tag信息是否json平铺。

TagJsonNotTiled为true时不平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
不平铺：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`

TagJsonNotTiled为false时平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
平铺：`{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
                     * @param _tagJsonNotTiled 当EnableTag为true时，必须填写TagJsonNotTiled字段。
TagJsonNotTiled用于标识tag信息是否json平铺。

TagJsonNotTiled为true时不平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
不平铺：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`

TagJsonNotTiled为false时平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
平铺：`{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
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
                     * 获取投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。
                     * @return TimestampAccuracy 投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。
                     * 
                     */
                    int64_t GetTimestampAccuracy() const;

                    /**
                     * 设置投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。
                     * @param _timestampAccuracy 投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。
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
                     * 获取投递Json格式。
JsonType为0：和原始日志一致，不转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`

JsonType为1：转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
                     * @return JsonType 投递Json格式。
JsonType为0：和原始日志一致，不转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`

JsonType为1：转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
                     * 
                     */
                    int64_t GetJsonType() const;

                    /**
                     * 设置投递Json格式。
JsonType为0：和原始日志一致，不转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`

JsonType为1：转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
                     * @param _jsonType 投递Json格式。
JsonType为0：和原始日志一致，不转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`

JsonType为1：转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
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
                     * 是否投递 TAG 信息。
当EnableTag为true时，表示投递TAG元信息。
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * 需要投递的元数据列表，目前仅支持：\_\_SOURCE\_\_，\_\_FILENAME\_\_，\_\_TIMESTAMP\_\_，\_\_HOSTNAME\_\_和\_\_PKGID\_\_
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * 当EnableTag为true时，必须填写TagJsonNotTiled字段。
TagJsonNotTiled用于标识tag信息是否json平铺。

TagJsonNotTiled为true时不平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
不平铺：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`

TagJsonNotTiled为false时平铺，示例：
TAG信息：`{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
平铺：`{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
                     */
                    bool m_tagJsonNotTiled;
                    bool m_tagJsonNotTiledHasBeenSet;

                    /**
                     * 投递时间戳精度，可选项 [1：秒；2：毫秒] ，默认是1。
                     */
                    int64_t m_timestampAccuracy;
                    bool m_timestampAccuracyHasBeenSet;

                    /**
                     * 投递Json格式。
JsonType为0：和原始日志一致，不转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`

JsonType为1：转义。示例：
日志原文：`{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`
投递到Ckafka：`{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
                     */
                    int64_t m_jsonType;
                    bool m_jsonTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_
