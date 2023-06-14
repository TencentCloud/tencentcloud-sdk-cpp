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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL7LISTENERSRESPONSE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL7LISTENERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateL7Listeners返回参数结构体
                */
                class CreateL7ListenersResponse : public AbstractModel
                {
                public:
                    CreateL7ListenersResponse();
                    ~CreateL7ListenersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新建的负载均衡七层监听器的唯一ID列表。
                     * @return ListenerIds 新建的负载均衡七层监听器的唯一ID列表。
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                private:

                    /**
                     * 新建的负载均衡七层监听器的唯一ID列表。
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL7LISTENERSRESPONSE_H_
