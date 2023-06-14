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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_ACTIVITYJOINDETAIL_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_ACTIVITYJOINDETAIL_H_

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
                * 活动参与详情
                */
                class ActivityJoinDetail : public AbstractModel
                {
                public:
                    ActivityJoinDetail();
                    ~ActivityJoinDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityId 活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityId 活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityName 活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityName() const;

                    /**
                     * 设置活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityName 活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityName(const std::string& _activityName);

                    /**
                     * 判断参数 ActivityName 是否已赋值
                     * @return ActivityName 是否已赋值
                     * 
                     */
                    bool ActivityNameHasBeenSet() const;

                    /**
                     * 获取销售姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SalesName 销售姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSalesName() const;

                    /**
                     * 设置销售姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _salesName 销售姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSalesName(const std::string& _salesName);

                    /**
                     * 判断参数 SalesName 是否已赋值
                     * @return SalesName 是否已赋值
                     * 
                     */
                    bool SalesNameHasBeenSet() const;

                    /**
                     * 获取销售电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SalesPhone 销售电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSalesPhone() const;

                    /**
                     * 设置销售电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _salesPhone 销售电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSalesPhone(const std::string& _salesPhone);

                    /**
                     * 判断参数 SalesPhone 是否已赋值
                     * @return SalesPhone 是否已赋值
                     * 
                     */
                    bool SalesPhoneHasBeenSet() const;

                    /**
                     * 获取参与id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinId 参与id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJoinId() const;

                    /**
                     * 设置参与id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _joinId 参与id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJoinId(const int64_t& _joinId);

                    /**
                     * 判断参数 JoinId 是否已赋值
                     * @return JoinId 是否已赋值
                     * 
                     */
                    bool JoinIdHasBeenSet() const;

                    /**
                     * 获取活码id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveCodeId 活码id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLiveCodeId() const;

                    /**
                     * 设置活码id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _liveCodeId 活码id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLiveCodeId(const int64_t& _liveCodeId);

                    /**
                     * 判断参数 LiveCodeId 是否已赋值
                     * @return LiveCodeId 是否已赋值
                     * 
                     */
                    bool LiveCodeIdHasBeenSet() const;

                    /**
                     * 获取用户电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserPhone 用户电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserPhone() const;

                    /**
                     * 设置用户电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userPhone 用户电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserPhone(const std::string& _userPhone);

                    /**
                     * 判断参数 UserPhone 是否已赋值
                     * @return UserPhone 是否已赋值
                     * 
                     */
                    bool UserPhoneHasBeenSet() const;

                    /**
                     * 获取用户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 用户姓名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取活动数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityData 活动数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityData() const;

                    /**
                     * 设置活动数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityData 活动数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityData(const std::string& _activityData);

                    /**
                     * 判断参数 ActivityData 是否已赋值
                     * @return ActivityData 是否已赋值
                     * 
                     */
                    bool ActivityDataHasBeenSet() const;

                    /**
                     * 获取线索id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeadId 线索id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLeadId() const;

                    /**
                     * 设置线索id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leadId 线索id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLeadId(const int64_t& _leadId);

                    /**
                     * 判断参数 LeadId 是否已赋值
                     * @return LeadId 是否已赋值
                     * 
                     */
                    bool LeadIdHasBeenSet() const;

                    /**
                     * 获取参与时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinTime 参与时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJoinTime() const;

                    /**
                     * 设置参与时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _joinTime 参与时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJoinTime(const int64_t& _joinTime);

                    /**
                     * 判断参数 JoinTime 是否已赋值
                     * @return JoinTime 是否已赋值
                     * 
                     */
                    bool JoinTimeHasBeenSet() const;

                    /**
                     * 获取线索是否是重复创建， 0 ：新建、 1：合并、 2：重复， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duplicate 线索是否是重复创建， 0 ：新建、 1：合并、 2：重复， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuplicate() const;

                    /**
                     * 设置线索是否是重复创建， 0 ：新建、 1：合并、 2：重复， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duplicate 线索是否是重复创建， 0 ：新建、 1：合并、 2：重复， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuplicate(const int64_t& _duplicate);

                    /**
                     * 判断参数 Duplicate 是否已赋值
                     * @return Duplicate 是否已赋值
                     * 
                     */
                    bool DuplicateHasBeenSet() const;

                    /**
                     * 获取重复线索id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DuplicateLeadId 重复线索id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuplicateLeadId() const;

                    /**
                     * 设置重复线索id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duplicateLeadId 重复线索id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuplicateLeadId(const int64_t& _duplicateLeadId);

                    /**
                     * 判断参数 DuplicateLeadId 是否已赋值
                     * @return DuplicateLeadId 是否已赋值
                     * 
                     */
                    bool DuplicateLeadIdHasBeenSet() const;

                    /**
                     * 获取是否为参与多次活动， 1：参与一次、2、参与多次，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinState 是否为参与多次活动， 1：参与一次、2、参与多次，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJoinState() const;

                    /**
                     * 设置是否为参与多次活动， 1：参与一次、2、参与多次，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _joinState 是否为参与多次活动， 1：参与一次、2、参与多次，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJoinState(const int64_t& _joinState);

                    /**
                     * 判断参数 JoinState 是否已赋值
                     * @return JoinState 是否已赋值
                     * 
                     */
                    bool JoinStateHasBeenSet() const;

                    /**
                     * 获取创建时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 活动id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityName;
                    bool m_activityNameHasBeenSet;

                    /**
                     * 销售姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_salesName;
                    bool m_salesNameHasBeenSet;

                    /**
                     * 销售电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_salesPhone;
                    bool m_salesPhoneHasBeenSet;

                    /**
                     * 参与id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_joinId;
                    bool m_joinIdHasBeenSet;

                    /**
                     * 活码id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_liveCodeId;
                    bool m_liveCodeIdHasBeenSet;

                    /**
                     * 用户电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userPhone;
                    bool m_userPhoneHasBeenSet;

                    /**
                     * 用户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 活动数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityData;
                    bool m_activityDataHasBeenSet;

                    /**
                     * 线索id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_leadId;
                    bool m_leadIdHasBeenSet;

                    /**
                     * 参与时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_joinTime;
                    bool m_joinTimeHasBeenSet;

                    /**
                     * 线索是否是重复创建， 0 ：新建、 1：合并、 2：重复， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duplicate;
                    bool m_duplicateHasBeenSet;

                    /**
                     * 重复线索id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duplicateLeadId;
                    bool m_duplicateLeadIdHasBeenSet;

                    /**
                     * 是否为参与多次活动， 1：参与一次、2、参与多次，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_joinState;
                    bool m_joinStateHasBeenSet;

                    /**
                     * 创建时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_ACTIVITYJOINDETAIL_H_
