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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETPARTITION_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETPARTITION_H_

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
                * 组偏移量分区对象
                */
                class GroupOffsetPartition : public AbstractModel
                {
                public:
                    GroupOffsetPartition();
                    ~GroupOffsetPartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取topic 的 partitionId
                     * @return Partition topic 的 partitionId
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置topic 的 partitionId
                     * @param _partition topic 的 partitionId
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取consumer 提交的 offset 位置
                     * @return Offset consumer 提交的 offset 位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置consumer 提交的 offset 位置
                     * @param _offset consumer 提交的 offset 位置
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取支持消费者提交消息时，传入 metadata 作为它用，当前一般为空字符串
                     * @return Metadata 支持消费者提交消息时，传入 metadata 作为它用，当前一般为空字符串
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置支持消费者提交消息时，传入 metadata 作为它用，当前一般为空字符串
                     * @param _metadata 支持消费者提交消息时，传入 metadata 作为它用，当前一般为空字符串
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取错误码
                     * @return ErrorCode 错误码
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置错误码
                     * @param _errorCode 错误码
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取当前 partition 最新的 offset
                     * @return LogEndOffset 当前 partition 最新的 offset
                     * 
                     */
                    int64_t GetLogEndOffset() const;

                    /**
                     * 设置当前 partition 最新的 offset
                     * @param _logEndOffset 当前 partition 最新的 offset
                     * 
                     */
                    void SetLogEndOffset(const int64_t& _logEndOffset);

                    /**
                     * 判断参数 LogEndOffset 是否已赋值
                     * @return LogEndOffset 是否已赋值
                     * 
                     */
                    bool LogEndOffsetHasBeenSet() const;

                    /**
                     * 获取未消费的消息个数
                     * @return Lag 未消费的消息个数
                     * 
                     */
                    int64_t GetLag() const;

                    /**
                     * 设置未消费的消息个数
                     * @param _lag 未消费的消息个数
                     * 
                     */
                    void SetLag(const int64_t& _lag);

                    /**
                     * 判断参数 Lag 是否已赋值
                     * @return Lag 是否已赋值
                     * 
                     */
                    bool LagHasBeenSet() const;

                private:

                    /**
                     * topic 的 partitionId
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * consumer 提交的 offset 位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 支持消费者提交消息时，传入 metadata 作为它用，当前一般为空字符串
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 错误码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 当前 partition 最新的 offset
                     */
                    int64_t m_logEndOffset;
                    bool m_logEndOffsetHasBeenSet;

                    /**
                     * 未消费的消息个数
                     */
                    int64_t m_lag;
                    bool m_lagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETPARTITION_H_
