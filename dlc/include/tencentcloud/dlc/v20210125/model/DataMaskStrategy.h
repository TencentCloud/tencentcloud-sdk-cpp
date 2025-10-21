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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/GroupInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据脱敏策略信息
                */
                class DataMaskStrategy : public AbstractModel
                {
                public:
                    DataMaskStrategy();
                    ~DataMaskStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyId 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAppId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserAppId() const;

                    /**
                     * 设置用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAppId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserAppId(const std::string& _userAppId);

                    /**
                     * 判断参数 UserAppId 是否已赋值
                     * @return UserAppId 是否已赋值
                     * 
                     */
                    bool UserAppIdHasBeenSet() const;

                    /**
                     * 获取用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取操作用户子账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 操作用户子账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置操作用户子账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 操作用户子账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyName 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyName 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取MASK_SHOW_FIRST_4; MASK_SHOW_LAST_4;MASK_HASH; MASK_DATE_SHOW_YEAR; MASK_NULL; MASK_DEFAULT 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyType MASK_SHOW_FIRST_4; MASK_SHOW_LAST_4;MASK_HASH; MASK_DATE_SHOW_YEAR; MASK_NULL; MASK_DEFAULT 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置MASK_SHOW_FIRST_4; MASK_SHOW_LAST_4;MASK_HASH; MASK_DATE_SHOW_YEAR; MASK_NULL; MASK_DEFAULT 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyType MASK_SHOW_FIRST_4; MASK_SHOW_LAST_4;MASK_HASH; MASK_DATE_SHOW_YEAR; MASK_NULL; MASK_DEFAULT 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyDesc 策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyDesc() const;

                    /**
                     * 设置策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyDesc 策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyDesc(const std::string& _strategyDesc);

                    /**
                     * 判断参数 StrategyDesc 是否已赋值
                     * @return StrategyDesc 是否已赋值
                     * 
                     */
                    bool StrategyDescHasBeenSet() const;

                    /**
                     * 获取用户组策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Groups 用户组策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GroupInfo> GetGroups() const;

                    /**
                     * 设置用户组策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groups 用户组策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroups(const std::vector<GroupInfo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取用户子账号uin列表，按;拼接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Users 用户子账号uin列表，按;拼接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsers() const;

                    /**
                     * 设置用户子账号uin列表，按;拼接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _users 用户子账号uin列表，按;拼接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsers(const std::string& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取1: 生效中； 0：已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 1: 生效中； 0：已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置1: 生效中； 0：已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 1: 生效中； 0：已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取策略创建时间，毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 策略创建时间，毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置策略创建时间，毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 策略创建时间，毫秒时间戳
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
                     * 获取策略更新时间，毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 策略更新时间，毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置策略更新时间，毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 策略更新时间，毫秒时间戳
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
                     * 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userAppId;
                    bool m_userAppIdHasBeenSet;

                    /**
                     * 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 操作用户子账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * MASK_SHOW_FIRST_4; MASK_SHOW_LAST_4;MASK_HASH; MASK_DATE_SHOW_YEAR; MASK_NULL; MASK_DEFAULT 等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyDesc;
                    bool m_strategyDescHasBeenSet;

                    /**
                     * 用户组策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GroupInfo> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 用户子账号uin列表，按;拼接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 1: 生效中； 0：已删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 策略创建时间，毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 策略更新时间，毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGY_H_
