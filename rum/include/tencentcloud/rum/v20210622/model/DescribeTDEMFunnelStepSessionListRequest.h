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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMFUNNELSTEPSESSIONLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMFUNNELSTEPSESSIONLISTREQUEST_H_

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
                * DescribeTDEMFunnelStepSessionList请求参数结构体
                */
                class DescribeTDEMFunnelStepSessionListRequest : public AbstractModel
                {
                public:
                    DescribeTDEMFunnelStepSessionListRequest();
                    ~DescribeTDEMFunnelStepSessionListRequest() = default;
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
                     * 获取<p>漏斗id</p>
                     * @return FunnelId <p>漏斗id</p>
                     * 
                     */
                    std::string GetFunnelId() const;

                    /**
                     * 设置<p>漏斗id</p>
                     * @param _funnelId <p>漏斗id</p>
                     * 
                     */
                    void SetFunnelId(const std::string& _funnelId);

                    /**
                     * 判断参数 FunnelId 是否已赋值
                     * @return FunnelId 是否已赋值
                     * 
                     */
                    bool FunnelIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>步骤索引</p>
                     * @return StepIndex <p>步骤索引</p>
                     * 
                     */
                    int64_t GetStepIndex() const;

                    /**
                     * 设置<p>步骤索引</p>
                     * @param _stepIndex <p>步骤索引</p>
                     * 
                     */
                    void SetStepIndex(const int64_t& _stepIndex);

                    /**
                     * 判断参数 StepIndex 是否已赋值
                     * @return StepIndex 是否已赋值
                     * 
                     */
                    bool StepIndexHasBeenSet() const;

                    /**
                     * 获取<p>漏斗步骤</p>
                     * @return Steps <p>漏斗步骤</p>
                     * 
                     */
                    std::string GetSteps() const;

                    /**
                     * 设置<p>漏斗步骤</p>
                     * @param _steps <p>漏斗步骤</p>
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
                     * 获取<p>下钻类型</p>
                     * @return DrillType <p>下钻类型</p>
                     * 
                     */
                    std::string GetDrillType() const;

                    /**
                     * 设置<p>下钻类型</p>
                     * @param _drillType <p>下钻类型</p>
                     * 
                     */
                    void SetDrillType(const std::string& _drillType);

                    /**
                     * 判断参数 DrillType 是否已赋值
                     * @return DrillType 是否已赋值
                     * 
                     */
                    bool DrillTypeHasBeenSet() const;

                    /**
                     * 获取<p>页面号</p>
                     * @return Page <p>页面号</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页面号</p>
                     * @param _page <p>页面号</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页大小</p>
                     * @return PageSize <p>每页大小</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小</p>
                     * @param _pageSize <p>每页大小</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>平台</p>
                     * @return Platform <p>平台</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台</p>
                     * @param _platform <p>平台</p>
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
                     * 获取<p>应用版本</p>
                     * @return AppVersion <p>应用版本</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>应用版本</p>
                     * @param _appVersion <p>应用版本</p>
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
                     * 获取<p>设备类型</p>
                     * @return DeviceType <p>设备类型</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>设备类型</p>
                     * @param _deviceType <p>设备类型</p>
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
                     * 获取<p>浏览器</p>
                     * @return Browser <p>浏览器</p>
                     * 
                     */
                    std::string GetBrowser() const;

                    /**
                     * 设置<p>浏览器</p>
                     * @param _browser <p>浏览器</p>
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
                     * 获取<p>操作系统</p>
                     * @return OS <p>操作系统</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>操作系统</p>
                     * @param _oS <p>操作系统</p>
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
                     * 获取<p>国家</p>
                     * @return Country <p>国家</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>国家</p>
                     * @param _country <p>国家</p>
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
                     * 获取<p>页面来源</p>
                     * @return Referrer <p>页面来源</p>
                     * 
                     */
                    std::string GetReferrer() const;

                    /**
                     * 设置<p>页面来源</p>
                     * @param _referrer <p>页面来源</p>
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
                     * 获取<p>环境</p>
                     * @return Environment <p>环境</p>
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置<p>环境</p>
                     * @param _environment <p>环境</p>
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
                     * <p>漏斗id</p>
                     */
                    std::string m_funnelId;
                    bool m_funnelIdHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>步骤索引</p>
                     */
                    int64_t m_stepIndex;
                    bool m_stepIndexHasBeenSet;

                    /**
                     * <p>漏斗步骤</p>
                     */
                    std::string m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * <p>下钻类型</p>
                     */
                    std::string m_drillType;
                    bool m_drillTypeHasBeenSet;

                    /**
                     * <p>页面号</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页大小</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>平台</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>应用版本</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>设备类型</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>浏览器</p>
                     */
                    std::string m_browser;
                    bool m_browserHasBeenSet;

                    /**
                     * <p>操作系统</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>国家</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>页面来源</p>
                     */
                    std::string m_referrer;
                    bool m_referrerHasBeenSet;

                    /**
                     * <p>环境</p>
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMFUNNELSTEPSESSIONLISTREQUEST_H_
