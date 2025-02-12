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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CHECKTRAFFICMIRRORREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CHECKTRAFFICMIRRORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorTarget.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CheckTrafficMirror请求参数结构体
                */
                class CheckTrafficMirrorRequest : public AbstractModel
                {
                public:
                    CheckTrafficMirrorRequest();
                    ~CheckTrafficMirrorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像所属的vpc
                     * @return VpcId 流量镜像所属的vpc
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置流量镜像所属的vpc
                     * @param _vpcId 流量镜像所属的vpc
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
                     * 获取流量镜像的实例id
                     * @return TrafficMirrorId 流量镜像的实例id
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像的实例id
                     * @param _trafficMirrorId 流量镜像的实例id
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
                     * 获取流量镜像的采集端IP列表
                     * @return CollectorSources 流量镜像的采集端IP列表
                     * 
                     */
                    std::vector<std::string> GetCollectorSources() const;

                    /**
                     * 设置流量镜像的采集端IP列表
                     * @param _collectorSources 流量镜像的采集端IP列表
                     * 
                     */
                    void SetCollectorSources(const std::vector<std::string>& _collectorSources);

                    /**
                     * 判断参数 CollectorSources 是否已赋值
                     * @return CollectorSources 是否已赋值
                     * 
                     */
                    bool CollectorSourcesHasBeenSet() const;

                    /**
                     * 获取流量镜像的接收端的子网
                     * @return SubnetId 流量镜像的接收端的子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置流量镜像的接收端的子网
                     * @param _subnetId 流量镜像的接收端的子网
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
                     * 获取流量镜像采集端的
                     * @return CollectorTarget 流量镜像采集端的
                     * 
                     */
                    std::vector<TrafficMirrorTarget> GetCollectorTarget() const;

                    /**
                     * 设置流量镜像采集端的
                     * @param _collectorTarget 流量镜像采集端的
                     * 
                     */
                    void SetCollectorTarget(const std::vector<TrafficMirrorTarget>& _collectorTarget);

                    /**
                     * 判断参数 CollectorTarget 是否已赋值
                     * @return CollectorTarget 是否已赋值
                     * 
                     */
                    bool CollectorTargetHasBeenSet() const;

                private:

                    /**
                     * 流量镜像所属的vpc
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 流量镜像的实例id
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 流量镜像的采集端IP列表
                     */
                    std::vector<std::string> m_collectorSources;
                    bool m_collectorSourcesHasBeenSet;

                    /**
                     * 流量镜像的接收端的子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 流量镜像采集端的
                     */
                    std::vector<TrafficMirrorTarget> m_collectorTarget;
                    bool m_collectorTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CHECKTRAFFICMIRRORREQUEST_H_
