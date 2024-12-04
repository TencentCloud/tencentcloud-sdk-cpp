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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICQOSPOLICYRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICQOSPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficQosPolicySet.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTrafficQosPolicy返回参数结构体
                */
                class DescribeTrafficQosPolicyResponse : public AbstractModel
                {
                public:
                    DescribeTrafficQosPolicyResponse();
                    ~DescribeTrafficQosPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流量调度规则。
                     * @return TrafficQosPolicySet 流量调度规则。
                     * 
                     */
                    std::vector<TrafficQosPolicySet> GetTrafficQosPolicySet() const;

                    /**
                     * 判断参数 TrafficQosPolicySet 是否已赋值
                     * @return TrafficQosPolicySet 是否已赋值
                     * 
                     */
                    bool TrafficQosPolicySetHasBeenSet() const;

                private:

                    /**
                     * 流量调度规则。
                     */
                    std::vector<TrafficQosPolicySet> m_trafficQosPolicySet;
                    bool m_trafficQosPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICQOSPOLICYRESPONSE_H_
