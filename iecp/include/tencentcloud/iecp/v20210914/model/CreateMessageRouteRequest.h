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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEMESSAGEROUTEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEMESSAGEROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateMessageRoute请求参数结构体
                */
                class CreateMessageRouteRequest : public AbstractModel
                {
                public:
                    CreateMessageRouteRequest();
                    ~CreateMessageRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由名称
                     * @return RouteName 路由名称
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置路由名称
                     * @param _routeName 路由名称
                     * 
                     */
                    void SetRouteName(const std::string& _routeName);

                    /**
                     * 判断参数 RouteName 是否已赋值
                     * @return RouteName 是否已赋值
                     * 
                     */
                    bool RouteNameHasBeenSet() const;

                    /**
                     * 获取路由备注
                     * @return Descript 路由备注
                     * 
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置路由备注
                     * @param _descript 路由备注
                     * 
                     */
                    void SetDescript(const std::string& _descript);

                    /**
                     * 判断参数 Descript 是否已赋值
                     * @return Descript 是否已赋值
                     * 
                     */
                    bool DescriptHasBeenSet() const;

                private:

                    /**
                     * 路由名称
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * 路由备注
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEMESSAGEROUTEREQUEST_H_
