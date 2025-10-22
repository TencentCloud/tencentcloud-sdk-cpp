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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEROUTEPOLICYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEROUTEPOLICYREQUEST_H_

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
                * DeleteRoutePolicy请求参数结构体
                */
                class DeleteRoutePolicyRequest : public AbstractModel
                {
                public:
                    DeleteRoutePolicyRequest();
                    ~DeleteRoutePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由接收策略唯一ID。
                     * @return RoutePolicyId 路由接收策略唯一ID。
                     * 
                     */
                    std::string GetRoutePolicyId() const;

                    /**
                     * 设置路由接收策略唯一ID。
                     * @param _routePolicyId 路由接收策略唯一ID。
                     * 
                     */
                    void SetRoutePolicyId(const std::string& _routePolicyId);

                    /**
                     * 判断参数 RoutePolicyId 是否已赋值
                     * @return RoutePolicyId 是否已赋值
                     * 
                     */
                    bool RoutePolicyIdHasBeenSet() const;

                private:

                    /**
                     * 路由接收策略唯一ID。
                     */
                    std::string m_routePolicyId;
                    bool m_routePolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEROUTEPOLICYREQUEST_H_
