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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEEXTENDEDSERVICEAUTHDETAILRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEEXTENDEDSERVICEAUTHDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/AuthInfoDetail.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeExtendedServiceAuthDetail返回参数结构体
                */
                class DescribeExtendedServiceAuthDetailResponse : public AbstractModel
                {
                public:
                    DescribeExtendedServiceAuthDetailResponse();
                    ~DescribeExtendedServiceAuthDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务授权的信息列表，根据查询类型返回特定扩展服务的开通和授权状况。
                     * @return AuthInfoDetail 服务授权的信息列表，根据查询类型返回特定扩展服务的开通和授权状况。
                     * 
                     */
                    AuthInfoDetail GetAuthInfoDetail() const;

                    /**
                     * 判断参数 AuthInfoDetail 是否已赋值
                     * @return AuthInfoDetail 是否已赋值
                     * 
                     */
                    bool AuthInfoDetailHasBeenSet() const;

                private:

                    /**
                     * 服务授权的信息列表，根据查询类型返回特定扩展服务的开通和授权状况。
                     */
                    AuthInfoDetail m_authInfoDetail;
                    bool m_authInfoDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEEXTENDEDSERVICEAUTHDETAILRESPONSE_H_
