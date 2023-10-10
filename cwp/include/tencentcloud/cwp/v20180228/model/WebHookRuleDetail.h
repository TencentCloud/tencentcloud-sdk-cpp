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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRULEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/WebHookEventKv.h>
#include <tencentcloud/cwp/v20180228/model/WebHookHostLabel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 企微机器人规则详情
                */
                class WebHookRuleDetail : public AbstractModel
                {
                public:
                    WebHookRuleDetail();
                    ~WebHookRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取机器人地址
                     * @return HookAddr 机器人地址
                     * 
                     */
                    std::string GetHookAddr() const;

                    /**
                     * 设置机器人地址
                     * @param _hookAddr 机器人地址
                     * 
                     */
                    void SetHookAddr(const std::string& _hookAddr);

                    /**
                     * 判断参数 HookAddr 是否已赋值
                     * @return HookAddr 是否已赋值
                     * 
                     */
                    bool HookAddrHasBeenSet() const;

                    /**
                     * 获取事件类型
                     * @return RuleItems 事件类型
                     * 
                     */
                    std::vector<WebHookEventKv> GetRuleItems() const;

                    /**
                     * 设置事件类型
                     * @param _ruleItems 事件类型
                     * 
                     */
                    void SetRuleItems(const std::vector<WebHookEventKv>& _ruleItems);

                    /**
                     * 判断参数 RuleItems 是否已赋值
                     * @return RuleItems 是否已赋值
                     * 
                     */
                    bool RuleItemsHasBeenSet() const;

                    /**
                     * 获取规则Id
                     * @return RuleId 规则Id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则Id
                     * @param _ruleId 规则Id
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return RuleRemark 备注信息
                     * 
                     */
                    std::string GetRuleRemark() const;

                    /**
                     * 设置备注信息
                     * @param _ruleRemark 备注信息
                     * 
                     */
                    void SetRuleRemark(const std::string& _ruleRemark);

                    /**
                     * 判断参数 RuleRemark 是否已赋值
                     * @return RuleRemark 是否已赋值
                     * 
                     */
                    bool RuleRemarkHasBeenSet() const;

                    /**
                     * 获取主机范围
                     * @return HostLabels 主机范围
                     * 
                     */
                    std::vector<WebHookHostLabel> GetHostLabels() const;

                    /**
                     * 设置主机范围
                     * @param _hostLabels 主机范围
                     * 
                     */
                    void SetHostLabels(const std::vector<WebHookHostLabel>& _hostLabels);

                    /**
                     * 判断参数 HostLabels 是否已赋值
                     * @return HostLabels 是否已赋值
                     * 
                     */
                    bool HostLabelsHasBeenSet() const;

                    /**
                     * 获取主机Id列表
                     * @return HostIds 主机Id列表
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置主机Id列表
                     * @param _hostIds 主机Id列表
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取是否启用[1:禁用|0:启用]
                     * @return IsDisabled 是否启用[1:禁用|0:启用]
                     * 
                     */
                    int64_t GetIsDisabled() const;

                    /**
                     * 设置是否启用[1:禁用|0:启用]
                     * @param _isDisabled 是否启用[1:禁用|0:启用]
                     * 
                     */
                    void SetIsDisabled(const int64_t& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 机器人地址
                     */
                    std::string m_hookAddr;
                    bool m_hookAddrHasBeenSet;

                    /**
                     * 事件类型
                     */
                    std::vector<WebHookEventKv> m_ruleItems;
                    bool m_ruleItemsHasBeenSet;

                    /**
                     * 规则Id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_ruleRemark;
                    bool m_ruleRemarkHasBeenSet;

                    /**
                     * 主机范围
                     */
                    std::vector<WebHookHostLabel> m_hostLabels;
                    bool m_hostLabelsHasBeenSet;

                    /**
                     * 主机Id列表
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * 是否启用[1:禁用|0:启用]
                     */
                    int64_t m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRULEDETAIL_H_
