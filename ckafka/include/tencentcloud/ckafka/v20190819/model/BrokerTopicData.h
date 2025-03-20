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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BROKERTOPICDATA_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BROKERTOPICDATA_H_

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
                * 主题占用Broker磁盘大小
                */
                class BrokerTopicData : public AbstractModel
                {
                public:
                    BrokerTopicData();
                    ~BrokerTopicData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名称
                     * @return TopicName 主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称
                     * @param _topicName 主题名称
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
                     * 获取主题Id
                     * @return TopicId 主题Id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题Id
                     * @param _topicId 主题Id
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
                     * 获取主题占用Broker 容量大小
                     * @return DataSize 主题占用Broker 容量大小
                     * 
                     */
                    uint64_t GetDataSize() const;

                    /**
                     * 设置主题占用Broker 容量大小
                     * @param _dataSize 主题占用Broker 容量大小
                     * 
                     */
                    void SetDataSize(const uint64_t& _dataSize);

                    /**
                     * 判断参数 DataSize 是否已赋值
                     * @return DataSize 是否已赋值
                     * 
                     */
                    bool DataSizeHasBeenSet() const;

                private:

                    /**
                     * 主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题Id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 主题占用Broker 容量大小
                     */
                    uint64_t m_dataSize;
                    bool m_dataSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BROKERTOPICDATA_H_
