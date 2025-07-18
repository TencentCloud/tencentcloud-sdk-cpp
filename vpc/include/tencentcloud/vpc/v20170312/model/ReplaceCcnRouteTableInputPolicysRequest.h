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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACECCNROUTETABLEINPUTPOLICYSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACECCNROUTETABLEINPUTPOLICYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRouteTableInputPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ReplaceCcnRouteTableInputPolicys请求参数结构体
                */
                class ReplaceCcnRouteTableInputPolicysRequest : public AbstractModel
                {
                public:
                    ReplaceCcnRouteTableInputPolicysRequest();
                    ~ReplaceCcnRouteTableInputPolicysRequest() = default;
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
                     * 获取新的路由接收策略。
                     * @return Policys 新的路由接收策略。
                     * 
                     */
                    std::vector<CcnRouteTableInputPolicy> GetPolicys() const;

                    /**
                     * 设置新的路由接收策略。
                     * @param _policys 新的路由接收策略。
                     * 
                     */
                    void SetPolicys(const std::vector<CcnRouteTableInputPolicy>& _policys);

                    /**
                     * 判断参数 Policys 是否已赋值
                     * @return Policys 是否已赋值
                     * 
                     */
                    bool PolicysHasBeenSet() const;

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
                     * 新的路由接收策略。
                     */
                    std::vector<CcnRouteTableInputPolicy> m_policys;
                    bool m_policysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACECCNROUTETABLEINPUTPOLICYSREQUEST_H_
