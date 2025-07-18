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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTSCIMCREDENTIALSRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTSCIMCREDENTIALSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/SCIMCredential.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListSCIMCredentials返回参数结构体
                */
                class ListSCIMCredentialsResponse : public AbstractModel
                {
                public:
                    ListSCIMCredentialsResponse();
                    ~ListSCIMCredentialsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SCIM密钥数量。
                     * @return TotalCounts SCIM密钥数量。
                     * 
                     */
                    int64_t GetTotalCounts() const;

                    /**
                     * 判断参数 TotalCounts 是否已赋值
                     * @return TotalCounts 是否已赋值
                     * 
                     */
                    bool TotalCountsHasBeenSet() const;

                    /**
                     * 获取SCIM 密钥信息。
                     * @return SCIMCredentials SCIM 密钥信息。
                     * 
                     */
                    std::vector<SCIMCredential> GetSCIMCredentials() const;

                    /**
                     * 判断参数 SCIMCredentials 是否已赋值
                     * @return SCIMCredentials 是否已赋值
                     * 
                     */
                    bool SCIMCredentialsHasBeenSet() const;

                private:

                    /**
                     * SCIM密钥数量。
                     */
                    int64_t m_totalCounts;
                    bool m_totalCountsHasBeenSet;

                    /**
                     * SCIM 密钥信息。
                     */
                    std::vector<SCIMCredential> m_sCIMCredentials;
                    bool m_sCIMCredentialsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTSCIMCREDENTIALSRESPONSE_H_
