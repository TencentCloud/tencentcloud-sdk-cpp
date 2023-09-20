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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_QUITORGANIZATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_QUITORGANIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * QuitOrganization请求参数结构体
                */
                class QuitOrganizationRequest : public AbstractModel
                {
                public:
                    QuitOrganizationRequest();
                    ~QuitOrganizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业组织ID
                     * @return OrgId 企业组织ID
                     * 
                     */
                    uint64_t GetOrgId() const;

                    /**
                     * 设置企业组织ID
                     * @param _orgId 企业组织ID
                     * 
                     */
                    void SetOrgId(const uint64_t& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                private:

                    /**
                     * 企业组织ID
                     */
                    uint64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_QUITORGANIZATIONREQUEST_H_
