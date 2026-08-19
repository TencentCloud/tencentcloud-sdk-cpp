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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AUTOTAGRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AUTOTAGRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 云边界分析自动打标项
                */
                class AutoTagRuleItem : public AbstractModel
                {
                public:
                    AutoTagRuleItem();
                    ~AutoTagRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则ID</p>
                     * @return RuleID <p>规则ID</p>
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _ruleID <p>规则ID</p>
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>规则名称</p>
                     * @return RuleName <p>规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _ruleName <p>规则名称</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tag <p>标签</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tag <p>标签</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>开关状态</p>
                     * @return Enable <p>开关状态</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>开关状态</p>
                     * @param _enable <p>开关状态</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>资产类型</p>
                     * @return AssetTypes <p>资产类型</p>
                     * 
                     */
                    std::vector<std::string> GetAssetTypes() const;

                    /**
                     * 设置<p>资产类型</p>
                     * @param _assetTypes <p>资产类型</p>
                     * 
                     */
                    void SetAssetTypes(const std::vector<std::string>& _assetTypes);

                    /**
                     * 判断参数 AssetTypes 是否已赋值
                     * @return AssetTypes 是否已赋值
                     * 
                     */
                    bool AssetTypesHasBeenSet() const;

                    /**
                     * 获取<p>端口</p>
                     * @return Ports <p>端口</p>
                     * 
                     */
                    std::vector<std::string> GetPorts() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _ports <p>端口</p>
                     * 
                     */
                    void SetPorts(const std::vector<std::string>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取<p>开放状态</p>
                     * @return OpenStatuses <p>开放状态</p>
                     * 
                     */
                    std::vector<std::string> GetOpenStatuses() const;

                    /**
                     * 设置<p>开放状态</p>
                     * @param _openStatuses <p>开放状态</p>
                     * 
                     */
                    void SetOpenStatuses(const std::vector<std::string>& _openStatuses);

                    /**
                     * 判断参数 OpenStatuses 是否已赋值
                     * @return OpenStatuses 是否已赋值
                     * 
                     */
                    bool OpenStatusesHasBeenSet() const;

                    /**
                     * 获取<p>规则优先级</p>
                     * @return Priority <p>规则优先级</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>规则优先级</p>
                     * @param _priority <p>规则优先级</p>
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>规则ID</p>
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>开关状态</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>资产类型</p>
                     */
                    std::vector<std::string> m_assetTypes;
                    bool m_assetTypesHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    std::vector<std::string> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * <p>开放状态</p>
                     */
                    std::vector<std::string> m_openStatuses;
                    bool m_openStatusesHasBeenSet;

                    /**
                     * <p>规则优先级</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AUTOTAGRULEITEM_H_
