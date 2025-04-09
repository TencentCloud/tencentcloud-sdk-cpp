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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRROR_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRROR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorFilter.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorTarget.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorTargetResourceInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 流量镜像实例
                */
                class TrafficMirror : public AbstractModel
                {
                public:
                    TrafficMirror();
                    ~TrafficMirror() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取流量镜像实例。
                     * @return TrafficMirrorId 流量镜像实例。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像实例。
                     * @param _trafficMirrorId 流量镜像实例。
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
                     * 获取流量镜像状态。
                     * @return State 流量镜像状态。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置流量镜像状态。
                     * @param _state 流量镜像状态。
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
                     * 获取流量镜像采集方向。
                     * @return Direction 流量镜像采集方向。
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置流量镜像采集方向。
                     * @param _direction 流量镜像采集方向。
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
                     * 获取流量镜像采集对象。
                     * @return CollectorSrcs 流量镜像采集对象。
                     * 
                     */
                    std::vector<std::string> GetCollectorSrcs() const;

                    /**
                     * 设置流量镜像采集对象。
                     * @param _collectorSrcs 流量镜像采集对象。
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
                     * 获取流量镜像过滤的nat网关实例ID。
                     * @return NatId 流量镜像过滤的nat网关实例ID。
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置流量镜像过滤的nat网关实例ID。
                     * @param _natId 流量镜像过滤的nat网关实例ID。
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
                     * 获取流量镜像过滤的五元组规则。
                     * @return CollectorNormalFilters 流量镜像过滤的五元组规则。
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetCollectorNormalFilters() const;

                    /**
                     * 设置流量镜像过滤的五元组规则。
                     * @param _collectorNormalFilters 流量镜像过滤的五元组规则。
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
                     * 获取流量镜接收目标。
                     * @return CollectorTarget 流量镜接收目标。
                     * 
                     */
                    TrafficMirrorTarget GetCollectorTarget() const;

                    /**
                     * 设置流量镜接收目标。
                     * @param _collectorTarget 流量镜接收目标。
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
                     * 获取流量镜像创建时间。
                     * @return CreateTime 流量镜像创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置流量镜像创建时间。
                     * @param _createTime 流量镜像创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取流量镜像的类型。
                     * @return Type 流量镜像的类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置流量镜像的类型。
                     * @param _type 流量镜像的类型。
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
                     * 获取流量镜像所属的子网ID。
                     * @return SubnetId 流量镜像所属的子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置流量镜像所属的子网ID。
                     * @param _subnetId 流量镜像所属的子网ID。
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
                     * 获取流量镜接收目标资源信息，当接收目标为ENI和CLB时返回。
                     * @return TargetInfo 流量镜接收目标资源信息，当接收目标为ENI和CLB时返回。
                     * 
                     */
                    std::vector<TrafficMirrorTargetResourceInfo> GetTargetInfo() const;

                    /**
                     * 设置流量镜接收目标资源信息，当接收目标为ENI和CLB时返回。
                     * @param _targetInfo 流量镜接收目标资源信息，当接收目标为ENI和CLB时返回。
                     * 
                     */
                    void SetTargetInfo(const std::vector<TrafficMirrorTargetResourceInfo>& _targetInfo);

                    /**
                     * 判断参数 TargetInfo 是否已赋值
                     * @return TargetInfo 是否已赋值
                     * 
                     */
                    bool TargetInfoHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 流量镜像实例。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

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
                     * 流量镜像状态。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 流量镜像采集方向。
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 流量镜像采集对象。
                     */
                    std::vector<std::string> m_collectorSrcs;
                    bool m_collectorSrcsHasBeenSet;

                    /**
                     * 流量镜像过滤的nat网关实例ID。
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * 流量镜像过滤的五元组规则。
                     */
                    std::vector<TrafficMirrorFilter> m_collectorNormalFilters;
                    bool m_collectorNormalFiltersHasBeenSet;

                    /**
                     * 流量镜接收目标。
                     */
                    TrafficMirrorTarget m_collectorTarget;
                    bool m_collectorTargetHasBeenSet;

                    /**
                     * 流量镜像创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 流量镜像的类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 流量镜像所属的子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 流量镜接收目标资源信息，当接收目标为ENI和CLB时返回。
                     */
                    std::vector<TrafficMirrorTargetResourceInfo> m_targetInfo;
                    bool m_targetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRROR_H_
