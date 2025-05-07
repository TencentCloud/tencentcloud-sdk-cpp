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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancersDetail请求参数结构体
                */
                class DescribeLoadBalancersDetailRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancersDetailRequest();
                    ~DescribeLoadBalancersDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回负载均衡列表数目，默认20，最大值100。
                     * @return Limit 返回负载均衡列表数目，默认20，最大值100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回负载均衡列表数目，默认20，最大值100。
                     * @param _limit 返回负载均衡列表数目，默认20，最大值100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取返回负载均衡列表起始偏移量，默认0。
                     * @return Offset 返回负载均衡列表起始偏移量，默认0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置返回负载均衡列表起始偏移量，默认0。
                     * @param _offset 返回负载均衡列表起始偏移量，默认0。
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
                     * 获取选择返回的Fields列表，系统仅会返回Fileds中填写的字段，可填写的字段详情请参见<a href="https://cloud.tencent.com/document/api/214/30694#LoadBalancerDetail">LoadBalancerDetail</a>。若未在Fileds填写相关字段，则此字段返回null。Fileds中默认添加LoadBalancerId和LoadBalancerName字段。
                     * @return Fields 选择返回的Fields列表，系统仅会返回Fileds中填写的字段，可填写的字段详情请参见<a href="https://cloud.tencent.com/document/api/214/30694#LoadBalancerDetail">LoadBalancerDetail</a>。若未在Fileds填写相关字段，则此字段返回null。Fileds中默认添加LoadBalancerId和LoadBalancerName字段。
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置选择返回的Fields列表，系统仅会返回Fileds中填写的字段，可填写的字段详情请参见<a href="https://cloud.tencent.com/document/api/214/30694#LoadBalancerDetail">LoadBalancerDetail</a>。若未在Fileds填写相关字段，则此字段返回null。Fileds中默认添加LoadBalancerId和LoadBalancerName字段。
                     * @param _fields 选择返回的Fields列表，系统仅会返回Fileds中填写的字段，可填写的字段详情请参见<a href="https://cloud.tencent.com/document/api/214/30694#LoadBalancerDetail">LoadBalancerDetail</a>。若未在Fileds填写相关字段，则此字段返回null。Fileds中默认添加LoadBalancerId和LoadBalancerName字段。
                     * 
                     */
                    void SetFields(const std::vector<std::string>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取当Fields包含TargetId、TargetAddress、TargetPort、TargetWeight、ListenerId、Protocol、Port、LocationId、Domain、Url等Fields时，必选选择导出目标组的Target或者非目标组Target，取值范围NODE、GROUP。
                     * @return TargetType 当Fields包含TargetId、TargetAddress、TargetPort、TargetWeight、ListenerId、Protocol、Port、LocationId、Domain、Url等Fields时，必选选择导出目标组的Target或者非目标组Target，取值范围NODE、GROUP。
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置当Fields包含TargetId、TargetAddress、TargetPort、TargetWeight、ListenerId、Protocol、Port、LocationId、Domain、Url等Fields时，必选选择导出目标组的Target或者非目标组Target，取值范围NODE、GROUP。
                     * @param _targetType 当Fields包含TargetId、TargetAddress、TargetPort、TargetWeight、ListenerId、Protocol、Port、LocationId、Domain、Url等Fields时，必选选择导出目标组的Target或者非目标组Target，取值范围NODE、GROUP。
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取查询负载均衡详细信息列表条件，详细的过滤条件如下：
- loadbalancer-id
按照【负载均衡ID】进行过滤。例如：lb-rbw5skde。
类型：String
必选：否
获取方式：[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)
- project-id
按照【项目ID】进行过滤。例如： "0"、"123"。
类型：String
必选：否
获取方式：[DescribeProject](https://cloud.tencent.com/document/api/651/78725)
- network
按照【负载均衡网络类型】进行过滤。例如：Public。
类型：String
必选：否
可选值：Private（内网）、Public（公网）
- vip
按照【负载均衡 VIP】进行过滤。例如："1.1.1.1","2204::22:3"。
类型：String
必选：否
- vpcid
按照【负载均衡所属 VPCID】进行过滤。例如："vpc-12345678"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- target-ip
按照【后端目标内网 IP】进行过滤。例如："1.1.1.1","2203::214:4"。
类型：String
必选：否
- zone
按照【负载均衡所属的可用区】进行过滤。例如："ap-guangzhou-1"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【负载均衡标签的标签键】进行过滤，例如："name"。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:*
按照【负载均衡的标签】进行过滤，':' 后面跟的是标签键。如过滤标签键name，标签值zhangsan,lisi，{"Name": "tag:name","Values": ["zhangsan", "lisi"]}。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- fuzzy-search
按照【负载均衡VIP，负载均衡名称】模糊搜索，例如："1.1"。
类型：String
必选：否
                     * @return Filters 查询负载均衡详细信息列表条件，详细的过滤条件如下：
- loadbalancer-id
按照【负载均衡ID】进行过滤。例如：lb-rbw5skde。
类型：String
必选：否
获取方式：[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)
- project-id
按照【项目ID】进行过滤。例如： "0"、"123"。
类型：String
必选：否
获取方式：[DescribeProject](https://cloud.tencent.com/document/api/651/78725)
- network
按照【负载均衡网络类型】进行过滤。例如：Public。
类型：String
必选：否
可选值：Private（内网）、Public（公网）
- vip
按照【负载均衡 VIP】进行过滤。例如："1.1.1.1","2204::22:3"。
类型：String
必选：否
- vpcid
按照【负载均衡所属 VPCID】进行过滤。例如："vpc-12345678"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- target-ip
按照【后端目标内网 IP】进行过滤。例如："1.1.1.1","2203::214:4"。
类型：String
必选：否
- zone
按照【负载均衡所属的可用区】进行过滤。例如："ap-guangzhou-1"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【负载均衡标签的标签键】进行过滤，例如："name"。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:*
按照【负载均衡的标签】进行过滤，':' 后面跟的是标签键。如过滤标签键name，标签值zhangsan,lisi，{"Name": "tag:name","Values": ["zhangsan", "lisi"]}。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- fuzzy-search
按照【负载均衡VIP，负载均衡名称】模糊搜索，例如："1.1"。
类型：String
必选：否
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询负载均衡详细信息列表条件，详细的过滤条件如下：
- loadbalancer-id
按照【负载均衡ID】进行过滤。例如：lb-rbw5skde。
类型：String
必选：否
获取方式：[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)
- project-id
按照【项目ID】进行过滤。例如： "0"、"123"。
类型：String
必选：否
获取方式：[DescribeProject](https://cloud.tencent.com/document/api/651/78725)
- network
按照【负载均衡网络类型】进行过滤。例如：Public。
类型：String
必选：否
可选值：Private（内网）、Public（公网）
- vip
按照【负载均衡 VIP】进行过滤。例如："1.1.1.1","2204::22:3"。
类型：String
必选：否
- vpcid
按照【负载均衡所属 VPCID】进行过滤。例如："vpc-12345678"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- target-ip
按照【后端目标内网 IP】进行过滤。例如："1.1.1.1","2203::214:4"。
类型：String
必选：否
- zone
按照【负载均衡所属的可用区】进行过滤。例如："ap-guangzhou-1"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【负载均衡标签的标签键】进行过滤，例如："name"。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:*
按照【负载均衡的标签】进行过滤，':' 后面跟的是标签键。如过滤标签键name，标签值zhangsan,lisi，{"Name": "tag:name","Values": ["zhangsan", "lisi"]}。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- fuzzy-search
按照【负载均衡VIP，负载均衡名称】模糊搜索，例如："1.1"。
类型：String
必选：否
                     * @param _filters 查询负载均衡详细信息列表条件，详细的过滤条件如下：
- loadbalancer-id
按照【负载均衡ID】进行过滤。例如：lb-rbw5skde。
类型：String
必选：否
获取方式：[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)
- project-id
按照【项目ID】进行过滤。例如： "0"、"123"。
类型：String
必选：否
获取方式：[DescribeProject](https://cloud.tencent.com/document/api/651/78725)
- network
按照【负载均衡网络类型】进行过滤。例如：Public。
类型：String
必选：否
可选值：Private（内网）、Public（公网）
- vip
按照【负载均衡 VIP】进行过滤。例如："1.1.1.1","2204::22:3"。
类型：String
必选：否
- vpcid
按照【负载均衡所属 VPCID】进行过滤。例如："vpc-12345678"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- target-ip
按照【后端目标内网 IP】进行过滤。例如："1.1.1.1","2203::214:4"。
类型：String
必选：否
- zone
按照【负载均衡所属的可用区】进行过滤。例如："ap-guangzhou-1"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【负载均衡标签的标签键】进行过滤，例如："name"。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:*
按照【负载均衡的标签】进行过滤，':' 后面跟的是标签键。如过滤标签键name，标签值zhangsan,lisi，{"Name": "tag:name","Values": ["zhangsan", "lisi"]}。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- fuzzy-search
按照【负载均衡VIP，负载均衡名称】模糊搜索，例如："1.1"。
类型：String
必选：否
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 返回负载均衡列表数目，默认20，最大值100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回负载均衡列表起始偏移量，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 选择返回的Fields列表，系统仅会返回Fileds中填写的字段，可填写的字段详情请参见<a href="https://cloud.tencent.com/document/api/214/30694#LoadBalancerDetail">LoadBalancerDetail</a>。若未在Fileds填写相关字段，则此字段返回null。Fileds中默认添加LoadBalancerId和LoadBalancerName字段。
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * 当Fields包含TargetId、TargetAddress、TargetPort、TargetWeight、ListenerId、Protocol、Port、LocationId、Domain、Url等Fields时，必选选择导出目标组的Target或者非目标组Target，取值范围NODE、GROUP。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 查询负载均衡详细信息列表条件，详细的过滤条件如下：
- loadbalancer-id
按照【负载均衡ID】进行过滤。例如：lb-rbw5skde。
类型：String
必选：否
获取方式：[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)
- project-id
按照【项目ID】进行过滤。例如： "0"、"123"。
类型：String
必选：否
获取方式：[DescribeProject](https://cloud.tencent.com/document/api/651/78725)
- network
按照【负载均衡网络类型】进行过滤。例如：Public。
类型：String
必选：否
可选值：Private（内网）、Public（公网）
- vip
按照【负载均衡 VIP】进行过滤。例如："1.1.1.1","2204::22:3"。
类型：String
必选：否
- vpcid
按照【负载均衡所属 VPCID】进行过滤。例如："vpc-12345678"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- target-ip
按照【后端目标内网 IP】进行过滤。例如："1.1.1.1","2203::214:4"。
类型：String
必选：否
- zone
按照【负载均衡所属的可用区】进行过滤。例如："ap-guangzhou-1"。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【负载均衡标签的标签键】进行过滤，例如："name"。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:*
按照【负载均衡的标签】进行过滤，':' 后面跟的是标签键。如过滤标签键name，标签值zhangsan,lisi，{"Name": "tag:name","Values": ["zhangsan", "lisi"]}。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- fuzzy-search
按照【负载均衡VIP，负载均衡名称】模糊搜索，例如："1.1"。
类型：String
必选：否
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_
