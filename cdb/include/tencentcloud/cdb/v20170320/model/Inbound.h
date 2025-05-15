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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INBOUND_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INBOUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 安全组入站规则
                */
                class Inbound : public AbstractModel
                {
                public:
                    Inbound();
                    ~Inbound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略，ACCEPT 或者 DROP
                     * @return Action 策略，ACCEPT 或者 DROP
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置策略，ACCEPT 或者 DROP
                     * @param _action 策略，ACCEPT 或者 DROP
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取来源 IP 或 IP 段，例如192.168.0.0/16
                     * @return CidrIp 来源 IP 或 IP 段，例如192.168.0.0/16
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置来源 IP 或 IP 段，例如192.168.0.0/16
                     * @param _cidrIp 来源 IP 或 IP 段，例如192.168.0.0/16
                     * 
                     */
                    void SetCidrIp(const std::string& _cidrIp);

                    /**
                     * 判断参数 CidrIp 是否已赋值
                     * @return CidrIp 是否已赋值
                     * 
                     */
                    bool CidrIpHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return PortRange 端口
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置端口
                     * @param _portRange 端口
                     * 
                     */
                    void SetPortRange(const std::string& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     * 
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取网络协议，支持 UDP、TCP 等
                     * @return IpProtocol 网络协议，支持 UDP、TCP 等
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置网络协议，支持 UDP、TCP 等
                     * @param _ipProtocol 网络协议，支持 UDP、TCP 等
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取规则限定的方向，进站规则为 INPUT
                     * @return Dir 规则限定的方向，进站规则为 INPUT
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置规则限定的方向，进站规则为 INPUT
                     * @param _dir 规则限定的方向，进站规则为 INPUT
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                    /**
                     * 获取地址模块
                     * @return AddressModule 地址模块
                     * 
                     */
                    std::string GetAddressModule() const;

                    /**
                     * 设置地址模块
                     * @param _addressModule 地址模块
                     * 
                     */
                    void SetAddressModule(const std::string& _addressModule);

                    /**
                     * 判断参数 AddressModule 是否已赋值
                     * @return AddressModule 是否已赋值
                     * 
                     */
                    bool AddressModuleHasBeenSet() const;

                    /**
                     * 获取规则ID，嵌套安全组的规则ID
                     * @return Id 规则ID，嵌套安全组的规则ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置规则ID，嵌套安全组的规则ID
                     * @param _id 规则ID，嵌套安全组的规则ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return Desc 规则描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置规则描述
                     * @param _desc 规则描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 策略，ACCEPT 或者 DROP
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 来源 IP 或 IP 段，例如192.168.0.0/16
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * 网络协议，支持 UDP、TCP 等
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * 规则限定的方向，进站规则为 INPUT
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                    /**
                     * 地址模块
                     */
                    std::string m_addressModule;
                    bool m_addressModuleHasBeenSet;

                    /**
                     * 规则ID，嵌套安全组的规则ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INBOUND_H_
