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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYQALISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYQALISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExpirationPolicy.h>
#include <tencentcloud/adp/v20260520/model/LabelRefIdentityList.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyQAList请求参数结构体
                */
                class ModifyQAListRequest : public AbstractModel
                {
                public:
                    ModifyQAListRequest();
                    ~ModifyQAListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所属知识库 ID</p>
                     * @return KbId <p>所属知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>所属知识库 ID</p>
                     * @param _kbId <p>所属知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>待修改的 QA ID 列表（数量：1~20）</p>
                     * @return QaIdList <p>待修改的 QA ID 列表（数量：1~20）</p>
                     * 
                     */
                    std::vector<std::string> GetQaIdList() const;

                    /**
                     * 设置<p>待修改的 QA ID 列表（数量：1~20）</p>
                     * @param _qaIdList <p>待修改的 QA ID 列表（数量：1~20）</p>
                     * 
                     */
                    void SetQaIdList(const std::vector<std::string>& _qaIdList);

                    /**
                     * 判断参数 QaIdList 是否已赋值
                     * @return QaIdList 是否已赋值
                     * 
                     */
                    bool QaIdListHasBeenSet() const;

                    /**
                     * 获取<p>分类 ID</p>
                     * @return CategoryId <p>分类 ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>分类 ID</p>
                     * @param _categoryId <p>分类 ID</p>
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     * @return EffectiveDomain <p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetEffectiveDomain() const;

                    /**
                     * 设置<p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     * @param _effectiveDomain <p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     * 
                     */
                    void SetEffectiveDomain(const int64_t& _effectiveDomain);

                    /**
                     * 判断参数 EffectiveDomain 是否已赋值
                     * @return EffectiveDomain 是否已赋值
                     * 
                     */
                    bool EffectiveDomainHasBeenSet() const;

                    /**
                     * 获取<p>过期策略（有效时间与超过有效时间后的行为）</p>
                     * @return ExpirationPolicy <p>过期策略（有效时间与超过有效时间后的行为）</p>
                     * 
                     */
                    ExpirationPolicy GetExpirationPolicy() const;

                    /**
                     * 设置<p>过期策略（有效时间与超过有效时间后的行为）</p>
                     * @param _expirationPolicy <p>过期策略（有效时间与超过有效时间后的行为）</p>
                     * 
                     */
                    void SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy);

                    /**
                     * 判断参数 ExpirationPolicy 是否已赋值
                     * @return ExpirationPolicy 是否已赋值
                     * 
                     */
                    bool ExpirationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>是否采纳（校验通过）</p>
                     * @return IsAccepted <p>是否采纳（校验通过）</p>
                     * 
                     */
                    bool GetIsAccepted() const;

                    /**
                     * 设置<p>是否采纳（校验通过）</p>
                     * @param _isAccepted <p>是否采纳（校验通过）</p>
                     * 
                     */
                    void SetIsAccepted(const bool& _isAccepted);

                    /**
                     * 判断参数 IsAccepted 是否已赋值
                     * @return IsAccepted 是否已赋值
                     * 
                     */
                    bool IsAcceptedHasBeenSet() const;

                    /**
                     * 获取<p>适用范围（标签条件列表）</p>
                     * @return LabelRefList <p>适用范围（标签条件列表）</p>
                     * 
                     */
                    LabelRefIdentityList GetLabelRefList() const;

                    /**
                     * 设置<p>适用范围（标签条件列表）</p>
                     * @param _labelRefList <p>适用范围（标签条件列表）</p>
                     * 
                     */
                    void SetLabelRefList(const LabelRefIdentityList& _labelRefList);

                    /**
                     * 判断参数 LabelRefList 是否已赋值
                     * @return LabelRefList 是否已赋值
                     * 
                     */
                    bool LabelRefListHasBeenSet() const;

                private:

                    /**
                     * <p>所属知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>待修改的 QA ID 列表（数量：1~20）</p>
                     */
                    std::vector<std::string> m_qaIdList;
                    bool m_qaIdListHasBeenSet;

                    /**
                     * <p>分类 ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     */
                    int64_t m_effectiveDomain;
                    bool m_effectiveDomainHasBeenSet;

                    /**
                     * <p>过期策略（有效时间与超过有效时间后的行为）</p>
                     */
                    ExpirationPolicy m_expirationPolicy;
                    bool m_expirationPolicyHasBeenSet;

                    /**
                     * <p>是否采纳（校验通过）</p>
                     */
                    bool m_isAccepted;
                    bool m_isAcceptedHasBeenSet;

                    /**
                     * <p>适用范围（标签条件列表）</p>
                     */
                    LabelRefIdentityList m_labelRefList;
                    bool m_labelRefListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYQALISTREQUEST_H_
