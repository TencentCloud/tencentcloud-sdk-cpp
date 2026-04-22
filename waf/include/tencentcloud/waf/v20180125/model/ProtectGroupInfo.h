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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_PROTECTGROUPINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_PROTECTGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ProtectGroupDomainInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 防护对象组对象详情
                */
                class ProtectGroupInfo : public AbstractModel
                {
                public:
                    ProtectGroupInfo();
                    ~ProtectGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防护对象组ID
                     * @return ID 防护对象组ID
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置防护对象组ID
                     * @param _iD 防护对象组ID
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取防护对象组名称
                     * @return Name 防护对象组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置防护对象组名称
                     * @param _name 防护对象组名称
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
                     * 获取防护对象组备注
                     * @return Remark 防护对象组备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置防护对象组备注
                     * @param _remark 防护对象组备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取防护对象组中绑定的域名详情
                     * @return Domains 防护对象组中绑定的域名详情
                     * 
                     */
                    std::vector<ProtectGroupDomainInfo> GetDomains() const;

                    /**
                     * 设置防护对象组中绑定的域名详情
                     * @param _domains 防护对象组中绑定的域名详情
                     * 
                     */
                    void SetDomains(const std::vector<ProtectGroupDomainInfo>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取关联的批量规则数
                     * @return RuleNum 关联的批量规则数
                     * 
                     */
                    uint64_t GetRuleNum() const;

                    /**
                     * 设置关联的批量规则数
                     * @param _ruleNum 关联的批量规则数
                     * 
                     */
                    void SetRuleNum(const uint64_t& _ruleNum);

                    /**
                     * 判断参数 RuleNum 是否已赋值
                     * @return RuleNum 是否已赋值
                     * 
                     */
                    bool RuleNumHasBeenSet() const;

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
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 防护对象组ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 防护对象组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 防护对象组备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 防护对象组中绑定的域名详情
                     */
                    std::vector<ProtectGroupDomainInfo> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 关联的批量规则数
                     */
                    uint64_t m_ruleNum;
                    bool m_ruleNumHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PROTECTGROUPINFO_H_
