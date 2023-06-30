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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_WXGATEWAYCUSTOMCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_WXGATEWAYCUSTOMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/BanConfig.h>
#include <tencentcloud/tcb/v20180608/model/CustomLogConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 安全网关自定义配置
                */
                class WxGatewayCustomConfig : public AbstractModel
                {
                public:
                    WxGatewayCustomConfig();
                    ~WxGatewayCustomConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启x-real-ip
                     * @return IsOpenXRealIp 是否开启x-real-ip
                     * 
                     */
                    bool GetIsOpenXRealIp() const;

                    /**
                     * 设置是否开启x-real-ip
                     * @param _isOpenXRealIp 是否开启x-real-ip
                     * 
                     */
                    void SetIsOpenXRealIp(const bool& _isOpenXRealIp);

                    /**
                     * 判断参数 IsOpenXRealIp 是否已赋值
                     * @return IsOpenXRealIp 是否已赋值
                     * 
                     */
                    bool IsOpenXRealIpHasBeenSet() const;

                    /**
                     * 获取封禁配置
                     * @return BanConfig 封禁配置
                     * 
                     */
                    BanConfig GetBanConfig() const;

                    /**
                     * 设置封禁配置
                     * @param _banConfig 封禁配置
                     * 
                     */
                    void SetBanConfig(const BanConfig& _banConfig);

                    /**
                     * 判断参数 BanConfig 是否已赋值
                     * @return BanConfig 是否已赋值
                     * 
                     */
                    bool BanConfigHasBeenSet() const;

                    /**
                     * 获取获取源ip方式，PPV1(Proxy Protocol V1)、PPV2(Proxy Protocol V2)、TOA(tcp option address)
                     * @return SourceIpType 获取源ip方式，PPV1(Proxy Protocol V1)、PPV2(Proxy Protocol V2)、TOA(tcp option address)
                     * 
                     */
                    std::string GetSourceIpType() const;

                    /**
                     * 设置获取源ip方式，PPV1(Proxy Protocol V1)、PPV2(Proxy Protocol V2)、TOA(tcp option address)
                     * @param _sourceIpType 获取源ip方式，PPV1(Proxy Protocol V1)、PPV2(Proxy Protocol V2)、TOA(tcp option address)
                     * 
                     */
                    void SetSourceIpType(const std::string& _sourceIpType);

                    /**
                     * 判断参数 SourceIpType 是否已赋值
                     * @return SourceIpType 是否已赋值
                     * 
                     */
                    bool SourceIpTypeHasBeenSet() const;

                    /**
                     * 获取日志信息
                     * @return LogConfig 日志信息
                     * 
                     */
                    CustomLogConfig GetLogConfig() const;

                    /**
                     * 设置日志信息
                     * @param _logConfig 日志信息
                     * 
                     */
                    void SetLogConfig(const CustomLogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取是否开启http1.0
                     * @return IsAcceptHttpOne 是否开启http1.0
                     * 
                     */
                    bool GetIsAcceptHttpOne() const;

                    /**
                     * 设置是否开启http1.0
                     * @param _isAcceptHttpOne 是否开启http1.0
                     * 
                     */
                    void SetIsAcceptHttpOne(const bool& _isAcceptHttpOne);

                    /**
                     * 判断参数 IsAcceptHttpOne 是否已赋值
                     * @return IsAcceptHttpOne 是否已赋值
                     * 
                     */
                    bool IsAcceptHttpOneHasBeenSet() const;

                private:

                    /**
                     * 是否开启x-real-ip
                     */
                    bool m_isOpenXRealIp;
                    bool m_isOpenXRealIpHasBeenSet;

                    /**
                     * 封禁配置
                     */
                    BanConfig m_banConfig;
                    bool m_banConfigHasBeenSet;

                    /**
                     * 获取源ip方式，PPV1(Proxy Protocol V1)、PPV2(Proxy Protocol V2)、TOA(tcp option address)
                     */
                    std::string m_sourceIpType;
                    bool m_sourceIpTypeHasBeenSet;

                    /**
                     * 日志信息
                     */
                    CustomLogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * 是否开启http1.0
                     */
                    bool m_isAcceptHttpOne;
                    bool m_isAcceptHttpOneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_WXGATEWAYCUSTOMCONFIG_H_
