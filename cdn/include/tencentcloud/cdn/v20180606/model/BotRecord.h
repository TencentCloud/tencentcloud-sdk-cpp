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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BOTRECORD_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BOTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * BOT记录详细内容
                */
                class BotRecord : public AbstractModel
                {
                public:
                    BotRecord();
                    ~BotRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作，取值为以为3个类型中的一个："intercept","permit","monitor"，分别表示： 拦截， 放行，监控
                     * @return Action 动作，取值为以为3个类型中的一个："intercept","permit","monitor"，分别表示： 拦截， 放行，监控
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作，取值为以为3个类型中的一个："intercept","permit","monitor"，分别表示： 拦截， 放行，监控
                     * @param _action 动作，取值为以为3个类型中的一个："intercept","permit","monitor"，分别表示： 拦截， 放行，监控
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
                     * 获取会话总次数
                     * @return Nums 会话总次数
                     * 
                     */
                    int64_t GetNums() const;

                    /**
                     * 设置会话总次数
                     * @param _nums 会话总次数
                     * 
                     */
                    void SetNums(const int64_t& _nums);

                    /**
                     * 判断参数 Nums 是否已赋值
                     * @return Nums 是否已赋值
                     * 
                     */
                    bool NumsHasBeenSet() const;

                    /**
                     * 获取BotType=UB时，表示预测标签，取值如下：
                "crawler_unregular",
                "crawler_regular",
                "request_repeat",
                "credential_miss_user",
                "credential_without_user",
                "credential_only_action",
                "credential_user_password",
                "credential_cracking",
                "credential_stuffing",
                "brush_sms",
                "brush_captcha",
                "reg_malicious"
BotType=TCB时，表示Bot分类，取值如下：
                "Uncategorised",
                "Search engine bot",
                "Site monitor",
                "Screenshot creator",
                "Link checker",
                "Web scraper",
                "Vulnerability scanner",
                "Virus scanner",
                "Speed tester",
                "Feed Fetcher",
                "Tool",
                "Marketing"
BotType=UCB时，为二期接口，暂时未定义内容
                     * @return RuleName BotType=UB时，表示预测标签，取值如下：
                "crawler_unregular",
                "crawler_regular",
                "request_repeat",
                "credential_miss_user",
                "credential_without_user",
                "credential_only_action",
                "credential_user_password",
                "credential_cracking",
                "credential_stuffing",
                "brush_sms",
                "brush_captcha",
                "reg_malicious"
BotType=TCB时，表示Bot分类，取值如下：
                "Uncategorised",
                "Search engine bot",
                "Site monitor",
                "Screenshot creator",
                "Link checker",
                "Web scraper",
                "Vulnerability scanner",
                "Virus scanner",
                "Speed tester",
                "Feed Fetcher",
                "Tool",
                "Marketing"
BotType=UCB时，为二期接口，暂时未定义内容
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置BotType=UB时，表示预测标签，取值如下：
                "crawler_unregular",
                "crawler_regular",
                "request_repeat",
                "credential_miss_user",
                "credential_without_user",
                "credential_only_action",
                "credential_user_password",
                "credential_cracking",
                "credential_stuffing",
                "brush_sms",
                "brush_captcha",
                "reg_malicious"
BotType=TCB时，表示Bot分类，取值如下：
                "Uncategorised",
                "Search engine bot",
                "Site monitor",
                "Screenshot creator",
                "Link checker",
                "Web scraper",
                "Vulnerability scanner",
                "Virus scanner",
                "Speed tester",
                "Feed Fetcher",
                "Tool",
                "Marketing"
BotType=UCB时，为二期接口，暂时未定义内容
                     * @param _ruleName BotType=UB时，表示预测标签，取值如下：
                "crawler_unregular",
                "crawler_regular",
                "request_repeat",
                "credential_miss_user",
                "credential_without_user",
                "credential_only_action",
                "credential_user_password",
                "credential_cracking",
                "credential_stuffing",
                "brush_sms",
                "brush_captcha",
                "reg_malicious"
BotType=TCB时，表示Bot分类，取值如下：
                "Uncategorised",
                "Search engine bot",
                "Site monitor",
                "Screenshot creator",
                "Link checker",
                "Web scraper",
                "Vulnerability scanner",
                "Virus scanner",
                "Speed tester",
                "Feed Fetcher",
                "Tool",
                "Marketing"
BotType=UCB时，为二期接口，暂时未定义内容
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
                     * 获取会话持续时间
                     * @return SessionDuration 会话持续时间
                     * 
                     */
                    double GetSessionDuration() const;

                    /**
                     * 设置会话持续时间
                     * @param _sessionDuration 会话持续时间
                     * 
                     */
                    void SetSessionDuration(const double& _sessionDuration);

                    /**
                     * 判断参数 SessionDuration 是否已赋值
                     * @return SessionDuration 是否已赋值
                     * 
                     */
                    bool SessionDurationHasBeenSet() const;

                    /**
                     * 获取访问源IP
                     * @return SrcIp 访问源IP
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置访问源IP
                     * @param _srcIp 访问源IP
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取异常特征
                     * @return BotFeature 异常特征
                     * 
                     */
                    std::vector<std::string> GetBotFeature() const;

                    /**
                     * 设置异常特征
                     * @param _botFeature 异常特征
                     * 
                     */
                    void SetBotFeature(const std::vector<std::string>& _botFeature);

                    /**
                     * 判断参数 BotFeature 是否已赋值
                     * @return BotFeature 是否已赋值
                     * 
                     */
                    bool BotFeatureHasBeenSet() const;

                    /**
                     * 获取最新检测时间
                     * @return Time 最新检测时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置最新检测时间
                     * @param _time 最新检测时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取BOT得分
                     * @return Score BOT得分
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置BOT得分
                     * @param _score BOT得分
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取平均速率
                     * @return AvgSpeed 平均速率
                     * 
                     */
                    double GetAvgSpeed() const;

                    /**
                     * 设置平均速率
                     * @param _avgSpeed 平均速率
                     * 
                     */
                    void SetAvgSpeed(const double& _avgSpeed);

                    /**
                     * 判断参数 AvgSpeed 是否已赋值
                     * @return AvgSpeed 是否已赋值
                     * 
                     */
                    bool AvgSpeedHasBeenSet() const;

                    /**
                     * 获取BotType=TCB，表示TCB名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcbDetail BotType=TCB，表示TCB名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTcbDetail() const;

                    /**
                     * 设置BotType=TCB，表示TCB名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tcbDetail BotType=TCB，表示TCB名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTcbDetail(const std::string& _tcbDetail);

                    /**
                     * 判断参数 TcbDetail 是否已赋值
                     * @return TcbDetail 是否已赋值
                     * 
                     */
                    bool TcbDetailHasBeenSet() const;

                    /**
                     * 获取BOT记录唯一ID，用于查询访问详情
                     * @return Id BOT记录唯一ID，用于查询访问详情
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置BOT记录唯一ID，用于查询访问详情
                     * @param _id BOT记录唯一ID，用于查询访问详情
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
                     * 获取域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 动作，取值为以为3个类型中的一个："intercept","permit","monitor"，分别表示： 拦截， 放行，监控
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 会话总次数
                     */
                    int64_t m_nums;
                    bool m_numsHasBeenSet;

                    /**
                     * BotType=UB时，表示预测标签，取值如下：
                "crawler_unregular",
                "crawler_regular",
                "request_repeat",
                "credential_miss_user",
                "credential_without_user",
                "credential_only_action",
                "credential_user_password",
                "credential_cracking",
                "credential_stuffing",
                "brush_sms",
                "brush_captcha",
                "reg_malicious"
BotType=TCB时，表示Bot分类，取值如下：
                "Uncategorised",
                "Search engine bot",
                "Site monitor",
                "Screenshot creator",
                "Link checker",
                "Web scraper",
                "Vulnerability scanner",
                "Virus scanner",
                "Speed tester",
                "Feed Fetcher",
                "Tool",
                "Marketing"
BotType=UCB时，为二期接口，暂时未定义内容
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 会话持续时间
                     */
                    double m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * 访问源IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 异常特征
                     */
                    std::vector<std::string> m_botFeature;
                    bool m_botFeatureHasBeenSet;

                    /**
                     * 最新检测时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * BOT得分
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 平均速率
                     */
                    double m_avgSpeed;
                    bool m_avgSpeedHasBeenSet;

                    /**
                     * BotType=TCB，表示TCB名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tcbDetail;
                    bool m_tcbDetailHasBeenSet;

                    /**
                     * BOT记录唯一ID，用于查询访问详情
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BOTRECORD_H_
