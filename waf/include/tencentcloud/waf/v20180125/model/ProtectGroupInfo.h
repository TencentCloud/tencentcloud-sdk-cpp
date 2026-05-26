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
#include <tencentcloud/waf/v20180125/model/TagInfo.h>


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
                     * 获取<p>防护对象组ID</p>
                     * @return ID <p>防护对象组ID</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>防护对象组ID</p>
                     * @param _iD <p>防护对象组ID</p>
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
                     * 获取<p>防护对象组名称</p>
                     * @return Name <p>防护对象组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>防护对象组名称</p>
                     * @param _name <p>防护对象组名称</p>
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
                     * 获取<p>防护对象组备注</p>
                     * @return Remark <p>防护对象组备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>防护对象组备注</p>
                     * @param _remark <p>防护对象组备注</p>
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
                     * 获取<p>防护对象组中绑定的域名详情</p>
                     * @return Domains <p>防护对象组中绑定的域名详情</p>
                     * 
                     */
                    std::vector<ProtectGroupDomainInfo> GetDomains() const;

                    /**
                     * 设置<p>防护对象组中绑定的域名详情</p>
                     * @param _domains <p>防护对象组中绑定的域名详情</p>
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
                     * 获取<p>关联的批量规则数</p>
                     * @return RuleNum <p>关联的批量规则数</p>
                     * 
                     */
                    uint64_t GetRuleNum() const;

                    /**
                     * 设置<p>关联的批量规则数</p>
                     * @param _ruleNum <p>关联的批量规则数</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return TagInfos <p>标签信息</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagInfos() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tagInfos <p>标签信息</p>
                     * 
                     */
                    void SetTagInfos(const std::vector<TagInfo>& _tagInfos);

                    /**
                     * 判断参数 TagInfos 是否已赋值
                     * @return TagInfos 是否已赋值
                     * 
                     */
                    bool TagInfosHasBeenSet() const;

                    /**
                     * 获取<p>是否绑定了模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoundTemplate <p>是否绑定了模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBoundTemplate() const;

                    /**
                     * 设置<p>是否绑定了模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _boundTemplate <p>是否绑定了模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBoundTemplate(const bool& _boundTemplate);

                    /**
                     * 判断参数 BoundTemplate 是否已赋值
                     * @return BoundTemplate 是否已赋值
                     * 
                     */
                    bool BoundTemplateHasBeenSet() const;

                private:

                    /**
                     * <p>防护对象组ID</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>防护对象组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>防护对象组备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>防护对象组中绑定的域名详情</p>
                     */
                    std::vector<ProtectGroupDomainInfo> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>关联的批量规则数</p>
                     */
                    uint64_t m_ruleNum;
                    bool m_ruleNumHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<TagInfo> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                    /**
                     * <p>是否绑定了模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_boundTemplate;
                    bool m_boundTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PROTECTGROUPINFO_H_
