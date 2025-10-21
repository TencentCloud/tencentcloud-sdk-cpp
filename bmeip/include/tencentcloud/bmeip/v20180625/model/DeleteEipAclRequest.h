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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_DELETEEIPACLREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_DELETEEIPACLREQUEST_H_

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
                * DeleteEipAcl请求参数结构体
                */
                class DeleteEipAclRequest : public AbstractModel
                {
                public:
                    DeleteEipAclRequest();
                    ~DeleteEipAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的 ACL 实例 ID
                     * @return AclId 待删除的 ACL 实例 ID
                     * 
                     */
                    std::string GetAclId() const;

                    /**
                     * 设置待删除的 ACL 实例 ID
                     * @param _aclId 待删除的 ACL 实例 ID
                     * 
                     */
                    void SetAclId(const std::string& _aclId);

                    /**
                     * 判断参数 AclId 是否已赋值
                     * @return AclId 是否已赋值
                     * 
                     */
                    bool AclIdHasBeenSet() const;

                private:

                    /**
                     * 待删除的 ACL 实例 ID
                     */
                    std::string m_aclId;
                    bool m_aclIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_DELETEEIPACLREQUEST_H_
