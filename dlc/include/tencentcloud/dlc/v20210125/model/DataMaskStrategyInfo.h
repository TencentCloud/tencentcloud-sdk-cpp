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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYINFO_H_

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
                class DataMaskStrategyInfo : public AbstractModel
                {
                public:
                    DataMaskStrategyInfo();
                    ~DataMaskStrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称
                     * @return StrategyName 策略名称
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称
                     * @param _strategyName 策略名称
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
                     * @return StrategyType MASK_SHOW_FIRST_4; MASK_SHOW_LAST_4;MASK_HASH; MASK_DATE_SHOW_YEAR; MASK_NULL; MASK_DEFAULT 等
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置MASK_SHOW_FIRST_4; MASK_SHOW_LAST_4;MASK_HASH; MASK_DATE_SHOW_YEAR; MASK_NULL; MASK_DEFAULT 等
                     * @param _strategyType MASK_SHOW_FIRST_4; MASK_SHOW_LAST_4;MASK_HASH; MASK_DATE_SHOW_YEAR; MASK_NULL; MASK_DEFAULT 等
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
                     * @return StrategyDesc 策略描述
                     * 
                     */
                    std::string GetStrategyDesc() const;

                    /**
                     * 设置策略描述
                     * @param _strategyDesc 策略描述
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
                     * @return Users 用户子账号uin列表，按;拼接
                     * 
                     */
                    std::string GetUsers() const;

                    /**
                     * 设置用户子账号uin列表，按;拼接
                     * @param _users 用户子账号uin列表，按;拼接
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
                     * 获取策略Id
                     * @return StrategyId 策略Id
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略Id
                     * @param _strategyId 策略Id
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * 策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * MASK_SHOW_FIRST_4; MASK_SHOW_LAST_4;MASK_HASH; MASK_DATE_SHOW_YEAR; MASK_NULL; MASK_DEFAULT 等
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 策略描述
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
                     */
                    std::string m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 策略Id
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYINFO_H_
