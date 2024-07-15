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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTETABLEINPUTPOLICYSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTETABLEINPUTPOLICYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCcnRouteTableInputPolicys请求参数结构体
                */
                class DescribeCcnRouteTableInputPolicysRequest : public AbstractModel
                {
                public:
                    DescribeCcnRouteTableInputPolicysRequest();
                    ~DescribeCcnRouteTableInputPolicysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云联网ID。
                     * @return CcnId 云联网ID。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID。
                     * @param _ccnId 云联网ID。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云联网路由表ID。
                     * @return RouteTableId 云联网路由表ID。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置云联网路由表ID。
                     * @param _routeTableId 云联网路由表ID。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取路由接收策略版本号。
                     * @return PolicyVersion 路由接收策略版本号。
                     * 
                     */
                    uint64_t GetPolicyVersion() const;

                    /**
                     * 设置路由接收策略版本号。
                     * @param _policyVersion 路由接收策略版本号。
                     * 
                     */
                    void SetPolicyVersion(const uint64_t& _policyVersion);

                    /**
                     * 判断参数 PolicyVersion 是否已赋值
                     * @return PolicyVersion 是否已赋值
                     * 
                     */
                    bool PolicyVersionHasBeenSet() const;

                private:

                    /**
                     * 云联网ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云联网路由表ID。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 路由接收策略版本号。
                     */
                    uint64_t m_policyVersion;
                    bool m_policyVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTETABLEINPUTPOLICYSREQUEST_H_
