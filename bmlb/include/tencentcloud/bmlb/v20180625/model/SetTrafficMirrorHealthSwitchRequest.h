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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_SETTRAFFICMIRRORHEALTHSWITCHREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_SETTRAFFICMIRRORHEALTHSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SetTrafficMirrorHealthSwitch请求参数结构体
                */
                class SetTrafficMirrorHealthSwitchRequest : public AbstractModel
                {
                public:
                    SetTrafficMirrorHealthSwitchRequest();
                    ~SetTrafficMirrorHealthSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID。
                     * @return TrafficMirrorId 流量镜像实例ID。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像实例ID。
                     * @param _trafficMirrorId 流量镜像实例ID。
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取健康检查开关，0：关闭，1：打开
                     * @return HealthSwitch 健康检查开关，0：关闭，1：打开
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置健康检查开关，0：关闭，1：打开
                     * @param _healthSwitch 健康检查开关，0：关闭，1：打开
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
                     * 获取健康检查判断健康的次数，最小值2，最大值10。
                     * @return HealthNum 健康检查判断健康的次数，最小值2，最大值10。
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置健康检查判断健康的次数，最小值2，最大值10。
                     * @param _healthNum 健康检查判断健康的次数，最小值2，最大值10。
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
                     * 获取健康检查判断不健康的次数，最小值2，最大值10。
                     * @return UnhealthNum 健康检查判断不健康的次数，最小值2，最大值10。
                     * 
                     */
                    int64_t GetUnhealthNum() const;

                    /**
                     * 设置健康检查判断不健康的次数，最小值2，最大值10。
                     * @param _unhealthNum 健康检查判断不健康的次数，最小值2，最大值10。
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
                     * 获取健康检查间隔，单位：秒，最小值5，最大值300。
                     * @return IntervalTime 健康检查间隔，单位：秒，最小值5，最大值300。
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置健康检查间隔，单位：秒，最小值5，最大值300。
                     * @param _intervalTime 健康检查间隔，单位：秒，最小值5，最大值300。
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
                     * 获取检查的域名配置。
                     * @return HttpCheckDomain 检查的域名配置。
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置检查的域名配置。
                     * @param _httpCheckDomain 检查的域名配置。
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
                     * 获取检查的路径配置。
                     * @return HttpCheckPath 检查的路径配置。
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置检查的路径配置。
                     * @param _httpCheckPath 检查的路径配置。
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
                     * 获取健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     * @return HttpCodes 健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     * 
                     */
                    std::vector<int64_t> GetHttpCodes() const;

                    /**
                     * 设置健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     * @param _httpCodes 健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     * 
                     */
                    void SetHttpCodes(const std::vector<int64_t>& _httpCodes);

                    /**
                     * 判断参数 HttpCodes 是否已赋值
                     * @return HttpCodes 是否已赋值
                     * 
                     */
                    bool HttpCodesHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 健康检查开关，0：关闭，1：打开
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康检查判断健康的次数，最小值2，最大值10。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 健康检查判断不健康的次数，最小值2，最大值10。
                     */
                    int64_t m_unhealthNum;
                    bool m_unhealthNumHasBeenSet;

                    /**
                     * 健康检查间隔，单位：秒，最小值5，最大值300。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 检查的域名配置。
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * 检查的路径配置。
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * 健康检查中认为健康的HTTP返回码的组合。可选值为1~5的集合，1表示HTTP返回码为1xx认为健康。2表示HTTP返回码为2xx认为健康。3表示HTTP返回码为3xx认为健康。4表示HTTP返回码为4xx认为健康。5表示HTTP返回码为5xx认为健康。
                     */
                    std::vector<int64_t> m_httpCodes;
                    bool m_httpCodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_SETTRAFFICMIRRORHEALTHSWITCHREQUEST_H_
