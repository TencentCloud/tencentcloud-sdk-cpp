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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DELETEMESSAGEROUTEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DELETEMESSAGEROUTEREQUEST_H_

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
                * DeleteMessageRoute请求参数结构体
                */
                class DeleteMessageRouteRequest : public AbstractModel
                {
                public:
                    DeleteMessageRouteRequest();
                    ~DeleteMessageRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return RouteID 无
                     * 
                     */
                    int64_t GetRouteID() const;

                    /**
                     * 设置无
                     * @param _routeID 无
                     * 
                     */
                    void SetRouteID(const int64_t& _routeID);

                    /**
                     * 判断参数 RouteID 是否已赋值
                     * @return RouteID 是否已赋值
                     * 
                     */
                    bool RouteIDHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    int64_t m_routeID;
                    bool m_routeIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DELETEMESSAGEROUTEREQUEST_H_
