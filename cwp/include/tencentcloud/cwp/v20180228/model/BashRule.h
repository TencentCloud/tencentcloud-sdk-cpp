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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASHRULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASHRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 高危命令规则
                */
                class BashRule : public AbstractModel
                {
                public:
                    BashRule();
                    ~BashRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return Id 规则ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID
                     * @param _id 规则ID
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
                     * 获取客户端ID
                     * @return Uuid 客户端ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置客户端ID
                     * @param _uuid 客户端ID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取危险等级(0 ：无 1: 高危 2:中危 3: 低危)
                     * @return Level 危险等级(0 ：无 1: 高危 2:中危 3: 低危)
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置危险等级(0 ：无 1: 高危 2:中危 3: 低危)
                     * @param _level 危险等级(0 ：无 1: 高危 2:中危 3: 低危)
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
                     * 获取正则表达式
                     * @return Rule 正则表达式
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置正则表达式
                     * @param _rule 正则表达式
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
                     * 获取规则描述
                     * @return Decription 规则描述
                     * @deprecated
                     */
                    std::string GetDecription() const;

                    /**
                     * 设置规则描述
                     * @param _decription 规则描述
                     * @deprecated
                     */
                    void SetDecription(const std::string& _decription);

                    /**
                     * 判断参数 Decription 是否已赋值
                     * @return Decription 是否已赋值
                     * @deprecated
                     */
                    bool DecriptionHasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operator 操作人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
                     * @param _operator 操作人
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取是否全局规则
                     * @return IsGlobal 是否全局规则
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否全局规则
                     * @param _isGlobal 是否全局规则
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
                     * 获取状态 (0: 有效 1: 无效)
                     * @return Status 状态 (0: 有效 1: 无效)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态 (0: 有效 1: 无效)
                     * @param _status 状态 (0: 有效 1: 无效)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取主机IP
                     * @return Hostip 主机IP
                     * 
                     */
                    std::string GetHostip() const;

                    /**
                     * 设置主机IP
                     * @param _hostip 主机IP
                     * 
                     */
                    void SetHostip(const std::string& _hostip);

                    /**
                     * 判断参数 Hostip 是否已赋值
                     * @return Hostip 是否已赋值
                     * 
                     */
                    bool HostipHasBeenSet() const;

                    /**
                     * 获取生效服务器的uuid数组
                     * @return Uuids 生效服务器的uuid数组
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置生效服务器的uuid数组
                     * @param _uuids 生效服务器的uuid数组
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
                     * 获取0=黑名单 1=白名单
                     * @return White 0=黑名单 1=白名单
                     * 
                     */
                    uint64_t GetWhite() const;

                    /**
                     * 设置0=黑名单 1=白名单
                     * @param _white 0=黑名单 1=白名单
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
                     * 获取是否处理之前的事件 0: 不处理 1:处理
                     * @return DealOldEvents 是否处理之前的事件 0: 不处理 1:处理
                     * 
                     */
                    uint64_t GetDealOldEvents() const;

                    /**
                     * 设置是否处理之前的事件 0: 不处理 1:处理
                     * @param _dealOldEvents 是否处理之前的事件 0: 不处理 1:处理
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

                private:

                    /**
                     * 规则ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 危险等级(0 ：无 1: 高危 2:中危 3: 低危)
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 正则表达式
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_decription;
                    bool m_decriptionHasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 是否全局规则
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 状态 (0: 有效 1: 无效)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

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
                     * 主机IP
                     */
                    std::string m_hostip;
                    bool m_hostipHasBeenSet;

                    /**
                     * 生效服务器的uuid数组
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 0=黑名单 1=白名单
                     */
                    uint64_t m_white;
                    bool m_whiteHasBeenSet;

                    /**
                     * 是否处理之前的事件 0: 不处理 1:处理
                     */
                    uint64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHRULE_H_
