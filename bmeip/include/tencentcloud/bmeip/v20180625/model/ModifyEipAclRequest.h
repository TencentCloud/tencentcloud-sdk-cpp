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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_MODIFYEIPACLREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_MODIFYEIPACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmeip/v20180625/model/EipAclRule.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyEipAcl请求参数结构体
                */
                class ModifyEipAclRequest : public AbstractModel
                {
                public:
                    ModifyEipAclRequest();
                    ~ModifyEipAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ACL 实例 ID
                     * @return AclId ACL 实例 ID
                     * 
                     */
                    std::string GetAclId() const;

                    /**
                     * 设置ACL 实例 ID
                     * @param _aclId ACL 实例 ID
                     * 
                     */
                    void SetAclId(const std::string& _aclId);

                    /**
                     * 判断参数 AclId 是否已赋值
                     * @return AclId 是否已赋值
                     * 
                     */
                    bool AclIdHasBeenSet() const;

                    /**
                     * 获取ACL 名称
                     * @return AclName ACL 名称
                     * 
                     */
                    std::string GetAclName() const;

                    /**
                     * 设置ACL 名称
                     * @param _aclName ACL 名称
                     * 
                     */
                    void SetAclName(const std::string& _aclName);

                    /**
                     * 判断参数 AclName 是否已赋值
                     * @return AclName 是否已赋值
                     * 
                     */
                    bool AclNameHasBeenSet() const;

                    /**
                     * 获取ACL 状态。0：无状态 1：有状态
                     * @return Status ACL 状态。0：无状态 1：有状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置ACL 状态。0：无状态 1：有状态
                     * @param _status ACL 状态。0：无状态 1：有状态
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
                     * 获取规则类型（in/out）。in：入站规则 out：出站规则
                     * @return Type 规则类型（in/out）。in：入站规则 out：出站规则
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置规则类型（in/out）。in：入站规则 out：出站规则
                     * @param _type 规则类型（in/out）。in：入站规则 out：出站规则
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取ACL规则列表
                     * @return Rules ACL规则列表
                     * 
                     */
                    std::vector<EipAclRule> GetRules() const;

                    /**
                     * 设置ACL规则列表
                     * @param _rules ACL规则列表
                     * 
                     */
                    void SetRules(const std::vector<EipAclRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * ACL 实例 ID
                     */
                    std::string m_aclId;
                    bool m_aclIdHasBeenSet;

                    /**
                     * ACL 名称
                     */
                    std::string m_aclName;
                    bool m_aclNameHasBeenSet;

                    /**
                     * ACL 状态。0：无状态 1：有状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则类型（in/out）。in：入站规则 out：出站规则
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ACL规则列表
                     */
                    std::vector<EipAclRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_MODIFYEIPACLREQUEST_H_
