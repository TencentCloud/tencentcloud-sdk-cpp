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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_UNBINDTRAFFICMIRRORRECEIVERSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_UNBINDTRAFFICMIRRORRECEIVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorReceiver.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * UnbindTrafficMirrorReceivers请求参数结构体
                */
                class UnbindTrafficMirrorReceiversRequest : public AbstractModel
                {
                public:
                    UnbindTrafficMirrorReceiversRequest();
                    ~UnbindTrafficMirrorReceiversRequest() = default;
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
                     * 获取待绑定的主机实例ID和端口数组。
                     * @return ReceiverSet 待绑定的主机实例ID和端口数组。
                     * 
                     */
                    std::vector<UnbindTrafficMirrorReceiver> GetReceiverSet() const;

                    /**
                     * 设置待绑定的主机实例ID和端口数组。
                     * @param _receiverSet 待绑定的主机实例ID和端口数组。
                     * 
                     */
                    void SetReceiverSet(const std::vector<UnbindTrafficMirrorReceiver>& _receiverSet);

                    /**
                     * 判断参数 ReceiverSet 是否已赋值
                     * @return ReceiverSet 是否已赋值
                     * 
                     */
                    bool ReceiverSetHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 待绑定的主机实例ID和端口数组。
                     */
                    std::vector<UnbindTrafficMirrorReceiver> m_receiverSet;
                    bool m_receiverSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_UNBINDTRAFFICMIRRORRECEIVERSREQUEST_H_
