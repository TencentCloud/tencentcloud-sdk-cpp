/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ClbInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/CdnInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/WafInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/DdosInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/LiveInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/VODInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TkeInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/ApiGatewayInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TCBInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TeoInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TSEInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/COSInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/TDMQInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/MQTTInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/GAAPInstanceList.h>
#include <tencentcloud/ssl/v20191205/model/SCFInstanceList.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateBindResourceTaskDetail返回参数结构体
                */
                class DescribeCertificateBindResourceTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeCertificateBindResourceTaskDetailResponse();
                    ~DescribeCertificateBindResourceTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关联clb资源详情   </p>
                     * @return CLB <p>关联clb资源详情   </p>
                     * 
                     */
                    std::vector<ClbInstanceList> GetCLB() const;

                    /**
                     * 判断参数 CLB 是否已赋值
                     * @return CLB 是否已赋值
                     * 
                     */
                    bool CLBHasBeenSet() const;

                    /**
                     * 获取<p>关联cdn资源详情   </p>
                     * @return CDN <p>关联cdn资源详情   </p>
                     * 
                     */
                    std::vector<CdnInstanceList> GetCDN() const;

                    /**
                     * 判断参数 CDN 是否已赋值
                     * @return CDN 是否已赋值
                     * 
                     */
                    bool CDNHasBeenSet() const;

                    /**
                     * 获取<p>关联waf资源详情   </p>
                     * @return WAF <p>关联waf资源详情   </p>
                     * 
                     */
                    std::vector<WafInstanceList> GetWAF() const;

                    /**
                     * 判断参数 WAF 是否已赋值
                     * @return WAF 是否已赋值
                     * 
                     */
                    bool WAFHasBeenSet() const;

                    /**
                     * 获取<p>关联ddos资源详情  </p>
                     * @return DDOS <p>关联ddos资源详情  </p>
                     * 
                     */
                    std::vector<DdosInstanceList> GetDDOS() const;

                    /**
                     * 判断参数 DDOS 是否已赋值
                     * @return DDOS 是否已赋值
                     * 
                     */
                    bool DDOSHasBeenSet() const;

                    /**
                     * 获取<p>关联live资源详情  </p>
                     * @return LIVE <p>关联live资源详情  </p>
                     * 
                     */
                    std::vector<LiveInstanceList> GetLIVE() const;

                    /**
                     * 判断参数 LIVE 是否已赋值
                     * @return LIVE 是否已赋值
                     * 
                     */
                    bool LIVEHasBeenSet() const;

                    /**
                     * 获取<p>关联vod资源详情   </p>
                     * @return VOD <p>关联vod资源详情   </p>
                     * 
                     */
                    std::vector<VODInstanceList> GetVOD() const;

                    /**
                     * 判断参数 VOD 是否已赋值
                     * @return VOD 是否已赋值
                     * 
                     */
                    bool VODHasBeenSet() const;

                    /**
                     * 获取<p>关联tke资源详情   </p>
                     * @return TKE <p>关联tke资源详情   </p>
                     * 
                     */
                    std::vector<TkeInstanceList> GetTKE() const;

                    /**
                     * 判断参数 TKE 是否已赋值
                     * @return TKE 是否已赋值
                     * 
                     */
                    bool TKEHasBeenSet() const;

                    /**
                     * 获取<p>关联apigateway资源详情    </p>
                     * @return APIGATEWAY <p>关联apigateway资源详情    </p>
                     * 
                     */
                    std::vector<ApiGatewayInstanceList> GetAPIGATEWAY() const;

                    /**
                     * 判断参数 APIGATEWAY 是否已赋值
                     * @return APIGATEWAY 是否已赋值
                     * 
                     */
                    bool APIGATEWAYHasBeenSet() const;

                    /**
                     * 获取<p>关联tcb资源详情   </p>
                     * @return TCB <p>关联tcb资源详情   </p>
                     * 
                     */
                    std::vector<TCBInstanceList> GetTCB() const;

                    /**
                     * 判断参数 TCB 是否已赋值
                     * @return TCB 是否已赋值
                     * 
                     */
                    bool TCBHasBeenSet() const;

                    /**
                     * 获取<p>关联teo资源详情   </p>
                     * @return TEO <p>关联teo资源详情   </p>
                     * 
                     */
                    std::vector<TeoInstanceList> GetTEO() const;

                    /**
                     * 判断参数 TEO 是否已赋值
                     * @return TEO 是否已赋值
                     * 
                     */
                    bool TEOHasBeenSet() const;

                    /**
                     * 获取<p>关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因</p>
                     * @return Status <p>关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>当前结果缓存时间</p>
                     * @return CacheTime <p>当前结果缓存时间</p>
                     * 
                     */
                    std::string GetCacheTime() const;

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                    /**
                     * 获取<p>关联tse资源详情   </p>
                     * @return TSE <p>关联tse资源详情   </p>
                     * 
                     */
                    std::vector<TSEInstanceList> GetTSE() const;

                    /**
                     * 判断参数 TSE 是否已赋值
                     * @return TSE 是否已赋值
                     * 
                     */
                    bool TSEHasBeenSet() const;

                    /**
                     * 获取<p>关联的COS资源详情</p>
                     * @return COS <p>关联的COS资源详情</p>
                     * 
                     */
                    std::vector<COSInstanceList> GetCOS() const;

                    /**
                     * 判断参数 COS 是否已赋值
                     * @return COS 是否已赋值
                     * 
                     */
                    bool COSHasBeenSet() const;

                    /**
                     * 获取<p>关联的TDMQ - Rabbit资源详情</p>
                     * @return TDMQ <p>关联的TDMQ - Rabbit资源详情</p>
                     * 
                     */
                    std::vector<TDMQInstanceList> GetTDMQ() const;

                    /**
                     * 判断参数 TDMQ 是否已赋值
                     * @return TDMQ 是否已赋值
                     * 
                     */
                    bool TDMQHasBeenSet() const;

                    /**
                     * 获取<p>关联的MQTT资源详情</p>
                     * @return MQTT <p>关联的MQTT资源详情</p>
                     * 
                     */
                    std::vector<MQTTInstanceList> GetMQTT() const;

                    /**
                     * 判断参数 MQTT 是否已赋值
                     * @return MQTT 是否已赋值
                     * 
                     */
                    bool MQTTHasBeenSet() const;

                    /**
                     * 获取<p>关联的GAAP资源详情</p>
                     * @return GAAP <p>关联的GAAP资源详情</p>
                     * 
                     */
                    std::vector<GAAPInstanceList> GetGAAP() const;

                    /**
                     * 判断参数 GAAP 是否已赋值
                     * @return GAAP 是否已赋值
                     * 
                     */
                    bool GAAPHasBeenSet() const;

                    /**
                     * 获取<p>关联的SCF资源详情</p>
                     * @return SCF <p>关联的SCF资源详情</p>
                     * 
                     */
                    std::vector<SCFInstanceList> GetSCF() const;

                    /**
                     * 判断参数 SCF 是否已赋值
                     * @return SCF 是否已赋值
                     * 
                     */
                    bool SCFHasBeenSet() const;

                private:

                    /**
                     * <p>关联clb资源详情   </p>
                     */
                    std::vector<ClbInstanceList> m_cLB;
                    bool m_cLBHasBeenSet;

                    /**
                     * <p>关联cdn资源详情   </p>
                     */
                    std::vector<CdnInstanceList> m_cDN;
                    bool m_cDNHasBeenSet;

                    /**
                     * <p>关联waf资源详情   </p>
                     */
                    std::vector<WafInstanceList> m_wAF;
                    bool m_wAFHasBeenSet;

                    /**
                     * <p>关联ddos资源详情  </p>
                     */
                    std::vector<DdosInstanceList> m_dDOS;
                    bool m_dDOSHasBeenSet;

                    /**
                     * <p>关联live资源详情  </p>
                     */
                    std::vector<LiveInstanceList> m_lIVE;
                    bool m_lIVEHasBeenSet;

                    /**
                     * <p>关联vod资源详情   </p>
                     */
                    std::vector<VODInstanceList> m_vOD;
                    bool m_vODHasBeenSet;

                    /**
                     * <p>关联tke资源详情   </p>
                     */
                    std::vector<TkeInstanceList> m_tKE;
                    bool m_tKEHasBeenSet;

                    /**
                     * <p>关联apigateway资源详情    </p>
                     */
                    std::vector<ApiGatewayInstanceList> m_aPIGATEWAY;
                    bool m_aPIGATEWAYHasBeenSet;

                    /**
                     * <p>关联tcb资源详情   </p>
                     */
                    std::vector<TCBInstanceList> m_tCB;
                    bool m_tCBHasBeenSet;

                    /**
                     * <p>关联teo资源详情   </p>
                     */
                    std::vector<TeoInstanceList> m_tEO;
                    bool m_tEOHasBeenSet;

                    /**
                     * <p>关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>当前结果缓存时间</p>
                     */
                    std::string m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * <p>关联tse资源详情   </p>
                     */
                    std::vector<TSEInstanceList> m_tSE;
                    bool m_tSEHasBeenSet;

                    /**
                     * <p>关联的COS资源详情</p>
                     */
                    std::vector<COSInstanceList> m_cOS;
                    bool m_cOSHasBeenSet;

                    /**
                     * <p>关联的TDMQ - Rabbit资源详情</p>
                     */
                    std::vector<TDMQInstanceList> m_tDMQ;
                    bool m_tDMQHasBeenSet;

                    /**
                     * <p>关联的MQTT资源详情</p>
                     */
                    std::vector<MQTTInstanceList> m_mQTT;
                    bool m_mQTTHasBeenSet;

                    /**
                     * <p>关联的GAAP资源详情</p>
                     */
                    std::vector<GAAPInstanceList> m_gAAP;
                    bool m_gAAPHasBeenSet;

                    /**
                     * <p>关联的SCF资源详情</p>
                     */
                    std::vector<SCFInstanceList> m_sCF;
                    bool m_sCFHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILRESPONSE_H_
