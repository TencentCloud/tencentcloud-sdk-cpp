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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTSCENEINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTSCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/BotSceneMatchCondition.h>
#include <tencentcloud/waf/v20180125/model/BotSceneActionRule.h>
#include <tencentcloud/waf/v20180125/model/BotToken.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 场景的详细配置信息
                */
                class BotSceneInfo : public AbstractModel
                {
                public:
                    BotSceneInfo();
                    ~BotSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景ID
                     * @return SceneId 场景ID
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置场景ID
                     * @param _sceneId 场景ID
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取场景类型，default:默认场景,custom:非默认场景
                     * @return Type 场景类型，default:默认场景,custom:非默认场景
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置场景类型，default:默认场景,custom:非默认场景
                     * @param _type 场景类型，default:默认场景,custom:非默认场景
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取场景名
                     * @return SceneName 场景名
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置场景名
                     * @param _sceneName 场景名
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取场景模板类型，登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     * @return BusinessType 场景模板类型，登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     * 
                     */
                    std::vector<std::string> GetBusinessType() const;

                    /**
                     * 设置场景模板类型，登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     * @param _businessType 场景模板类型，登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     * 
                     */
                    void SetBusinessType(const std::vector<std::string>& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取客户端类型，浏览器/H5 : browser  小程序: miniApp  App:
                     * @return ClientType 客户端类型，浏览器/H5 : browser  小程序: miniApp  App:
                     * 
                     */
                    std::vector<std::string> GetClientType() const;

                    /**
                     * 设置客户端类型，浏览器/H5 : browser  小程序: miniApp  App:
                     * @param _clientType 客户端类型，浏览器/H5 : browser  小程序: miniApp  App:
                     * 
                     */
                    void SetClientType(const std::vector<std::string>& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取匹配范围
                     * @return MatchCondition 匹配范围
                     * 
                     */
                    std::vector<BotSceneMatchCondition> GetMatchCondition() const;

                    /**
                     * 设置匹配范围
                     * @param _matchCondition 匹配范围
                     * 
                     */
                    void SetMatchCondition(const std::vector<BotSceneMatchCondition>& _matchCondition);

                    /**
                     * 判断参数 MatchCondition 是否已赋值
                     * @return MatchCondition 是否已赋值
                     * 
                     */
                    bool MatchConditionHasBeenSet() const;

                    /**
                     * 获取场景开关
                     * @return SceneStatus 场景开关
                     * 
                     */
                    bool GetSceneStatus() const;

                    /**
                     * 设置场景开关
                     * @param _sceneStatus 场景开关
                     * 
                     */
                    void SetSceneStatus(const bool& _sceneStatus);

                    /**
                     * 判断参数 SceneStatus 是否已赋值
                     * @return SceneStatus 是否已赋值
                     * 
                     */
                    bool SceneStatusHasBeenSet() const;

                    /**
                     * 获取前端对抗开关
                     * @return JsInjectStatus 前端对抗开关
                     * 
                     */
                    bool GetJsInjectStatus() const;

                    /**
                     * 设置前端对抗开关
                     * @param _jsInjectStatus 前端对抗开关
                     * 
                     */
                    void SetJsInjectStatus(const bool& _jsInjectStatus);

                    /**
                     * 判断参数 JsInjectStatus 是否已赋值
                     * @return JsInjectStatus 是否已赋值
                     * 
                     */
                    bool JsInjectStatusHasBeenSet() const;

                    /**
                     * 获取AI开关
                     * @return AIStatus AI开关
                     * 
                     */
                    bool GetAIStatus() const;

                    /**
                     * 设置AI开关
                     * @param _aIStatus AI开关
                     * 
                     */
                    void SetAIStatus(const bool& _aIStatus);

                    /**
                     * 判断参数 AIStatus 是否已赋值
                     * @return AIStatus 是否已赋值
                     * 
                     */
                    bool AIStatusHasBeenSet() const;

                    /**
                     * 获取TI开关
                     * @return TIStatus TI开关
                     * 
                     */
                    bool GetTIStatus() const;

                    /**
                     * 设置TI开关
                     * @param _tIStatus TI开关
                     * 
                     */
                    void SetTIStatus(const bool& _tIStatus);

                    /**
                     * 判断参数 TIStatus 是否已赋值
                     * @return TIStatus 是否已赋值
                     * 
                     */
                    bool TIStatusHasBeenSet() const;

                    /**
                     * 获取智能统计开关
                     * @return StatisticStatus 智能统计开关
                     * 
                     */
                    bool GetStatisticStatus() const;

                    /**
                     * 设置智能统计开关
                     * @param _statisticStatus 智能统计开关
                     * 
                     */
                    void SetStatisticStatus(const bool& _statisticStatus);

                    /**
                     * 判断参数 StatisticStatus 是否已赋值
                     * @return StatisticStatus 是否已赋值
                     * 
                     */
                    bool StatisticStatusHasBeenSet() const;

                    /**
                     * 获取动作策略数量
                     * @return ActionRuleCount 动作策略数量
                     * 
                     */
                    int64_t GetActionRuleCount() const;

                    /**
                     * 设置动作策略数量
                     * @param _actionRuleCount 动作策略数量
                     * 
                     */
                    void SetActionRuleCount(const int64_t& _actionRuleCount);

                    /**
                     * 判断参数 ActionRuleCount 是否已赋值
                     * @return ActionRuleCount 是否已赋值
                     * 
                     */
                    bool ActionRuleCountHasBeenSet() const;

                    /**
                     * 获取自定义规则数量
                     * @return UCBCount 自定义规则数量
                     * 
                     */
                    int64_t GetUCBCount() const;

                    /**
                     * 设置自定义规则数量
                     * @param _uCBCount 自定义规则数量
                     * 
                     */
                    void SetUCBCount(const int64_t& _uCBCount);

                    /**
                     * 判断参数 UCBCount 是否已赋值
                     * @return UCBCount 是否已赋值
                     * 
                     */
                    bool UCBCountHasBeenSet() const;

                    /**
                     * 获取场景的匹配范围，global-全部匹配 custom-自定义匹配范围
                     * @return MatchType 场景的匹配范围，global-全部匹配 custom-自定义匹配范围
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置场景的匹配范围，global-全部匹配 custom-自定义匹配范围
                     * @param _matchType 场景的匹配范围，global-全部匹配 custom-自定义匹配范围
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取匹配条件间的与或关系
                     * @return ActionMatchType 匹配条件间的与或关系
                     * 
                     */
                    std::string GetActionMatchType() const;

                    /**
                     * 设置匹配条件间的与或关系
                     * @param _actionMatchType 匹配条件间的与或关系
                     * 
                     */
                    void SetActionMatchType(const std::string& _actionMatchType);

                    /**
                     * 判断参数 ActionMatchType 是否已赋值
                     * @return ActionMatchType 是否已赋值
                     * 
                     */
                    bool ActionMatchTypeHasBeenSet() const;

                    /**
                     * 获取UA模块开关
                     * @return UAStatus UA模块开关
                     * 
                     */
                    bool GetUAStatus() const;

                    /**
                     * 设置UA模块开关
                     * @param _uAStatus UA模块开关
                     * 
                     */
                    void SetUAStatus(const bool& _uAStatus);

                    /**
                     * 判断参数 UAStatus 是否已赋值
                     * @return UAStatus 是否已赋值
                     * 
                     */
                    bool UAStatusHasBeenSet() const;

                    /**
                     * 获取简易模式场景：前端对抗对应mysql的记录id
                     * @return JsInjectRuleId 简易模式场景：前端对抗对应mysql的记录id
                     * 
                     */
                    int64_t GetJsInjectRuleId() const;

                    /**
                     * 设置简易模式场景：前端对抗对应mysql的记录id
                     * @param _jsInjectRuleId 简易模式场景：前端对抗对应mysql的记录id
                     * 
                     */
                    void SetJsInjectRuleId(const int64_t& _jsInjectRuleId);

                    /**
                     * 判断参数 JsInjectRuleId 是否已赋值
                     * @return JsInjectRuleId 是否已赋值
                     * 
                     */
                    bool JsInjectRuleIdHasBeenSet() const;

                    /**
                     * 获取简易模式场景：前端对抗配置动作
                     * @return JsInjectAction 简易模式场景：前端对抗配置动作
                     * 
                     */
                    int64_t GetJsInjectAction() const;

                    /**
                     * 设置简易模式场景：前端对抗配置动作
                     * @param _jsInjectAction 简易模式场景：前端对抗配置动作
                     * 
                     */
                    void SetJsInjectAction(const int64_t& _jsInjectAction);

                    /**
                     * 判断参数 JsInjectAction 是否已赋值
                     * @return JsInjectAction 是否已赋值
                     * 
                     */
                    bool JsInjectActionHasBeenSet() const;

                    /**
                     * 获取简易模式场景：前端对抗重定向路径
                     * @return JsInjectRedirect 简易模式场景：前端对抗重定向路径
                     * 
                     */
                    std::string GetJsInjectRedirect() const;

                    /**
                     * 设置简易模式场景：前端对抗重定向路径
                     * @param _jsInjectRedirect 简易模式场景：前端对抗重定向路径
                     * 
                     */
                    void SetJsInjectRedirect(const std::string& _jsInjectRedirect);

                    /**
                     * 判断参数 JsInjectRedirect 是否已赋值
                     * @return JsInjectRedirect 是否已赋值
                     * 
                     */
                    bool JsInjectRedirectHasBeenSet() const;

                    /**
                     * 获取简易模式场景：动作策略信息  PS:简易模式只有一个动作策略
                     * @return ActionRuleList 简易模式场景：动作策略信息  PS:简易模式只有一个动作策略
                     * 
                     */
                    std::vector<BotSceneActionRule> GetActionRuleList() const;

                    /**
                     * 设置简易模式场景：动作策略信息  PS:简易模式只有一个动作策略
                     * @param _actionRuleList 简易模式场景：动作策略信息  PS:简易模式只有一个动作策略
                     * 
                     */
                    void SetActionRuleList(const std::vector<BotSceneActionRule>& _actionRuleList);

                    /**
                     * 判断参数 ActionRuleList 是否已赋值
                     * @return ActionRuleList 是否已赋值
                     * 
                     */
                    bool ActionRuleListHasBeenSet() const;

                    /**
                     * 获取简易模式场景：monitor-观察 intercept-拦截 custom-自定义
                     * @return BotIdPattern 简易模式场景：monitor-观察 intercept-拦截 custom-自定义
                     * 
                     */
                    std::string GetBotIdPattern() const;

                    /**
                     * 设置简易模式场景：monitor-观察 intercept-拦截 custom-自定义
                     * @param _botIdPattern 简易模式场景：monitor-观察 intercept-拦截 custom-自定义
                     * 
                     */
                    void SetBotIdPattern(const std::string& _botIdPattern);

                    /**
                     * 判断参数 BotIdPattern 是否已赋值
                     * @return BotIdPattern 是否已赋值
                     * 
                     */
                    bool BotIdPatternHasBeenSet() const;

                    /**
                     * 获取简易模式场景：bot_id规则总数
                     * @return BotIdCount 简易模式场景：bot_id规则总数
                     * 
                     */
                    int64_t GetBotIdCount() const;

                    /**
                     * 设置简易模式场景：bot_id规则总数
                     * @param _botIdCount 简易模式场景：bot_id规则总数
                     * 
                     */
                    void SetBotIdCount(const int64_t& _botIdCount);

                    /**
                     * 判断参数 BotIdCount 是否已赋值
                     * @return BotIdCount 是否已赋值
                     * 
                     */
                    bool BotIdCountHasBeenSet() const;

                    /**
                     * 获取简易模式场景：观察动作的规则总数
                     * @return BotIdMonitorCount 简易模式场景：观察动作的规则总数
                     * 
                     */
                    int64_t GetBotIdMonitorCount() const;

                    /**
                     * 设置简易模式场景：观察动作的规则总数
                     * @param _botIdMonitorCount 简易模式场景：观察动作的规则总数
                     * 
                     */
                    void SetBotIdMonitorCount(const int64_t& _botIdMonitorCount);

                    /**
                     * 判断参数 BotIdMonitorCount 是否已赋值
                     * @return BotIdMonitorCount 是否已赋值
                     * 
                     */
                    bool BotIdMonitorCountHasBeenSet() const;

                    /**
                     * 获取简易模式场景：拦截动作的规则总数
                     * @return BotIdInterceptCount 简易模式场景：拦截动作的规则总数
                     * 
                     */
                    int64_t GetBotIdInterceptCount() const;

                    /**
                     * 设置简易模式场景：拦截动作的规则总数
                     * @param _botIdInterceptCount 简易模式场景：拦截动作的规则总数
                     * 
                     */
                    void SetBotIdInterceptCount(const int64_t& _botIdInterceptCount);

                    /**
                     * 判断参数 BotIdInterceptCount 是否已赋值
                     * @return BotIdInterceptCount 是否已赋值
                     * 
                     */
                    bool BotIdInterceptCountHasBeenSet() const;

                    /**
                     * 获取创建场景时选择的规则集
                     * @return RuleSetSelection 创建场景时选择的规则集
                     * 
                     */
                    std::vector<std::string> GetRuleSetSelection() const;

                    /**
                     * 设置创建场景时选择的规则集
                     * @param _ruleSetSelection 创建场景时选择的规则集
                     * 
                     */
                    void SetRuleSetSelection(const std::vector<std::string>& _ruleSetSelection);

                    /**
                     * 判断参数 RuleSetSelection 是否已赋值
                     * @return RuleSetSelection 是否已赋值
                     * 
                     */
                    bool RuleSetSelectionHasBeenSet() const;

                    /**
                     * 获取改场景的bot token列表
                     * @return TokenList 改场景的bot token列表
                     * 
                     */
                    std::vector<BotToken> GetTokenList() const;

                    /**
                     * 设置改场景的bot token列表
                     * @param _tokenList 改场景的bot token列表
                     * 
                     */
                    void SetTokenList(const std::vector<BotToken>& _tokenList);

                    /**
                     * 判断参数 TokenList 是否已赋值
                     * @return TokenList 是否已赋值
                     * 
                     */
                    bool TokenListHasBeenSet() const;

                    /**
                     * 获取简易模式场景：重定向动作的规则总数
                     * @return BotIdRedirectCount 简易模式场景：重定向动作的规则总数
                     * 
                     */
                    int64_t GetBotIdRedirectCount() const;

                    /**
                     * 设置简易模式场景：重定向动作的规则总数
                     * @param _botIdRedirectCount 简易模式场景：重定向动作的规则总数
                     * 
                     */
                    void SetBotIdRedirectCount(const int64_t& _botIdRedirectCount);

                    /**
                     * 判断参数 BotIdRedirectCount 是否已赋值
                     * @return BotIdRedirectCount 是否已赋值
                     * 
                     */
                    bool BotIdRedirectCountHasBeenSet() const;

                    /**
                     * 获取简易模式场景：人机识别动作的规则总数
                     * @return BotIdCaptchaCount 简易模式场景：人机识别动作的规则总数
                     * 
                     */
                    int64_t GetBotIdCaptchaCount() const;

                    /**
                     * 设置简易模式场景：人机识别动作的规则总数
                     * @param _botIdCaptchaCount 简易模式场景：人机识别动作的规则总数
                     * 
                     */
                    void SetBotIdCaptchaCount(const int64_t& _botIdCaptchaCount);

                    /**
                     * 判断参数 BotIdCaptchaCount 是否已赋值
                     * @return BotIdCaptchaCount 是否已赋值
                     * 
                     */
                    bool BotIdCaptchaCountHasBeenSet() const;

                    /**
                     * 获取简易模式场景：防护等级
                     * @return BotIdProtectLevel 简易模式场景：防护等级
                     * 
                     */
                    std::string GetBotIdProtectLevel() const;

                    /**
                     * 设置简易模式场景：防护等级
                     * @param _botIdProtectLevel 简易模式场景：防护等级
                     * 
                     */
                    void SetBotIdProtectLevel(const std::string& _botIdProtectLevel);

                    /**
                     * 判断参数 BotIdProtectLevel 是否已赋值
                     * @return BotIdProtectLevel 是否已赋值
                     * 
                     */
                    bool BotIdProtectLevelHasBeenSet() const;

                    /**
                     * 获取简易模式场景：全局重定向路径
                     * @return BotIdGlobalRedirect 简易模式场景：全局重定向路径
                     * 
                     */
                    std::string GetBotIdGlobalRedirect() const;

                    /**
                     * 设置简易模式场景：全局重定向路径
                     * @param _botIdGlobalRedirect 简易模式场景：全局重定向路径
                     * 
                     */
                    void SetBotIdGlobalRedirect(const std::string& _botIdGlobalRedirect);

                    /**
                     * 判断参数 BotIdGlobalRedirect 是否已赋值
                     * @return BotIdGlobalRedirect 是否已赋值
                     * 
                     */
                    bool BotIdGlobalRedirectHasBeenSet() const;

                    /**
                     * 获取简易模式场景：JS校验动作的规则总数
                     * @return BotIdJsChallengeCount 简易模式场景：JS校验动作的规则总数
                     * 
                     */
                    int64_t GetBotIdJsChallengeCount() const;

                    /**
                     * 设置简易模式场景：JS校验动作的规则总数
                     * @param _botIdJsChallengeCount 简易模式场景：JS校验动作的规则总数
                     * 
                     */
                    void SetBotIdJsChallengeCount(const int64_t& _botIdJsChallengeCount);

                    /**
                     * 判断参数 BotIdJsChallengeCount 是否已赋值
                     * @return BotIdJsChallengeCount 是否已赋值
                     * 
                     */
                    bool BotIdJsChallengeCountHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 场景类型，default:默认场景,custom:非默认场景
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 场景名
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 场景模板类型，登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     */
                    std::vector<std::string> m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 客户端类型，浏览器/H5 : browser  小程序: miniApp  App:
                     */
                    std::vector<std::string> m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 匹配范围
                     */
                    std::vector<BotSceneMatchCondition> m_matchCondition;
                    bool m_matchConditionHasBeenSet;

                    /**
                     * 场景开关
                     */
                    bool m_sceneStatus;
                    bool m_sceneStatusHasBeenSet;

                    /**
                     * 前端对抗开关
                     */
                    bool m_jsInjectStatus;
                    bool m_jsInjectStatusHasBeenSet;

                    /**
                     * AI开关
                     */
                    bool m_aIStatus;
                    bool m_aIStatusHasBeenSet;

                    /**
                     * TI开关
                     */
                    bool m_tIStatus;
                    bool m_tIStatusHasBeenSet;

                    /**
                     * 智能统计开关
                     */
                    bool m_statisticStatus;
                    bool m_statisticStatusHasBeenSet;

                    /**
                     * 动作策略数量
                     */
                    int64_t m_actionRuleCount;
                    bool m_actionRuleCountHasBeenSet;

                    /**
                     * 自定义规则数量
                     */
                    int64_t m_uCBCount;
                    bool m_uCBCountHasBeenSet;

                    /**
                     * 场景的匹配范围，global-全部匹配 custom-自定义匹配范围
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * 匹配条件间的与或关系
                     */
                    std::string m_actionMatchType;
                    bool m_actionMatchTypeHasBeenSet;

                    /**
                     * UA模块开关
                     */
                    bool m_uAStatus;
                    bool m_uAStatusHasBeenSet;

                    /**
                     * 简易模式场景：前端对抗对应mysql的记录id
                     */
                    int64_t m_jsInjectRuleId;
                    bool m_jsInjectRuleIdHasBeenSet;

                    /**
                     * 简易模式场景：前端对抗配置动作
                     */
                    int64_t m_jsInjectAction;
                    bool m_jsInjectActionHasBeenSet;

                    /**
                     * 简易模式场景：前端对抗重定向路径
                     */
                    std::string m_jsInjectRedirect;
                    bool m_jsInjectRedirectHasBeenSet;

                    /**
                     * 简易模式场景：动作策略信息  PS:简易模式只有一个动作策略
                     */
                    std::vector<BotSceneActionRule> m_actionRuleList;
                    bool m_actionRuleListHasBeenSet;

                    /**
                     * 简易模式场景：monitor-观察 intercept-拦截 custom-自定义
                     */
                    std::string m_botIdPattern;
                    bool m_botIdPatternHasBeenSet;

                    /**
                     * 简易模式场景：bot_id规则总数
                     */
                    int64_t m_botIdCount;
                    bool m_botIdCountHasBeenSet;

                    /**
                     * 简易模式场景：观察动作的规则总数
                     */
                    int64_t m_botIdMonitorCount;
                    bool m_botIdMonitorCountHasBeenSet;

                    /**
                     * 简易模式场景：拦截动作的规则总数
                     */
                    int64_t m_botIdInterceptCount;
                    bool m_botIdInterceptCountHasBeenSet;

                    /**
                     * 创建场景时选择的规则集
                     */
                    std::vector<std::string> m_ruleSetSelection;
                    bool m_ruleSetSelectionHasBeenSet;

                    /**
                     * 改场景的bot token列表
                     */
                    std::vector<BotToken> m_tokenList;
                    bool m_tokenListHasBeenSet;

                    /**
                     * 简易模式场景：重定向动作的规则总数
                     */
                    int64_t m_botIdRedirectCount;
                    bool m_botIdRedirectCountHasBeenSet;

                    /**
                     * 简易模式场景：人机识别动作的规则总数
                     */
                    int64_t m_botIdCaptchaCount;
                    bool m_botIdCaptchaCountHasBeenSet;

                    /**
                     * 简易模式场景：防护等级
                     */
                    std::string m_botIdProtectLevel;
                    bool m_botIdProtectLevelHasBeenSet;

                    /**
                     * 简易模式场景：全局重定向路径
                     */
                    std::string m_botIdGlobalRedirect;
                    bool m_botIdGlobalRedirectHasBeenSet;

                    /**
                     * 简易模式场景：JS校验动作的规则总数
                     */
                    int64_t m_botIdJsChallengeCount;
                    bool m_botIdJsChallengeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTSCENEINFO_H_
