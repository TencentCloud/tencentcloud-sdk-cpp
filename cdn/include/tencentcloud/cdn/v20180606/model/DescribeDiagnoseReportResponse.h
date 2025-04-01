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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDIAGNOSEREPORTRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDIAGNOSEREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DiagnoseData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeDiagnoseReport返回参数结构体
                */
                class DescribeDiagnoseReportResponse : public AbstractModel
                {
                public:
                    DescribeDiagnoseReportResponse();
                    ~DescribeDiagnoseReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取诊断报告基础信息
                     * @return BaskInfo 诊断报告基础信息
                     * 
                     */
                    DiagnoseData GetBaskInfo() const;

                    /**
                     * 判断参数 BaskInfo 是否已赋值
                     * @return BaskInfo 是否已赋值
                     * 
                     */
                    bool BaskInfoHasBeenSet() const;

                    /**
                     * 获取CNAME检测信息
                     * @return CnameInfo CNAME检测信息
                     * 
                     */
                    DiagnoseData GetCnameInfo() const;

                    /**
                     * 判断参数 CnameInfo 是否已赋值
                     * @return CnameInfo 是否已赋值
                     * 
                     */
                    bool CnameInfoHasBeenSet() const;

                    /**
                     * 获取客户端检测信息
                     * @return ClientInfo 客户端检测信息
                     * 
                     */
                    DiagnoseData GetClientInfo() const;

                    /**
                     * 判断参数 ClientInfo 是否已赋值
                     * @return ClientInfo 是否已赋值
                     * 
                     */
                    bool ClientInfoHasBeenSet() const;

                    /**
                     * 获取DNS检测信息
                     * @return DnsInfo DNS检测信息
                     * 
                     */
                    DiagnoseData GetDnsInfo() const;

                    /**
                     * 判断参数 DnsInfo 是否已赋值
                     * @return DnsInfo 是否已赋值
                     * 
                     */
                    bool DnsInfoHasBeenSet() const;

                    /**
                     * 获取网络检测信息
                     * @return NetworkInfo 网络检测信息
                     * 
                     */
                    DiagnoseData GetNetworkInfo() const;

                    /**
                     * 判断参数 NetworkInfo 是否已赋值
                     * @return NetworkInfo 是否已赋值
                     * 
                     */
                    bool NetworkInfoHasBeenSet() const;

                    /**
                     * 获取边缘节点检测信息
                     * @return OcNodeInfo 边缘节点检测信息
                     * 
                     */
                    DiagnoseData GetOcNodeInfo() const;

                    /**
                     * 判断参数 OcNodeInfo 是否已赋值
                     * @return OcNodeInfo 是否已赋值
                     * 
                     */
                    bool OcNodeInfoHasBeenSet() const;

                    /**
                     * 获取中间源节点检测信息
                     * @return MidNodeInfo 中间源节点检测信息
                     * 
                     */
                    DiagnoseData GetMidNodeInfo() const;

                    /**
                     * 判断参数 MidNodeInfo 是否已赋值
                     * @return MidNodeInfo 是否已赋值
                     * 
                     */
                    bool MidNodeInfoHasBeenSet() const;

                    /**
                     * 获取源站检测信息
                     * @return OriginInfo 源站检测信息
                     * 
                     */
                    DiagnoseData GetOriginInfo() const;

                    /**
                     * 判断参数 OriginInfo 是否已赋值
                     * @return OriginInfo 是否已赋值
                     * 
                     */
                    bool OriginInfoHasBeenSet() const;

                    /**
                     * 获取刷新检测信息
                     * @return PurgeInfo 刷新检测信息
                     * 
                     */
                    DiagnoseData GetPurgeInfo() const;

                    /**
                     * 判断参数 PurgeInfo 是否已赋值
                     * @return PurgeInfo 是否已赋值
                     * 
                     */
                    bool PurgeInfoHasBeenSet() const;

                private:

                    /**
                     * 诊断报告基础信息
                     */
                    DiagnoseData m_baskInfo;
                    bool m_baskInfoHasBeenSet;

                    /**
                     * CNAME检测信息
                     */
                    DiagnoseData m_cnameInfo;
                    bool m_cnameInfoHasBeenSet;

                    /**
                     * 客户端检测信息
                     */
                    DiagnoseData m_clientInfo;
                    bool m_clientInfoHasBeenSet;

                    /**
                     * DNS检测信息
                     */
                    DiagnoseData m_dnsInfo;
                    bool m_dnsInfoHasBeenSet;

                    /**
                     * 网络检测信息
                     */
                    DiagnoseData m_networkInfo;
                    bool m_networkInfoHasBeenSet;

                    /**
                     * 边缘节点检测信息
                     */
                    DiagnoseData m_ocNodeInfo;
                    bool m_ocNodeInfoHasBeenSet;

                    /**
                     * 中间源节点检测信息
                     */
                    DiagnoseData m_midNodeInfo;
                    bool m_midNodeInfoHasBeenSet;

                    /**
                     * 源站检测信息
                     */
                    DiagnoseData m_originInfo;
                    bool m_originInfoHasBeenSet;

                    /**
                     * 刷新检测信息
                     */
                    DiagnoseData m_purgeInfo;
                    bool m_purgeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDIAGNOSEREPORTRESPONSE_H_
