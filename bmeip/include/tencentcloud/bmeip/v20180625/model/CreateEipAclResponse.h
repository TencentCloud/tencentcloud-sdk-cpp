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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_CREATEEIPACLRESPONSE_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_CREATEEIPACLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateEipAcl返回参数结构体
                */
                class CreateEipAclResponse : public AbstractModel
                {
                public:
                    CreateEipAclResponse();
                    ~CreateEipAclResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ACL 实例 ID
                     * @return AclId ACL 实例 ID
                     * 
                     */
                    std::string GetAclId() const;

                    /**
                     * 判断参数 AclId 是否已赋值
                     * @return AclId 是否已赋值
                     * 
                     */
                    bool AclIdHasBeenSet() const;

                    /**
                     * 获取ACL 实例状态
                     * @return Status ACL 实例状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取ACL 实例名称
                     * @return AclName ACL 实例名称
                     * 
                     */
                    std::string GetAclName() const;

                    /**
                     * 判断参数 AclName 是否已赋值
                     * @return AclName 是否已赋值
                     * 
                     */
                    bool AclNameHasBeenSet() const;

                    /**
                     * 获取ACL 实例创建时间
                     * @return CreatedAt ACL 实例创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * ACL 实例 ID
                     */
                    std::string m_aclId;
                    bool m_aclIdHasBeenSet;

                    /**
                     * ACL 实例状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ACL 实例名称
                     */
                    std::string m_aclName;
                    bool m_aclNameHasBeenSet;

                    /**
                     * ACL 实例创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_CREATEEIPACLRESPONSE_H_
