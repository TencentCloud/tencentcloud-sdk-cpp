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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ExtendAuthInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeExtendedServiceAuthInfos返回参数结构体
                */
                class DescribeExtendedServiceAuthInfosResponse : public AbstractModel
                {
                public:
                    DescribeExtendedServiceAuthInfosResponse();
                    ~DescribeExtendedServiceAuthInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务开通和授权的信息列表，根据查询类型返回所有支持的扩展服务开通和授权状况，或者返回特定扩展服务的开通和授权状况。
                     * @return AuthInfoList 服务开通和授权的信息列表，根据查询类型返回所有支持的扩展服务开通和授权状况，或者返回特定扩展服务的开通和授权状况。
                     * 
                     */
                    std::vector<ExtendAuthInfo> GetAuthInfoList() const;

                    /**
                     * 判断参数 AuthInfoList 是否已赋值
                     * @return AuthInfoList 是否已赋值
                     * 
                     */
                    bool AuthInfoListHasBeenSet() const;

                private:

                    /**
                     * 服务开通和授权的信息列表，根据查询类型返回所有支持的扩展服务开通和授权状况，或者返回特定扩展服务的开通和授权状况。
                     */
                    std::vector<ExtendAuthInfo> m_authInfoList;
                    bool m_authInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOSRESPONSE_H_
