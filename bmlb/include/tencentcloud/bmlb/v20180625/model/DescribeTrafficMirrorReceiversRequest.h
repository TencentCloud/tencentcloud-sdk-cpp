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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrorReceivers请求参数结构体
                */
                class DescribeTrafficMirrorReceiversRequest : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorReceiversRequest();
                    ~DescribeTrafficMirrorReceiversRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID。
                     * @return TrafficMirrorId 流量镜像实例ID。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像实例ID。
                     * @param _trafficMirrorId 流量镜像实例ID。
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
                     * 获取接收机黑石物理机实例ID数组。
                     * @return InstanceIds 接收机黑石物理机实例ID数组。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置接收机黑石物理机实例ID数组。
                     * @param _instanceIds 接收机黑石物理机实例ID数组。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取接收机接收端口数组。
                     * @return Ports 接收机接收端口数组。
                     * 
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置接收机接收端口数组。
                     * @param _ports 接收机接收端口数组。
                     * 
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取接收机实例权重数组。
                     * @return Weights 接收机实例权重数组。
                     * 
                     */
                    std::vector<int64_t> GetWeights() const;

                    /**
                     * 设置接收机实例权重数组。
                     * @param _weights 接收机实例权重数组。
                     * 
                     */
                    void SetWeights(const std::vector<int64_t>& _weights);

                    /**
                     * 判断参数 Weights 是否已赋值
                     * @return Weights 是否已赋值
                     * 
                     */
                    bool WeightsHasBeenSet() const;

                    /**
                     * 获取分页的偏移量，也即从第几条记录开始查询
                     * @return Offset 分页的偏移量，也即从第几条记录开始查询
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，也即从第几条记录开始查询
                     * @param _offset 分页的偏移量，也即从第几条记录开始查询
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单次查询返回的条目数，默认值：500。
                     * @return Limit 单次查询返回的条目数，默认值：500。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的条目数，默认值：500。
                     * @param _limit 单次查询返回的条目数，默认值：500。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索instance或者alias
                     * @return VagueStr 搜索instance或者alias
                     * 
                     */
                    std::string GetVagueStr() const;

                    /**
                     * 设置搜索instance或者alias
                     * @param _vagueStr 搜索instance或者alias
                     * 
                     */
                    void SetVagueStr(const std::string& _vagueStr);

                    /**
                     * 判断参数 VagueStr 是否已赋值
                     * @return VagueStr 是否已赋值
                     * 
                     */
                    bool VagueStrHasBeenSet() const;

                    /**
                     * 获取搜索IP
                     * @return VagueIp 搜索IP
                     * 
                     */
                    std::string GetVagueIp() const;

                    /**
                     * 设置搜索IP
                     * @param _vagueIp 搜索IP
                     * 
                     */
                    void SetVagueIp(const std::string& _vagueIp);

                    /**
                     * 判断参数 VagueIp 是否已赋值
                     * @return VagueIp 是否已赋值
                     * 
                     */
                    bool VagueIpHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 接收机黑石物理机实例ID数组。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 接收机接收端口数组。
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 接收机实例权重数组。
                     */
                    std::vector<int64_t> m_weights;
                    bool m_weightsHasBeenSet;

                    /**
                     * 分页的偏移量，也即从第几条记录开始查询
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次查询返回的条目数，默认值：500。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索instance或者alias
                     */
                    std::string m_vagueStr;
                    bool m_vagueStrHasBeenSet;

                    /**
                     * 搜索IP
                     */
                    std::string m_vagueIp;
                    bool m_vagueIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERSREQUEST_H_
