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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERREQUEST_H_

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
                * OpenKafkaConsumer请求参数结构体
                */
                class OpenKafkaConsumerRequest : public AbstractModel
                {
                public:
                    OpenKafkaConsumerRequest();
                    ~OpenKafkaConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题ID
                     * @return FromTopicId 日志主题ID
                     * 
                     */
                    std::string GetFromTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _fromTopicId 日志主题ID
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
                     * 获取压缩方式[0:NONE；2:SNAPPY；3:LZ4]，默认：0
                     * @return Compression 压缩方式[0:NONE；2:SNAPPY；3:LZ4]，默认：0
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 设置压缩方式[0:NONE；2:SNAPPY；3:LZ4]，默认：0
                     * @param _compression 压缩方式[0:NONE；2:SNAPPY；3:LZ4]，默认：0
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
                     * 日志主题ID
                     */
                    std::string m_fromTopicId;
                    bool m_fromTopicIdHasBeenSet;

                    /**
                     * 压缩方式[0:NONE；2:SNAPPY；3:LZ4]，默认：0
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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERREQUEST_H_
