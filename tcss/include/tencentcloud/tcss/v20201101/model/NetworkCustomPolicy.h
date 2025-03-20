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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCUSTOMPOLICY_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCUSTOMPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/NetworkPorts.h>
#include <tencentcloud/tcss/v20201101/model/NetworkPeer.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 网络集群策略自定义规则
                */
                class NetworkCustomPolicy : public AbstractModel
                {
                public:
                    NetworkCustomPolicy();
                    ~NetworkCustomPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络策略方向，分为FROM和TO
                     * @return Direction 网络策略方向，分为FROM和TO
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置网络策略方向，分为FROM和TO
                     * @param _direction 网络策略方向，分为FROM和TO
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
                     * 获取网络策略策略端口
                     * @return Ports 网络策略策略端口
                     * 
                     */
                    std::vector<NetworkPorts> GetPorts() const;

                    /**
                     * 设置网络策略策略端口
                     * @param _ports 网络策略策略端口
                     * 
                     */
                    void SetPorts(const std::vector<NetworkPorts>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取网络策略策略对象

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     * @return Peer 网络策略策略对象

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     * 
                     */
                    std::vector<NetworkPeer> GetPeer() const;

                    /**
                     * 设置网络策略策略对象

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     * @param _peer 网络策略策略对象

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     * 
                     */
                    void SetPeer(const std::vector<NetworkPeer>& _peer);

                    /**
                     * 判断参数 Peer 是否已赋值
                     * @return Peer 是否已赋值
                     * 
                     */
                    bool PeerHasBeenSet() const;

                private:

                    /**
                     * 网络策略方向，分为FROM和TO
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 网络策略策略端口
                     */
                    std::vector<NetworkPorts> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 网络策略策略对象

开启待确认：PublishedNoConfirm

开启已确认：PublishedConfirmed

关闭中：unPublishing

开启中：Publishing

待开启：unPublishEdit
                     */
                    std::vector<NetworkPeer> m_peer;
                    bool m_peerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCUSTOMPOLICY_H_
