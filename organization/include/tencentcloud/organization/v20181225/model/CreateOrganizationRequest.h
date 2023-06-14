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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_CREATEORGANIZATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_CREATEORGANIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * CreateOrganization请求参数结构体
                */
                class CreateOrganizationRequest : public AbstractModel
                {
                public:
                    CreateOrganizationRequest();
                    ~CreateOrganizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组织类型（目前固定为1）
                     * @return OrgType 组织类型（目前固定为1）
                     * 
                     */
                    uint64_t GetOrgType() const;

                    /**
                     * 设置组织类型（目前固定为1）
                     * @param _orgType 组织类型（目前固定为1）
                     * 
                     */
                    void SetOrgType(const uint64_t& _orgType);

                    /**
                     * 判断参数 OrgType 是否已赋值
                     * @return OrgType 是否已赋值
                     * 
                     */
                    bool OrgTypeHasBeenSet() const;

                private:

                    /**
                     * 组织类型（目前固定为1）
                     */
                    uint64_t m_orgType;
                    bool m_orgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_CREATEORGANIZATIONREQUEST_H_
