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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERDOMAININFORESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERDOMAININFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/UserDomainInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeUserDomainInfo返回参数结构体
                */
                class DescribeUserDomainInfoResponse : public AbstractModel
                {
                public:
                    DescribeUserDomainInfoResponse();
                    ~DescribeUserDomainInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取saas和clb域名信息
                     * @return UsersInfo saas和clb域名信息
                     * 
                     */
                    std::vector<UserDomainInfo> GetUsersInfo() const;

                    /**
                     * 判断参数 UsersInfo 是否已赋值
                     * @return UsersInfo 是否已赋值
                     * 
                     */
                    bool UsersInfoHasBeenSet() const;

                private:

                    /**
                     * saas和clb域名信息
                     */
                    std::vector<UserDomainInfo> m_usersInfo;
                    bool m_usersInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERDOMAININFORESPONSE_H_
