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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_DASHBOARDRESULT_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_DASHBOARDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sslpod/v20190605/model/ChartNameValue.h>
#include <tencentcloud/sslpod/v20190605/model/ChartHistogram.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * 面板数据
                */
                class DashboardResult : public AbstractModel
                {
                public:
                    DashboardResult();
                    ~DashboardResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全等级图表
                     * @return SecurityLevelPie 安全等级图表
                     * 
                     */
                    std::vector<ChartNameValue> GetSecurityLevelPie() const;

                    /**
                     * 设置安全等级图表
                     * @param _securityLevelPie 安全等级图表
                     * 
                     */
                    void SetSecurityLevelPie(const std::vector<ChartNameValue>& _securityLevelPie);

                    /**
                     * 判断参数 SecurityLevelPie 是否已赋值
                     * @return SecurityLevelPie 是否已赋值
                     * 
                     */
                    bool SecurityLevelPieHasBeenSet() const;

                    /**
                     * 获取证书品牌图表
                     * @return CertBrandsPie 证书品牌图表
                     * 
                     */
                    std::vector<ChartNameValue> GetCertBrandsPie() const;

                    /**
                     * 设置证书品牌图表
                     * @param _certBrandsPie 证书品牌图表
                     * 
                     */
                    void SetCertBrandsPie(const std::vector<ChartNameValue>& _certBrandsPie);

                    /**
                     * 判断参数 CertBrandsPie 是否已赋值
                     * @return CertBrandsPie 是否已赋值
                     * 
                     */
                    bool CertBrandsPieHasBeenSet() const;

                    /**
                     * 获取证书有效时间图表
                     * @return CertValidTimePie 证书有效时间图表
                     * 
                     */
                    std::vector<ChartNameValue> GetCertValidTimePie() const;

                    /**
                     * 设置证书有效时间图表
                     * @param _certValidTimePie 证书有效时间图表
                     * 
                     */
                    void SetCertValidTimePie(const std::vector<ChartNameValue>& _certValidTimePie);

                    /**
                     * 判断参数 CertValidTimePie 是否已赋值
                     * @return CertValidTimePie 是否已赋值
                     * 
                     */
                    bool CertValidTimePieHasBeenSet() const;

                    /**
                     * 获取证书类型图表
                     * @return CertTypePie 证书类型图表
                     * 
                     */
                    std::vector<ChartNameValue> GetCertTypePie() const;

                    /**
                     * 设置证书类型图表
                     * @param _certTypePie 证书类型图表
                     * 
                     */
                    void SetCertTypePie(const std::vector<ChartNameValue>& _certTypePie);

                    /**
                     * 判断参数 CertTypePie 是否已赋值
                     * @return CertTypePie 是否已赋值
                     * 
                     */
                    bool CertTypePieHasBeenSet() const;

                    /**
                     * 获取ssl bugs图表
                     * @return SSLBugsLoopholeHistogram ssl bugs图表
                     * 
                     */
                    std::vector<ChartHistogram> GetSSLBugsLoopholeHistogram() const;

                    /**
                     * 设置ssl bugs图表
                     * @param _sSLBugsLoopholeHistogram ssl bugs图表
                     * 
                     */
                    void SetSSLBugsLoopholeHistogram(const std::vector<ChartHistogram>& _sSLBugsLoopholeHistogram);

                    /**
                     * 判断参数 SSLBugsLoopholeHistogram 是否已赋值
                     * @return SSLBugsLoopholeHistogram 是否已赋值
                     * 
                     */
                    bool SSLBugsLoopholeHistogramHasBeenSet() const;

                    /**
                     * 获取合规图表
                     * @return ComplianceHistogram 合规图表
                     * 
                     */
                    std::vector<ChartHistogram> GetComplianceHistogram() const;

                    /**
                     * 设置合规图表
                     * @param _complianceHistogram 合规图表
                     * 
                     */
                    void SetComplianceHistogram(const std::vector<ChartHistogram>& _complianceHistogram);

                    /**
                     * 判断参数 ComplianceHistogram 是否已赋值
                     * @return ComplianceHistogram 是否已赋值
                     * 
                     */
                    bool ComplianceHistogramHasBeenSet() const;

                private:

                    /**
                     * 安全等级图表
                     */
                    std::vector<ChartNameValue> m_securityLevelPie;
                    bool m_securityLevelPieHasBeenSet;

                    /**
                     * 证书品牌图表
                     */
                    std::vector<ChartNameValue> m_certBrandsPie;
                    bool m_certBrandsPieHasBeenSet;

                    /**
                     * 证书有效时间图表
                     */
                    std::vector<ChartNameValue> m_certValidTimePie;
                    bool m_certValidTimePieHasBeenSet;

                    /**
                     * 证书类型图表
                     */
                    std::vector<ChartNameValue> m_certTypePie;
                    bool m_certTypePieHasBeenSet;

                    /**
                     * ssl bugs图表
                     */
                    std::vector<ChartHistogram> m_sSLBugsLoopholeHistogram;
                    bool m_sSLBugsLoopholeHistogramHasBeenSet;

                    /**
                     * 合规图表
                     */
                    std::vector<ChartHistogram> m_complianceHistogram;
                    bool m_complianceHistogramHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_DASHBOARDRESULT_H_
