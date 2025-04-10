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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHPIPELINEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHPIPELINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Logstash管道信息
                */
                class LogstashPipelineInfo : public AbstractModel
                {
                public:
                    LogstashPipelineInfo();
                    ~LogstashPipelineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取管道ID
                     * @return PipelineId 管道ID
                     * 
                     */
                    std::string GetPipelineId() const;

                    /**
                     * 设置管道ID
                     * @param _pipelineId 管道ID
                     * 
                     */
                    void SetPipelineId(const std::string& _pipelineId);

                    /**
                     * 判断参数 PipelineId 是否已赋值
                     * @return PipelineId 是否已赋值
                     * 
                     */
                    bool PipelineIdHasBeenSet() const;

                    /**
                     * 获取管道描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PipelineDesc 管道描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPipelineDesc() const;

                    /**
                     * 设置管道描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pipelineDesc 管道描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPipelineDesc(const std::string& _pipelineDesc);

                    /**
                     * 判断参数 PipelineDesc 是否已赋值
                     * @return PipelineDesc 是否已赋值
                     * 
                     */
                    bool PipelineDescHasBeenSet() const;

                    /**
                     * 获取管道配置内容
                     * @return Config 管道配置内容
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置管道配置内容
                     * @param _config 管道配置内容
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取管道状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 管道状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置管道状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 管道状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取管道的Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Workers 管道的Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWorkers() const;

                    /**
                     * 设置管道的Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workers 管道的Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkers(const uint64_t& _workers);

                    /**
                     * 判断参数 Workers 是否已赋值
                     * @return Workers 是否已赋值
                     * 
                     */
                    bool WorkersHasBeenSet() const;

                    /**
                     * 获取管道批处理大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchSize 管道批处理大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBatchSize() const;

                    /**
                     * 设置管道批处理大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchSize 管道批处理大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchSize(const uint64_t& _batchSize);

                    /**
                     * 判断参数 BatchSize 是否已赋值
                     * @return BatchSize 是否已赋值
                     * 
                     */
                    bool BatchSizeHasBeenSet() const;

                    /**
                     * 获取管道批处理延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchDelay 管道批处理延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBatchDelay() const;

                    /**
                     * 设置管道批处理延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchDelay 管道批处理延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchDelay(const uint64_t& _batchDelay);

                    /**
                     * 判断参数 BatchDelay 是否已赋值
                     * @return BatchDelay 是否已赋值
                     * 
                     */
                    bool BatchDelayHasBeenSet() const;

                    /**
                     * 获取管道缓冲队列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueType 管道缓冲队列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置管道缓冲队列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueType 管道缓冲队列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueType(const std::string& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取管道缓冲队列大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueMaxBytes 管道缓冲队列大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueMaxBytes() const;

                    /**
                     * 设置管道缓冲队列大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueMaxBytes 管道缓冲队列大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueMaxBytes(const std::string& _queueMaxBytes);

                    /**
                     * 判断参数 QueueMaxBytes 是否已赋值
                     * @return QueueMaxBytes 是否已赋值
                     * 
                     */
                    bool QueueMaxBytesHasBeenSet() const;

                    /**
                     * 获取管道缓冲队列检查点写入数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueCheckPointWrites 管道缓冲队列检查点写入数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQueueCheckPointWrites() const;

                    /**
                     * 设置管道缓冲队列检查点写入数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueCheckPointWrites 管道缓冲队列检查点写入数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueCheckPointWrites(const uint64_t& _queueCheckPointWrites);

                    /**
                     * 判断参数 QueueCheckPointWrites 是否已赋值
                     * @return QueueCheckPointWrites 是否已赋值
                     * 
                     */
                    bool QueueCheckPointWritesHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 管道ID
                     */
                    std::string m_pipelineId;
                    bool m_pipelineIdHasBeenSet;

                    /**
                     * 管道描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pipelineDesc;
                    bool m_pipelineDescHasBeenSet;

                    /**
                     * 管道配置内容
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 管道状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 管道的Worker数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_workers;
                    bool m_workersHasBeenSet;

                    /**
                     * 管道批处理大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * 管道批处理延迟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_batchDelay;
                    bool m_batchDelayHasBeenSet;

                    /**
                     * 管道缓冲队列类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * 管道缓冲队列大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueMaxBytes;
                    bool m_queueMaxBytesHasBeenSet;

                    /**
                     * 管道缓冲队列检查点写入数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_queueCheckPointWrites;
                    bool m_queueCheckPointWritesHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHPIPELINEINFO_H_
