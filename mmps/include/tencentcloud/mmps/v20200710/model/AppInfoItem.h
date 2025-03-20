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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_APPINFOITEM_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_APPINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * 隐私合规应用信息
                */
                class AppInfoItem : public AbstractModel
                {
                public:
                    AppInfoItem();
                    ~AppInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取小程序apiiid
                     * @return AppPackage 小程序apiiid
                     * 
                     */
                    std::string GetAppPackage() const;

                    /**
                     * 设置小程序apiiid
                     * @param _appPackage 小程序apiiid
                     * 
                     */
                    void SetAppPackage(const std::string& _appPackage);

                    /**
                     * 判断参数 AppPackage 是否已赋值
                     * @return AppPackage 是否已赋值
                     * 
                     */
                    bool AppPackageHasBeenSet() const;

                    /**
                     * 获取小程序应用名称
                     * @return AppName 小程序应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置小程序应用名称
                     * @param _appName 小程序应用名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取小程序应用版本
                     * @return AppVersion 小程序应用版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置小程序应用版本
                     * @param _appVersion 小程序应用版本
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
                     * 获取应用平台, 0:android, 1:ios, 2:小程序
                     * @return Platform 应用平台, 0:android, 1:ios, 2:小程序
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置应用平台, 0:android, 1:ios, 2:小程序
                     * @param _platform 应用平台, 0:android, 1:ios, 2:小程序
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取小程序隐私诊断报告下载链接
                     * @return ReportUrl 小程序隐私诊断报告下载链接
                     * 
                     */
                    std::string GetReportUrl() const;

                    /**
                     * 设置小程序隐私诊断报告下载链接
                     * @param _reportUrl 小程序隐私诊断报告下载链接
                     * 
                     */
                    void SetReportUrl(const std::string& _reportUrl);

                    /**
                     * 判断参数 ReportUrl 是否已赋值
                     * @return ReportUrl 是否已赋值
                     * 
                     */
                    bool ReportUrlHasBeenSet() const;

                    /**
                     * 获取小程序隐私诊断报告名称
                     * @return ReportTitle 小程序隐私诊断报告名称
                     * 
                     */
                    std::string GetReportTitle() const;

                    /**
                     * 设置小程序隐私诊断报告名称
                     * @param _reportTitle 小程序隐私诊断报告名称
                     * 
                     */
                    void SetReportTitle(const std::string& _reportTitle);

                    /**
                     * 判断参数 ReportTitle 是否已赋值
                     * @return ReportTitle 是否已赋值
                     * 
                     */
                    bool ReportTitleHasBeenSet() const;

                    /**
                     * 获取小程序隐私诊断堆栈报告下载链接
                     * @return BehaviorUrl 小程序隐私诊断堆栈报告下载链接
                     * 
                     */
                    std::string GetBehaviorUrl() const;

                    /**
                     * 设置小程序隐私诊断堆栈报告下载链接
                     * @param _behaviorUrl 小程序隐私诊断堆栈报告下载链接
                     * 
                     */
                    void SetBehaviorUrl(const std::string& _behaviorUrl);

                    /**
                     * 判断参数 BehaviorUrl 是否已赋值
                     * @return BehaviorUrl 是否已赋值
                     * 
                     */
                    bool BehaviorUrlHasBeenSet() const;

                    /**
                     * 获取小程序隐私诊断堆栈报告名称
                     * @return BehaviorTitle 小程序隐私诊断堆栈报告名称
                     * 
                     */
                    std::string GetBehaviorTitle() const;

                    /**
                     * 设置小程序隐私诊断堆栈报告名称
                     * @param _behaviorTitle 小程序隐私诊断堆栈报告名称
                     * 
                     */
                    void SetBehaviorTitle(const std::string& _behaviorTitle);

                    /**
                     * 判断参数 BehaviorTitle 是否已赋值
                     * @return BehaviorTitle 是否已赋值
                     * 
                     */
                    bool BehaviorTitleHasBeenSet() const;

                    /**
                     * 获取诊断风险项数量
                     * @return HighRiskCount 诊断风险项数量
                     * 
                     */
                    int64_t GetHighRiskCount() const;

                    /**
                     * 设置诊断风险项数量
                     * @param _highRiskCount 诊断风险项数量
                     * 
                     */
                    void SetHighRiskCount(const int64_t& _highRiskCount);

                    /**
                     * 判断参数 HighRiskCount 是否已赋值
                     * @return HighRiskCount 是否已赋值
                     * 
                     */
                    bool HighRiskCountHasBeenSet() const;

                    /**
                     * 获取隐私申明文件名称
                     * @return PrivacyTextName 隐私申明文件名称
                     * 
                     */
                    std::string GetPrivacyTextName() const;

                    /**
                     * 设置隐私申明文件名称
                     * @param _privacyTextName 隐私申明文件名称
                     * 
                     */
                    void SetPrivacyTextName(const std::string& _privacyTextName);

                    /**
                     * 判断参数 PrivacyTextName 是否已赋值
                     * @return PrivacyTextName 是否已赋值
                     * 
                     */
                    bool PrivacyTextNameHasBeenSet() const;

                    /**
                     * 获取软件MD5
                     * @return SoftwareMD5 软件MD5
                     * 
                     */
                    std::string GetSoftwareMD5() const;

                    /**
                     * 设置软件MD5
                     * @param _softwareMD5 软件MD5
                     * 
                     */
                    void SetSoftwareMD5(const std::string& _softwareMD5);

                    /**
                     * 判断参数 SoftwareMD5 是否已赋值
                     * @return SoftwareMD5 是否已赋值
                     * 
                     */
                    bool SoftwareMD5HasBeenSet() const;

                    /**
                     * 获取隐私文本MD5
                     * @return PrivacyTextMD5 隐私文本MD5
                     * 
                     */
                    std::string GetPrivacyTextMD5() const;

                    /**
                     * 设置隐私文本MD5
                     * @param _privacyTextMD5 隐私文本MD5
                     * 
                     */
                    void SetPrivacyTextMD5(const std::string& _privacyTextMD5);

                    /**
                     * 判断参数 PrivacyTextMD5 是否已赋值
                     * @return PrivacyTextMD5 是否已赋值
                     * 
                     */
                    bool PrivacyTextMD5HasBeenSet() const;

                private:

                    /**
                     * 小程序apiiid
                     */
                    std::string m_appPackage;
                    bool m_appPackageHasBeenSet;

                    /**
                     * 小程序应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 小程序应用版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 应用平台, 0:android, 1:ios, 2:小程序
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 小程序隐私诊断报告下载链接
                     */
                    std::string m_reportUrl;
                    bool m_reportUrlHasBeenSet;

                    /**
                     * 小程序隐私诊断报告名称
                     */
                    std::string m_reportTitle;
                    bool m_reportTitleHasBeenSet;

                    /**
                     * 小程序隐私诊断堆栈报告下载链接
                     */
                    std::string m_behaviorUrl;
                    bool m_behaviorUrlHasBeenSet;

                    /**
                     * 小程序隐私诊断堆栈报告名称
                     */
                    std::string m_behaviorTitle;
                    bool m_behaviorTitleHasBeenSet;

                    /**
                     * 诊断风险项数量
                     */
                    int64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * 隐私申明文件名称
                     */
                    std::string m_privacyTextName;
                    bool m_privacyTextNameHasBeenSet;

                    /**
                     * 软件MD5
                     */
                    std::string m_softwareMD5;
                    bool m_softwareMD5HasBeenSet;

                    /**
                     * 隐私文本MD5
                     */
                    std::string m_privacyTextMD5;
                    bool m_privacyTextMD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_APPINFOITEM_H_
