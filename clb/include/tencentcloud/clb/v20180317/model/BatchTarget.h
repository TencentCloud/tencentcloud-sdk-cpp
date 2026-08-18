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
                     * 获取<p>监听器 ID。</p>
                     * @return ListenerId <p>监听器 ID。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器 ID。</p>
                     * @param _listenerId <p>监听器 ID。</p>
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
                     * 获取<p>绑定端口。</p>
                     * @return Port <p>绑定端口。</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>绑定端口。</p>
                     * @param _port <p>绑定端口。</p>
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
                     * 获取<p>子机 ID。表示绑定主网卡主 IP。</p>
                     * @return InstanceId <p>子机 ID。表示绑定主网卡主 IP。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>子机 ID。表示绑定主网卡主 IP。</p>
                     * @param _instanceId <p>子机 ID。表示绑定主网卡主 IP。</p>
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
                     * 获取<p>绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。如果是跨地域绑定，则必须传该参数，不支持传InstanceId参数。</p>
                     * @return EniIp <p>绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。如果是跨地域绑定，则必须传该参数，不支持传InstanceId参数。</p>
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置<p>绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。如果是跨地域绑定，则必须传该参数，不支持传InstanceId参数。</p>
                     * @param _eniIp <p>绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。如果是跨地域绑定，则必须传该参数，不支持传InstanceId参数。</p>
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
                     * 获取<p>子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。</p>
                     * @return Weight <p>子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。</p>
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置<p>子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。</p>
                     * @param _weight <p>子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。</p>
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
                     * 获取<p>七层规则 ID。7层负载均衡该参数必填</p>
                     * @return LocationId <p>七层规则 ID。7层负载均衡该参数必填</p>
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置<p>七层规则 ID。7层负载均衡该参数必填</p>
                     * @param _locationId <p>七层规则 ID。7层负载均衡该参数必填</p>
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
                     * 获取<p>标签。</p>
                     * @return Tag <p>标签。</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>标签。</p>
                     * @param _tag <p>标签。</p>
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
                     * <p>监听器 ID。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>绑定端口。</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>子机 ID。表示绑定主网卡主 IP。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>绑定 IP 时需要传入此参数，支持弹性网卡的 IP 和其他内网 IP，如果是弹性网卡则必须先绑定至CVM，然后才能绑定到负载均衡实例。注意：参数 InstanceId、EniIp 只能传入一个且必须传入一个。如果绑定双栈IPV6子机，必须传该参数。如果是跨地域绑定，则必须传该参数，不支持传InstanceId参数。</p>
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * <p>子机权重，范围[0, 100]。绑定时如果不存在，则默认为10。</p>
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>七层规则 ID。7层负载均衡该参数必填</p>
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * <p>标签。</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BATCHTARGET_H_
