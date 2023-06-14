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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOORGNODERESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOORGNODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListAuthorizedApplicationsToOrgNode返回参数结构体
                */
                class ListAuthorizedApplicationsToOrgNodeResponse : public AbstractModel
                {
                public:
                    ListAuthorizedApplicationsToOrgNodeResponse();
                    ~ListAuthorizedApplicationsToOrgNodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机构节点拥有访问权限的应用 id 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationIds 机构节点拥有访问权限的应用 id 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetApplicationIds() const;

                    /**
                     * 判断参数 ApplicationIds 是否已赋值
                     * @return ApplicationIds 是否已赋值
                     * 
                     */
                    bool ApplicationIdsHasBeenSet() const;

                private:

                    /**
                     * 机构节点拥有访问权限的应用 id 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_applicationIds;
                    bool m_applicationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOORGNODERESPONSE_H_
