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
                     * 获取策略名称
                     * @return Name 策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
                     * @param _name 策略名称
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
                     * 获取1:有效 0:无效
                     * @return Enable 1:有效 0:无效
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置1:有效 0:无效
                     * @param _enable 1:有效 0:无效
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
                     * 获取0:黑名单 1:白名单
                     * @return White 0:黑名单 1:白名单
                     * 
                     */
                    int64_t GetWhite() const;

                    /**
                     * 设置0:黑名单 1:白名单
                     * @param _white 0:黑名单 1:白名单
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
                     * 获取0:告警 1:白名单 2:拦截
                     * @return BashAction 0:告警 1:白名单 2:拦截
                     * 
                     */
                    int64_t GetBashAction() const;

                    /**
                     * 设置0:告警 1:白名单 2:拦截
                     * @param _bashAction 0:告警 1:白名单 2:拦截
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
                     * 获取正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine
                     * @return Rule 正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine
                     * @param _rule 正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine
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
                     * 获取危险等级(0:无，1: 高危 2:中危 3: 低危)
                     * @return Level 危险等级(0:无，1: 高危 2:中危 3: 低危)
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置危险等级(0:无，1: 高危 2:中危 3: 低危)
                     * @param _level 危险等级(0:无，1: 高危 2:中危 3: 低危)
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
                     * 获取生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）
                     * @return Scope 生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）
                     * @param _scope 生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）
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
                     * 获取策略ID
                     * @return Id 策略ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置策略ID
                     * @param _id 策略ID
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
                     * 获取策略描述
                     * @return Descript 策略描述
                     * 
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置策略描述
                     * @param _descript 策略描述
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
                     * 获取事件列表点击“加入白名单”时,需要传EventId 事件的id
                     * @return EventId 事件列表点击“加入白名单”时,需要传EventId 事件的id
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置事件列表点击“加入白名单”时,需要传EventId 事件的id
                     * @param _eventId 事件列表点击“加入白名单”时,需要传EventId 事件的id
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
                     * 获取是否处理旧事件为白名单 0=不处理 1=处理
                     * @return DealOldEvents 是否处理旧事件为白名单 0=不处理 1=处理
                     * 
                     */
                    int64_t GetDealOldEvents() const;

                    /**
                     * 设置是否处理旧事件为白名单 0=不处理 1=处理
                     * @param _dealOldEvents 是否处理旧事件为白名单 0=不处理 1=处理
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
                     * 获取生效主机的QUUID集合
                     * @return Quuids 生效主机的QUUID集合
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置生效主机的QUUID集合
                     * @param _quuids 生效主机的QUUID集合
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
                     * 获取策略类型，0:系统  1:用户
                     * @return Category 策略类型，0:系统  1:用户
                     * 
                     */
                    int64_t GetCategory() const;

                    /**
                     * 设置策略类型，0:系统  1:用户
                     * @param _category 策略类型，0:系统  1:用户
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
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
                     * 获取老版本兼容可能会用到
                     * @return Uuids 老版本兼容可能会用到
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置老版本兼容可能会用到
                     * @param _uuids 老版本兼容可能会用到
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
                     * 获取规则表达式
                     * @return Rules 规则表达式
                     * 
                     */
                    PolicyRules GetRules() const;

                    /**
                     * 设置规则表达式
                     * @param _rules 规则表达式
                     * 
                     */
                    void SetRules(const PolicyRules& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 1:有效 0:无效
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 0:黑名单 1:白名单
                     */
                    int64_t m_white;
                    bool m_whiteHasBeenSet;

                    /**
                     * 0:告警 1:白名单 2:拦截
                     */
                    int64_t m_bashAction;
                    bool m_bashActionHasBeenSet;

                    /**
                     * 正则表达式 base64 加密,该字段废弃,如果写入则自动替换为Rules.Process.CmdLine
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 危险等级(0:无，1: 高危 2:中危 3: 低危)
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 生效范围（0:一组quuid 1:所有专业版(包含旗舰版) 2:所有旗舰版 3:所有主机）
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 策略ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * 事件列表点击“加入白名单”时,需要传EventId 事件的id
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 是否处理旧事件为白名单 0=不处理 1=处理
                     */
                    int64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * 生效主机的QUUID集合
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 策略类型，0:系统  1:用户
                     */
                    int64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 老版本兼容可能会用到
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 规则表达式
                     */
                    PolicyRules m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHPOLICY_H_
