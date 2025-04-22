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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEGLOBALROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEGLOBALROUTESREQUEST_H_

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
                * DeleteGlobalRoutes请求参数结构体
                */
                class DeleteGlobalRoutesRequest : public AbstractModel
                {
                public:
                    DeleteGlobalRoutesRequest();
                    ~DeleteGlobalRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC唯一Id。
                     * @return VpcId VPC唯一Id。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC唯一Id。
                     * @param _vpcId VPC唯一Id。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取全局路由实例唯一Id列表。
                     * @return GlobalRouteIds 全局路由实例唯一Id列表。
                     * 
                     */
                    std::vector<std::string> GetGlobalRouteIds() const;

                    /**
                     * 设置全局路由实例唯一Id列表。
                     * @param _globalRouteIds 全局路由实例唯一Id列表。
                     * 
                     */
                    void SetGlobalRouteIds(const std::vector<std::string>& _globalRouteIds);

                    /**
                     * 判断参数 GlobalRouteIds 是否已赋值
                     * @return GlobalRouteIds 是否已赋值
                     * 
                     */
                    bool GlobalRouteIdsHasBeenSet() const;

                private:

                    /**
                     * VPC唯一Id。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 全局路由实例唯一Id列表。
                     */
                    std::vector<std::string> m_globalRouteIds;
                    bool m_globalRouteIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEGLOBALROUTESREQUEST_H_
