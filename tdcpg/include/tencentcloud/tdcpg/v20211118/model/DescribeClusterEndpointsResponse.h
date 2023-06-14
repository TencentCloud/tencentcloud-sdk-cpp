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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERENDPOINTSRESPONSE_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERENDPOINTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdcpg/v20211118/model/Endpoint.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * DescribeClusterEndpoints返回参数结构体
                */
                class DescribeClusterEndpointsResponse : public AbstractModel
                {
                public:
                    DescribeClusterEndpointsResponse();
                    ~DescribeClusterEndpointsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取接入点列表
                     * @return EndpointSet 接入点列表
                     * 
                     */
                    std::vector<Endpoint> GetEndpointSet() const;

                    /**
                     * 判断参数 EndpointSet 是否已赋值
                     * @return EndpointSet 是否已赋值
                     * 
                     */
                    bool EndpointSetHasBeenSet() const;

                private:

                    /**
                     * 总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 接入点列表
                     */
                    std::vector<Endpoint> m_endpointSet;
                    bool m_endpointSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERENDPOINTSRESPONSE_H_
