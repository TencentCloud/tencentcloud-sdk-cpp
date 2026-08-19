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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEXPOSUREAUTOTAGRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEXPOSUREAUTOTAGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateExposureAutoTagRule请求参数结构体
                */
                class CreateExposureAutoTagRuleRequest : public AbstractModel
                {
                public:
                    CreateExposureAutoTagRuleRequest();
                    ~CreateExposureAutoTagRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

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
                     * 获取<p>规则描述</p>
                     * @return Description <p>规则描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>规则描述</p>
                     * @param _description <p>规则描述</p>
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
                     * 获取<p>规则开启状态</p>
                     * @return Enable <p>规则开启状态</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>规则开启状态</p>
                     * @param _enable <p>规则开启状态</p>
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
                     * 获取<p>是否立即执行规则</p>
                     * @return ApplyNow <p>是否立即执行规则</p>
                     * 
                     */
                    bool GetApplyNow() const;

                    /**
                     * 设置<p>是否立即执行规则</p>
                     * @param _applyNow <p>是否立即执行规则</p>
                     * 
                     */
                    void SetApplyNow(const bool& _applyNow);

                    /**
                     * 判断参数 ApplyNow 是否已赋值
                     * @return ApplyNow 是否已赋值
                     * 
                     */
                    bool ApplyNowHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

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
                     * <p>规则描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>规则开启状态</p>
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
                     * <p>是否立即执行规则</p>
                     */
                    bool m_applyNow;
                    bool m_applyNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEXPOSUREAUTOTAGRULEREQUEST_H_
