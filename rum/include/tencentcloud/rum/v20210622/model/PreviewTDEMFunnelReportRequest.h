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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_PREVIEWTDEMFUNNELREPORTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_PREVIEWTDEMFUNNELREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * PreviewTDEMFunnelReport请求参数结构体
                */
                class PreviewTDEMFunnelReportRequest : public AbstractModel
                {
                public:
                    PreviewTDEMFunnelReportRequest();
                    ~PreviewTDEMFunnelReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间戳（毫秒）</p>
                     * @return StartTime <p>开始时间戳（毫秒）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间戳（毫秒）</p>
                     * @param _startTime <p>开始时间戳（毫秒）</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间戳（毫秒）</p>
                     * @return EndTime <p>结束时间戳（毫秒）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间戳（毫秒）</p>
                     * @param _endTime <p>结束时间戳（毫秒）</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>漏斗步骤配置JSON字符串（2~20步），格式：[{"StepName":"首页","PagePattern":"/","PageMatchMode":"exact","Selector":"","ActionType":"page_view","VisualName":""}]</p>
                     * @return Steps <p>漏斗步骤配置JSON字符串（2~20步），格式：[{"StepName":"首页","PagePattern":"/","PageMatchMode":"exact","Selector":"","ActionType":"page_view","VisualName":""}]</p>
                     * 
                     */
                    std::string GetSteps() const;

                    /**
                     * 设置<p>漏斗步骤配置JSON字符串（2~20步），格式：[{"StepName":"首页","PagePattern":"/","PageMatchMode":"exact","Selector":"","ActionType":"page_view","VisualName":""}]</p>
                     * @param _steps <p>漏斗步骤配置JSON字符串（2~20步），格式：[{"StepName":"首页","PagePattern":"/","PageMatchMode":"exact","Selector":"","ActionType":"page_view","VisualName":""}]</p>
                     * 
                     */
                    void SetSteps(const std::string& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                    /**
                     * 获取<p>平台筛选</p>
                     * @return Platform <p>平台筛选</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台筛选</p>
                     * @param _platform <p>平台筛选</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>应用版本筛选</p>
                     * @return AppVersion <p>应用版本筛选</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>应用版本筛选</p>
                     * @param _appVersion <p>应用版本筛选</p>
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取<p>设备类型筛选</p>
                     * @return DeviceType <p>设备类型筛选</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>设备类型筛选</p>
                     * @param _deviceType <p>设备类型筛选</p>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>浏览器筛选</p>
                     * @return Browser <p>浏览器筛选</p>
                     * 
                     */
                    std::string GetBrowser() const;

                    /**
                     * 设置<p>浏览器筛选</p>
                     * @param _browser <p>浏览器筛选</p>
                     * 
                     */
                    void SetBrowser(const std::string& _browser);

                    /**
                     * 判断参数 Browser 是否已赋值
                     * @return Browser 是否已赋值
                     * 
                     */
                    bool BrowserHasBeenSet() const;

                    /**
                     * 获取<p>操作系统筛选</p>
                     * @return OS <p>操作系统筛选</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>操作系统筛选</p>
                     * @param _oS <p>操作系统筛选</p>
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取<p>国家/地区筛选</p>
                     * @return Country <p>国家/地区筛选</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>国家/地区筛选</p>
                     * @param _country <p>国家/地区筛选</p>
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取<p>来源筛选</p>
                     * @return Referrer <p>来源筛选</p>
                     * 
                     */
                    std::string GetReferrer() const;

                    /**
                     * 设置<p>来源筛选</p>
                     * @param _referrer <p>来源筛选</p>
                     * 
                     */
                    void SetReferrer(const std::string& _referrer);

                    /**
                     * 判断参数 Referrer 是否已赋值
                     * @return Referrer 是否已赋值
                     * 
                     */
                    bool ReferrerHasBeenSet() const;

                    /**
                     * 获取<p>环境选择</p>
                     * @return Environment <p>环境选择</p>
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置<p>环境选择</p>
                     * @param _environment <p>环境选择</p>
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间戳（毫秒）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间戳（毫秒）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>漏斗步骤配置JSON字符串（2~20步），格式：[{"StepName":"首页","PagePattern":"/","PageMatchMode":"exact","Selector":"","ActionType":"page_view","VisualName":""}]</p>
                     */
                    std::string m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * <p>平台筛选</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>应用版本筛选</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>设备类型筛选</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>浏览器筛选</p>
                     */
                    std::string m_browser;
                    bool m_browserHasBeenSet;

                    /**
                     * <p>操作系统筛选</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>国家/地区筛选</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>来源筛选</p>
                     */
                    std::string m_referrer;
                    bool m_referrerHasBeenSet;

                    /**
                     * <p>环境选择</p>
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_PREVIEWTDEMFUNNELREPORTREQUEST_H_
