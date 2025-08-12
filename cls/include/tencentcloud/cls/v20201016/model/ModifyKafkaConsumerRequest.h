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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYKAFKACONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYKAFKACONSUMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KafkaConsumerContent.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyKafkaConsumer请求参数结构体
                */
                class ModifyKafkaConsumerRequest : public AbstractModel
                {
                public:
                    ModifyKafkaConsumerRequest();
                    ~ModifyKafkaConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @return FromTopicId 日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * 
                     */
                    std::string GetFromTopicId() const;

                    /**
                     * 设置日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @param _fromTopicId 日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * 
                     */
                    void SetFromTopicId(const std::string& _fromTopicId);

                    /**
                     * 判断参数 FromTopicId 是否已赋值
                     * @return FromTopicId 是否已赋值
                     * 
                     */
                    bool FromTopicIdHasBeenSet() const;

                    /**
                     * 获取压缩方式。0：不压缩；2：使用Snappy压缩；3：使用LZ4压缩
                     * @return Compression 压缩方式。0：不压缩；2：使用Snappy压缩；3：使用LZ4压缩
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 设置压缩方式。0：不压缩；2：使用Snappy压缩；3：使用LZ4压缩
                     * @param _compression 压缩方式。0：不压缩；2：使用Snappy压缩；3：使用LZ4压缩
                     * 
                     */
                    void SetCompression(const int64_t& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取kafka协议消费数据格式
                     * @return ConsumerContent kafka协议消费数据格式
                     * 
                     */
                    KafkaConsumerContent GetConsumerContent() const;

                    /**
                     * 设置kafka协议消费数据格式
                     * @param _consumerContent kafka协议消费数据格式
                     * 
                     */
                    void SetConsumerContent(const KafkaConsumerContent& _consumerContent);

                    /**
                     * 判断参数 ConsumerContent 是否已赋值
                     * @return ConsumerContent 是否已赋值
                     * 
                     */
                    bool ConsumerContentHasBeenSet() const;

                private:

                    /**
                     * 日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     */
                    std::string m_fromTopicId;
                    bool m_fromTopicIdHasBeenSet;

                    /**
                     * 压缩方式。0：不压缩；2：使用Snappy压缩；3：使用LZ4压缩
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * kafka协议消费数据格式
                     */
                    KafkaConsumerContent m_consumerContent;
                    bool m_consumerContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYKAFKACONSUMERREQUEST_H_
