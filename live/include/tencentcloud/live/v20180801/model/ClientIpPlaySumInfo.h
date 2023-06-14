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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CLIENTIPPLAYSUMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CLIENTIPPLAYSUMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 客户端ip播放汇总信息。
                */
                class ClientIpPlaySumInfo : public AbstractModel
                {
                public:
                    ClientIpPlaySumInfo();
                    ~ClientIpPlaySumInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端 IP，点分型。
                     * @return ClientIp 客户端 IP，点分型。
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端 IP，点分型。
                     * @param _clientIp 客户端 IP，点分型。
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取客户端所在省份。
                     * @return Province 客户端所在省份。
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置客户端所在省份。
                     * @param _province 客户端所在省份。
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取总流量。
                     * @return TotalFlux 总流量。
                     * 
                     */
                    double GetTotalFlux() const;

                    /**
                     * 设置总流量。
                     * @param _totalFlux 总流量。
                     * 
                     */
                    void SetTotalFlux(const double& _totalFlux);

                    /**
                     * 判断参数 TotalFlux 是否已赋值
                     * @return TotalFlux 是否已赋值
                     * 
                     */
                    bool TotalFluxHasBeenSet() const;

                    /**
                     * 获取总请求数。
                     * @return TotalRequest 总请求数。
                     * 
                     */
                    uint64_t GetTotalRequest() const;

                    /**
                     * 设置总请求数。
                     * @param _totalRequest 总请求数。
                     * 
                     */
                    void SetTotalRequest(const uint64_t& _totalRequest);

                    /**
                     * 判断参数 TotalRequest 是否已赋值
                     * @return TotalRequest 是否已赋值
                     * 
                     */
                    bool TotalRequestHasBeenSet() const;

                    /**
                     * 获取总失败请求数。
                     * @return TotalFailedRequest 总失败请求数。
                     * 
                     */
                    uint64_t GetTotalFailedRequest() const;

                    /**
                     * 设置总失败请求数。
                     * @param _totalFailedRequest 总失败请求数。
                     * 
                     */
                    void SetTotalFailedRequest(const uint64_t& _totalFailedRequest);

                    /**
                     * 判断参数 TotalFailedRequest 是否已赋值
                     * @return TotalFailedRequest 是否已赋值
                     * 
                     */
                    bool TotalFailedRequestHasBeenSet() const;

                    /**
                     * 获取客户端所在国家。
                     * @return CountryArea 客户端所在国家。
                     * 
                     */
                    std::string GetCountryArea() const;

                    /**
                     * 设置客户端所在国家。
                     * @param _countryArea 客户端所在国家。
                     * 
                     */
                    void SetCountryArea(const std::string& _countryArea);

                    /**
                     * 判断参数 CountryArea 是否已赋值
                     * @return CountryArea 是否已赋值
                     * 
                     */
                    bool CountryAreaHasBeenSet() const;

                private:

                    /**
                     * 客户端 IP，点分型。
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 客户端所在省份。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 总流量。
                     */
                    double m_totalFlux;
                    bool m_totalFluxHasBeenSet;

                    /**
                     * 总请求数。
                     */
                    uint64_t m_totalRequest;
                    bool m_totalRequestHasBeenSet;

                    /**
                     * 总失败请求数。
                     */
                    uint64_t m_totalFailedRequest;
                    bool m_totalFailedRequestHasBeenSet;

                    /**
                     * 客户端所在国家。
                     */
                    std::string m_countryArea;
                    bool m_countryAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CLIENTIPPLAYSUMINFO_H_
