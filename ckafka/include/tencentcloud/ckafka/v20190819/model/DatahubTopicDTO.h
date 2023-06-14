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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTOPICDTO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTOPICDTO_H_

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
                * Datahub主题
                */
                class DatahubTopicDTO : public AbstractModel
                {
                public:
                    DatahubTopicDTO();
                    ~DatahubTopicDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Topic名称
                     * @return TopicName Topic名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic名称
                     * @param _topicName Topic名称
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Topic Id
                     * @return TopicId Topic Id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic Id
                     * @param _topicId Topic Id
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
                     * 获取分区数
                     * @return PartitionNum 分区数
                     * 
                     */
                    uint64_t GetPartitionNum() const;

                    /**
                     * 设置分区数
                     * @param _partitionNum 分区数
                     * 
                     */
                    void SetPartitionNum(const uint64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return RetentionMs 过期时间
                     * 
                     */
                    uint64_t GetRetentionMs() const;

                    /**
                     * 设置过期时间
                     * @param _retentionMs 过期时间
                     * 
                     */
                    void SetRetentionMs(const uint64_t& _retentionMs);

                    /**
                     * 判断参数 RetentionMs 是否已赋值
                     * @return RetentionMs 是否已赋值
                     * 
                     */
                    bool RetentionMsHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取状态，1使用中，2删除中
                     * @return Status 状态，1使用中，2删除中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态，1使用中，2删除中
                     * @param _status 状态，1使用中，2删除中
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Topic名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic Id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 分区数
                     */
                    uint64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * 过期时间
                     */
                    uint64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 状态，1使用中，2删除中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTOPICDTO_H_
