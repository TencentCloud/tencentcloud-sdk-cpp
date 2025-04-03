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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ENVADDRESSINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ENVADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CLBMultiRegion.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 多环境网络信息
                */
                class EnvAddressInfo : public AbstractModel
                {
                public:
                    EnvAddressInfo();
                    ~EnvAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境名
                     * @return EnvName 环境名
                     * 
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置环境名
                     * @param _envName 环境名
                     * 
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     * 
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取是否开启config公网
                     * @return EnableConfigInternet 是否开启config公网
                     * 
                     */
                    bool GetEnableConfigInternet() const;

                    /**
                     * 设置是否开启config公网
                     * @param _enableConfigInternet 是否开启config公网
                     * 
                     */
                    void SetEnableConfigInternet(const bool& _enableConfigInternet);

                    /**
                     * 判断参数 EnableConfigInternet 是否已赋值
                     * @return EnableConfigInternet 是否已赋值
                     * 
                     */
                    bool EnableConfigInternetHasBeenSet() const;

                    /**
                     * 获取config公网ip
                     * @return ConfigInternetServiceIp config公网ip
                     * 
                     */
                    std::string GetConfigInternetServiceIp() const;

                    /**
                     * 设置config公网ip
                     * @param _configInternetServiceIp config公网ip
                     * 
                     */
                    void SetConfigInternetServiceIp(const std::string& _configInternetServiceIp);

                    /**
                     * 判断参数 ConfigInternetServiceIp 是否已赋值
                     * @return ConfigInternetServiceIp 是否已赋值
                     * 
                     */
                    bool ConfigInternetServiceIpHasBeenSet() const;

                    /**
                     * 获取config内网访问地址
                     * @return ConfigIntranetAddress config内网访问地址
                     * 
                     */
                    std::string GetConfigIntranetAddress() const;

                    /**
                     * 设置config内网访问地址
                     * @param _configIntranetAddress config内网访问地址
                     * 
                     */
                    void SetConfigIntranetAddress(const std::string& _configIntranetAddress);

                    /**
                     * 判断参数 ConfigIntranetAddress 是否已赋值
                     * @return ConfigIntranetAddress 是否已赋值
                     * 
                     */
                    bool ConfigIntranetAddressHasBeenSet() const;

                    /**
                     * 获取是否开启config内网clb
                     * @return EnableConfigIntranet 是否开启config内网clb
                     * 
                     */
                    bool GetEnableConfigIntranet() const;

                    /**
                     * 设置是否开启config内网clb
                     * @param _enableConfigIntranet 是否开启config内网clb
                     * 
                     */
                    void SetEnableConfigIntranet(const bool& _enableConfigIntranet);

                    /**
                     * 判断参数 EnableConfigIntranet 是否已赋值
                     * @return EnableConfigIntranet 是否已赋值
                     * 
                     */
                    bool EnableConfigIntranetHasBeenSet() const;

                    /**
                     * 获取客户端公网带宽
                     * @return InternetBandWidth 客户端公网带宽
                     * 
                     */
                    int64_t GetInternetBandWidth() const;

                    /**
                     * 设置客户端公网带宽
                     * @param _internetBandWidth 客户端公网带宽
                     * 
                     */
                    void SetInternetBandWidth(const int64_t& _internetBandWidth);

                    /**
                     * 判断参数 InternetBandWidth 是否已赋值
                     * @return InternetBandWidth 是否已赋值
                     * 
                     */
                    bool InternetBandWidthHasBeenSet() const;

                    /**
                     * 获取客户端公网CLB多可用区信息
                     * @return CLBMultiRegion 客户端公网CLB多可用区信息
                     * 
                     */
                    CLBMultiRegion GetCLBMultiRegion() const;

                    /**
                     * 设置客户端公网CLB多可用区信息
                     * @param _cLBMultiRegion 客户端公网CLB多可用区信息
                     * 
                     */
                    void SetCLBMultiRegion(const CLBMultiRegion& _cLBMultiRegion);

                    /**
                     * 判断参数 CLBMultiRegion 是否已赋值
                     * @return CLBMultiRegion 是否已赋值
                     * 
                     */
                    bool CLBMultiRegionHasBeenSet() const;

                private:

                    /**
                     * 环境名
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * 是否开启config公网
                     */
                    bool m_enableConfigInternet;
                    bool m_enableConfigInternetHasBeenSet;

                    /**
                     * config公网ip
                     */
                    std::string m_configInternetServiceIp;
                    bool m_configInternetServiceIpHasBeenSet;

                    /**
                     * config内网访问地址
                     */
                    std::string m_configIntranetAddress;
                    bool m_configIntranetAddressHasBeenSet;

                    /**
                     * 是否开启config内网clb
                     */
                    bool m_enableConfigIntranet;
                    bool m_enableConfigIntranetHasBeenSet;

                    /**
                     * 客户端公网带宽
                     */
                    int64_t m_internetBandWidth;
                    bool m_internetBandWidthHasBeenSet;

                    /**
                     * 客户端公网CLB多可用区信息
                     */
                    CLBMultiRegion m_cLBMultiRegion;
                    bool m_cLBMultiRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ENVADDRESSINFO_H_
