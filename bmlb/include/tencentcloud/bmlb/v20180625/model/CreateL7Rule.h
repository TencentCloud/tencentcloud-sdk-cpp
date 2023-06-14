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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL7RULE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL7RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 用于创建七层监听器的转发规则的信息。目前一个七层监听器下面最多允许创建50个七层转发域名，而每一个转发域名下最多可以创建100个转发规则。
                */
                class CreateL7Rule : public AbstractModel
                {
                public:
                    CreateL7Rule();
                    ~CreateL7Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取七层转发规则的转发域名。
                     * @return Domain 七层转发规则的转发域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置七层转发规则的转发域名。
                     * @param _domain 七层转发规则的转发域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取七层转发规则的转发路径。
                     * @return Url 七层转发规则的转发路径。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置七层转发规则的转发路径。
                     * @param _url 七层转发规则的转发路径。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位：秒。可选值：30~3600。默认值0，表示不开启会话保持。
                     * @return SessionExpire 会话保持时间，单位：秒。可选值：30~3600。默认值0，表示不开启会话保持。
                     * 
                     */
                    int64_t GetSessionExpire() const;

                    /**
                     * 设置会话保持时间，单位：秒。可选值：30~3600。默认值0，表示不开启会话保持。
                     * @param _sessionExpire 会话保持时间，单位：秒。可选值：30~3600。默认值0，表示不开启会话保持。
                     * 
                     */
                    void SetSessionExpire(const int64_t& _sessionExpire);

                    /**
                     * 判断参数 SessionExpire 是否已赋值
                     * @return SessionExpire 是否已赋值
                     * 
                     */
                    bool SessionExpireHasBeenSet() const;

                    /**
                     * 获取健康检查开关：1（开启）、0（关闭）。默认值0，表示关闭。
                     * @return HealthSwitch 健康检查开关：1（开启）、0（关闭）。默认值0，表示关闭。
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置健康检查开关：1（开启）、0（关闭）。默认值0，表示关闭。
                     * @param _healthSwitch 健康检查开关：1（开启）、0（关闭）。默认值0，表示关闭。
                     * 
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取健康检查检查间隔时间，默认值：5，可选值：5-300，单位：秒。
                     * @return IntervalTime 健康检查检查间隔时间，默认值：5，可选值：5-300，单位：秒。
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置健康检查检查间隔时间，默认值：5，可选值：5-300，单位：秒。
                     * @param _intervalTime 健康检查检查间隔时间，默认值：5，可选值：5-300，单位：秒。
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取健康检查健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * @return HealthNum 健康检查健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置健康检查健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * @param _healthNum 健康检查健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取健康检查不健康阈值，默认值：5，表示当连续探测五次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * @return UnhealthNum 健康检查不健康阈值，默认值：5，表示当连续探测五次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * 
                     */
                    int64_t GetUnhealthNum() const;

                    /**
                     * 设置健康检查不健康阈值，默认值：5，表示当连续探测五次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * @param _unhealthNum 健康检查不健康阈值，默认值：5，表示当连续探测五次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * 
                     */
                    void SetUnhealthNum(const int64_t& _unhealthNum);

                    /**
                     * 判断参数 UnhealthNum 是否已赋值
                     * @return UnhealthNum 是否已赋值
                     * 
                     */
                    bool UnhealthNumHasBeenSet() const;

                    /**
                     * 获取健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     * @return HttpCodes 健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     * 
                     */
                    std::vector<uint64_t> GetHttpCodes() const;

                    /**
                     * 设置健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     * @param _httpCodes 健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     * 
                     */
                    void SetHttpCodes(const std::vector<uint64_t>& _httpCodes);

                    /**
                     * 判断参数 HttpCodes 是否已赋值
                     * @return HttpCodes 是否已赋值
                     * 
                     */
                    bool HttpCodesHasBeenSet() const;

                    /**
                     * 获取健康检查检查路径。
                     * @return HttpCheckPath 健康检查检查路径。
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置健康检查检查路径。
                     * @param _httpCheckPath 健康检查检查路径。
                     * 
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     * 
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取健康检查检查域名。如果创建规则的域名使用通配符或正则表达式，则健康检查检查域名可自定义，否则必须跟健康检查检查域名一样。
                     * @return HttpCheckDomain 健康检查检查域名。如果创建规则的域名使用通配符或正则表达式，则健康检查检查域名可自定义，否则必须跟健康检查检查域名一样。
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置健康检查检查域名。如果创建规则的域名使用通配符或正则表达式，则健康检查检查域名可自定义，否则必须跟健康检查检查域名一样。
                     * @param _httpCheckDomain 健康检查检查域名。如果创建规则的域名使用通配符或正则表达式，则健康检查检查域名可自定义，否则必须跟健康检查检查域名一样。
                     * 
                     */
                    void SetHttpCheckDomain(const std::string& _httpCheckDomain);

                    /**
                     * 判断参数 HttpCheckDomain 是否已赋值
                     * @return HttpCheckDomain 是否已赋值
                     * 
                     */
                    bool HttpCheckDomainHasBeenSet() const;

                    /**
                     * 获取均衡方式：ip_hash、wrr。默认值wrr。
                     * @return BalanceMode 均衡方式：ip_hash、wrr。默认值wrr。
                     * 
                     */
                    std::string GetBalanceMode() const;

                    /**
                     * 设置均衡方式：ip_hash、wrr。默认值wrr。
                     * @param _balanceMode 均衡方式：ip_hash、wrr。默认值wrr。
                     * 
                     */
                    void SetBalanceMode(const std::string& _balanceMode);

                    /**
                     * 判断参数 BalanceMode 是否已赋值
                     * @return BalanceMode 是否已赋值
                     * 
                     */
                    bool BalanceModeHasBeenSet() const;

                private:

                    /**
                     * 七层转发规则的转发域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 七层转发规则的转发路径。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 会话保持时间，单位：秒。可选值：30~3600。默认值0，表示不开启会话保持。
                     */
                    int64_t m_sessionExpire;
                    bool m_sessionExpireHasBeenSet;

                    /**
                     * 健康检查开关：1（开启）、0（关闭）。默认值0，表示关闭。
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康检查检查间隔时间，默认值：5，可选值：5-300，单位：秒。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 健康检查健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 健康检查不健康阈值，默认值：5，表示当连续探测五次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     */
                    int64_t m_unhealthNum;
                    bool m_unhealthNumHasBeenSet;

                    /**
                     * 健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     */
                    std::vector<uint64_t> m_httpCodes;
                    bool m_httpCodesHasBeenSet;

                    /**
                     * 健康检查检查路径。
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * 健康检查检查域名。如果创建规则的域名使用通配符或正则表达式，则健康检查检查域名可自定义，否则必须跟健康检查检查域名一样。
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * 均衡方式：ip_hash、wrr。默认值wrr。
                     */
                    std::string m_balanceMode;
                    bool m_balanceModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL7RULE_H_
