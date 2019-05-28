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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/CertificateInput.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * HTTP/HTTPS转发规则（输入）
                */
                class RuleInput : public AbstractModel
                {
                public:
                    RuleInput();
                    ~RuleInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发规则的域名。
                     * @return Domain 转发规则的域名。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发规则的域名。
                     * @param Domain 转发规则的域名。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取转发规则的路径。
                     * @return Url 转发规则的路径。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发规则的路径。
                     * @param Url 转发规则的路径。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取会话保持时间
                     * @return SessionExpireTime 会话保持时间
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间
                     * @param SessionExpireTime 会话保持时间
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取健康检查信息
                     * @return HealthCheck 健康检查信息
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查信息
                     * @param HealthCheck 健康检查信息
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取证书信息
                     * @return Certificate 证书信息
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置证书信息
                     * @param Certificate 证书信息
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取规则的请求转发方式
                     * @return Scheduler 规则的请求转发方式
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置规则的请求转发方式
                     * @param Scheduler 规则的请求转发方式
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                private:

                    /**
                     * 转发规则的域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 转发规则的路径。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 会话保持时间
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 健康检查信息
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 证书信息
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 规则的请求转发方式
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_
