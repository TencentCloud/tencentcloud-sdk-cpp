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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYINBOUNDENDPOINTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYINBOUNDENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * ModifyInboundEndpoint请求参数结构体
                */
                class ModifyInboundEndpointRequest : public AbstractModel
                {
                public:
                    ModifyInboundEndpointRequest();
                    ~ModifyInboundEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点ID
                     * @return EndpointId 终端节点ID
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置终端节点ID
                     * @param _endpointId 终端节点ID
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取终端节点名称
                     * @return EndpointName 终端节点名称
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置终端节点名称
                     * @param _endpointName 终端节点名称
                     * 
                     */
                    void SetEndpointName(const std::string& _endpointName);

                    /**
                     * 判断参数 EndpointName 是否已赋值
                     * @return EndpointName 是否已赋值
                     * 
                     */
                    bool EndpointNameHasBeenSet() const;

                private:

                    /**
                     * 终端节点ID
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * 终端节点名称
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYINBOUNDENDPOINTREQUEST_H_
