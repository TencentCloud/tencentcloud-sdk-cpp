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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_L7LISTENERINFOLOCATION_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_L7LISTENERINFOLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/L7ListenerInfoBackend.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 查询绑定了某主机的七层监听器时返回的转发路径。
                */
                class L7ListenerInfoLocation : public AbstractModel
                {
                public:
                    L7ListenerInfoLocation();
                    ~L7ListenerInfoLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发路径。
                     * @return Url 转发路径。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发路径。
                     * @param _url 转发路径。
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
                     * 获取转发路径实例ID。
                     * @return LocationId 转发路径实例ID。
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发路径实例ID。
                     * @param _locationId 转发路径实例ID。
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取会话保持时间。
                     * @return SessionExpire 会话保持时间。
                     * 
                     */
                    int64_t GetSessionExpire() const;

                    /**
                     * 设置会话保持时间。
                     * @param _sessionExpire 会话保持时间。
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
                     * 获取是否开启健康检查。
                     * @return HealthSwitch 是否开启健康检查。
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置是否开启健康检查。
                     * @param _healthSwitch 是否开启健康检查。
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
                     * 获取健康检查检查域名。
                     * @return HttpCheckDomain 健康检查检查域名。
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置健康检查检查域名。
                     * @param _httpCheckDomain 健康检查检查域名。
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
                     * 获取健康检查检查间隔时间。
                     * @return IntervalTime 健康检查检查间隔时间。
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置健康检查检查间隔时间。
                     * @param _intervalTime 健康检查检查间隔时间。
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
                     * 获取健康检查健康阈值。
                     * @return HealthNum 健康检查健康阈值。
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置健康检查健康阈值。
                     * @param _healthNum 健康检查健康阈值。
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
                     * 获取健康检查不健康阈值。
                     * @return UnhealthNum 健康检查不健康阈值。
                     * 
                     */
                    int64_t GetUnhealthNum() const;

                    /**
                     * 设置健康检查不健康阈值。
                     * @param _unhealthNum 健康检查不健康阈值。
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
                     * 获取均衡方式。
                     * @return BalanceMode 均衡方式。
                     * 
                     */
                    std::string GetBalanceMode() const;

                    /**
                     * 设置均衡方式。
                     * @param _balanceMode 均衡方式。
                     * 
                     */
                    void SetBalanceMode(const std::string& _balanceMode);

                    /**
                     * 判断参数 BalanceMode 是否已赋值
                     * @return BalanceMode 是否已赋值
                     * 
                     */
                    bool BalanceModeHasBeenSet() const;

                    /**
                     * 获取当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * @return Status 当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * @param _status 当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间戳。
                     * @return AddTimestamp 创建时间戳。
                     * 
                     */
                    std::string GetAddTimestamp() const;

                    /**
                     * 设置创建时间戳。
                     * @param _addTimestamp 创建时间戳。
                     * 
                     */
                    void SetAddTimestamp(const std::string& _addTimestamp);

                    /**
                     * 判断参数 AddTimestamp 是否已赋值
                     * @return AddTimestamp 是否已赋值
                     * 
                     */
                    bool AddTimestampHasBeenSet() const;

                    /**
                     * 获取该转发路径所绑定的主机列表。
                     * @return BackendSet 该转发路径所绑定的主机列表。
                     * 
                     */
                    std::vector<L7ListenerInfoBackend> GetBackendSet() const;

                    /**
                     * 设置该转发路径所绑定的主机列表。
                     * @param _backendSet 该转发路径所绑定的主机列表。
                     * 
                     */
                    void SetBackendSet(const std::vector<L7ListenerInfoBackend>& _backendSet);

                    /**
                     * 判断参数 BackendSet 是否已赋值
                     * @return BackendSet 是否已赋值
                     * 
                     */
                    bool BackendSetHasBeenSet() const;

                private:

                    /**
                     * 转发路径。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 转发路径实例ID。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 会话保持时间。
                     */
                    int64_t m_sessionExpire;
                    bool m_sessionExpireHasBeenSet;

                    /**
                     * 是否开启健康检查。
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康检查检查路径。
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * 健康检查检查域名。
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * 健康检查检查间隔时间。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 健康检查健康阈值。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 健康检查不健康阈值。
                     */
                    int64_t m_unhealthNum;
                    bool m_unhealthNumHasBeenSet;

                    /**
                     * 健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     */
                    std::vector<uint64_t> m_httpCodes;
                    bool m_httpCodesHasBeenSet;

                    /**
                     * 均衡方式。
                     */
                    std::string m_balanceMode;
                    bool m_balanceModeHasBeenSet;

                    /**
                     * 当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间戳。
                     */
                    std::string m_addTimestamp;
                    bool m_addTimestampHasBeenSet;

                    /**
                     * 该转发路径所绑定的主机列表。
                     */
                    std::vector<L7ListenerInfoBackend> m_backendSet;
                    bool m_backendSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_L7LISTENERINFOLOCATION_H_
