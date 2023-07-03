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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_ARRIVALINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_ARRIVALINFO_H_

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
                * 发生过到店的潜客到店信息
                */
                class ArrivalInfo : public AbstractModel
                {
                public:
                    ArrivalInfo();
                    ~ArrivalInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线索id
                     * @return ClueId 线索id
                     * 
                     */
                    uint64_t GetClueId() const;

                    /**
                     * 设置线索id
                     * @param _clueId 线索id
                     * 
                     */
                    void SetClueId(const uint64_t& _clueId);

                    /**
                     * 判断参数 ClueId 是否已赋值
                     * @return ClueId 是否已赋值
                     * 
                     */
                    bool ClueIdHasBeenSet() const;

                    /**
                     * 获取客户id
                     * @return CustomerId 客户id
                     * 
                     */
                    uint64_t GetCustomerId() const;

                    /**
                     * 设置客户id
                     * @param _customerId 客户id
                     * 
                     */
                    void SetCustomerId(const uint64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取客户姓名
                     * @return UserName 客户姓名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置客户姓名
                     * @param _userName 客户姓名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取客户的手机号
                     * @return Phone 客户的手机号
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置客户的手机号
                     * @param _phone 客户的手机号
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取是否首次到店，0否，1是
                     * @return FirstArrival 是否首次到店，0否，1是
                     * 
                     */
                    int64_t GetFirstArrival() const;

                    /**
                     * 设置是否首次到店，0否，1是
                     * @param _firstArrival 是否首次到店，0否，1是
                     * 
                     */
                    void SetFirstArrival(const int64_t& _firstArrival);

                    /**
                     * 判断参数 FirstArrival 是否已赋值
                     * @return FirstArrival 是否已赋值
                     * 
                     */
                    bool FirstArrivalHasBeenSet() const;

                    /**
                     * 获取到店时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArrivalTime 到店时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetArrivalTime() const;

                    /**
                     * 设置到店时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _arrivalTime 到店时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArrivalTime(const uint64_t& _arrivalTime);

                    /**
                     * 判断参数 ArrivalTime 是否已赋值
                     * @return ArrivalTime 是否已赋值
                     * 
                     */
                    bool ArrivalTimeHasBeenSet() const;

                    /**
                     * 获取发生事件
                     * @return EventType 发生事件
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置发生事件
                     * @param _eventType 发生事件
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
                     * 获取发生事件名称
                     * @return EventTypeName 发生事件名称
                     * 
                     */
                    std::string GetEventTypeName() const;

                    /**
                     * 设置发生事件名称
                     * @param _eventTypeName 发生事件名称
                     * 
                     */
                    void SetEventTypeName(const std::string& _eventTypeName);

                    /**
                     * 判断参数 EventTypeName 是否已赋值
                     * @return EventTypeName 是否已赋值
                     * 
                     */
                    bool EventTypeNameHasBeenSet() const;

                    /**
                     * 获取跟进记录
                     * @return FollowRecord 跟进记录
                     * 
                     */
                    std::string GetFollowRecord() const;

                    /**
                     * 设置跟进记录
                     * @param _followRecord 跟进记录
                     * 
                     */
                    void SetFollowRecord(const std::string& _followRecord);

                    /**
                     * 判断参数 FollowRecord 是否已赋值
                     * @return FollowRecord 是否已赋值
                     * 
                     */
                    bool FollowRecordHasBeenSet() const;

                private:

                    /**
                     * 线索id
                     */
                    uint64_t m_clueId;
                    bool m_clueIdHasBeenSet;

                    /**
                     * 客户id
                     */
                    uint64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 客户姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 客户的手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 是否首次到店，0否，1是
                     */
                    int64_t m_firstArrival;
                    bool m_firstArrivalHasBeenSet;

                    /**
                     * 到店时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_arrivalTime;
                    bool m_arrivalTimeHasBeenSet;

                    /**
                     * 发生事件
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 发生事件名称
                     */
                    std::string m_eventTypeName;
                    bool m_eventTypeNameHasBeenSet;

                    /**
                     * 跟进记录
                     */
                    std::string m_followRecord;
                    bool m_followRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_ARRIVALINFO_H_
