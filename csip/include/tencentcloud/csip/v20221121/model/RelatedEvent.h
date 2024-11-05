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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RELATEDEVENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RELATEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 相关攻击事件结构
                */
                class RelatedEvent : public AbstractModel
                {
                public:
                    RelatedEvent();
                    ~RelatedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID
                     * @return EventID 事件ID
                     * 
                     */
                    std::string GetEventID() const;

                    /**
                     * 设置事件ID
                     * @param _eventID 事件ID
                     * 
                     */
                    void SetEventID(const std::string& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取事件描述
                     * @return Description 事件描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件描述
                     * @param _description 事件描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取与事件关联的告警数量
                     * @return RelatedCount 与事件关联的告警数量
                     * 
                     */
                    int64_t GetRelatedCount() const;

                    /**
                     * 设置与事件关联的告警数量
                     * @param _relatedCount 与事件关联的告警数量
                     * 
                     */
                    void SetRelatedCount(const int64_t& _relatedCount);

                    /**
                     * 判断参数 RelatedCount 是否已赋值
                     * @return RelatedCount 是否已赋值
                     * 
                     */
                    bool RelatedCountHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    std::string m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * 事件描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 与事件关联的告警数量
                     */
                    int64_t m_relatedCount;
                    bool m_relatedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RELATEDEVENT_H_
