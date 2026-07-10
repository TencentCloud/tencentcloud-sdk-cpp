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
                     * 获取<p>事件id</p>
                     * @return EventId <p>事件id</p>
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置<p>事件id</p>
                     * @param _eventId <p>事件id</p>
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
                     * 获取<p>事件名称</p>
                     * @return EventShowName <p>事件名称</p>
                     * 
                     */
                    std::string GetEventShowName() const;

                    /**
                     * 设置<p>事件名称</p>
                     * @param _eventShowName <p>事件名称</p>
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
                     * 获取<p>是否需要恢复</p>
                     * @return NeedRecovered <p>是否需要恢复</p>
                     * 
                     */
                    bool GetNeedRecovered() const;

                    /**
                     * 设置<p>是否需要恢复</p>
                     * @param _needRecovered <p>是否需要恢复</p>
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
                     * 获取<p>事件类型，预留字段，当前固定取值为2</p>
                     * @return Type <p>事件类型，预留字段，当前固定取值为2</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>事件类型，预留字段，当前固定取值为2</p>
                     * @param _type <p>事件类型，预留字段，当前固定取值为2</p>
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
                     * <p>事件id</p>
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>事件名称</p>
                     */
                    std::string m_eventShowName;
                    bool m_eventShowNameHasBeenSet;

                    /**
                     * <p>是否需要恢复</p>
                     */
                    bool m_needRecovered;
                    bool m_needRecoveredHasBeenSet;

                    /**
                     * <p>事件类型，预留字段，当前固定取值为2</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTEVENTMETRIC_H_
