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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/EndPoint.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpcEndPoint返回参数结构体
                */
                class DescribeVpcEndPointResponse : public AbstractModel
                {
                public:
                    DescribeVpcEndPointResponse();
                    ~DescribeVpcEndPointResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点对象。
                     * @return EndPointSet 终端节点对象。
                     * 
                     */
                    std::vector<EndPoint> GetEndPointSet() const;

                    /**
                     * 判断参数 EndPointSet 是否已赋值
                     * @return EndPointSet 是否已赋值
                     * 
                     */
                    bool EndPointSetHasBeenSet() const;

                    /**
                     * 获取符合查询条件的终端节点个数。
                     * @return TotalCount 符合查询条件的终端节点个数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 终端节点对象。
                     */
                    std::vector<EndPoint> m_endPointSet;
                    bool m_endPointSetHasBeenSet;

                    /**
                     * 符合查询条件的终端节点个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTRESPONSE_H_
