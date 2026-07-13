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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEENDPOINTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeEndpoint请求参数结构体
                */
                class DescribeEndpointRequest : public AbstractModel
                {
                public:
                    DescribeEndpointRequest();
                    ~DescribeEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>推理服务 ID。可通过 DescribeEndpointList 接口获取。</p>
                     * @return EndpointId <p>推理服务 ID。可通过 DescribeEndpointList 接口获取。</p>
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置<p>推理服务 ID。可通过 DescribeEndpointList 接口获取。</p>
                     * @param _endpointId <p>推理服务 ID。可通过 DescribeEndpointList 接口获取。</p>
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                private:

                    /**
                     * <p>推理服务 ID。可通过 DescribeEndpointList 接口获取。</p>
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEENDPOINTREQUEST_H_
