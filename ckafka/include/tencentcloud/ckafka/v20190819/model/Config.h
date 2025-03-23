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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONFIG_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONFIG_H_

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
                * 高级配置对象
                */
                class Config : public AbstractModel
                {
                public:
                    Config();
                    ~Config() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息保留时间
                     * @return Retention 消息保留时间
                     * 
                     */
                    int64_t GetRetention() const;

                    /**
                     * 设置消息保留时间
                     * @param _retention 消息保留时间
                     * 
                     */
                    void SetRetention(const int64_t& _retention);

                    /**
                     * 判断参数 Retention 是否已赋值
                     * @return Retention 是否已赋值
                     * 
                     */
                    bool RetentionHasBeenSet() const;

                    /**
                     * 获取最小同步复制数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinInsyncReplicas 最小同步复制数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置最小同步复制数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minInsyncReplicas 最小同步复制数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinInsyncReplicas(const int64_t& _minInsyncReplicas);

                    /**
                     * 判断参数 MinInsyncReplicas 是否已赋值
                     * @return MinInsyncReplicas 是否已赋值
                     * 
                     */
                    bool MinInsyncReplicasHasBeenSet() const;

                    /**
                     * 获取日志清理模式，默认 delete。
delete：日志按保存时间删除；compact：日志按 key 压缩；compact, delete：日志按 key 压缩且会保存时间删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CleanUpPolicy 日志清理模式，默认 delete。
delete：日志按保存时间删除；compact：日志按 key 压缩；compact, delete：日志按 key 压缩且会保存时间删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置日志清理模式，默认 delete。
delete：日志按保存时间删除；compact：日志按 key 压缩；compact, delete：日志按 key 压缩且会保存时间删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cleanUpPolicy 日志清理模式，默认 delete。
delete：日志按保存时间删除；compact：日志按 key 压缩；compact, delete：日志按 key 压缩且会保存时间删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCleanUpPolicy(const std::string& _cleanUpPolicy);

                    /**
                     * 判断参数 CleanUpPolicy 是否已赋值
                     * @return CleanUpPolicy 是否已赋值
                     * 
                     */
                    bool CleanUpPolicyHasBeenSet() const;

                    /**
                     * 获取Segment 分片滚动的时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentMs Segment 分片滚动的时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置Segment 分片滚动的时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentMs Segment 分片滚动的时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentMs(const int64_t& _segmentMs);

                    /**
                     * 判断参数 SegmentMs 是否已赋值
                     * @return SegmentMs 是否已赋值
                     * 
                     */
                    bool SegmentMsHasBeenSet() const;

                    /**
                     * 获取0表示 false。 1表示 true。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UncleanLeaderElectionEnable 0表示 false。 1表示 true。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置0表示 false。 1表示 true。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uncleanLeaderElectionEnable 0表示 false。 1表示 true。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     * 
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取Segment 分片滚动的字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentBytes Segment 分片滚动的字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSegmentBytes() const;

                    /**
                     * 设置Segment 分片滚动的字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentBytes Segment 分片滚动的字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentBytes(const int64_t& _segmentBytes);

                    /**
                     * 判断参数 SegmentBytes 是否已赋值
                     * @return SegmentBytes 是否已赋值
                     * 
                     */
                    bool SegmentBytesHasBeenSet() const;

                    /**
                     * 获取最大消息字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMessageBytes 最大消息字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置最大消息字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxMessageBytes 最大消息字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxMessageBytes(const int64_t& _maxMessageBytes);

                    /**
                     * 判断参数 MaxMessageBytes 是否已赋值
                     * @return MaxMessageBytes 是否已赋值
                     * 
                     */
                    bool MaxMessageBytesHasBeenSet() const;

                    /**
                     * 获取消息保留文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionBytes 消息保留文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置消息保留文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionBytes 消息保留文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionBytes(const int64_t& _retentionBytes);

                    /**
                     * 判断参数 RetentionBytes 是否已赋值
                     * @return RetentionBytes 是否已赋值
                     * 
                     */
                    bool RetentionBytesHasBeenSet() const;

                    /**
                     * 获取消息保存的时间类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogMsgTimestampType 消息保存的时间类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogMsgTimestampType() const;

                    /**
                     * 设置消息保存的时间类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logMsgTimestampType 消息保存的时间类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogMsgTimestampType(const std::string& _logMsgTimestampType);

                    /**
                     * 判断参数 LogMsgTimestampType 是否已赋值
                     * @return LogMsgTimestampType 是否已赋值
                     * 
                     */
                    bool LogMsgTimestampTypeHasBeenSet() const;

                private:

                    /**
                     * 消息保留时间
                     */
                    int64_t m_retention;
                    bool m_retentionHasBeenSet;

                    /**
                     * 最小同步复制数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * 日志清理模式，默认 delete。
delete：日志按保存时间删除；compact：日志按 key 压缩；compact, delete：日志按 key 压缩且会保存时间删除。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * Segment 分片滚动的时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * 0表示 false。 1表示 true。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * Segment 分片滚动的字节数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_segmentBytes;
                    bool m_segmentBytesHasBeenSet;

                    /**
                     * 最大消息字节数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * 消息保留文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * 消息保存的时间类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logMsgTimestampType;
                    bool m_logMsgTimestampTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONFIG_H_
