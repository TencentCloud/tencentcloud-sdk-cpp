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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORFILTERRULESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORFILTERRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorFilter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrorFilterRules返回参数结构体
                */
                class DescribeTrafficMirrorFilterRulesResponse : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorFilterRulesResponse();
                    ~DescribeTrafficMirrorFilterRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例唯一ID。
                     * @return TrafficMirrorId 流量镜像实例唯一ID。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取流量镜像入站过滤规则。
                     * @return IngressFilterRules 流量镜像入站过滤规则。
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetIngressFilterRules() const;

                    /**
                     * 判断参数 IngressFilterRules 是否已赋值
                     * @return IngressFilterRules 是否已赋值
                     * 
                     */
                    bool IngressFilterRulesHasBeenSet() const;

                    /**
                     * 获取流量镜像出站过滤规则。
                     * @return EgressFilterRules 流量镜像出站过滤规则。
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetEgressFilterRules() const;

                    /**
                     * 判断参数 EgressFilterRules 是否已赋值
                     * @return EgressFilterRules 是否已赋值
                     * 
                     */
                    bool EgressFilterRulesHasBeenSet() const;

                    /**
                     * 获取符合条件的实例数量。分页查询的时候，如果IngressFilterRules的长度加上IngressFilterRules的长度，小于limit的时候表示已经查询完毕。
                     * @return TotalCount 符合条件的实例数量。分页查询的时候，如果IngressFilterRules的长度加上IngressFilterRules的长度，小于limit的时候表示已经查询完毕。
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
                     * 流量镜像实例唯一ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 流量镜像入站过滤规则。
                     */
                    std::vector<TrafficMirrorFilter> m_ingressFilterRules;
                    bool m_ingressFilterRulesHasBeenSet;

                    /**
                     * 流量镜像出站过滤规则。
                     */
                    std::vector<TrafficMirrorFilter> m_egressFilterRules;
                    bool m_egressFilterRulesHasBeenSet;

                    /**
                     * 符合条件的实例数量。分页查询的时候，如果IngressFilterRules的长度加上IngressFilterRules的长度，小于limit的时候表示已经查询完毕。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORFILTERRULESRESPONSE_H_
