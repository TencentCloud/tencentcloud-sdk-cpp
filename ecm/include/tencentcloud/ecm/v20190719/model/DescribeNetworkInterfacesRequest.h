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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeNetworkInterfaces请求参数结构体
                */
                class DescribeNetworkInterfacesRequest : public AbstractModel
                {
                public:
                    DescribeNetworkInterfacesRequest();
                    ~DescribeNetworkInterfacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性网卡实例ID查询。形如：eni-pxir56ns。每次请求的实例的上限为100。参数不支持同时指定NetworkInterfaceIds和Filters。
                     * @return NetworkInterfaceIds 弹性网卡实例ID查询。形如：eni-pxir56ns。每次请求的实例的上限为100。参数不支持同时指定NetworkInterfaceIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetNetworkInterfaceIds() const;

                    /**
                     * 设置弹性网卡实例ID查询。形如：eni-pxir56ns。每次请求的实例的上限为100。参数不支持同时指定NetworkInterfaceIds和Filters。
                     * @param _networkInterfaceIds 弹性网卡实例ID查询。形如：eni-pxir56ns。每次请求的实例的上限为100。参数不支持同时指定NetworkInterfaceIds和Filters。
                     * 
                     */
                    void SetNetworkInterfaceIds(const std::vector<std::string>& _networkInterfaceIds);

                    /**
                     * 判断参数 NetworkInterfaceIds 是否已赋值
                     * @return NetworkInterfaceIds 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定NetworkInterfaceIds和Filters。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
network-interface-id - String - （过滤条件）弹性网卡实例ID，形如：eni-5k56k7k7。
attachment.instance-id - String - （过滤条件）绑定的云服务器实例ID，形如：ein-3nqpdn3i。
groups.security-group-id - String - （过滤条件）绑定的安全组实例ID，例如：sg-f9ekbxeq。
network-interface-name - String - （过滤条件）网卡实例名称。
network-interface-description - String - （过滤条件）网卡实例描述。
address-ip - String - （过滤条件）内网IPv4地址。
tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。
tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。
is-primary - Boolean - 是否必填：否 - （过滤条件）按照是否主网卡进行过滤。值为true时，仅过滤主网卡；值为false时，仅过滤辅助网卡；次过滤参数为提供时，同时过滤主网卡和辅助网卡。
                     * @return Filters 过滤条件，参数不支持同时指定NetworkInterfaceIds和Filters。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
network-interface-id - String - （过滤条件）弹性网卡实例ID，形如：eni-5k56k7k7。
attachment.instance-id - String - （过滤条件）绑定的云服务器实例ID，形如：ein-3nqpdn3i。
groups.security-group-id - String - （过滤条件）绑定的安全组实例ID，例如：sg-f9ekbxeq。
network-interface-name - String - （过滤条件）网卡实例名称。
network-interface-description - String - （过滤条件）网卡实例描述。
address-ip - String - （过滤条件）内网IPv4地址。
tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。
tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。
is-primary - Boolean - 是否必填：否 - （过滤条件）按照是否主网卡进行过滤。值为true时，仅过滤主网卡；值为false时，仅过滤辅助网卡；次过滤参数为提供时，同时过滤主网卡和辅助网卡。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定NetworkInterfaceIds和Filters。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
network-interface-id - String - （过滤条件）弹性网卡实例ID，形如：eni-5k56k7k7。
attachment.instance-id - String - （过滤条件）绑定的云服务器实例ID，形如：ein-3nqpdn3i。
groups.security-group-id - String - （过滤条件）绑定的安全组实例ID，例如：sg-f9ekbxeq。
network-interface-name - String - （过滤条件）网卡实例名称。
network-interface-description - String - （过滤条件）网卡实例描述。
address-ip - String - （过滤条件）内网IPv4地址。
tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。
tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。
is-primary - Boolean - 是否必填：否 - （过滤条件）按照是否主网卡进行过滤。值为true时，仅过滤主网卡；值为false时，仅过滤辅助网卡；次过滤参数为提供时，同时过滤主网卡和辅助网卡。
                     * @param _filters 过滤条件，参数不支持同时指定NetworkInterfaceIds和Filters。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
network-interface-id - String - （过滤条件）弹性网卡实例ID，形如：eni-5k56k7k7。
attachment.instance-id - String - （过滤条件）绑定的云服务器实例ID，形如：ein-3nqpdn3i。
groups.security-group-id - String - （过滤条件）绑定的安全组实例ID，例如：sg-f9ekbxeq。
network-interface-name - String - （过滤条件）网卡实例名称。
network-interface-description - String - （过滤条件）网卡实例描述。
address-ip - String - （过滤条件）内网IPv4地址。
tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。
tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。
is-primary - Boolean - 是否必填：否 - （过滤条件）按照是否主网卡进行过滤。值为true时，仅过滤主网卡；值为false时，仅过滤辅助网卡；次过滤参数为提供时，同时过滤主网卡和辅助网卡。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

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

                    /**
                     * 获取ECM 地域，形如ap-xian-ecm。
                     * @return EcmRegion ECM 地域，形如ap-xian-ecm。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域，形如ap-xian-ecm。
                     * @param _ecmRegion ECM 地域，形如ap-xian-ecm。
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID查询。形如：eni-pxir56ns。每次请求的实例的上限为100。参数不支持同时指定NetworkInterfaceIds和Filters。
                     */
                    std::vector<std::string> m_networkInterfaceIds;
                    bool m_networkInterfaceIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定NetworkInterfaceIds和Filters。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
network-interface-id - String - （过滤条件）弹性网卡实例ID，形如：eni-5k56k7k7。
attachment.instance-id - String - （过滤条件）绑定的云服务器实例ID，形如：ein-3nqpdn3i。
groups.security-group-id - String - （过滤条件）绑定的安全组实例ID，例如：sg-f9ekbxeq。
network-interface-name - String - （过滤条件）网卡实例名称。
network-interface-description - String - （过滤条件）网卡实例描述。
address-ip - String - （过滤条件）内网IPv4地址。
tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。
tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。
is-primary - Boolean - 是否必填：否 - （过滤条件）按照是否主网卡进行过滤。值为true时，仅过滤主网卡；值为false时，仅过滤辅助网卡；次过滤参数为提供时，同时过滤主网卡和辅助网卡。
                     */
                    std::vector<Filter> m_filters;
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

                    /**
                     * ECM 地域，形如ap-xian-ecm。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
