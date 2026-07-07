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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmIdentifyRule请求参数结构体
                */
                class ModifyDspmIdentifyRuleRequest : public AbstractModel
                {
                public:
                    ModifyDspmIdentifyRuleRequest();
                    ~ModifyDspmIdentifyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据项id</p>
                     * @return Id <p>数据项id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>数据项id</p>
                     * @param _id <p>数据项id</p>
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
                     * 获取<p>数据项名称</p>
                     * @return Name <p>数据项名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据项名称</p>
                     * @param _name <p>数据项名称</p>
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
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>数据项描述</p>
                     * @return Description <p>数据项描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>数据项描述</p>
                     * @param _description <p>数据项描述</p>
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
                     * 获取<p>数据项启用状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     * @return Status <p>数据项启用状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>数据项启用状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     * @param _status <p>数据项启用状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
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
                     * 获取<p>结构化规则</p>
                     * @return StructuredRule <p>结构化规则</p>
                     * 
                     */
                    std::string GetStructuredRule() const;

                    /**
                     * 设置<p>结构化规则</p>
                     * @param _structuredRule <p>结构化规则</p>
                     * 
                     */
                    void SetStructuredRule(const std::string& _structuredRule);

                    /**
                     * 判断参数 StructuredRule 是否已赋值
                     * @return StructuredRule 是否已赋值
                     * 
                     */
                    bool StructuredRuleHasBeenSet() const;

                    /**
                     * 获取<p>非结构化规则</p>
                     * @return UnStructuredRule <p>非结构化规则</p>
                     * 
                     */
                    std::string GetUnStructuredRule() const;

                    /**
                     * 设置<p>非结构化规则</p>
                     * @param _unStructuredRule <p>非结构化规则</p>
                     * 
                     */
                    void SetUnStructuredRule(const std::string& _unStructuredRule);

                    /**
                     * 判断参数 UnStructuredRule 是否已赋值
                     * @return UnStructuredRule 是否已赋值
                     * 
                     */
                    bool UnStructuredRuleHasBeenSet() const;

                private:

                    /**
                     * <p>数据项id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>数据项名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>数据项描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>数据项启用状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>结构化规则</p>
                     */
                    std::string m_structuredRule;
                    bool m_structuredRuleHasBeenSet;

                    /**
                     * <p>非结构化规则</p>
                     */
                    std::string m_unStructuredRule;
                    bool m_unStructuredRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYRULEREQUEST_H_
