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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATETRAFFICMIRRORREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATETRAFFICMIRRORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorFilter.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorTarget.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateTrafficMirror请求参数结构体
                */
                class CreateTrafficMirrorRequest : public AbstractModel
                {
                public:
                    CreateTrafficMirrorRequest();
                    ~CreateTrafficMirrorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取流量镜像名字。
                     * @return TrafficMirrorName 流量镜像名字。
                     * 
                     */
                    std::string GetTrafficMirrorName() const;

                    /**
                     * 设置流量镜像名字。
                     * @param _trafficMirrorName 流量镜像名字。
                     * 
                     */
                    void SetTrafficMirrorName(const std::string& _trafficMirrorName);

                    /**
                     * 判断参数 TrafficMirrorName 是否已赋值
                     * @return TrafficMirrorName 是否已赋值
                     * 
                     */
                    bool TrafficMirrorNameHasBeenSet() const;

                    /**
                     * 获取流量镜像描述。
                     * @return TrafficMirrorDescribe 流量镜像描述。
                     * 
                     */
                    std::string GetTrafficMirrorDescribe() const;

                    /**
                     * 设置流量镜像描述。
                     * @param _trafficMirrorDescribe 流量镜像描述。
                     * 
                     */
                    void SetTrafficMirrorDescribe(const std::string& _trafficMirrorDescribe);

                    /**
                     * 判断参数 TrafficMirrorDescribe 是否已赋值
                     * @return TrafficMirrorDescribe 是否已赋值
                     * 
                     */
                    bool TrafficMirrorDescribeHasBeenSet() const;

                    /**
                     * 获取流量镜像状态, 支持RUNNING/STOPED（vpc），RUNNING（公网IP），当采集vpc流量镜像时，此参数为必填。
                     * @return State 流量镜像状态, 支持RUNNING/STOPED（vpc），RUNNING（公网IP），当采集vpc流量镜像时，此参数为必填。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置流量镜像状态, 支持RUNNING/STOPED（vpc），RUNNING（公网IP），当采集vpc流量镜像时，此参数为必填。
                     * @param _state 流量镜像状态, 支持RUNNING/STOPED（vpc），RUNNING（公网IP），当采集vpc流量镜像时，此参数为必填。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取流量镜像采集方向，支持EGRESS/INGRESS/ALL（vpc），ALL（公网IP）。
                     * @return Direction 流量镜像采集方向，支持EGRESS/INGRESS/ALL（vpc），ALL（公网IP）。
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置流量镜像采集方向，支持EGRESS/INGRESS/ALL（vpc），ALL（公网IP）。
                     * @param _direction 流量镜像采集方向，支持EGRESS/INGRESS/ALL（vpc），ALL（公网IP）。
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取流量镜像的采集对象。
                     * @return CollectorSrcs 流量镜像的采集对象。
                     * 
                     */
                    std::vector<std::string> GetCollectorSrcs() const;

                    /**
                     * 设置流量镜像的采集对象。
                     * @param _collectorSrcs 流量镜像的采集对象。
                     * 
                     */
                    void SetCollectorSrcs(const std::vector<std::string>& _collectorSrcs);

                    /**
                     * 判断参数 CollectorSrcs 是否已赋值
                     * @return CollectorSrcs 是否已赋值
                     * 
                     */
                    bool CollectorSrcsHasBeenSet() const;

                    /**
                     * 获取流量镜像过滤的natgw实例。
                     * @return NatId 流量镜像过滤的natgw实例。
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置流量镜像过滤的natgw实例。
                     * @param _natId 流量镜像过滤的natgw实例。
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
                     * 获取需要过滤的五元组规则。
                     * @return CollectorNormalFilters 需要过滤的五元组规则。
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetCollectorNormalFilters() const;

                    /**
                     * 设置需要过滤的五元组规则。
                     * @param _collectorNormalFilters 需要过滤的五元组规则。
                     * 
                     */
                    void SetCollectorNormalFilters(const std::vector<TrafficMirrorFilter>& _collectorNormalFilters);

                    /**
                     * 判断参数 CollectorNormalFilters 是否已赋值
                     * @return CollectorNormalFilters 是否已赋值
                     * 
                     */
                    bool CollectorNormalFiltersHasBeenSet() const;

                    /**
                     * 获取流量镜像的目的地址。
                     * @return CollectorTarget 流量镜像的目的地址。
                     * 
                     */
                    TrafficMirrorTarget GetCollectorTarget() const;

                    /**
                     * 设置流量镜像的目的地址。
                     * @param _collectorTarget 流量镜像的目的地址。
                     * 
                     */
                    void SetCollectorTarget(const TrafficMirrorTarget& _collectorTarget);

                    /**
                     * 判断参数 CollectorTarget 是否已赋值
                     * @return CollectorTarget 是否已赋值
                     * 
                     */
                    bool CollectorTargetHasBeenSet() const;

                    /**
                     * 获取流量镜像采集流量的发送端所属子网ID。
                     * @return SubnetId 流量镜像采集流量的发送端所属子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置流量镜像采集流量的发送端所属子网ID。
                     * @param _subnetId 流量镜像采集流量的发送端所属子网ID。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取创建的流量镜像的类型，支持VPC/PUBLICIP，默认为VPC类型。
                     * @return Type 创建的流量镜像的类型，支持VPC/PUBLICIP，默认为VPC类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置创建的流量镜像的类型，支持VPC/PUBLICIP，默认为VPC类型。
                     * @param _type 创建的流量镜像的类型，支持VPC/PUBLICIP，默认为VPC类型。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 流量镜像名字。
                     */
                    std::string m_trafficMirrorName;
                    bool m_trafficMirrorNameHasBeenSet;

                    /**
                     * 流量镜像描述。
                     */
                    std::string m_trafficMirrorDescribe;
                    bool m_trafficMirrorDescribeHasBeenSet;

                    /**
                     * 流量镜像状态, 支持RUNNING/STOPED（vpc），RUNNING（公网IP），当采集vpc流量镜像时，此参数为必填。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 流量镜像采集方向，支持EGRESS/INGRESS/ALL（vpc），ALL（公网IP）。
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 流量镜像的采集对象。
                     */
                    std::vector<std::string> m_collectorSrcs;
                    bool m_collectorSrcsHasBeenSet;

                    /**
                     * 流量镜像过滤的natgw实例。
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * 需要过滤的五元组规则。
                     */
                    std::vector<TrafficMirrorFilter> m_collectorNormalFilters;
                    bool m_collectorNormalFiltersHasBeenSet;

                    /**
                     * 流量镜像的目的地址。
                     */
                    TrafficMirrorTarget m_collectorTarget;
                    bool m_collectorTargetHasBeenSet;

                    /**
                     * 流量镜像采集流量的发送端所属子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 创建的流量镜像的类型，支持VPC/PUBLICIP，默认为VPC类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATETRAFFICMIRRORREQUEST_H_
