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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELNUMBERSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELNUMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListOrganizationChannelNumbers请求参数结构体
                */
                class ListOrganizationChannelNumbersRequest : public AbstractModel
                {
                public:
                    ListOrganizationChannelNumbersRequest();
                    ~ListOrganizationChannelNumbersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组织ID，json数组格式，最多一次支持10个组织
                     * @return OrganizationId 组织ID，json数组格式，最多一次支持10个组织
                     * 
                     */
                    std::vector<std::string> GetOrganizationId() const;

                    /**
                     * 设置组织ID，json数组格式，最多一次支持10个组织
                     * @param _organizationId 组织ID，json数组格式，最多一次支持10个组织
                     * 
                     */
                    void SetOrganizationId(const std::vector<std::string>& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                private:

                    /**
                     * 组织ID，json数组格式，最多一次支持10个组织
                     */
                    std::vector<std::string> m_organizationId;
                    bool m_organizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELNUMBERSREQUEST_H_
