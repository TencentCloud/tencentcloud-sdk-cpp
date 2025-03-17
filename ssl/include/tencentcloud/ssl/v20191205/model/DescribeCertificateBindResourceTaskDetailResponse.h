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
                     * 获取关联clb资源详情	
                     * @return CLB 关联clb资源详情	
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
                     * 获取关联cdn资源详情	
                     * @return CDN 关联cdn资源详情	
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
                     * 获取关联waf资源详情	
                     * @return WAF 关联waf资源详情	
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
                     * 获取关联ddos资源详情	
                     * @return DDOS 关联ddos资源详情	
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
                     * 获取关联live资源详情	
                     * @return LIVE 关联live资源详情	
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
                     * 获取关联vod资源详情	
                     * @return VOD 关联vod资源详情	
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
                     * 获取关联tke资源详情	
                     * @return TKE 关联tke资源详情	
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
                     * 获取关联apigateway资源详情	
                     * @return APIGATEWAY 关联apigateway资源详情	
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
                     * 获取关联tcb资源详情	
                     * @return TCB 关联tcb资源详情	
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
                     * 获取关联teo资源详情	
                     * @return TEO 关联teo资源详情	
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
                     * 获取关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因
                     * @return Status 关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因
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
                     * 获取当前结果缓存时间
                     * @return CacheTime 当前结果缓存时间
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
                     * 获取关联tse资源详情	
                     * @return TSE 关联tse资源详情	
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
                     * 获取关联的COS资源详情
                     * @return COS 关联的COS资源详情
                     * 
                     */
                    std::vector<COSInstanceList> GetCOS() const;

                    /**
                     * 判断参数 COS 是否已赋值
                     * @return COS 是否已赋值
                     * 
                     */
                    bool COSHasBeenSet() const;

                private:

                    /**
                     * 关联clb资源详情	
                     */
                    std::vector<ClbInstanceList> m_cLB;
                    bool m_cLBHasBeenSet;

                    /**
                     * 关联cdn资源详情	
                     */
                    std::vector<CdnInstanceList> m_cDN;
                    bool m_cDNHasBeenSet;

                    /**
                     * 关联waf资源详情	
                     */
                    std::vector<WafInstanceList> m_wAF;
                    bool m_wAFHasBeenSet;

                    /**
                     * 关联ddos资源详情	
                     */
                    std::vector<DdosInstanceList> m_dDOS;
                    bool m_dDOSHasBeenSet;

                    /**
                     * 关联live资源详情	
                     */
                    std::vector<LiveInstanceList> m_lIVE;
                    bool m_lIVEHasBeenSet;

                    /**
                     * 关联vod资源详情	
                     */
                    std::vector<VODInstanceList> m_vOD;
                    bool m_vODHasBeenSet;

                    /**
                     * 关联tke资源详情	
                     */
                    std::vector<TkeInstanceList> m_tKE;
                    bool m_tKEHasBeenSet;

                    /**
                     * 关联apigateway资源详情	
                     */
                    std::vector<ApiGatewayInstanceList> m_aPIGATEWAY;
                    bool m_aPIGATEWAYHasBeenSet;

                    /**
                     * 关联tcb资源详情	
                     */
                    std::vector<TCBInstanceList> m_tCB;
                    bool m_tCBHasBeenSet;

                    /**
                     * 关联teo资源详情	
                     */
                    std::vector<TeoInstanceList> m_tEO;
                    bool m_tEOHasBeenSet;

                    /**
                     * 关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前结果缓存时间
                     */
                    std::string m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * 关联tse资源详情	
                     */
                    std::vector<TSEInstanceList> m_tSE;
                    bool m_tSEHasBeenSet;

                    /**
                     * 关联的COS资源详情
                     */
                    std::vector<COSInstanceList> m_cOS;
                    bool m_cOSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILRESPONSE_H_
