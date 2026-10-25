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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_EVENTVIEW_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_EVENTVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/EventStack.h>
#include <tencentcloud/rum/v20210622/model/EventFrame.h>
#include <tencentcloud/rum/v20210622/model/StringKeyValue.h>
#include <tencentcloud/rum/v20210622/model/FloatKeyValue.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 事件详情主表视图。空字符串省略。
                */
                class EventView : public AbstractModel
                {
                public:
                    EventView();
                    ~EventView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
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
                     * 获取<p>事件 ID</p>
                     * @return EventId <p>事件 ID</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>事件 ID</p>
                     * @param _eventId <p>事件 ID</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>视图 ID</p>
                     * @return ViewId <p>视图 ID</p>
                     * 
                     */
                    std::string GetViewId() const;

                    /**
                     * 设置<p>视图 ID</p>
                     * @param _viewId <p>视图 ID</p>
                     * 
                     */
                    void SetViewId(const std::string& _viewId);

                    /**
                     * 判断参数 ViewId 是否已赋值
                     * @return ViewId 是否已赋值
                     * 
                     */
                    bool ViewIdHasBeenSet() const;

                    /**
                     * 获取<p>事件类型</p>
                     * @return EventType <p>事件类型</p>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>事件类型</p>
                     * @param _eventType <p>事件类型</p>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>事件分类</p>
                     * @return EventCategory <p>事件分类</p>
                     * 
                     */
                    std::string GetEventCategory() const;

                    /**
                     * 设置<p>事件分类</p>
                     * @param _eventCategory <p>事件分类</p>
                     * 
                     */
                    void SetEventCategory(const std::string& _eventCategory);

                    /**
                     * 判断参数 EventCategory 是否已赋值
                     * @return EventCategory 是否已赋值
                     * 
                     */
                    bool EventCategoryHasBeenSet() const;

                    /**
                     * 获取<p>事件名</p>
                     * @return EventName <p>事件名</p>
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置<p>事件名</p>
                     * @param _eventName <p>事件名</p>
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取<p>时间 RFC3339</p>
                     * @return Timestamp <p>时间 RFC3339</p>
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>时间 RFC3339</p>
                     * @param _timestamp <p>时间 RFC3339</p>
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>分区日期 YYYY-MM-DD</p>
                     * @return Date <p>分区日期 YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>分区日期 YYYY-MM-DD</p>
                     * @param _date <p>分区日期 YYYY-MM-DD</p>
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

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
                     * 获取<p>SDK 版本</p>
                     * @return SdkVersion <p>SDK 版本</p>
                     * 
                     */
                    std::string GetSdkVersion() const;

                    /**
                     * 设置<p>SDK 版本</p>
                     * @param _sdkVersion <p>SDK 版本</p>
                     * 
                     */
                    void SetSdkVersion(const std::string& _sdkVersion);

                    /**
                     * 判断参数 SdkVersion 是否已赋值
                     * @return SdkVersion 是否已赋值
                     * 
                     */
                    bool SdkVersionHasBeenSet() const;

                    /**
                     * 获取<p>问题单 ID</p>
                     * @return IssueId <p>问题单 ID</p>
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置<p>问题单 ID</p>
                     * @param _issueId <p>问题单 ID</p>
                     * 
                     */
                    void SetIssueId(const std::string& _issueId);

                    /**
                     * 判断参数 IssueId 是否已赋值
                     * @return IssueId 是否已赋值
                     * 
                     */
                    bool IssueIdHasBeenSet() const;

                    /**
                     * 获取<p>错误指纹</p>
                     * @return Fingerprint <p>错误指纹</p>
                     * 
                     */
                    std::string GetFingerprint() const;

                    /**
                     * 设置<p>错误指纹</p>
                     * @param _fingerprint <p>错误指纹</p>
                     * 
                     */
                    void SetFingerprint(const std::string& _fingerprint);

                    /**
                     * 判断参数 Fingerprint 是否已赋值
                     * @return Fingerprint 是否已赋值
                     * 
                     */
                    bool FingerprintHasBeenSet() const;

                    /**
                     * 获取<p>是否已符号化 0/1</p>
                     * @return IsSourceMapped <p>是否已符号化 0/1</p>
                     * 
                     */
                    int64_t GetIsSourceMapped() const;

                    /**
                     * 设置<p>是否已符号化 0/1</p>
                     * @param _isSourceMapped <p>是否已符号化 0/1</p>
                     * 
                     */
                    void SetIsSourceMapped(const int64_t& _isSourceMapped);

                    /**
                     * 判断参数 IsSourceMapped 是否已赋值
                     * @return IsSourceMapped 是否已赋值
                     * 
                     */
                    bool IsSourceMappedHasBeenSet() const;

                    /**
                     * 获取<p>异常栈</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptionStacks <p>异常栈</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventStack> GetExceptionStacks() const;

                    /**
                     * 设置<p>异常栈</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exceptionStacks <p>异常栈</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExceptionStacks(const std::vector<EventStack>& _exceptionStacks);

                    /**
                     * 判断参数 ExceptionStacks 是否已赋值
                     * @return ExceptionStacks 是否已赋值
                     * 
                     */
                    bool ExceptionStacksHasBeenSet() const;

                    /**
                     * 获取<p>原始堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptionFrames <p>原始堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventFrame> GetExceptionFrames() const;

                    /**
                     * 设置<p>原始堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exceptionFrames <p>原始堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExceptionFrames(const std::vector<EventFrame>& _exceptionFrames);

                    /**
                     * 判断参数 ExceptionFrames 是否已赋值
                     * @return ExceptionFrames 是否已赋值
                     * 
                     */
                    bool ExceptionFramesHasBeenSet() const;

                    /**
                     * 获取<p>事件属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventProperties <p>事件属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StringKeyValue> GetEventProperties() const;

                    /**
                     * 设置<p>事件属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventProperties <p>事件属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventProperties(const std::vector<StringKeyValue>& _eventProperties);

                    /**
                     * 判断参数 EventProperties 是否已赋值
                     * @return EventProperties 是否已赋值
                     * 
                     */
                    bool EventPropertiesHasBeenSet() const;

                    /**
                     * 获取<p>会话 ID</p>
                     * @return SessionId <p>会话 ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话 ID</p>
                     * @param _sessionId <p>会话 ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>业务用户 ID</p>
                     * @return UserId <p>业务用户 ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>业务用户 ID</p>
                     * @param _userId <p>业务用户 ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>设备 ID</p>
                     * @return DeviceId <p>设备 ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备 ID</p>
                     * @param _deviceId <p>设备 ID</p>
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取<p>页面 URL</p>
                     * @return PageUrl <p>页面 URL</p>
                     * 
                     */
                    std::string GetPageUrl() const;

                    /**
                     * 设置<p>页面 URL</p>
                     * @param _pageUrl <p>页面 URL</p>
                     * 
                     */
                    void SetPageUrl(const std::string& _pageUrl);

                    /**
                     * 判断参数 PageUrl 是否已赋值
                     * @return PageUrl 是否已赋值
                     * 
                     */
                    bool PageUrlHasBeenSet() const;

                    /**
                     * 获取<p>归一化页面 URL</p>
                     * @return NormalizedPageUrl <p>归一化页面 URL</p>
                     * 
                     */
                    std::string GetNormalizedPageUrl() const;

                    /**
                     * 设置<p>归一化页面 URL</p>
                     * @param _normalizedPageUrl <p>归一化页面 URL</p>
                     * 
                     */
                    void SetNormalizedPageUrl(const std::string& _normalizedPageUrl);

                    /**
                     * 判断参数 NormalizedPageUrl 是否已赋值
                     * @return NormalizedPageUrl 是否已赋值
                     * 
                     */
                    bool NormalizedPageUrlHasBeenSet() const;

                    /**
                     * 获取<p>页面标题</p>
                     * @return PageTitle <p>页面标题</p>
                     * 
                     */
                    std::string GetPageTitle() const;

                    /**
                     * 设置<p>页面标题</p>
                     * @param _pageTitle <p>页面标题</p>
                     * 
                     */
                    void SetPageTitle(const std::string& _pageTitle);

                    /**
                     * 判断参数 PageTitle 是否已赋值
                     * @return PageTitle 是否已赋值
                     * 
                     */
                    bool PageTitleHasBeenSet() const;

                    /**
                     * 获取<p>资源 URL</p>
                     * @return ResourceUrl <p>资源 URL</p>
                     * 
                     */
                    std::string GetResourceUrl() const;

                    /**
                     * 设置<p>资源 URL</p>
                     * @param _resourceUrl <p>资源 URL</p>
                     * 
                     */
                    void SetResourceUrl(const std::string& _resourceUrl);

                    /**
                     * 判断参数 ResourceUrl 是否已赋值
                     * @return ResourceUrl 是否已赋值
                     * 
                     */
                    bool ResourceUrlHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p>
                     * @return ResourceType <p>资源类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p>
                     * @param _resourceType <p>资源类型</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标元素</p>
                     * @return TargetElement <p>目标元素</p>
                     * 
                     */
                    std::string GetTargetElement() const;

                    /**
                     * 设置<p>目标元素</p>
                     * @param _targetElement <p>目标元素</p>
                     * 
                     */
                    void SetTargetElement(const std::string& _targetElement);

                    /**
                     * 判断参数 TargetElement 是否已赋值
                     * @return TargetElement 是否已赋值
                     * 
                     */
                    bool TargetElementHasBeenSet() const;

                    /**
                     * 获取<p>目标文本</p>
                     * @return TargetText <p>目标文本</p>
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 设置<p>目标文本</p>
                     * @param _targetText <p>目标文本</p>
                     * 
                     */
                    void SetTargetText(const std::string& _targetText);

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取<p>日志级别</p>
                     * @return LogLevel <p>日志级别</p>
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置<p>日志级别</p>
                     * @param _logLevel <p>日志级别</p>
                     * 
                     */
                    void SetLogLevel(const std::string& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取<p>IP</p>
                     * @return Ip <p>IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>IP</p>
                     * @param _ip <p>IP</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

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
                     * 获取<p>省份</p>
                     * @return Province <p>省份</p>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置<p>省份</p>
                     * @param _province <p>省份</p>
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取<p>城市</p>
                     * @return City <p>城市</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>城市</p>
                     * @param _city <p>城市</p>
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取<p>运营商</p>
                     * @return Isp <p>运营商</p>
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置<p>运营商</p>
                     * @param _isp <p>运营商</p>
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取<p>网络类型</p>
                     * @return NetworkType <p>网络类型</p>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>网络类型</p>
                     * @param _networkType <p>网络类型</p>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

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
                     * 获取<p>操作系统</p>
                     * @return Os <p>操作系统</p>
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置<p>操作系统</p>
                     * @param _os <p>操作系统</p>
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

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

                    /**
                     * 获取<p>测量值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Measurements <p>测量值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FloatKeyValue> GetMeasurements() const;

                    /**
                     * 设置<p>测量值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _measurements <p>测量值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMeasurements(const std::vector<FloatKeyValue>& _measurements);

                    /**
                     * 判断参数 Measurements 是否已赋值
                     * @return Measurements 是否已赋值
                     * 
                     */
                    bool MeasurementsHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StringKeyValue> GetTags() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<StringKeyValue>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>事件 ID</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>视图 ID</p>
                     */
                    std::string m_viewId;
                    bool m_viewIdHasBeenSet;

                    /**
                     * <p>事件类型</p>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>事件分类</p>
                     */
                    std::string m_eventCategory;
                    bool m_eventCategoryHasBeenSet;

                    /**
                     * <p>事件名</p>
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * <p>时间 RFC3339</p>
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>分区日期 YYYY-MM-DD</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

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
                     * <p>SDK 版本</p>
                     */
                    std::string m_sdkVersion;
                    bool m_sdkVersionHasBeenSet;

                    /**
                     * <p>问题单 ID</p>
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * <p>错误指纹</p>
                     */
                    std::string m_fingerprint;
                    bool m_fingerprintHasBeenSet;

                    /**
                     * <p>是否已符号化 0/1</p>
                     */
                    int64_t m_isSourceMapped;
                    bool m_isSourceMappedHasBeenSet;

                    /**
                     * <p>异常栈</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventStack> m_exceptionStacks;
                    bool m_exceptionStacksHasBeenSet;

                    /**
                     * <p>原始堆栈帧</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventFrame> m_exceptionFrames;
                    bool m_exceptionFramesHasBeenSet;

                    /**
                     * <p>事件属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StringKeyValue> m_eventProperties;
                    bool m_eventPropertiesHasBeenSet;

                    /**
                     * <p>会话 ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>业务用户 ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>设备 ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>页面 URL</p>
                     */
                    std::string m_pageUrl;
                    bool m_pageUrlHasBeenSet;

                    /**
                     * <p>归一化页面 URL</p>
                     */
                    std::string m_normalizedPageUrl;
                    bool m_normalizedPageUrlHasBeenSet;

                    /**
                     * <p>页面标题</p>
                     */
                    std::string m_pageTitle;
                    bool m_pageTitleHasBeenSet;

                    /**
                     * <p>资源 URL</p>
                     */
                    std::string m_resourceUrl;
                    bool m_resourceUrlHasBeenSet;

                    /**
                     * <p>资源类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>目标元素</p>
                     */
                    std::string m_targetElement;
                    bool m_targetElementHasBeenSet;

                    /**
                     * <p>目标文本</p>
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * <p>日志级别</p>
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * <p>IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>国家</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>省份</p>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * <p>城市</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>运营商</p>
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * <p>网络类型</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>设备类型</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>操作系统</p>
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * <p>浏览器</p>
                     */
                    std::string m_browser;
                    bool m_browserHasBeenSet;

                    /**
                     * <p>环境</p>
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * <p>测量值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FloatKeyValue> m_measurements;
                    bool m_measurementsHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StringKeyValue> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_EVENTVIEW_H_
