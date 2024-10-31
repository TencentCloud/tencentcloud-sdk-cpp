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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_IMCDRINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_IMCDRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/IMSatisfaction.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 文本会话服务记录信息
                */
                class IMCdrInfo : public AbstractModel
                {
                public:
                    IMCdrInfo();
                    ~IMCdrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务记录ID
                     * @return Id 服务记录ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置服务记录ID
                     * @param _id 服务记录ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取服务时长秒数
                     * @return Duration 服务时长秒数
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置服务时长秒数
                     * @param _duration 服务时长秒数
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取结束状态
0 异常结束
1 正常结束
3 无座席在线
17 座席放弃接听
100 黑名单
101 座席手动转接
102 IVR阶段放弃
108 用户超时自动结束
109 用户主动结束
                     * @return EndStatus 结束状态
0 异常结束
1 正常结束
3 无座席在线
17 座席放弃接听
100 黑名单
101 座席手动转接
102 IVR阶段放弃
108 用户超时自动结束
109 用户主动结束
                     * 
                     */
                    int64_t GetEndStatus() const;

                    /**
                     * 设置结束状态
0 异常结束
1 正常结束
3 无座席在线
17 座席放弃接听
100 黑名单
101 座席手动转接
102 IVR阶段放弃
108 用户超时自动结束
109 用户主动结束
                     * @param _endStatus 结束状态
0 异常结束
1 正常结束
3 无座席在线
17 座席放弃接听
100 黑名单
101 座席手动转接
102 IVR阶段放弃
108 用户超时自动结束
109 用户主动结束
                     * 
                     */
                    void SetEndStatus(const int64_t& _endStatus);

                    /**
                     * 判断参数 EndStatus 是否已赋值
                     * @return EndStatus 是否已赋值
                     * 
                     */
                    bool EndStatusHasBeenSet() const;

                    /**
                     * 获取用户昵称
                     * @return Nickname 用户昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置用户昵称
                     * @param _nickname 用户昵称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取服务类型 1为全媒体，2为文本客服
                     * @return Type 服务类型 1为全媒体，2为文本客服
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置服务类型 1为全媒体，2为文本客服
                     * @param _type 服务类型 1为全媒体，2为文本客服
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取客服ID
                     * @return StaffId 客服ID
                     * 
                     */
                    std::string GetStaffId() const;

                    /**
                     * 设置客服ID
                     * @param _staffId 客服ID
                     * 
                     */
                    void SetStaffId(const std::string& _staffId);

                    /**
                     * 判断参数 StaffId 是否已赋值
                     * @return StaffId 是否已赋值
                     * 
                     */
                    bool StaffIdHasBeenSet() const;

                    /**
                     * 获取服务时间戳
                     * @return Timestamp 服务时间戳
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置服务时间戳
                     * @param _timestamp 服务时间戳
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _sessionId 会话ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取技能组ID
                     * @return SkillGroupId 技能组ID
                     * 
                     */
                    std::string GetSkillGroupId() const;

                    /**
                     * 设置技能组ID
                     * @param _skillGroupId 技能组ID
                     * 
                     */
                    void SetSkillGroupId(const std::string& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取技能组名称
                     * @return SkillGroupName 技能组名称
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置技能组名称
                     * @param _skillGroupName 技能组名称
                     * 
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     * 
                     */
                    bool SkillGroupNameHasBeenSet() const;

                    /**
                     * 获取满意度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Satisfaction 满意度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IMSatisfaction GetSatisfaction() const;

                    /**
                     * 设置满意度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _satisfaction 满意度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSatisfaction(const IMSatisfaction& _satisfaction);

                    /**
                     * 判断参数 Satisfaction 是否已赋值
                     * @return Satisfaction 是否已赋值
                     * 
                     */
                    bool SatisfactionHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return ClientUserId 用户ID
                     * 
                     */
                    std::string GetClientUserId() const;

                    /**
                     * 设置用户ID
                     * @param _clientUserId 用户ID
                     * 
                     */
                    void SetClientUserId(const std::string& _clientUserId);

                    /**
                     * 判断参数 ClientUserId 是否已赋值
                     * @return ClientUserId 是否已赋值
                     * 
                     */
                    bool ClientUserIdHasBeenSet() const;

                private:

                    /**
                     * 服务记录ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务时长秒数
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 结束状态
0 异常结束
1 正常结束
3 无座席在线
17 座席放弃接听
100 黑名单
101 座席手动转接
102 IVR阶段放弃
108 用户超时自动结束
109 用户主动结束
                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * 用户昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 服务类型 1为全媒体，2为文本客服
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 客服ID
                     */
                    std::string m_staffId;
                    bool m_staffIdHasBeenSet;

                    /**
                     * 服务时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 技能组ID
                     */
                    std::string m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * 技能组名称
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * 满意度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IMSatisfaction m_satisfaction;
                    bool m_satisfactionHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_clientUserId;
                    bool m_clientUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_IMCDRINFO_H_
