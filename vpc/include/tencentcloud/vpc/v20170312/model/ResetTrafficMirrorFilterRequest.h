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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORFILTERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORFILTERREQUEST_H_

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
                * ResetTrafficMirrorFilter请求参数结构体
                */
                class ResetTrafficMirrorFilterRequest : public AbstractModel
                {
                public:
                    ResetTrafficMirrorFilterRequest();
                    ~ResetTrafficMirrorFilterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID
                     * @return TrafficMirrorId 流量镜像实例ID
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像实例ID
                     * @param _trafficMirrorId 流量镜像实例ID
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取流量镜像需要过滤的natgw实例ID
                     * @return NatId 流量镜像需要过滤的natgw实例ID
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置流量镜像需要过滤的natgw实例ID
                     * @param _natId 流量镜像需要过滤的natgw实例ID
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取流量镜像需要过滤的五元组规则
                     * @return CollectorNormalFilters 流量镜像需要过滤的五元组规则
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetCollectorNormalFilters() const;

                    /**
                     * 设置流量镜像需要过滤的五元组规则
                     * @param _collectorNormalFilters 流量镜像需要过滤的五元组规则
                     * 
                     */
                    void SetCollectorNormalFilters(const std::vector<TrafficMirrorFilter>& _collectorNormalFilters);

                    /**
                     * 判断参数 CollectorNormalFilters 是否已赋值
                     * @return CollectorNormalFilters 是否已赋值
                     * 
                     */
                    bool CollectorNormalFiltersHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 流量镜像需要过滤的natgw实例ID
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * 流量镜像需要过滤的五元组规则
                     */
                    std::vector<TrafficMirrorFilter> m_collectorNormalFilters;
                    bool m_collectorNormalFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORFILTERREQUEST_H_
