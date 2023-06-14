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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_NOTIFICATION_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_NOTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/EventConfig.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 通知信息
                */
                class Notification : public AbstractModel
                {
                public:
                    Notification();
                    ~Notification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CMQ主题名字，要求主题名有效且关联订阅
                     * @return TopicName CMQ主题名字，要求主题名有效且关联订阅
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置CMQ主题名字，要求主题名有效且关联订阅
                     * @param _topicName CMQ主题名字，要求主题名有效且关联订阅
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
                     * 获取事件配置
                     * @return EventConfigs 事件配置
                     * 
                     */
                    std::vector<EventConfig> GetEventConfigs() const;

                    /**
                     * 设置事件配置
                     * @param _eventConfigs 事件配置
                     * 
                     */
                    void SetEventConfigs(const std::vector<EventConfig>& _eventConfigs);

                    /**
                     * 判断参数 EventConfigs 是否已赋值
                     * @return EventConfigs 是否已赋值
                     * 
                     */
                    bool EventConfigsHasBeenSet() const;

                private:

                    /**
                     * CMQ主题名字，要求主题名有效且关联订阅
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 事件配置
                     */
                    std::vector<EventConfig> m_eventConfigs;
                    bool m_eventConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_NOTIFICATION_H_
