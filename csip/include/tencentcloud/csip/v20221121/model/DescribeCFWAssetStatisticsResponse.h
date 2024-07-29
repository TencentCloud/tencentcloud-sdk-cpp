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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFWASSETSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFWASSETSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCFWAssetStatistics返回参数结构体
                */
                class DescribeCFWAssetStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeCFWAssetStatisticsResponse();
                    ~DescribeCFWAssetStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网络资产总数
                     * @return NetworkTotal 网络资产总数
                     * 
                     */
                    int64_t GetNetworkTotal() const;

                    /**
                     * 判断参数 NetworkTotal 是否已赋值
                     * @return NetworkTotal 是否已赋值
                     * 
                     */
                    bool NetworkTotalHasBeenSet() const;

                    /**
                     * 获取资产clb数量
                     * @return ClbTotal 资产clb数量
                     * 
                     */
                    int64_t GetClbTotal() const;

                    /**
                     * 判断参数 ClbTotal 是否已赋值
                     * @return ClbTotal 是否已赋值
                     * 
                     */
                    bool ClbTotalHasBeenSet() const;

                    /**
                     * 获取nat数量
                     * @return NatTotal nat数量
                     * 
                     */
                    int64_t GetNatTotal() const;

                    /**
                     * 判断参数 NatTotal 是否已赋值
                     * @return NatTotal 是否已赋值
                     * 
                     */
                    bool NatTotalHasBeenSet() const;

                    /**
                     * 获取公网ip数量
                     * @return PublicAssetTotal 公网ip数量
                     * 
                     */
                    int64_t GetPublicAssetTotal() const;

                    /**
                     * 判断参数 PublicAssetTotal 是否已赋值
                     * @return PublicAssetTotal 是否已赋值
                     * 
                     */
                    bool PublicAssetTotalHasBeenSet() const;

                    /**
                     * 获取主机数量
                     * @return CVMAssetTotal 主机数量
                     * 
                     */
                    int64_t GetCVMAssetTotal() const;

                    /**
                     * 判断参数 CVMAssetTotal 是否已赋值
                     * @return CVMAssetTotal 是否已赋值
                     * 
                     */
                    bool CVMAssetTotalHasBeenSet() const;

                    /**
                     * 获取配置风险
                     * @return CFGTotal 配置风险
                     * 
                     */
                    int64_t GetCFGTotal() const;

                    /**
                     * 判断参数 CFGTotal 是否已赋值
                     * @return CFGTotal 是否已赋值
                     * 
                     */
                    bool CFGTotalHasBeenSet() const;

                    /**
                     * 获取端口风险
                     * @return PortTotal 端口风险
                     * 
                     */
                    int64_t GetPortTotal() const;

                    /**
                     * 判断参数 PortTotal 是否已赋值
                     * @return PortTotal 是否已赋值
                     * 
                     */
                    bool PortTotalHasBeenSet() const;

                    /**
                     * 获取内容风险
                     * @return WebsiteTotal 内容风险
                     * 
                     */
                    int64_t GetWebsiteTotal() const;

                    /**
                     * 判断参数 WebsiteTotal 是否已赋值
                     * @return WebsiteTotal 是否已赋值
                     * 
                     */
                    bool WebsiteTotalHasBeenSet() const;

                    /**
                     * 获取风险服务暴露
                     * @return ServerTotal 风险服务暴露
                     * 
                     */
                    int64_t GetServerTotal() const;

                    /**
                     * 判断参数 ServerTotal 是否已赋值
                     * @return ServerTotal 是否已赋值
                     * 
                     */
                    bool ServerTotalHasBeenSet() const;

                    /**
                     * 获取弱口令风险
                     * @return WeakPasswordTotal 弱口令风险
                     * 
                     */
                    int64_t GetWeakPasswordTotal() const;

                    /**
                     * 判断参数 WeakPasswordTotal 是否已赋值
                     * @return WeakPasswordTotal 是否已赋值
                     * 
                     */
                    bool WeakPasswordTotalHasBeenSet() const;

                    /**
                     * 获取漏洞风险
                     * @return VULTotal 漏洞风险
                     * 
                     */
                    int64_t GetVULTotal() const;

                    /**
                     * 判断参数 VULTotal 是否已赋值
                     * @return VULTotal 是否已赋值
                     * 
                     */
                    bool VULTotalHasBeenSet() const;

                private:

                    /**
                     * 网络资产总数
                     */
                    int64_t m_networkTotal;
                    bool m_networkTotalHasBeenSet;

                    /**
                     * 资产clb数量
                     */
                    int64_t m_clbTotal;
                    bool m_clbTotalHasBeenSet;

                    /**
                     * nat数量
                     */
                    int64_t m_natTotal;
                    bool m_natTotalHasBeenSet;

                    /**
                     * 公网ip数量
                     */
                    int64_t m_publicAssetTotal;
                    bool m_publicAssetTotalHasBeenSet;

                    /**
                     * 主机数量
                     */
                    int64_t m_cVMAssetTotal;
                    bool m_cVMAssetTotalHasBeenSet;

                    /**
                     * 配置风险
                     */
                    int64_t m_cFGTotal;
                    bool m_cFGTotalHasBeenSet;

                    /**
                     * 端口风险
                     */
                    int64_t m_portTotal;
                    bool m_portTotalHasBeenSet;

                    /**
                     * 内容风险
                     */
                    int64_t m_websiteTotal;
                    bool m_websiteTotalHasBeenSet;

                    /**
                     * 风险服务暴露
                     */
                    int64_t m_serverTotal;
                    bool m_serverTotalHasBeenSet;

                    /**
                     * 弱口令风险
                     */
                    int64_t m_weakPasswordTotal;
                    bool m_weakPasswordTotalHasBeenSet;

                    /**
                     * 漏洞风险
                     */
                    int64_t m_vULTotal;
                    bool m_vULTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFWASSETSTATISTICSRESPONSE_H_
