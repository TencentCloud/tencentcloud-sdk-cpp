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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_FOLLOWINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_FOLLOWINFO_H_

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
                * 发生过跟进的潜客信息
                */
                class FollowInfo : public AbstractModel
                {
                public:
                    FollowInfo();
                    ~FollowInfo() = default;
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
                     * 获取客户档案id
                     * @return CustomerId 客户档案id
                     * 
                     */
                    uint64_t GetCustomerId() const;

                    /**
                     * 设置客户档案id
                     * @param _customerId 客户档案id
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
                     * 获取是否逾期
                     * @return IsOverdue 是否逾期
                     * 
                     */
                    int64_t GetIsOverdue() const;

                    /**
                     * 设置是否逾期
                     * @param _isOverdue 是否逾期
                     * 
                     */
                    void SetIsOverdue(const int64_t& _isOverdue);

                    /**
                     * 判断参数 IsOverdue 是否已赋值
                     * @return IsOverdue 是否已赋值
                     * 
                     */
                    bool IsOverdueHasBeenSet() const;

                    /**
                     * 获取逾期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OverdueTime 逾期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOverdueTime() const;

                    /**
                     * 设置逾期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _overdueTime 逾期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOverdueTime(const uint64_t& _overdueTime);

                    /**
                     * 判断参数 OverdueTime 是否已赋值
                     * @return OverdueTime 是否已赋值
                     * 
                     */
                    bool OverdueTimeHasBeenSet() const;

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
                     * 获取跟进方式
                     * @return FollowWayType 跟进方式
                     * 
                     */
                    std::string GetFollowWayType() const;

                    /**
                     * 设置跟进方式
                     * @param _followWayType 跟进方式
                     * 
                     */
                    void SetFollowWayType(const std::string& _followWayType);

                    /**
                     * 判断参数 FollowWayType 是否已赋值
                     * @return FollowWayType 是否已赋值
                     * 
                     */
                    bool FollowWayTypeHasBeenSet() const;

                    /**
                     * 获取跟进方式名称
                     * @return FollowWayName 跟进方式名称
                     * 
                     */
                    std::string GetFollowWayName() const;

                    /**
                     * 设置跟进方式名称
                     * @param _followWayName 跟进方式名称
                     * 
                     */
                    void SetFollowWayName(const std::string& _followWayName);

                    /**
                     * 判断参数 FollowWayName 是否已赋值
                     * @return FollowWayName 是否已赋值
                     * 
                     */
                    bool FollowWayNameHasBeenSet() const;

                    /**
                     * 获取本次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowTime 本次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFollowTime() const;

                    /**
                     * 设置本次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _followTime 本次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFollowTime(const uint64_t& _followTime);

                    /**
                     * 判断参数 FollowTime 是否已赋值
                     * @return FollowTime 是否已赋值
                     * 
                     */
                    bool FollowTimeHasBeenSet() const;

                    /**
                     * 获取下次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextFollowTime 下次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNextFollowTime() const;

                    /**
                     * 设置下次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextFollowTime 下次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextFollowTime(const uint64_t& _nextFollowTime);

                    /**
                     * 判断参数 NextFollowTime 是否已赋值
                     * @return NextFollowTime 是否已赋值
                     * 
                     */
                    bool NextFollowTimeHasBeenSet() const;

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
                     * 客户档案id
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
                     * 是否逾期
                     */
                    int64_t m_isOverdue;
                    bool m_isOverdueHasBeenSet;

                    /**
                     * 逾期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_overdueTime;
                    bool m_overdueTimeHasBeenSet;

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
                     * 跟进方式
                     */
                    std::string m_followWayType;
                    bool m_followWayTypeHasBeenSet;

                    /**
                     * 跟进方式名称
                     */
                    std::string m_followWayName;
                    bool m_followWayNameHasBeenSet;

                    /**
                     * 本次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_followTime;
                    bool m_followTimeHasBeenSet;

                    /**
                     * 下次跟进时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nextFollowTime;
                    bool m_nextFollowTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_FOLLOWINFO_H_
