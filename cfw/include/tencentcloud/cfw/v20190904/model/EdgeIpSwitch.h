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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_EDGEIPSWITCH_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_EDGEIPSWITCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 开启、关闭 防火墙互联网边界开关
                */
                class EdgeIpSwitch : public AbstractModel
                {
                public:
                    EdgeIpSwitch();
                    ~EdgeIpSwitch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取vpc 中第一个EIP开关打开，需要指定子网创建私有连接
                     * @return SubnetId vpc 中第一个EIP开关打开，需要指定子网创建私有连接
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置vpc 中第一个EIP开关打开，需要指定子网创建私有连接
                     * @param _subnetId vpc 中第一个EIP开关打开，需要指定子网创建私有连接
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
                     * 获取创建私有连接指定IP
                     * @return EndpointIp 创建私有连接指定IP
                     * 
                     */
                    std::string GetEndpointIp() const;

                    /**
                     * 设置创建私有连接指定IP
                     * @param _endpointIp 创建私有连接指定IP
                     * 
                     */
                    void SetEndpointIp(const std::string& _endpointIp);

                    /**
                     * 判断参数 EndpointIp 是否已赋值
                     * @return EndpointIp 是否已赋值
                     * 
                     */
                    bool EndpointIpHasBeenSet() const;

                    /**
                     * 获取0 : 旁路 1 : 串行
                     * @return SwitchMode 0 : 旁路 1 : 串行
                     * 
                     */
                    int64_t GetSwitchMode() const;

                    /**
                     * 设置0 : 旁路 1 : 串行
                     * @param _switchMode 0 : 旁路 1 : 串行
                     * 
                     */
                    void SetSwitchMode(const int64_t& _switchMode);

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                private:

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * vpc 中第一个EIP开关打开，需要指定子网创建私有连接
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 创建私有连接指定IP
                     */
                    std::string m_endpointIp;
                    bool m_endpointIpHasBeenSet;

                    /**
                     * 0 : 旁路 1 : 串行
                     */
                    int64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_EDGEIPSWITCH_H_
