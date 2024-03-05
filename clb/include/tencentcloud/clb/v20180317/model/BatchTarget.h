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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BATCHTARGET_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BATCHTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 批量绑定类型
                */
                class BatchTarget : public AbstractModel
                {
                public:
                    BatchTarget();
                    ~BatchTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听器 ID。
                     * @return ListenerId 监听器 ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器 ID。
                     * @param _listenerId 监听器 ID。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取绑定端口。
                     * @return Port 绑定端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置绑定端口。
                     * @param _port 绑定端口。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取子机 ID。表示绑定主网卡主 IP。
                     * @return InstanceId 子机 ID。表示绑定主网卡主 IP。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置子机 ID。表示绑定主网卡主 IP。
                     * @param _instanceId 子机 ID。表示绑定主网卡主 IP。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。
注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。
                     * @return EniIp 绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。
注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。
注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。
                     * @param _eniIp 绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。
注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。
                     * 
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     * 
                     */
                    bool EniIpHasBeenSet() const;

                    /**
                     * 获取子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     * @return Weight 子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     * @param _weight 子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取七层规则 ID。7层负载均衡该参数必填
                     * @return LocationId 七层规则 ID。7层负载均衡该参数必填
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置七层规则 ID。7层负载均衡该参数必填
                     * @param _locationId 七层规则 ID。7层负载均衡该参数必填
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tag 标签。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置标签。
                     * @param _tag 标签。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 监听器 ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 绑定端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 子机 ID。表示绑定主网卡主 IP。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。
注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * 子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 七层规则 ID。7层负载均衡该参数必填
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BATCHTARGET_H_
