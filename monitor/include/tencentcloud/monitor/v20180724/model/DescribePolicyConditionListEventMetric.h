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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTEVENTMETRIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTEVENTMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionList.EventMetric
                */
                class DescribePolicyConditionListEventMetric : public AbstractModel
                {
                public:
                    DescribePolicyConditionListEventMetric();
                    ~DescribePolicyConditionListEventMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件id
                     * @return EventId 事件id
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置事件id
                     * @param _eventId 事件id
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取事件名称
                     * @return EventShowName 事件名称
                     * 
                     */
                    std::string GetEventShowName() const;

                    /**
                     * 设置事件名称
                     * @param _eventShowName 事件名称
                     * 
                     */
                    void SetEventShowName(const std::string& _eventShowName);

                    /**
                     * 判断参数 EventShowName 是否已赋值
                     * @return EventShowName 是否已赋值
                     * 
                     */
                    bool EventShowNameHasBeenSet() const;

                    /**
                     * 获取是否需要恢复
                     * @return NeedRecovered 是否需要恢复
                     * 
                     */
                    bool GetNeedRecovered() const;

                    /**
                     * 设置是否需要恢复
                     * @param _needRecovered 是否需要恢复
                     * 
                     */
                    void SetNeedRecovered(const bool& _needRecovered);

                    /**
                     * 判断参数 NeedRecovered 是否已赋值
                     * @return NeedRecovered 是否已赋值
                     * 
                     */
                    bool NeedRecoveredHasBeenSet() const;

                    /**
                     * 获取事件类型，预留字段，当前固定取值为2
                     * @return Type 事件类型，预留字段，当前固定取值为2
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置事件类型，预留字段，当前固定取值为2
                     * @param _type 事件类型，预留字段，当前固定取值为2
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 事件id
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_eventShowName;
                    bool m_eventShowNameHasBeenSet;

                    /**
                     * 是否需要恢复
                     */
                    bool m_needRecovered;
                    bool m_needRecoveredHasBeenSet;

                    /**
                     * 事件类型，预留字段，当前固定取值为2
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTEVENTMETRIC_H_
