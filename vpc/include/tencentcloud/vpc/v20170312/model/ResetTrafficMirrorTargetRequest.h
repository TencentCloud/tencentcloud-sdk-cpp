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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORTARGETREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORTARGETREQUEST_H_

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
                * ResetTrafficMirrorTarget请求参数结构体
                */
                class ResetTrafficMirrorTargetRequest : public AbstractModel
                {
                public:
                    ResetTrafficMirrorTargetRequest();
                    ~ResetTrafficMirrorTargetRequest() = default;
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
                     * 获取流量镜像的接收目的信息
                     * @return CollectorTarget 流量镜像的接收目的信息
                     * 
                     */
                    TrafficMirrorTarget GetCollectorTarget() const;

                    /**
                     * 设置流量镜像的接收目的信息
                     * @param _collectorTarget 流量镜像的接收目的信息
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
                     * 获取公网IP类型的流量镜像采集流量的发送端所属子网
                     * @return SubnetId 公网IP类型的流量镜像采集流量的发送端所属子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置公网IP类型的流量镜像采集流量的发送端所属子网
                     * @param _subnetId 公网IP类型的流量镜像采集流量的发送端所属子网
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 流量镜像的接收目的信息
                     */
                    TrafficMirrorTarget m_collectorTarget;
                    bool m_collectorTargetHasBeenSet;

                    /**
                     * 公网IP类型的流量镜像采集流量的发送端所属子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORTARGETREQUEST_H_
