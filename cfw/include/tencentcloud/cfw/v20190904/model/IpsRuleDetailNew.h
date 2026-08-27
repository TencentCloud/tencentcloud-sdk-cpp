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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_IPSRULEDETAILNEW_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_IPSRULEDETAILNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * IPS规则展示字段相关结构
                */
                class IpsRuleDetailNew : public AbstractModel
                {
                public:
                    IpsRuleDetailNew();
                    ~IpsRuleDetailNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则ID</p>
                     * @return RuleID <p>规则ID</p>
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _ruleID <p>规则ID</p>
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>规则名称</p>
                     * @return EventName <p>规则名称</p>
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _eventName <p>规则名称</p>
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取<p>规则描述</p>
                     * @return EventNameDesc <p>规则描述</p>
                     * 
                     */
                    std::string GetEventNameDesc() const;

                    /**
                     * 设置<p>规则描述</p>
                     * @param _eventNameDesc <p>规则描述</p>
                     * 
                     */
                    void SetEventNameDesc(const std::string& _eventNameDesc);

                    /**
                     * 判断参数 EventNameDesc 是否已赋值
                     * @return EventNameDesc 是否已赋值
                     * 
                     */
                    bool EventNameDescHasBeenSet() const;

                    /**
                     * 获取<p>规则类型</p>
                     * @return Category <p>规则类型</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>规则类型</p>
                     * @param _category <p>规则类型</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>置信度</p>
                     * @return Confidence <p>置信度</p>
                     * 
                     */
                    std::string GetConfidence() const;

                    /**
                     * 设置<p>置信度</p>
                     * @param _confidence <p>置信度</p>
                     * 
                     */
                    void SetConfidence(const std::string& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>自增id</p>
                     * @return Id <p>自增id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>自增id</p>
                     * @param _id <p>自增id</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>漏洞对象</p>
                     * @return VulTarget <p>漏洞对象</p>
                     * 
                     */
                    std::string GetVulTarget() const;

                    /**
                     * 设置<p>漏洞对象</p>
                     * @param _vulTarget <p>漏洞对象</p>
                     * 
                     */
                    void SetVulTarget(const std::string& _vulTarget);

                    /**
                     * 判断参数 VulTarget 是否已赋值
                     * @return VulTarget 是否已赋值
                     * 
                     */
                    bool VulTargetHasBeenSet() const;

                    /**
                     * 获取<p>漏洞编号</p>
                     * @return Cve <p>漏洞编号</p>
                     * 
                     */
                    std::string GetCve() const;

                    /**
                     * 设置<p>漏洞编号</p>
                     * @param _cve <p>漏洞编号</p>
                     * 
                     */
                    void SetCve(const std::string& _cve);

                    /**
                     * 判断参数 Cve 是否已赋值
                     * @return Cve 是否已赋值
                     * 
                     */
                    bool CveHasBeenSet() const;

                    /**
                     * 获取<p>状态 0 关闭 1打开</p>
                     * @return Status <p>状态 0 关闭 1打开</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态 0 关闭 1打开</p>
                     * @param _status <p>状态 0 关闭 1打开</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>0观察, 1阻断</p>
                     * @return Action <p>0观察, 1阻断</p>
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置<p>0观察, 1阻断</p>
                     * @param _action <p>0观察, 1阻断</p>
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>默认策略</p>
                     * @return DefaultAction <p>默认策略</p>
                     * 
                     */
                    int64_t GetDefaultAction() const;

                    /**
                     * 设置<p>默认策略</p>
                     * @param _defaultAction <p>默认策略</p>
                     * 
                     */
                    void SetDefaultAction(const int64_t& _defaultAction);

                    /**
                     * 判断参数 DefaultAction 是否已赋值
                     * @return DefaultAction 是否已赋值
                     * 
                     */
                    bool DefaultActionHasBeenSet() const;

                    /**
                     * 获取<p>基础防御/虚拟补丁</p>
                     * @return RuleType <p>基础防御/虚拟补丁</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>基础防御/虚拟补丁</p>
                     * @param _ruleType <p>基础防御/虚拟补丁</p>
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>危险等级</p>
                     * @return Level <p>危险等级</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>危险等级</p>
                     * @param _level <p>危险等级</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>FwType字段 1 border 2 nat 4 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwType <p>FwType字段 1 border 2 nat 4 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFwType() const;

                    /**
                     * 设置<p>FwType字段 1 border 2 nat 4 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwType <p>FwType字段 1 border 2 nat 4 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFwType(const int64_t& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                private:

                    /**
                     * <p>规则ID</p>
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * <p>规则描述</p>
                     */
                    std::string m_eventNameDesc;
                    bool m_eventNameDescHasBeenSet;

                    /**
                     * <p>规则类型</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>置信度</p>
                     */
                    std::string m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>自增id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>漏洞对象</p>
                     */
                    std::string m_vulTarget;
                    bool m_vulTargetHasBeenSet;

                    /**
                     * <p>漏洞编号</p>
                     */
                    std::string m_cve;
                    bool m_cveHasBeenSet;

                    /**
                     * <p>状态 0 关闭 1打开</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>0观察, 1阻断</p>
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>默认策略</p>
                     */
                    int64_t m_defaultAction;
                    bool m_defaultActionHasBeenSet;

                    /**
                     * <p>基础防御/虚拟补丁</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>危险等级</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>FwType字段 1 border 2 nat 4 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fwType;
                    bool m_fwTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_IPSRULEDETAILNEW_H_
