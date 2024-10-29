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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EDITBASHRULESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EDITBASHRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * EditBashRules请求参数结构体
                */
                class EditBashRulesRequest : public AbstractModel
                {
                public:
                    EditBashRulesRequest();
                    ~EditBashRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID（新增时不填）
                     * @return Id 规则ID（新增时不填）
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID（新增时不填）
                     * @param _id 规则ID（新增时不填）
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取客户端ID数组
                     * @return Uuids 客户端ID数组
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置客户端ID数组
                     * @param _uuids 客户端ID数组
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
                     * 获取主机IP
                     * @return HostIp 主机IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机IP
                     * @param _hostIp 主机IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取规则名称，编辑时不可修改规则名称
                     * @return Name 规则名称，编辑时不可修改规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称，编辑时不可修改规则名称
                     * @param _name 规则名称，编辑时不可修改规则名称
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
                     * 获取危险等级(0:无，1: 高危 2:中危 3: 低危)
                     * @return Level 危险等级(0:无，1: 高危 2:中危 3: 低危)
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置危险等级(0:无，1: 高危 2:中危 3: 低危)
                     * @param _level 危险等级(0:无，1: 高危 2:中危 3: 低危)
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取正则表达式 ，编辑时不可修改正则表达式，需要对内容QueryEscape后再base64
                     * @return Rule 正则表达式 ，编辑时不可修改正则表达式，需要对内容QueryEscape后再base64
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置正则表达式 ，编辑时不可修改正则表达式，需要对内容QueryEscape后再base64
                     * @param _rule 正则表达式 ，编辑时不可修改正则表达式，需要对内容QueryEscape后再base64
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
                     * 获取是否全局规则(默认否)：1-全局，0-非全局
                     * @return IsGlobal 是否全局规则(默认否)：1-全局，0-非全局
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否全局规则(默认否)：1-全局，0-非全局
                     * @param _isGlobal 是否全局规则(默认否)：1-全局，0-非全局
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取0=黑名单， 1=白名单
                     * @return White 0=黑名单， 1=白名单
                     * 
                     */
                    uint64_t GetWhite() const;

                    /**
                     * 设置0=黑名单， 1=白名单
                     * @param _white 0=黑名单， 1=白名单
                     * 
                     */
                    void SetWhite(const uint64_t& _white);

                    /**
                     * 判断参数 White 是否已赋值
                     * @return White 是否已赋值
                     * 
                     */
                    bool WhiteHasBeenSet() const;

                    /**
                     * 获取事件列表点击“加入白名单”时,需要传EventId 事件的id
                     * @return EventId 事件列表点击“加入白名单”时,需要传EventId 事件的id
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置事件列表点击“加入白名单”时,需要传EventId 事件的id
                     * @param _eventId 事件列表点击“加入白名单”时,需要传EventId 事件的id
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

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
                    uint64_t GetDealOldEvents() const;

                    /**
                     * 设置是否处理旧事件为白名单 0=不处理 1=处理
                     * @param _dealOldEvents 是否处理旧事件为白名单 0=不处理 1=处理
                     * 
                     */
                    void SetDealOldEvents(const uint64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

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
                     * 获取生效与否  0:不生效 1:生效
                     * @return Status 生效与否  0:不生效 1:生效
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置生效与否  0:不生效 1:生效
                     * @param _status 生效与否  0:不生效 1:生效
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
                     * 获取0:告警  1:白名单  2:拦截
                     * @return BashAction 0:告警  1:白名单  2:拦截
                     * 
                     */
                    int64_t GetBashAction() const;

                    /**
                     * 设置0:告警  1:白名单  2:拦截
                     * @param _bashAction 0:告警  1:白名单  2:拦截
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
                     * 获取生效范围（0:一组quuid 1:所有专业版 2:所有专业版+旗舰版 3:所有主机）
                     * @return Scope 生效范围（0:一组quuid 1:所有专业版 2:所有专业版+旗舰版 3:所有主机）
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置生效范围（0:一组quuid 1:所有专业版 2:所有专业版+旗舰版 3:所有主机）
                     * @param _scope 生效范围（0:一组quuid 1:所有专业版 2:所有专业版+旗舰版 3:所有主机）
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

                private:

                    /**
                     * 规则ID（新增时不填）
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端ID数组
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 规则名称，编辑时不可修改规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 危险等级(0:无，1: 高危 2:中危 3: 低危)
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 正则表达式 ，编辑时不可修改正则表达式，需要对内容QueryEscape后再base64
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 是否全局规则(默认否)：1-全局，0-非全局
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 0=黑名单， 1=白名单
                     */
                    uint64_t m_white;
                    bool m_whiteHasBeenSet;

                    /**
                     * 事件列表点击“加入白名单”时,需要传EventId 事件的id
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 是否处理旧事件为白名单 0=不处理 1=处理
                     */
                    uint64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * 生效与否  0:不生效 1:生效
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0:告警  1:白名单  2:拦截
                     */
                    int64_t m_bashAction;
                    bool m_bashActionHasBeenSet;

                    /**
                     * 生效范围（0:一组quuid 1:所有专业版 2:所有专业版+旗舰版 3:所有主机）
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 生效主机的QUUID集合
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EDITBASHRULESREQUEST_H_
