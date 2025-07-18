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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERHEALTHSTATUSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERHEALTHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiver.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrorReceiverHealthStatus请求参数结构体
                */
                class DescribeTrafficMirrorReceiverHealthStatusRequest : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorReceiverHealthStatusRequest();
                    ~DescribeTrafficMirrorReceiverHealthStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询所在的流量镜像ID。
                     * @return TrafficMirrorId 查询所在的流量镜像ID。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置查询所在的流量镜像ID。
                     * @param _trafficMirrorId 查询所在的流量镜像ID。
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
                     * 获取流量镜像接收机实例ID和端口数组。
                     * @return ReceiverSet 流量镜像接收机实例ID和端口数组。
                     * 
                     */
                    std::vector<DescribeTrafficMirrorReceiver> GetReceiverSet() const;

                    /**
                     * 设置流量镜像接收机实例ID和端口数组。
                     * @param _receiverSet 流量镜像接收机实例ID和端口数组。
                     * 
                     */
                    void SetReceiverSet(const std::vector<DescribeTrafficMirrorReceiver>& _receiverSet);

                    /**
                     * 判断参数 ReceiverSet 是否已赋值
                     * @return ReceiverSet 是否已赋值
                     * 
                     */
                    bool ReceiverSetHasBeenSet() const;

                private:

                    /**
                     * 查询所在的流量镜像ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 流量镜像接收机实例ID和端口数组。
                     */
                    std::vector<DescribeTrafficMirrorReceiver> m_receiverSet;
                    bool m_receiverSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORRECEIVERHEALTHSTATUSREQUEST_H_
