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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPACL_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * EipAcl信息
                */
                class EipAcl : public AbstractModel
                {
                public:
                    EipAcl();
                    ~EipAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ACL 实例 ID。
                     * @return AclId ACL 实例 ID。
                     * 
                     */
                    std::string GetAclId() const;

                    /**
                     * 设置ACL 实例 ID。
                     * @param _aclId ACL 实例 ID。
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
                     * 获取ACL 实例名称
                     * @return AclName ACL 实例名称
                     * 
                     */
                    std::string GetAclName() const;

                    /**
                     * 设置ACL 实例名称
                     * @param _aclName ACL 实例名称
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
                     * 获取ACL 状态。0：无状态，1：有状态
                     * @return Status ACL 状态。0：无状态，1：有状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置ACL 状态。0：无状态，1：有状态
                     * @param _status ACL 状态。0：无状态，1：有状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取EIPACL 创建时间
                     * @return CreatedAt EIPACL 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置EIPACL 创建时间
                     * @param _createdAt EIPACL 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取EIPACL 已关联的 eip 数目
                     * @return EipNum EIPACL 已关联的 eip 数目
                     * 
                     */
                    int64_t GetEipNum() const;

                    /**
                     * 设置EIPACL 已关联的 eip 数目
                     * @param _eipNum EIPACL 已关联的 eip 数目
                     * 
                     */
                    void SetEipNum(const int64_t& _eipNum);

                    /**
                     * 判断参数 EipNum 是否已赋值
                     * @return EipNum 是否已赋值
                     * 
                     */
                    bool EipNumHasBeenSet() const;

                    /**
                     * 获取出站规则
                     * @return OutRules 出站规则
                     * 
                     */
                    std::vector<EipAclRule> GetOutRules() const;

                    /**
                     * 设置出站规则
                     * @param _outRules 出站规则
                     * 
                     */
                    void SetOutRules(const std::vector<EipAclRule>& _outRules);

                    /**
                     * 判断参数 OutRules 是否已赋值
                     * @return OutRules 是否已赋值
                     * 
                     */
                    bool OutRulesHasBeenSet() const;

                    /**
                     * 获取入站规则
                     * @return InRules 入站规则
                     * 
                     */
                    std::vector<EipAclRule> GetInRules() const;

                    /**
                     * 设置入站规则
                     * @param _inRules 入站规则
                     * 
                     */
                    void SetInRules(const std::vector<EipAclRule>& _inRules);

                    /**
                     * 判断参数 InRules 是否已赋值
                     * @return InRules 是否已赋值
                     * 
                     */
                    bool InRulesHasBeenSet() const;

                private:

                    /**
                     * ACL 实例 ID。
                     */
                    std::string m_aclId;
                    bool m_aclIdHasBeenSet;

                    /**
                     * ACL 实例名称
                     */
                    std::string m_aclName;
                    bool m_aclNameHasBeenSet;

                    /**
                     * ACL 状态。0：无状态，1：有状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * EIPACL 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * EIPACL 已关联的 eip 数目
                     */
                    int64_t m_eipNum;
                    bool m_eipNumHasBeenSet;

                    /**
                     * 出站规则
                     */
                    std::vector<EipAclRule> m_outRules;
                    bool m_outRulesHasBeenSet;

                    /**
                     * 入站规则
                     */
                    std::vector<EipAclRule> m_inRules;
                    bool m_inRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPACL_H_
