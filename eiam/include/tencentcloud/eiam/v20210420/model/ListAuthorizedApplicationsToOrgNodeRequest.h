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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOORGNODEREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOORGNODEREQUEST_H_

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
                * ListAuthorizedApplicationsToOrgNode请求参数结构体
                */
                class ListAuthorizedApplicationsToOrgNodeRequest : public AbstractModel
                {
                public:
                    ListAuthorizedApplicationsToOrgNodeRequest();
                    ~ListAuthorizedApplicationsToOrgNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机构节点 Id 。
                     * @return OrgNodeId 机构节点 Id 。
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置机构节点 Id 。
                     * @param _orgNodeId 机构节点 Id 。
                     * 
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                private:

                    /**
                     * 机构节点 Id 。
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOORGNODEREQUEST_H_
