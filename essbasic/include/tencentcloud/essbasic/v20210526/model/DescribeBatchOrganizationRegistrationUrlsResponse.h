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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEBATCHORGANIZATIONREGISTRATIONURLSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEBATCHORGANIZATIONREGISTRATIONURLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/OrganizationAuthUrl.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeBatchOrganizationRegistrationUrls返回参数结构体
                */
                class DescribeBatchOrganizationRegistrationUrlsResponse : public AbstractModel
                {
                public:
                    DescribeBatchOrganizationRegistrationUrlsResponse();
                    ~DescribeBatchOrganizationRegistrationUrlsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子企业注册认证的链接列表
                     * @return OrganizationAuthUrls 子企业注册认证的链接列表
                     * 
                     */
                    std::vector<OrganizationAuthUrl> GetOrganizationAuthUrls() const;

                    /**
                     * 判断参数 OrganizationAuthUrls 是否已赋值
                     * @return OrganizationAuthUrls 是否已赋值
                     * 
                     */
                    bool OrganizationAuthUrlsHasBeenSet() const;

                private:

                    /**
                     * 子企业注册认证的链接列表
                     */
                    std::vector<OrganizationAuthUrl> m_organizationAuthUrls;
                    bool m_organizationAuthUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEBATCHORGANIZATIONREGISTRATIONURLSRESPONSE_H_
