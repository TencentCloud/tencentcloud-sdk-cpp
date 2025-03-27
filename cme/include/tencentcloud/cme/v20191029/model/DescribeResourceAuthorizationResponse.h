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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBERESOURCEAUTHORIZATIONRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBERESOURCEAUTHORIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/AuthorizationInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeResourceAuthorization返回参数结构体
                */
                class DescribeResourceAuthorizationResponse : public AbstractModel
                {
                public:
                    DescribeResourceAuthorizationResponse();
                    ~DescribeResourceAuthorizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的资源授权记录总数。
                     * @return TotalCount 符合条件的资源授权记录总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取授权信息列表。
                     * @return AuthorizationInfoSet 授权信息列表。
                     * 
                     */
                    std::vector<AuthorizationInfo> GetAuthorizationInfoSet() const;

                    /**
                     * 判断参数 AuthorizationInfoSet 是否已赋值
                     * @return AuthorizationInfoSet 是否已赋值
                     * 
                     */
                    bool AuthorizationInfoSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的资源授权记录总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 授权信息列表。
                     */
                    std::vector<AuthorizationInfo> m_authorizationInfoSet;
                    bool m_authorizationInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBERESOURCEAUTHORIZATIONRESPONSE_H_
