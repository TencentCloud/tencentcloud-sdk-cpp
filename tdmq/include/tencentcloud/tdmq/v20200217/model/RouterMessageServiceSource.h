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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERMESSAGESERVICESOURCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERMESSAGESERVICESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * rocketmq router mns 源信息
                */
                class RouterMessageServiceSource : public AbstractModel
                {
                public:
                    RouterMessageServiceSource();
                    ~RouterMessageServiceSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKey <p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessKey <p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>mns接入点。<br>需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoint <p>mns接入点。<br>需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>mns接入点。<br>需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpoint <p>mns接入点。<br>需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取<p>mns queue名字。<br>可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Queue <p>mns queue名字。<br>可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>mns queue名字。<br>可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queue <p>mns queue名字。<br>可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取<p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey <p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey <p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>是否自动解码mns body。<br>ON：自动解码，复制后的消息内容为解码后的明文。<br>OFF：不用解码，保持Mns消息体原始状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableDecodeBody <p>是否自动解码mns body。<br>ON：自动解码，复制后的消息内容为解码后的明文。<br>OFF：不用解码，保持Mns消息体原始状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnableDecodeBody() const;

                    /**
                     * 设置<p>是否自动解码mns body。<br>ON：自动解码，复制后的消息内容为解码后的明文。<br>OFF：不用解码，保持Mns消息体原始状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableDecodeBody <p>是否自动解码mns body。<br>ON：自动解码，复制后的消息内容为解码后的明文。<br>OFF：不用解码，保持Mns消息体原始状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableDecodeBody(const std::string& _enableDecodeBody);

                    /**
                     * 判断参数 EnableDecodeBody 是否已赋值
                     * @return EnableDecodeBody 是否已赋值
                     * 
                     */
                    bool EnableDecodeBodyHasBeenSet() const;

                    /**
                     * 获取<p>mns消费并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceConsumeConcurrentThreadCount <p>mns消费并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSourceConsumeConcurrentThreadCount() const;

                    /**
                     * 设置<p>mns消费并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceConsumeConcurrentThreadCount <p>mns消费并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceConsumeConcurrentThreadCount(const int64_t& _sourceConsumeConcurrentThreadCount);

                    /**
                     * 判断参数 SourceConsumeConcurrentThreadCount 是否已赋值
                     * @return SourceConsumeConcurrentThreadCount 是否已赋值
                     * 
                     */
                    bool SourceConsumeConcurrentThreadCountHasBeenSet() const;

                    /**
                     * 获取<p>过滤时间戳，毫秒级时间戳</p>
                     * @return FilterFromTimestampMs <p>过滤时间戳，毫秒级时间戳</p>
                     * 
                     */
                    int64_t GetFilterFromTimestampMs() const;

                    /**
                     * 设置<p>过滤时间戳，毫秒级时间戳</p>
                     * @param _filterFromTimestampMs <p>过滤时间戳，毫秒级时间戳</p>
                     * 
                     */
                    void SetFilterFromTimestampMs(const int64_t& _filterFromTimestampMs);

                    /**
                     * 判断参数 FilterFromTimestampMs 是否已赋值
                     * @return FilterFromTimestampMs 是否已赋值
                     * 
                     */
                    bool FilterFromTimestampMsHasBeenSet() const;

                private:

                    /**
                     * <p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>mns接入点。<br>需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>mns queue名字。<br>可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>是否自动解码mns body。<br>ON：自动解码，复制后的消息内容为解码后的明文。<br>OFF：不用解码，保持Mns消息体原始状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enableDecodeBody;
                    bool m_enableDecodeBodyHasBeenSet;

                    /**
                     * <p>mns消费并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sourceConsumeConcurrentThreadCount;
                    bool m_sourceConsumeConcurrentThreadCountHasBeenSet;

                    /**
                     * <p>过滤时间戳，毫秒级时间戳</p>
                     */
                    int64_t m_filterFromTimestampMs;
                    bool m_filterFromTimestampMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERMESSAGESERVICESOURCE_H_
