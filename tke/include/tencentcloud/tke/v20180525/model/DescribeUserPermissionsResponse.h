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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEUSERPERMISSIONSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEUSERPERMISSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PermissionItem.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeUserPermissions返回参数结构体
                */
                class DescribeUserPermissionsResponse : public AbstractModel
                {
                public:
                    DescribeUserPermissionsResponse();
                    ~DescribeUserPermissionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户在当前地域下所有集群中的权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permissions 用户在当前地域下所有集群中的权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PermissionItem> GetPermissions() const;

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取用户唯一标识符
                     * @return TargetUin 用户唯一标识符
                     * 
                     */
                    std::string GetTargetUin() const;

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                private:

                    /**
                     * 用户在当前地域下所有集群中的权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PermissionItem> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * 用户唯一标识符
                     */
                    std::string m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEUSERPERMISSIONSRESPONSE_H_
