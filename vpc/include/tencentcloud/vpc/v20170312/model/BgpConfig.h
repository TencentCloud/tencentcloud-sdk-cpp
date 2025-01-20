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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_BGPCONFIG_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_BGPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * BgpConfig
                */
                class BgpConfig : public AbstractModel
                {
                public:
                    BgpConfig();
                    ~BgpConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取BGP隧道网段。
                     * @return TunnelCidr BGP隧道网段。
                     * 
                     */
                    std::string GetTunnelCidr() const;

                    /**
                     * 设置BGP隧道网段。
                     * @param _tunnelCidr BGP隧道网段。
                     * 
                     */
                    void SetTunnelCidr(const std::string& _tunnelCidr);

                    /**
                     * 判断参数 TunnelCidr 是否已赋值
                     * @return TunnelCidr 是否已赋值
                     * 
                     */
                    bool TunnelCidrHasBeenSet() const;

                    /**
                     * 获取云端BGP地址。必须从BGP隧道网段内分配。
                     * @return LocalBgpIp 云端BGP地址。必须从BGP隧道网段内分配。
                     * 
                     */
                    std::string GetLocalBgpIp() const;

                    /**
                     * 设置云端BGP地址。必须从BGP隧道网段内分配。
                     * @param _localBgpIp 云端BGP地址。必须从BGP隧道网段内分配。
                     * 
                     */
                    void SetLocalBgpIp(const std::string& _localBgpIp);

                    /**
                     * 判断参数 LocalBgpIp 是否已赋值
                     * @return LocalBgpIp 是否已赋值
                     * 
                     */
                    bool LocalBgpIpHasBeenSet() const;

                    /**
                     * 获取用户端BGP地址。必须从BGP隧道网段内分配。
                     * @return RemoteBgpIp 用户端BGP地址。必须从BGP隧道网段内分配。
                     * 
                     */
                    std::string GetRemoteBgpIp() const;

                    /**
                     * 设置用户端BGP地址。必须从BGP隧道网段内分配。
                     * @param _remoteBgpIp 用户端BGP地址。必须从BGP隧道网段内分配。
                     * 
                     */
                    void SetRemoteBgpIp(const std::string& _remoteBgpIp);

                    /**
                     * 判断参数 RemoteBgpIp 是否已赋值
                     * @return RemoteBgpIp 是否已赋值
                     * 
                     */
                    bool RemoteBgpIpHasBeenSet() const;

                private:

                    /**
                     * BGP隧道网段。
                     */
                    std::string m_tunnelCidr;
                    bool m_tunnelCidrHasBeenSet;

                    /**
                     * 云端BGP地址。必须从BGP隧道网段内分配。
                     */
                    std::string m_localBgpIp;
                    bool m_localBgpIpHasBeenSet;

                    /**
                     * 用户端BGP地址。必须从BGP隧道网段内分配。
                     */
                    std::string m_remoteBgpIp;
                    bool m_remoteBgpIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_BGPCONFIG_H_
