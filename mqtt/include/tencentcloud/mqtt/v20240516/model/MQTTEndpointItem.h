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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTENDPOINTITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTENDPOINTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTTEndpoint
                */
                class MQTTEndpointItem : public AbstractModel
                {
                public:
                    MQTTEndpointItem();
                    ~MQTTEndpointItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>类型</p>
                     * @return Type <p>类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _type <p>类型</p>
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
                     * 获取<p>接入点</p>
                     * @return Url <p>接入点</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>接入点</p>
                     * @param _url <p>接入点</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>vpc信息</p>
                     * @return VpcId <p>vpc信息</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpc信息</p>
                     * @param _vpcId <p>vpc信息</p>
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
                     * 获取<p>子网信息</p>
                     * @return SubnetId <p>子网信息</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网信息</p>
                     * @param _subnetId <p>子网信息</p>
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
                     * 获取<p>主机</p>
                     * @return Host <p>主机</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>主机</p>
                     * @param _host <p>主机</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>端口</p>
                     * @return Port <p>端口</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _port <p>端口</p>
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
                     * 获取<p>接入点ip</p>
                     * @return Ip <p>接入点ip</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>接入点ip</p>
                     * @param _ip <p>接入点ip</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>端口是否打开</p>
                     * @return PortEnable <p>端口是否打开</p>
                     * 
                     */
                    bool GetPortEnable() const;

                    /**
                     * 设置<p>端口是否打开</p>
                     * @param _portEnable <p>端口是否打开</p>
                     * 
                     */
                    void SetPortEnable(const bool& _portEnable);

                    /**
                     * 判断参数 PortEnable 是否已赋值
                     * @return PortEnable 是否已赋值
                     * 
                     */
                    bool PortEnableHasBeenSet() const;

                    /**
                     * 获取<p>vpce唯一id</p>
                     * @return VpcEndpointId <p>vpce唯一id</p>
                     * 
                     */
                    std::string GetVpcEndpointId() const;

                    /**
                     * 设置<p>vpce唯一id</p>
                     * @param _vpcEndpointId <p>vpce唯一id</p>
                     * 
                     */
                    void SetVpcEndpointId(const std::string& _vpcEndpointId);

                    /**
                     * 判断参数 VpcEndpointId 是否已赋值
                     * @return VpcEndpointId 是否已赋值
                     * 
                     */
                    bool VpcEndpointIdHasBeenSet() const;

                private:

                    /**
                     * <p>类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>接入点</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>vpc信息</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网信息</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>主机</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>接入点ip</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>端口是否打开</p>
                     */
                    bool m_portEnable;
                    bool m_portEnableHasBeenSet;

                    /**
                     * <p>vpce唯一id</p>
                     */
                    std::string m_vpcEndpointId;
                    bool m_vpcEndpointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTENDPOINTITEM_H_
