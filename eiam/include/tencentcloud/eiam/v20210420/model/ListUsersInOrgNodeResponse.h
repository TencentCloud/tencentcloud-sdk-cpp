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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINORGNODERESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINORGNODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/OrgNodeChildUserInfo.h>
#include <tencentcloud/eiam/v20210420/model/UserInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUsersInOrgNode返回参数结构体
                */
                class ListUsersInOrgNodeResponse : public AbstractModel
                {
                public:
                    ListUsersInOrgNodeResponse();
                    ~ListUsersInOrgNodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机构子节点下的用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgNodeChildUserInfo 机构子节点下的用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OrgNodeChildUserInfo> GetOrgNodeChildUserInfo() const;

                    /**
                     * 判断参数 OrgNodeChildUserInfo 是否已赋值
                     * @return OrgNodeChildUserInfo 是否已赋值
                     * 
                     */
                    bool OrgNodeChildUserInfoHasBeenSet() const;

                    /**
                     * 获取机构ID，是机构节点全局唯一标识，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgNodeId 机构ID，是机构节点全局唯一标识，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserInfo 用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserInfo> GetUserInfo() const;

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取当前机构节点下的用户总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalUserNum 当前机构节点下的用户总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalUserNum() const;

                    /**
                     * 判断参数 TotalUserNum 是否已赋值
                     * @return TotalUserNum 是否已赋值
                     * 
                     */
                    bool TotalUserNumHasBeenSet() const;

                    /**
                     * 获取组织机构ID路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgNodeIdPath 组织机构ID路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgNodeIdPath() const;

                    /**
                     * 判断参数 OrgNodeIdPath 是否已赋值
                     * @return OrgNodeIdPath 是否已赋值
                     * 
                     */
                    bool OrgNodeIdPathHasBeenSet() const;

                    /**
                     * 获取组织机构名称路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgNodeNamePath 组织机构名称路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgNodeNamePath() const;

                    /**
                     * 判断参数 OrgNodeNamePath 是否已赋值
                     * @return OrgNodeNamePath 是否已赋值
                     * 
                     */
                    bool OrgNodeNamePathHasBeenSet() const;

                private:

                    /**
                     * 机构子节点下的用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OrgNodeChildUserInfo> m_orgNodeChildUserInfo;
                    bool m_orgNodeChildUserInfoHasBeenSet;

                    /**
                     * 机构ID，是机构节点全局唯一标识，长度限制：64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * 用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserInfo> m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 当前机构节点下的用户总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalUserNum;
                    bool m_totalUserNumHasBeenSet;

                    /**
                     * 组织机构ID路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgNodeIdPath;
                    bool m_orgNodeIdPathHasBeenSet;

                    /**
                     * 组织机构名称路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgNodeNamePath;
                    bool m_orgNodeNamePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINORGNODERESPONSE_H_
