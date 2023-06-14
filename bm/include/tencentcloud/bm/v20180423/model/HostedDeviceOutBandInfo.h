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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_HOSTEDDEVICEOUTBANDINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_HOSTEDDEVICEOUTBANDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 托管设备带外信息
                */
                class HostedDeviceOutBandInfo : public AbstractModel
                {
                public:
                    HostedDeviceOutBandInfo();
                    ~HostedDeviceOutBandInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取物理机ID
                     * @return InstanceId 物理机ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置物理机ID
                     * @param _instanceId 物理机ID
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
                     * 获取带外IP
                     * @return OutBandIp 带外IP
                     * 
                     */
                    std::string GetOutBandIp() const;

                    /**
                     * 设置带外IP
                     * @param _outBandIp 带外IP
                     * 
                     */
                    void SetOutBandIp(const std::string& _outBandIp);

                    /**
                     * 判断参数 OutBandIp 是否已赋值
                     * @return OutBandIp 是否已赋值
                     * 
                     */
                    bool OutBandIpHasBeenSet() const;

                    /**
                     * 获取VPN的IP
                     * @return VpnIp VPN的IP
                     * 
                     */
                    std::string GetVpnIp() const;

                    /**
                     * 设置VPN的IP
                     * @param _vpnIp VPN的IP
                     * 
                     */
                    void SetVpnIp(const std::string& _vpnIp);

                    /**
                     * 判断参数 VpnIp 是否已赋值
                     * @return VpnIp 是否已赋值
                     * 
                     */
                    bool VpnIpHasBeenSet() const;

                    /**
                     * 获取VPN的端口
                     * @return VpnPort VPN的端口
                     * 
                     */
                    uint64_t GetVpnPort() const;

                    /**
                     * 设置VPN的端口
                     * @param _vpnPort VPN的端口
                     * 
                     */
                    void SetVpnPort(const uint64_t& _vpnPort);

                    /**
                     * 判断参数 VpnPort 是否已赋值
                     * @return VpnPort 是否已赋值
                     * 
                     */
                    bool VpnPortHasBeenSet() const;

                private:

                    /**
                     * 物理机ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 带外IP
                     */
                    std::string m_outBandIp;
                    bool m_outBandIpHasBeenSet;

                    /**
                     * VPN的IP
                     */
                    std::string m_vpnIp;
                    bool m_vpnIpHasBeenSet;

                    /**
                     * VPN的端口
                     */
                    uint64_t m_vpnPort;
                    bool m_vpnPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_HOSTEDDEVICEOUTBANDINFO_H_
