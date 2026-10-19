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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASHPOLICY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASHPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/PolicyRules.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 高危命令策略
                */
                class BashPolicy : public AbstractModel
                {
                public:
                    BashPolicy();
                    ~BashPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略名称</p>
                     * @return Name <p>策略名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _name <p>策略名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>1:有效 0:无效</p>
                     * @return Enable <p>1:有效 0:无效</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>1:有效 0:无效</p>
                     * @param _enable <p>1:有效 0:无效</p>
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>0:黑名单 1:白名单</p>
                     * @return White <p>0:黑名单 1:白名单</p>
                     * 
                     */
                    int64_t GetWhite() const;

                    /**
                     * 设置<p>0:黑名单 1:白名单</p>
                     * @param _white <p>0:黑名单 1:白名单</p>
                     * 
                     */
                    void SetWhite(const int64_t& _white);

                    /**
                     * 判断参数 White 是否已赋值
                     * @return White 是否已赋值
                     * 
                     */
                    bool WhiteHasBeenSet() const;

                    /**
                     * 获取<p>0:告警 1:白名单 2:拦截</p>
                     * @return BashAction <p>0:告警 1:白名单 2:拦截</p>
                     * 
                     */
                    int64_t GetBashAction() const;

                    /**
                     * 设置<p>0:告警 1:白名单 2:拦截</p>
                     * @param _bashAction <p>0:告警 1:白名单 2:拦截</p>
                     * 
                     */
                    void SetBashAction(const int64_t& _bashAction);

                    /**
                     * 判断参数 BashAction 是否已赋值
                     * @return BashAction 是否已赋值
                     * 
                     */
                    bool BashActionHasBeenSet() const;

                    /**
                     * 获取<p>正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine</p>
                     * @return Rule <p>正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine</p>
                     * @param _rule <p>正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine</p>
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>危险等级(0:无，1: 高危 2:中危 3: 低危)</p>
                     * @return Level <p>危险等级(0:无，1: 高危 2:中危 3: 低危)</p>
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置<p>危险等级(0:无，1: 高危 2:中危 3: 低危)</p>
                     * @param _level <p>危险等级(0:无，1: 高危 2:中危 3: 低危)</p>
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
                     * 获取<p>生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）</p>
                     * @return Scope <p>生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）</p>
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置<p>生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）</p>
                     * @param _scope <p>生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）</p>
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>策略ID</p>
                     * @return Id <p>策略ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>策略ID</p>
                     * @param _id <p>策略ID</p>
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
                     * 获取<p>策略描述</p>
                     * @return Descript <p>策略描述</p>
                     * 
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置<p>策略描述</p>
                     * @param _descript <p>策略描述</p>
                     * 
                     */
                    void SetDescript(const std::string& _descript);

                    /**
                     * 判断参数 Descript 是否已赋值
                     * @return Descript 是否已赋值
                     * 
                     */
                    bool DescriptHasBeenSet() const;

                    /**
                     * 获取<p>事件列表点击“加入白名单”时,需要传EventId 事件的id</p>
                     * @return EventId <p>事件列表点击“加入白名单”时,需要传EventId 事件的id</p>
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置<p>事件列表点击“加入白名单”时,需要传EventId 事件的id</p>
                     * @param _eventId <p>事件列表点击“加入白名单”时,需要传EventId 事件的id</p>
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>是否处理旧事件为白名单 0=不处理 1=处理</p>
                     * @return DealOldEvents <p>是否处理旧事件为白名单 0=不处理 1=处理</p>
                     * 
                     */
                    int64_t GetDealOldEvents() const;

                    /**
                     * 设置<p>是否处理旧事件为白名单 0=不处理 1=处理</p>
                     * @param _dealOldEvents <p>是否处理旧事件为白名单 0=不处理 1=处理</p>
                     * 
                     */
                    void SetDealOldEvents(const int64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                    /**
                     * 获取<p>生效主机的QUUID集合</p>
                     * @return Quuids <p>生效主机的QUUID集合</p>
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置<p>生效主机的QUUID集合</p>
                     * @param _quuids <p>生效主机的QUUID集合</p>
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取<p>策略类型，0:系统  1:用户</p>
                     * @return Category <p>策略类型，0:系统  1:用户</p>
                     * 
                     */
                    int64_t GetCategory() const;

                    /**
                     * 设置<p>策略类型，0:系统  1:用户</p>
                     * @param _category <p>策略类型，0:系统  1:用户</p>
                     * 
                     */
                    void SetCategory(const int64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

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
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>老版本兼容可能会用到</p>
                     * @return Uuids <p>老版本兼容可能会用到</p>
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置<p>老版本兼容可能会用到</p>
                     * @param _uuids <p>老版本兼容可能会用到</p>
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取<p>规则表达式</p>
                     * @return Rules <p>规则表达式</p>
                     * 
                     */
                    PolicyRules GetRules() const;

                    /**
                     * 设置<p>规则表达式</p>
                     * @param _rules <p>规则表达式</p>
                     * 
                     */
                    void SetRules(const PolicyRules& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取<p>匹配类型：0-命令行（默认） 1-文件操作</p>
                     * @return MatchType <p>匹配类型：0-命令行（默认） 1-文件操作</p>
                     * 
                     */
                    uint64_t GetMatchType() const;

                    /**
                     * 设置<p>匹配类型：0-命令行（默认） 1-文件操作</p>
                     * @param _matchType <p>匹配类型：0-命令行（默认） 1-文件操作</p>
                     * 
                     */
                    void SetMatchType(const uint64_t& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                private:

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>1:有效 0:无效</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>0:黑名单 1:白名单</p>
                     */
                    int64_t m_white;
                    bool m_whiteHasBeenSet;

                    /**
                     * <p>0:告警 1:白名单 2:拦截</p>
                     */
                    int64_t m_bashAction;
                    bool m_bashActionHasBeenSet;

                    /**
                     * <p>正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>危险等级(0:无，1: 高危 2:中危 3: 低危)</p>
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）</p>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>策略ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * <p>事件列表点击“加入白名单”时,需要传EventId 事件的id</p>
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>是否处理旧事件为白名单 0=不处理 1=处理</p>
                     */
                    int64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * <p>生效主机的QUUID集合</p>
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * <p>策略类型，0:系统  1:用户</p>
                     */
                    int64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>老版本兼容可能会用到</p>
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * <p>规则表达式</p>
                     */
                    PolicyRules m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>匹配类型：0-命令行（默认） 1-文件操作</p>
                     */
                    uint64_t m_matchType;
                    bool m_matchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHPOLICY_H_
