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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCESETTING_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 漏洞防御设置
                */
                class VulDefenceSetting : public AbstractModel
                {
                public:
                    VulDefenceSetting();
                    ~VulDefenceSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取0系统策略
1自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyType 0系统策略
1自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStrategyType() const;

                    /**
                     * 设置0系统策略
1自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyType 0系统策略
1自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyType(const uint64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取威胁等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThreatLevel 威胁等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetThreatLevel() const;

                    /**
                     * 设置威胁等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threatLevel 威胁等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreatLevel(const uint64_t& _threatLevel);

                    /**
                     * 判断参数 ThreatLevel 是否已赋值
                     * @return ThreatLevel 是否已赋值
                     * 
                     */
                    bool ThreatLevelHasBeenSet() const;

                    /**
                     * 获取1全部旗舰版主机
0自选主机
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scope 1全部旗舰版主机
0自选主机
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置1全部旗舰版主机
0自选主机
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scope 1全部旗舰版主机
0自选主机
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取支持的漏洞个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportVulNum 支持的漏洞个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSupportVulNum() const;

                    /**
                     * 设置支持的漏洞个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportVulNum 支持的漏洞个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportVulNum(const uint64_t& _supportVulNum);

                    /**
                     * 判断参数 SupportVulNum 是否已赋值
                     * @return SupportVulNum 是否已赋值
                     * 
                     */
                    bool SupportVulNumHasBeenSet() const;

                    /**
                     * 获取0 关闭 1 开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 0 关闭 1 开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置0 关闭 1 开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 0 关闭 1 开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户MemberId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberId 用户MemberId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置用户MemberId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberId 用户MemberId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取策略动作
0告警
1防御
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyAction 策略动作
0告警
1防御
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStrategyAction() const;

                    /**
                     * 设置策略动作
0告警
1防御
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyAction 策略动作
0告警
1防御
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyAction(const uint64_t& _strategyAction);

                    /**
                     * 判断参数 StrategyAction 是否已赋值
                     * @return StrategyAction 是否已赋值
                     * 
                     */
                    bool StrategyActionHasBeenSet() const;

                    /**
                     * 获取用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户uin
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
                     * 获取用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nickname 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nickname 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取防护类型
0漏洞防御
1攻击检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefenceType 防护类型
0漏洞防御
1攻击检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDefenceType() const;

                    /**
                     * 设置防护类型
0漏洞防御
1攻击检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defenceType 防护类型
0漏洞防御
1攻击检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefenceType(const uint64_t& _defenceType);

                    /**
                     * 判断参数 DefenceType 是否已赋值
                     * @return DefenceType 是否已赋值
                     * 
                     */
                    bool DefenceTypeHasBeenSet() const;

                    /**
                     * 获取自选主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceNum 自选主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceNum() const;

                    /**
                     * 设置自选主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceNum 自选主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceNum(const uint64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyId 策略id
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

                private:

                    /**
                     * 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 0系统策略
1自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 威胁等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_threatLevel;
                    bool m_threatLevelHasBeenSet;

                    /**
                     * 1全部旗舰版主机
0自选主机
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 支持的漏洞个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_supportVulNum;
                    bool m_supportVulNumHasBeenSet;

                    /**
                     * 0 关闭 1 开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户MemberId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 策略动作
0告警
1防御
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategyAction;
                    bool m_strategyActionHasBeenSet;

                    /**
                     * 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 防护类型
0漏洞防御
1攻击检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_defenceType;
                    bool m_defenceTypeHasBeenSet;

                    /**
                     * 自选主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCESETTING_H_
