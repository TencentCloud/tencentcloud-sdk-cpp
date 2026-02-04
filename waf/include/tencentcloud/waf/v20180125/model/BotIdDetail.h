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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTIDDETAIL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTIDDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * BOT-ID规则配置详情
                */
                class BotIdDetail : public AbstractModel
                {
                public:
                    BotIdDetail();
                    ~BotIdDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return BotId 规则名称
                     * 
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置规则名称
                     * @param _botId 规则名称
                     * 
                     */
                    void SetBotId(const std::string& _botId);

                    /**
                     * 判断参数 BotId 是否已赋值
                     * @return BotId 是否已赋值
                     * 
                     */
                    bool BotIdHasBeenSet() const;

                    /**
                     * 获取规则开关
                     * @return Status 规则开关
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置规则开关
                     * @param _status 规则开关
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则动作
                     * @return Action 规则动作
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置规则动作
                     * @param _action 规则动作
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置风险等级
                     * @param _level 风险等级
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取"cbe-01": "爬虫型BOT",
	"cbe-02": "刷量型BOT",
	"cbe-03": "账号穷举型BOT",
	"cbe-04": "恶意扫描型BOT",
	"cbe-05": "DDoS型BOT",
	"cbe-06": "垃圾邮件发送型BOT",
	"cbe-07": "社交媒体自动化型BOT",
	"cbe-08": "竞争对手数据收集型BOT",
	"cbe-09": "恶意软件传播型BOT"
                     * @return BotIdType "cbe-01": "爬虫型BOT",
	"cbe-02": "刷量型BOT",
	"cbe-03": "账号穷举型BOT",
	"cbe-04": "恶意扫描型BOT",
	"cbe-05": "DDoS型BOT",
	"cbe-06": "垃圾邮件发送型BOT",
	"cbe-07": "社交媒体自动化型BOT",
	"cbe-08": "竞争对手数据收集型BOT",
	"cbe-09": "恶意软件传播型BOT"
                     * 
                     */
                    std::string GetBotIdType() const;

                    /**
                     * 设置"cbe-01": "爬虫型BOT",
	"cbe-02": "刷量型BOT",
	"cbe-03": "账号穷举型BOT",
	"cbe-04": "恶意扫描型BOT",
	"cbe-05": "DDoS型BOT",
	"cbe-06": "垃圾邮件发送型BOT",
	"cbe-07": "社交媒体自动化型BOT",
	"cbe-08": "竞争对手数据收集型BOT",
	"cbe-09": "恶意软件传播型BOT"
                     * @param _botIdType "cbe-01": "爬虫型BOT",
	"cbe-02": "刷量型BOT",
	"cbe-03": "账号穷举型BOT",
	"cbe-04": "恶意扫描型BOT",
	"cbe-05": "DDoS型BOT",
	"cbe-06": "垃圾邮件发送型BOT",
	"cbe-07": "社交媒体自动化型BOT",
	"cbe-08": "竞争对手数据收集型BOT",
	"cbe-09": "恶意软件传播型BOT"
                     * 
                     */
                    void SetBotIdType(const std::string& _botIdType);

                    /**
                     * 判断参数 BotIdType 是否已赋值
                     * @return BotIdType 是否已赋值
                     * 
                     */
                    bool BotIdTypeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取插入时间
                     * @return InsertTime 插入时间
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置插入时间
                     * @param _insertTime 插入时间
                     * 
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
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
                     * 获取影响
                     * @return Influence 影响
                     * 
                     */
                    std::string GetInfluence() const;

                    /**
                     * 设置影响
                     * @param _influence 影响
                     * 
                     */
                    void SetInfluence(const std::string& _influence);

                    /**
                     * 判断参数 Influence 是否已赋值
                     * @return Influence 是否已赋值
                     * 
                     */
                    bool InfluenceHasBeenSet() const;

                    /**
                     * 获取重定向路径
                     * @return Redirect 重定向路径
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置重定向路径
                     * @param _redirect 重定向路径
                     * 
                     */
                    void SetRedirect(const std::string& _redirect);

                    /**
                     * 判断参数 Redirect 是否已赋值
                     * @return Redirect 是否已赋值
                     * 
                     */
                    bool RedirectHasBeenSet() const;

                    /**
                     * 获取是否关联事件
                     * @return HasEvent 是否关联事件
                     * 
                     */
                    bool GetHasEvent() const;

                    /**
                     * 设置是否关联事件
                     * @param _hasEvent 是否关联事件
                     * 
                     */
                    void SetHasEvent(const bool& _hasEvent);

                    /**
                     * 判断参数 HasEvent 是否已赋值
                     * @return HasEvent 是否已赋值
                     * 
                     */
                    bool HasEventHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * 规则开关
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则动作
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 风险等级
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * "cbe-01": "爬虫型BOT",
	"cbe-02": "刷量型BOT",
	"cbe-03": "账号穷举型BOT",
	"cbe-04": "恶意扫描型BOT",
	"cbe-05": "DDoS型BOT",
	"cbe-06": "垃圾邮件发送型BOT",
	"cbe-07": "社交媒体自动化型BOT",
	"cbe-08": "竞争对手数据收集型BOT",
	"cbe-09": "恶意软件传播型BOT"
                     */
                    std::string m_botIdType;
                    bool m_botIdTypeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 插入时间
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 影响
                     */
                    std::string m_influence;
                    bool m_influenceHasBeenSet;

                    /**
                     * 重定向路径
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                    /**
                     * 是否关联事件
                     */
                    bool m_hasEvent;
                    bool m_hasEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTIDDETAIL_H_
