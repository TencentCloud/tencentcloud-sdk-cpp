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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CUSTOMERACTIONEVENTDETAIL_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CUSTOMERACTIONEVENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 外部联系人SaaS使用明细数据
                */
                class CustomerActionEventDetail : public AbstractModel
                {
                public:
                    CustomerActionEventDetail();
                    ~CustomerActionEventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件码
                     * @return EventCode 事件码
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置事件码
                     * @param _eventCode 事件码
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取事件类型
                     * @return EventType 事件类型
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置事件类型
                     * @param _eventType 事件类型
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取事件来源
                     * @return EventSource 事件来源
                     * 
                     */
                    int64_t GetEventSource() const;

                    /**
                     * 设置事件来源
                     * @param _eventSource 事件来源
                     * 
                     */
                    void SetEventSource(const int64_t& _eventSource);

                    /**
                     * 判断参数 EventSource 是否已赋值
                     * @return EventSource 是否已赋值
                     * 
                     */
                    bool EventSourceHasBeenSet() const;

                    /**
                     * 获取外部联系人id
                     * @return ExternalUserId 外部联系人id
                     * 
                     */
                    std::string GetExternalUserId() const;

                    /**
                     * 设置外部联系人id
                     * @param _externalUserId 外部联系人id
                     * 
                     */
                    void SetExternalUserId(const std::string& _externalUserId);

                    /**
                     * 判断参数 ExternalUserId 是否已赋值
                     * @return ExternalUserId 是否已赋值
                     * 
                     */
                    bool ExternalUserIdHasBeenSet() const;

                    /**
                     * 获取销售顾问id
                     * @return SalesId 销售顾问id
                     * 
                     */
                    uint64_t GetSalesId() const;

                    /**
                     * 设置销售顾问id
                     * @param _salesId 销售顾问id
                     * 
                     */
                    void SetSalesId(const uint64_t& _salesId);

                    /**
                     * 判断参数 SalesId 是否已赋值
                     * @return SalesId 是否已赋值
                     * 
                     */
                    bool SalesIdHasBeenSet() const;

                    /**
                     * 获取素材类型
                     * @return MaterialType 素材类型
                     * 
                     */
                    int64_t GetMaterialType() const;

                    /**
                     * 设置素材类型
                     * @param _materialType 素材类型
                     * 
                     */
                    void SetMaterialType(const int64_t& _materialType);

                    /**
                     * 判断参数 MaterialType 是否已赋值
                     * @return MaterialType 是否已赋值
                     * 
                     */
                    bool MaterialTypeHasBeenSet() const;

                    /**
                     * 获取素材编号id
                     * @return MaterialId 素材编号id
                     * 
                     */
                    uint64_t GetMaterialId() const;

                    /**
                     * 设置素材编号id
                     * @param _materialId 素材编号id
                     * 
                     */
                    void SetMaterialId(const uint64_t& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取事件上报时间，单位：秒
                     * @return EventTime 事件上报时间，单位：秒
                     * 
                     */
                    uint64_t GetEventTime() const;

                    /**
                     * 设置事件上报时间，单位：秒
                     * @param _eventTime 事件上报时间，单位：秒
                     * 
                     */
                    void SetEventTime(const uint64_t& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                private:

                    /**
                     * 事件码
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * 事件类型
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件来源
                     */
                    int64_t m_eventSource;
                    bool m_eventSourceHasBeenSet;

                    /**
                     * 外部联系人id
                     */
                    std::string m_externalUserId;
                    bool m_externalUserIdHasBeenSet;

                    /**
                     * 销售顾问id
                     */
                    uint64_t m_salesId;
                    bool m_salesIdHasBeenSet;

                    /**
                     * 素材类型
                     */
                    int64_t m_materialType;
                    bool m_materialTypeHasBeenSet;

                    /**
                     * 素材编号id
                     */
                    uint64_t m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 事件上报时间，单位：秒
                     */
                    uint64_t m_eventTime;
                    bool m_eventTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CUSTOMERACTIONEVENTDETAIL_H_
