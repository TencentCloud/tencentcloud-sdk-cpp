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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGRESOURCESAUTHORIZATIONRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGRESOURCESAUTHORIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/AuthorizationResourceEntityInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeOrgResourcesAuthorization返回参数结构体
                */
                class DescribeOrgResourcesAuthorizationResponse : public AbstractModel
                {
                public:
                    DescribeOrgResourcesAuthorizationResponse();
                    ~DescribeOrgResourcesAuthorizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取授权机构ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgNodeId 授权机构ID
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
                     * 获取机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgNodeName 机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgNodeName() const;

                    /**
                     * 判断参数 OrgNodeName 是否已赋值
                     * @return OrgNodeName 是否已赋值
                     * 
                     */
                    bool OrgNodeNameHasBeenSet() const;

                    /**
                     * 获取机构目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgNodePath 机构目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgNodePath() const;

                    /**
                     * 判断参数 OrgNodePath 是否已赋值
                     * @return OrgNodePath 是否已赋值
                     * 
                     */
                    bool OrgNodePathHasBeenSet() const;

                    /**
                     * 获取资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizationOrgResourceList 资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AuthorizationResourceEntityInfo> GetAuthorizationOrgResourceList() const;

                    /**
                     * 判断参数 AuthorizationOrgResourceList 是否已赋值
                     * @return AuthorizationOrgResourceList 是否已赋值
                     * 
                     */
                    bool AuthorizationOrgResourceListHasBeenSet() const;

                    /**
                     * 获取资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 授权机构ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * 机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgNodeName;
                    bool m_orgNodeNameHasBeenSet;

                    /**
                     * 机构目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgNodePath;
                    bool m_orgNodePathHasBeenSet;

                    /**
                     * 资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuthorizationResourceEntityInfo> m_authorizationOrgResourceList;
                    bool m_authorizationOrgResourceListHasBeenSet;

                    /**
                     * 资源数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGRESOURCESAUTHORIZATIONRESPONSE_H_
