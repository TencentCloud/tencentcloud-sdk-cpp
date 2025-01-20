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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISABLECCNROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISABLECCNROUTESREQUEST_H_

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
                * DisableCcnRoutes请求参数结构体
                */
                class DisableCcnRoutesRequest : public AbstractModel
                {
                public:
                    DisableCcnRoutesRequest();
                    ~DisableCcnRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CCN实例ID。形如：ccn-f49l6u0z。
                     * @return CcnId CCN实例ID。形如：ccn-f49l6u0z。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN实例ID。形如：ccn-f49l6u0z。
                     * @param _ccnId CCN实例ID。形如：ccn-f49l6u0z。
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
                     * 获取CCN路由策略唯一ID。形如：ccnr-f49l6u0z。可通过DescribeCcnRoutes获取。
                     * @return RouteIds CCN路由策略唯一ID。形如：ccnr-f49l6u0z。可通过DescribeCcnRoutes获取。
                     * 
                     */
                    std::vector<std::string> GetRouteIds() const;

                    /**
                     * 设置CCN路由策略唯一ID。形如：ccnr-f49l6u0z。可通过DescribeCcnRoutes获取。
                     * @param _routeIds CCN路由策略唯一ID。形如：ccnr-f49l6u0z。可通过DescribeCcnRoutes获取。
                     * 
                     */
                    void SetRouteIds(const std::vector<std::string>& _routeIds);

                    /**
                     * 判断参数 RouteIds 是否已赋值
                     * @return RouteIds 是否已赋值
                     * 
                     */
                    bool RouteIdsHasBeenSet() const;

                private:

                    /**
                     * CCN实例ID。形如：ccn-f49l6u0z。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * CCN路由策略唯一ID。形如：ccnr-f49l6u0z。可通过DescribeCcnRoutes获取。
                     */
                    std::vector<std::string> m_routeIds;
                    bool m_routeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISABLECCNROUTESREQUEST_H_
