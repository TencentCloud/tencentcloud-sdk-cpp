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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_EDITBASHRULEREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_EDITBASHRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * EditBashRule请求参数结构体
                */
                class EditBashRuleRequest : public AbstractModel
                {
                public:
                    EditBashRuleRequest();
                    ~EditBashRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取危险等级(1: 高危 2:中危 3: 低危)
                     * @return Level 危险等级(1: 高危 2:中危 3: 低危)
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置危险等级(1: 高危 2:中危 3: 低危)
                     * @param _level 危险等级(1: 高危 2:中危 3: 低危)
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
                     * 获取规则ID(新增时不填)
                     * @return Id 规则ID(新增时不填)
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID(新增时不填)
                     * @param _id 规则ID(新增时不填)
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
                     * 获取客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
                     * @return Uuid 客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
                     * @param _uuid 客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
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
                     * 获取主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
                     * @return Hostip 主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
                     * 
                     */
                    std::string GetHostip() const;

                    /**
                     * 设置主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
                     * @param _hostip 主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
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
                     * 获取是否全局规则(默认否)
                     * @return IsGlobal 是否全局规则(默认否)
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否全局规则(默认否)
                     * @param _isGlobal 是否全局规则(默认否)
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 危险等级(1: 高危 2:中危 3: 低危)
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 正则表达式
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 规则ID(新增时不填)
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
                     */
                    std::string m_hostip;
                    bool m_hostipHasBeenSet;

                    /**
                     * 是否全局规则(默认否)
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_EDITBASHRULEREQUEST_H_
