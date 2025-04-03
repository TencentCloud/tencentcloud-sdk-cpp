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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBESREINSTANCEACCESSADDRESSRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBESREINSTANCEACCESSADDRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/EnvAddressInfo.h>
#include <tencentcloud/tse/v20201207/model/PolarisLimiterAddress.h>
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
                * DescribeSREInstanceAccessAddress返回参数结构体
                */
                class DescribeSREInstanceAccessAddressResponse : public AbstractModel
                {
                public:
                    DescribeSREInstanceAccessAddressResponse();
                    ~DescribeSREInstanceAccessAddressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取内网访问地址
                     * @return IntranetAddress 内网访问地址
                     * 
                     */
                    std::string GetIntranetAddress() const;

                    /**
                     * 判断参数 IntranetAddress 是否已赋值
                     * @return IntranetAddress 是否已赋值
                     * 
                     */
                    bool IntranetAddressHasBeenSet() const;

                    /**
                     * 获取公网访问地址
                     * @return InternetAddress 公网访问地址
                     * 
                     */
                    std::string GetInternetAddress() const;

                    /**
                     * 判断参数 InternetAddress 是否已赋值
                     * @return InternetAddress 是否已赋值
                     * 
                     */
                    bool InternetAddressHasBeenSet() const;

                    /**
                     * 获取apollo多环境公网ip
                     * @return EnvAddressInfos apollo多环境公网ip
                     * 
                     */
                    std::vector<EnvAddressInfo> GetEnvAddressInfos() const;

                    /**
                     * 判断参数 EnvAddressInfos 是否已赋值
                     * @return EnvAddressInfos 是否已赋值
                     * 
                     */
                    bool EnvAddressInfosHasBeenSet() const;

                    /**
                     * 获取控制台公网访问地址
                     * @return ConsoleInternetAddress 控制台公网访问地址
                     * 
                     */
                    std::string GetConsoleInternetAddress() const;

                    /**
                     * 判断参数 ConsoleInternetAddress 是否已赋值
                     * @return ConsoleInternetAddress 是否已赋值
                     * 
                     */
                    bool ConsoleInternetAddressHasBeenSet() const;

                    /**
                     * 获取控制台内网访问地址
                     * @return ConsoleIntranetAddress 控制台内网访问地址
                     * 
                     */
                    std::string GetConsoleIntranetAddress() const;

                    /**
                     * 判断参数 ConsoleIntranetAddress 是否已赋值
                     * @return ConsoleIntranetAddress 是否已赋值
                     * 
                     */
                    bool ConsoleIntranetAddressHasBeenSet() const;

                    /**
                     * 获取客户端公网带宽
                     * @return InternetBandWidth 客户端公网带宽
                     * 
                     */
                    int64_t GetInternetBandWidth() const;

                    /**
                     * 判断参数 InternetBandWidth 是否已赋值
                     * @return InternetBandWidth 是否已赋值
                     * 
                     */
                    bool InternetBandWidthHasBeenSet() const;

                    /**
                     * 获取控制台公网带宽
                     * @return ConsoleInternetBandWidth 控制台公网带宽
                     * 
                     */
                    int64_t GetConsoleInternetBandWidth() const;

                    /**
                     * 判断参数 ConsoleInternetBandWidth 是否已赋值
                     * @return ConsoleInternetBandWidth 是否已赋值
                     * 
                     */
                    bool ConsoleInternetBandWidthHasBeenSet() const;

                    /**
                     * 获取北极星限流server节点接入IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimiterAddressInfos 北极星限流server节点接入IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PolarisLimiterAddress> GetLimiterAddressInfos() const;

                    /**
                     * 判断参数 LimiterAddressInfos 是否已赋值
                     * @return LimiterAddressInfos 是否已赋值
                     * 
                     */
                    bool LimiterAddressInfosHasBeenSet() const;

                    /**
                     * 获取InternetAddress 的公网 CLB 多可用区信息
                     * @return CLBMultiRegion InternetAddress 的公网 CLB 多可用区信息
                     * 
                     */
                    CLBMultiRegion GetCLBMultiRegion() const;

                    /**
                     * 判断参数 CLBMultiRegion 是否已赋值
                     * @return CLBMultiRegion 是否已赋值
                     * 
                     */
                    bool CLBMultiRegionHasBeenSet() const;

                private:

                    /**
                     * 内网访问地址
                     */
                    std::string m_intranetAddress;
                    bool m_intranetAddressHasBeenSet;

                    /**
                     * 公网访问地址
                     */
                    std::string m_internetAddress;
                    bool m_internetAddressHasBeenSet;

                    /**
                     * apollo多环境公网ip
                     */
                    std::vector<EnvAddressInfo> m_envAddressInfos;
                    bool m_envAddressInfosHasBeenSet;

                    /**
                     * 控制台公网访问地址
                     */
                    std::string m_consoleInternetAddress;
                    bool m_consoleInternetAddressHasBeenSet;

                    /**
                     * 控制台内网访问地址
                     */
                    std::string m_consoleIntranetAddress;
                    bool m_consoleIntranetAddressHasBeenSet;

                    /**
                     * 客户端公网带宽
                     */
                    int64_t m_internetBandWidth;
                    bool m_internetBandWidthHasBeenSet;

                    /**
                     * 控制台公网带宽
                     */
                    int64_t m_consoleInternetBandWidth;
                    bool m_consoleInternetBandWidthHasBeenSet;

                    /**
                     * 北极星限流server节点接入IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PolarisLimiterAddress> m_limiterAddressInfos;
                    bool m_limiterAddressInfosHasBeenSet;

                    /**
                     * InternetAddress 的公网 CLB 多可用区信息
                     */
                    CLBMultiRegion m_cLBMultiRegion;
                    bool m_cLBMultiRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBESREINSTANCEACCESSADDRESSRESPONSE_H_
