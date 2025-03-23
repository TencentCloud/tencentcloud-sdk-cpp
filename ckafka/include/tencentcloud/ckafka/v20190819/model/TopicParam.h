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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICPARAM_H_

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
                * Topic配置
                */
                class TopicParam : public AbstractModel
                {
                public:
                    TopicParam();
                    ~TopicParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单独售卖Topic的Topic名称
                     * @return Resource 单独售卖Topic的Topic名称
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置单独售卖Topic的Topic名称
                     * @param _resource 单独售卖Topic的Topic名称
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffsetType Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffsetType() const;

                    /**
                     * 设置Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offsetType Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffsetType(const std::string& _offsetType);

                    /**
                     * 判断参数 OffsetType 是否已赋值
                     * @return OffsetType 是否已赋值
                     * 
                     */
                    bool OffsetTypeHasBeenSet() const;

                    /**
                     * 获取Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Topic的TopicId【出参】
                     * @return TopicId Topic的TopicId【出参】
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic的TopicId【出参】
                     * @param _topicId Topic的TopicId【出参】
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取写入Topic时是否进行压缩，不开启填"none"，开启的话，可选择"gzip", "snappy", "lz4"中的一个进行填写。
                     * @return CompressionType 写入Topic时是否进行压缩，不开启填"none"，开启的话，可选择"gzip", "snappy", "lz4"中的一个进行填写。
                     * 
                     */
                    std::string GetCompressionType() const;

                    /**
                     * 设置写入Topic时是否进行压缩，不开启填"none"，开启的话，可选择"gzip", "snappy", "lz4"中的一个进行填写。
                     * @param _compressionType 写入Topic时是否进行压缩，不开启填"none"，开启的话，可选择"gzip", "snappy", "lz4"中的一个进行填写。
                     * 
                     */
                    void SetCompressionType(const std::string& _compressionType);

                    /**
                     * 判断参数 CompressionType 是否已赋值
                     * @return CompressionType 是否已赋值
                     * 
                     */
                    bool CompressionTypeHasBeenSet() const;

                    /**
                     * 获取使用的Topic是否需要自动创建（目前只支持SOURCE流入任务）
                     * @return UseAutoCreateTopic 使用的Topic是否需要自动创建（目前只支持SOURCE流入任务）
                     * 
                     */
                    bool GetUseAutoCreateTopic() const;

                    /**
                     * 设置使用的Topic是否需要自动创建（目前只支持SOURCE流入任务）
                     * @param _useAutoCreateTopic 使用的Topic是否需要自动创建（目前只支持SOURCE流入任务）
                     * 
                     */
                    void SetUseAutoCreateTopic(const bool& _useAutoCreateTopic);

                    /**
                     * 判断参数 UseAutoCreateTopic 是否已赋值
                     * @return UseAutoCreateTopic 是否已赋值
                     * 
                     */
                    bool UseAutoCreateTopicHasBeenSet() const;

                    /**
                     * 获取源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
                     * @return MsgMultiple 源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
                     * 
                     */
                    int64_t GetMsgMultiple() const;

                    /**
                     * 设置源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
                     * @param _msgMultiple 源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
                     * 
                     */
                    void SetMsgMultiple(const int64_t& _msgMultiple);

                    /**
                     * 判断参数 MsgMultiple 是否已赋值
                     * @return MsgMultiple 是否已赋值
                     * 
                     */
                    bool MsgMultipleHasBeenSet() const;

                private:

                    /**
                     * 单独售卖Topic的Topic名称
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offsetType;
                    bool m_offsetTypeHasBeenSet;

                    /**
                     * Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Topic的TopicId【出参】
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 写入Topic时是否进行压缩，不开启填"none"，开启的话，可选择"gzip", "snappy", "lz4"中的一个进行填写。
                     */
                    std::string m_compressionType;
                    bool m_compressionTypeHasBeenSet;

                    /**
                     * 使用的Topic是否需要自动创建（目前只支持SOURCE流入任务）
                     */
                    bool m_useAutoCreateTopic;
                    bool m_useAutoCreateTopicHasBeenSet;

                    /**
                     * 源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
                     */
                    int64_t m_msgMultiple;
                    bool m_msgMultipleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICPARAM_H_
