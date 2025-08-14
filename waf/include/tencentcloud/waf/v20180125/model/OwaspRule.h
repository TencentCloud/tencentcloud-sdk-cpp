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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULE_H_

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
                * Owasp规则
                */
                class OwaspRule : public AbstractModel
                {
                public:
                    OwaspRule();
                    ~OwaspRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

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
                     * 获取规则开关，0：关闭、1：开启、2：只观察
                     * @return Status 规则开关，0：关闭、1：开启、2：只观察
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则开关，0：关闭、1：开启、2：只观察
                     * @param _status 规则开关，0：关闭、1：开启、2：只观察
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
                     * 获取规则的防护等级，100：宽松、200：正常、300：严格、400：超严格
                     * @return Level 规则的防护等级，100：宽松、200：正常、300：严格、400：超严格
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置规则的防护等级，100：宽松、200：正常、300：严格、400：超严格
                     * @param _level 规则的防护等级，100：宽松、200：正常、300：严格、400：超严格
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
                     * 获取威胁等级，0：未知，100：低危，200：中危，300：高危，400：危急
                     * @return VulLevel 威胁等级，0：未知，100：低危，200：中危，300：高危，400：危急
                     * 
                     */
                    int64_t GetVulLevel() const;

                    /**
                     * 设置威胁等级，0：未知，100：低危，200：中危，300：高危，400：危急
                     * @param _vulLevel 威胁等级，0：未知，100：低危，200：中危，300：高危，400：危急
                     * 
                     */
                    void SetVulLevel(const int64_t& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取CVE ID
                     * @return CveID CVE ID
                     * 
                     */
                    std::string GetCveID() const;

                    /**
                     * 设置CVE ID
                     * @param _cveID CVE ID
                     * 
                     */
                    void SetCveID(const std::string& _cveID);

                    /**
                     * 判断参数 CveID 是否已赋值
                     * @return CveID 是否已赋值
                     * 
                     */
                    bool CveIDHasBeenSet() const;

                    /**
                     * 获取规则所属的类型ID
                     * @return TypeId 规则所属的类型ID
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置规则所属的类型ID
                     * @param _typeId 规则所属的类型ID
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

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
                     * 获取更新时间
                     * @return ModifyTime 更新时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间
                     * @param _modifyTime 更新时间
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
                     * 获取是否被锁定
                     * @return Locked 是否被锁定
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置是否被锁定
                     * @param _locked 是否被锁定
                     * 
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取修改原因
0：无(兼容记录为空)
1：业务自身特性误报避免
2：规则误报上报
3：核心业务规则灰度
4：其它
                     * @return Reason 修改原因
0：无(兼容记录为空)
1：业务自身特性误报避免
2：规则误报上报
3：核心业务规则灰度
4：其它
                     * 
                     */
                    int64_t GetReason() const;

                    /**
                     * 设置修改原因
0：无(兼容记录为空)
1：业务自身特性误报避免
2：规则误报上报
3：核心业务规则灰度
4：其它
                     * @param _reason 修改原因
0：无(兼容记录为空)
1：业务自身特性误报避免
2：规则误报上报
3：核心业务规则灰度
4：其它
                     * 
                     */
                    void SetReason(const int64_t& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则开关，0：关闭、1：开启、2：只观察
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则的防护等级，100：宽松、200：正常、300：严格、400：超严格
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 威胁等级，0：未知，100：低危，200：中危，300：高危，400：危急
                     */
                    int64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * CVE ID
                     */
                    std::string m_cveID;
                    bool m_cveIDHasBeenSet;

                    /**
                     * 规则所属的类型ID
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 是否被锁定
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 修改原因
0：无(兼容记录为空)
1：业务自身特性误报避免
2：规则误报上报
3：核心业务规则灰度
4：其它
                     */
                    int64_t m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULE_H_
