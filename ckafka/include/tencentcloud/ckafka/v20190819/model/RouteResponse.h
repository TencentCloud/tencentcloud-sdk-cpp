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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTERESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Route.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 路由信息返回对象
                */
                class RouteResponse : public AbstractModel
                {
                public:
                    RouteResponse();
                    ~RouteResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由信息列表
                     * @return Routers 路由信息列表
                     * 
                     */
                    std::vector<Route> GetRouters() const;

                    /**
                     * 设置路由信息列表
                     * @param _routers 路由信息列表
                     * 
                     */
                    void SetRouters(const std::vector<Route>& _routers);

                    /**
                     * 判断参数 Routers 是否已赋值
                     * @return Routers 是否已赋值
                     * 
                     */
                    bool RoutersHasBeenSet() const;

                private:

                    /**
                     * 路由信息列表
                     */
                    std::vector<Route> m_routers;
                    bool m_routersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTERESPONSE_H_
