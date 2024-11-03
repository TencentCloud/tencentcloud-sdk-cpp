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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEEXTRAINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 服务器基础信息
                */
                class MachineExtraInfo : public AbstractModel
                {
                public:
                    MachineExtraInfo();
                    ~MachineExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网IP
                     * @return WanIP 公网IP
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置公网IP
                     * @param _wanIP 公网IP
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return PrivateIP 内网IP
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置内网IP
                     * @param _privateIP 内网IP
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取网络类型，1:vpc网络 2:基础网络 3:非腾讯云网络
                     * @return NetworkType 网络类型，1:vpc网络 2:基础网络 3:非腾讯云网络
                     * 
                     */
                    int64_t GetNetworkType() const;

                    /**
                     * 设置网络类型，1:vpc网络 2:基础网络 3:非腾讯云网络
                     * @param _networkType 网络类型，1:vpc网络 2:基础网络 3:非腾讯云网络
                     * 
                     */
                    void SetNetworkType(const int64_t& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取网络名，vpc网络情况下会返回vpc_id
                     * @return NetworkName 网络名，vpc网络情况下会返回vpc_id
                     * 
                     */
                    std::string GetNetworkName() const;

                    /**
                     * 设置网络名，vpc网络情况下会返回vpc_id
                     * @param _networkName 网络名，vpc网络情况下会返回vpc_id
                     * 
                     */
                    void SetNetworkName(const std::string& _networkName);

                    /**
                     * 判断参数 NetworkName 是否已赋值
                     * @return NetworkName 是否已赋值
                     * 
                     */
                    bool NetworkNameHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取主机名
                     * @return HostName 主机名
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名
                     * @param _hostName 主机名
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                private:

                    /**
                     * 公网IP
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * 网络类型，1:vpc网络 2:基础网络 3:非腾讯云网络
                     */
                    int64_t m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 网络名，vpc网络情况下会返回vpc_id
                     */
                    std::string m_networkName;
                    bool m_networkNameHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEEXTRAINFO_H_
