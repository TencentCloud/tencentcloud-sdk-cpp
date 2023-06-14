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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAINDETAILINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAINDETAILINFO_H_

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
                * 每个域名的统计信息。
                */
                class DomainDetailInfo : public AbstractModel
                {
                public:
                    DomainDetailInfo();
                    ~DomainDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国内还是国外:
Mainland: 表示国内数据。
Oversea: 表示国外数据。
                     * @return MainlandOrOversea 国内还是国外:
Mainland: 表示国内数据。
Oversea: 表示国外数据。
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置国内还是国外:
Mainland: 表示国内数据。
Oversea: 表示国外数据。
                     * @param _mainlandOrOversea 国内还是国外:
Mainland: 表示国内数据。
Oversea: 表示国外数据。
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                    /**
                     * 获取带宽，单位: Mbps。
                     * @return Bandwidth 带宽，单位: Mbps。
                     * 
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置带宽，单位: Mbps。
                     * @param _bandwidth 带宽，单位: Mbps。
                     * 
                     */
                    void SetBandwidth(const double& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取流量，单位: MB。
                     * @return Flux 流量，单位: MB。
                     * 
                     */
                    double GetFlux() const;

                    /**
                     * 设置流量，单位: MB。
                     * @param _flux 流量，单位: MB。
                     * 
                     */
                    void SetFlux(const double& _flux);

                    /**
                     * 判断参数 Flux 是否已赋值
                     * @return Flux 是否已赋值
                     * 
                     */
                    bool FluxHasBeenSet() const;

                    /**
                     * 获取人数。
                     * @return Online 人数。
                     * 
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 设置人数。
                     * @param _online 人数。
                     * 
                     */
                    void SetOnline(const uint64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                    /**
                     * 获取请求数。
                     * @return Request 请求数。
                     * 
                     */
                    uint64_t GetRequest() const;

                    /**
                     * 设置请求数。
                     * @param _request 请求数。
                     * 
                     */
                    void SetRequest(const uint64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                private:

                    /**
                     * 国内还是国外:
Mainland: 表示国内数据。
Oversea: 表示国外数据。
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                    /**
                     * 带宽，单位: Mbps。
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 流量，单位: MB。
                     */
                    double m_flux;
                    bool m_fluxHasBeenSet;

                    /**
                     * 人数。
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * 请求数。
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAINDETAILINFO_H_
