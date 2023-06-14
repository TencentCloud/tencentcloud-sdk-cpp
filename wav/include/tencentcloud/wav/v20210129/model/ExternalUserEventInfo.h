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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALUSEREVENTINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALUSEREVENTINFO_H_

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
                * 外部联系人事件信息
                */
                class ExternalUserEventInfo : public AbstractModel
                {
                public:
                    ExternalUserEventInfo();
                    ~ExternalUserEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件编码, 添加外部联系人(ADD_EXTERNAL_CUSTOMER)/成员删除外部联系人(DELETE_EXTERNAL_CUSTOMER)/外部联系人删除成员(DELETE_FOLLOW_USER)
                     * @return EventCode 事件编码, 添加外部联系人(ADD_EXTERNAL_CUSTOMER)/成员删除外部联系人(DELETE_EXTERNAL_CUSTOMER)/外部联系人删除成员(DELETE_FOLLOW_USER)
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置事件编码, 添加外部联系人(ADD_EXTERNAL_CUSTOMER)/成员删除外部联系人(DELETE_EXTERNAL_CUSTOMER)/外部联系人删除成员(DELETE_FOLLOW_USER)
                     * @param _eventCode 事件编码, 添加外部联系人(ADD_EXTERNAL_CUSTOMER)/成员删除外部联系人(DELETE_EXTERNAL_CUSTOMER)/外部联系人删除成员(DELETE_FOLLOW_USER)
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
                     * 获取企微SaaS的成员id
                     * @return SalesId 企微SaaS的成员id
                     * 
                     */
                    std::string GetSalesId() const;

                    /**
                     * 设置企微SaaS的成员id
                     * @param _salesId 企微SaaS的成员id
                     * 
                     */
                    void SetSalesId(const std::string& _salesId);

                    /**
                     * 判断参数 SalesId 是否已赋值
                     * @return SalesId 是否已赋值
                     * 
                     */
                    bool SalesIdHasBeenSet() const;

                    /**
                     * 获取事件上报时间戳，单位：秒
                     * @return EventTime 事件上报时间戳，单位：秒
                     * 
                     */
                    uint64_t GetEventTime() const;

                    /**
                     * 设置事件上报时间戳，单位：秒
                     * @param _eventTime 事件上报时间戳，单位：秒
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
                     * 事件编码, 添加外部联系人(ADD_EXTERNAL_CUSTOMER)/成员删除外部联系人(DELETE_EXTERNAL_CUSTOMER)/外部联系人删除成员(DELETE_FOLLOW_USER)
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * 外部联系人id
                     */
                    std::string m_externalUserId;
                    bool m_externalUserIdHasBeenSet;

                    /**
                     * 企微SaaS的成员id
                     */
                    std::string m_salesId;
                    bool m_salesIdHasBeenSet;

                    /**
                     * 事件上报时间戳，单位：秒
                     */
                    uint64_t m_eventTime;
                    bool m_eventTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALUSEREVENTINFO_H_
