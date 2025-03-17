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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_LOCALNETINFO_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_LOCALNETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * 本地网络信息
                */
                class LocalNetInfo : public AbstractModel
                {
                public:
                    LocalNetInfo();
                    ~LocalNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取网络id
                     * @return VpcId 网络id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置网络id
                     * @param _vpcId 网络id
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
                     * 获取路由信息
                     * @return BGPRoute 路由信息
                     * 
                     */
                    std::string GetBGPRoute() const;

                    /**
                     * 设置路由信息
                     * @param _bGPRoute 路由信息
                     * 
                     */
                    void SetBGPRoute(const std::string& _bGPRoute);

                    /**
                     * 判断参数 BGPRoute 是否已赋值
                     * @return BGPRoute 是否已赋值
                     * 
                     */
                    bool BGPRouteHasBeenSet() const;

                    /**
                     * 获取本地IP
                     * @return LocalIp 本地IP
                     * 
                     */
                    std::string GetLocalIp() const;

                    /**
                     * 设置本地IP
                     * @param _localIp 本地IP
                     * 
                     */
                    void SetLocalIp(const std::string& _localIp);

                    /**
                     * 判断参数 LocalIp 是否已赋值
                     * @return LocalIp 是否已赋值
                     * 
                     */
                    bool LocalIpHasBeenSet() const;

                private:

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 网络id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 路由信息
                     */
                    std::string m_bGPRoute;
                    bool m_bGPRouteHasBeenSet;

                    /**
                     * 本地IP
                     */
                    std::string m_localIp;
                    bool m_localIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_LOCALNETINFO_H_
