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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrors请求参数结构体
                */
                class DescribeTrafficMirrorsRequest : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorsRequest();
                    ~DescribeTrafficMirrorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID集合
                     * @return TrafficMirrorIds 流量镜像实例ID集合
                     * 
                     */
                    std::vector<std::string> GetTrafficMirrorIds() const;

                    /**
                     * 设置流量镜像实例ID集合
                     * @param _trafficMirrorIds 流量镜像实例ID集合
                     * 
                     */
                    void SetTrafficMirrorIds(const std::vector<std::string>& _trafficMirrorIds);

                    /**
                     * 判断参数 TrafficMirrorIds 是否已赋值
                     * @return TrafficMirrorIds 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdsHasBeenSet() const;

                    /**
                     * 获取流量镜像查询过滤调节。
vpc-id ：VPC实例ID，例如：vpc-f49l6u0z。
traffic-mirror-id：流量镜像实例ID。
traffic-mirror-name：流量镜像名称。
tag-key ：按照标签键进行过滤。
                     * @return Filters 流量镜像查询过滤调节。
vpc-id ：VPC实例ID，例如：vpc-f49l6u0z。
traffic-mirror-id：流量镜像实例ID。
traffic-mirror-name：流量镜像名称。
tag-key ：按照标签键进行过滤。
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置流量镜像查询过滤调节。
vpc-id ：VPC实例ID，例如：vpc-f49l6u0z。
traffic-mirror-id：流量镜像实例ID。
traffic-mirror-name：流量镜像名称。
tag-key ：按照标签键进行过滤。
                     * @param _filters 流量镜像查询过滤调节。
vpc-id ：VPC实例ID，例如：vpc-f49l6u0z。
traffic-mirror-id：流量镜像实例ID。
traffic-mirror-name：流量镜像名称。
tag-key ：按照标签键进行过滤。
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID集合
                     */
                    std::vector<std::string> m_trafficMirrorIds;
                    bool m_trafficMirrorIdsHasBeenSet;

                    /**
                     * 流量镜像查询过滤调节。
vpc-id ：VPC实例ID，例如：vpc-f49l6u0z。
traffic-mirror-id：流量镜像实例ID。
traffic-mirror-name：流量镜像名称。
tag-key ：按照标签键进行过滤。
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_
