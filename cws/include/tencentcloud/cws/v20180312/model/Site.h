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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_SITE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_SITE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * 站点数据
                */
                class Site : public AbstractModel
                {
                public:
                    Site();
                    ~Site() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点ID。
                     * @return Id 站点ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置站点ID。
                     * @param _id 站点ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取监控任务ID，为0时表示未加入监控任务。
                     * @return MonitorId 监控任务ID，为0时表示未加入监控任务。
                     * 
                     */
                    uint64_t GetMonitorId() const;

                    /**
                     * 设置监控任务ID，为0时表示未加入监控任务。
                     * @param _monitorId 监控任务ID，为0时表示未加入监控任务。
                     * 
                     */
                    void SetMonitorId(const uint64_t& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                    /**
                     * 获取站点url。
                     * @return Url 站点url。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置站点url。
                     * @param _url 站点url。
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
                     * 获取站点名称。
                     * @return Name 站点名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置站点名称。
                     * @param _name 站点名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     * @return VerifyStatus 验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     * 
                     */
                    uint64_t GetVerifyStatus() const;

                    /**
                     * 设置验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     * @param _verifyStatus 验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     * 
                     */
                    void SetVerifyStatus(const uint64_t& _verifyStatus);

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

                    /**
                     * 获取监测状态：0-未监测；1-监测中；2-暂停监测。
                     * @return MonitorStatus 监测状态：0-未监测；1-监测中；2-暂停监测。
                     * 
                     */
                    uint64_t GetMonitorStatus() const;

                    /**
                     * 设置监测状态：0-未监测；1-监测中；2-暂停监测。
                     * @param _monitorStatus 监测状态：0-未监测；1-监测中；2-暂停监测。
                     * 
                     */
                    void SetMonitorStatus(const uint64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     * @return ScanStatus 扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     * 
                     */
                    uint64_t GetScanStatus() const;

                    /**
                     * 设置扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     * @param _scanStatus 扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     * 
                     */
                    void SetScanStatus(const uint64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取最近一次的AIScanner的扫描任务id，注意取消的情况。
                     * @return LastScanTaskId 最近一次的AIScanner的扫描任务id，注意取消的情况。
                     * 
                     */
                    uint64_t GetLastScanTaskId() const;

                    /**
                     * 设置最近一次的AIScanner的扫描任务id，注意取消的情况。
                     * @param _lastScanTaskId 最近一次的AIScanner的扫描任务id，注意取消的情况。
                     * 
                     */
                    void SetLastScanTaskId(const uint64_t& _lastScanTaskId);

                    /**
                     * 判断参数 LastScanTaskId 是否已赋值
                     * @return LastScanTaskId 是否已赋值
                     * 
                     */
                    bool LastScanTaskIdHasBeenSet() const;

                    /**
                     * 获取最近一次扫描开始时间。
                     * @return LastScanStartTime 最近一次扫描开始时间。
                     * 
                     */
                    std::string GetLastScanStartTime() const;

                    /**
                     * 设置最近一次扫描开始时间。
                     * @param _lastScanStartTime 最近一次扫描开始时间。
                     * 
                     */
                    void SetLastScanStartTime(const std::string& _lastScanStartTime);

                    /**
                     * 判断参数 LastScanStartTime 是否已赋值
                     * @return LastScanStartTime 是否已赋值
                     * 
                     */
                    bool LastScanStartTimeHasBeenSet() const;

                    /**
                     * 获取最近一次扫描完成时间。
                     * @return LastScanFinishTime 最近一次扫描完成时间。
                     * 
                     */
                    std::string GetLastScanFinishTime() const;

                    /**
                     * 设置最近一次扫描完成时间。
                     * @param _lastScanFinishTime 最近一次扫描完成时间。
                     * 
                     */
                    void SetLastScanFinishTime(const std::string& _lastScanFinishTime);

                    /**
                     * 判断参数 LastScanFinishTime 是否已赋值
                     * @return LastScanFinishTime 是否已赋值
                     * 
                     */
                    bool LastScanFinishTimeHasBeenSet() const;

                    /**
                     * 获取最近一次取消时间，取消即使用上一次扫描结果。
                     * @return LastScanCancelTime 最近一次取消时间，取消即使用上一次扫描结果。
                     * 
                     */
                    std::string GetLastScanCancelTime() const;

                    /**
                     * 设置最近一次取消时间，取消即使用上一次扫描结果。
                     * @param _lastScanCancelTime 最近一次取消时间，取消即使用上一次扫描结果。
                     * 
                     */
                    void SetLastScanCancelTime(const std::string& _lastScanCancelTime);

                    /**
                     * 判断参数 LastScanCancelTime 是否已赋值
                     * @return LastScanCancelTime 是否已赋值
                     * 
                     */
                    bool LastScanCancelTimeHasBeenSet() const;

                    /**
                     * 获取最近一次扫描扫描的页面数。
                     * @return LastScanPageCount 最近一次扫描扫描的页面数。
                     * 
                     */
                    uint64_t GetLastScanPageCount() const;

                    /**
                     * 设置最近一次扫描扫描的页面数。
                     * @param _lastScanPageCount 最近一次扫描扫描的页面数。
                     * 
                     */
                    void SetLastScanPageCount(const uint64_t& _lastScanPageCount);

                    /**
                     * 判断参数 LastScanPageCount 是否已赋值
                     * @return LastScanPageCount 是否已赋值
                     * 
                     */
                    bool LastScanPageCountHasBeenSet() const;

                    /**
                     * 获取normal-正常扫描；deep-深度扫描。
                     * @return LastScanScannerType normal-正常扫描；deep-深度扫描。
                     * 
                     */
                    std::string GetLastScanScannerType() const;

                    /**
                     * 设置normal-正常扫描；deep-深度扫描。
                     * @param _lastScanScannerType normal-正常扫描；deep-深度扫描。
                     * 
                     */
                    void SetLastScanScannerType(const std::string& _lastScanScannerType);

                    /**
                     * 判断参数 LastScanScannerType 是否已赋值
                     * @return LastScanScannerType 是否已赋值
                     * 
                     */
                    bool LastScanScannerTypeHasBeenSet() const;

                    /**
                     * 获取最近一次扫描高风险漏洞数量。
                     * @return LastScanVulsHighNum 最近一次扫描高风险漏洞数量。
                     * 
                     */
                    uint64_t GetLastScanVulsHighNum() const;

                    /**
                     * 设置最近一次扫描高风险漏洞数量。
                     * @param _lastScanVulsHighNum 最近一次扫描高风险漏洞数量。
                     * 
                     */
                    void SetLastScanVulsHighNum(const uint64_t& _lastScanVulsHighNum);

                    /**
                     * 判断参数 LastScanVulsHighNum 是否已赋值
                     * @return LastScanVulsHighNum 是否已赋值
                     * 
                     */
                    bool LastScanVulsHighNumHasBeenSet() const;

                    /**
                     * 获取最近一次扫描中风险漏洞数量。
                     * @return LastScanVulsMiddleNum 最近一次扫描中风险漏洞数量。
                     * 
                     */
                    uint64_t GetLastScanVulsMiddleNum() const;

                    /**
                     * 设置最近一次扫描中风险漏洞数量。
                     * @param _lastScanVulsMiddleNum 最近一次扫描中风险漏洞数量。
                     * 
                     */
                    void SetLastScanVulsMiddleNum(const uint64_t& _lastScanVulsMiddleNum);

                    /**
                     * 判断参数 LastScanVulsMiddleNum 是否已赋值
                     * @return LastScanVulsMiddleNum 是否已赋值
                     * 
                     */
                    bool LastScanVulsMiddleNumHasBeenSet() const;

                    /**
                     * 获取最近一次扫描低风险漏洞数量。
                     * @return LastScanVulsLowNum 最近一次扫描低风险漏洞数量。
                     * 
                     */
                    uint64_t GetLastScanVulsLowNum() const;

                    /**
                     * 设置最近一次扫描低风险漏洞数量。
                     * @param _lastScanVulsLowNum 最近一次扫描低风险漏洞数量。
                     * 
                     */
                    void SetLastScanVulsLowNum(const uint64_t& _lastScanVulsLowNum);

                    /**
                     * 判断参数 LastScanVulsLowNum 是否已赋值
                     * @return LastScanVulsLowNum 是否已赋值
                     * 
                     */
                    bool LastScanVulsLowNumHasBeenSet() const;

                    /**
                     * 获取最近一次扫描提示信息数量。
                     * @return LastScanVulsNoticeNum 最近一次扫描提示信息数量。
                     * 
                     */
                    uint64_t GetLastScanVulsNoticeNum() const;

                    /**
                     * 设置最近一次扫描提示信息数量。
                     * @param _lastScanVulsNoticeNum 最近一次扫描提示信息数量。
                     * 
                     */
                    void SetLastScanVulsNoticeNum(const uint64_t& _lastScanVulsNoticeNum);

                    /**
                     * 判断参数 LastScanVulsNoticeNum 是否已赋值
                     * @return LastScanVulsNoticeNum 是否已赋值
                     * 
                     */
                    bool LastScanVulsNoticeNumHasBeenSet() const;

                    /**
                     * 获取记录添加时间。
                     * @return CreatedAt 记录添加时间。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置记录添加时间。
                     * @param _createdAt 记录添加时间。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取记录最近修改时间。
                     * @return UpdatedAt 记录最近修改时间。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置记录最近修改时间。
                     * @param _updatedAt 记录最近修改时间。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取速率限制，每秒发送X个HTTP请求。
                     * @return LastScanRateLimit 速率限制，每秒发送X个HTTP请求。
                     * 
                     */
                    uint64_t GetLastScanRateLimit() const;

                    /**
                     * 设置速率限制，每秒发送X个HTTP请求。
                     * @param _lastScanRateLimit 速率限制，每秒发送X个HTTP请求。
                     * 
                     */
                    void SetLastScanRateLimit(const uint64_t& _lastScanRateLimit);

                    /**
                     * 判断参数 LastScanRateLimit 是否已赋值
                     * @return LastScanRateLimit 是否已赋值
                     * 
                     */
                    bool LastScanRateLimitHasBeenSet() const;

                    /**
                     * 获取最近一次扫描漏洞总数量。
                     * @return LastScanVulsNum 最近一次扫描漏洞总数量。
                     * 
                     */
                    uint64_t GetLastScanVulsNum() const;

                    /**
                     * 设置最近一次扫描漏洞总数量。
                     * @param _lastScanVulsNum 最近一次扫描漏洞总数量。
                     * 
                     */
                    void SetLastScanVulsNum(const uint64_t& _lastScanVulsNum);

                    /**
                     * 判断参数 LastScanVulsNum 是否已赋值
                     * @return LastScanVulsNum 是否已赋值
                     * 
                     */
                    bool LastScanVulsNumHasBeenSet() const;

                    /**
                     * 获取最近一次扫描提示总数量
                     * @return LastScanNoticeNum 最近一次扫描提示总数量
                     * 
                     */
                    uint64_t GetLastScanNoticeNum() const;

                    /**
                     * 设置最近一次扫描提示总数量
                     * @param _lastScanNoticeNum 最近一次扫描提示总数量
                     * 
                     */
                    void SetLastScanNoticeNum(const uint64_t& _lastScanNoticeNum);

                    /**
                     * 判断参数 LastScanNoticeNum 是否已赋值
                     * @return LastScanNoticeNum 是否已赋值
                     * 
                     */
                    bool LastScanNoticeNumHasBeenSet() const;

                    /**
                     * 获取扫描进度，百分比整数
                     * @return Progress 扫描进度，百分比整数
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置扫描进度，百分比整数
                     * @param _progress 扫描进度，百分比整数
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取云用户appid。
                     * @return Appid 云用户appid。
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置云用户appid。
                     * @param _appid 云用户appid。
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取云用户标识。
                     * @return Uin 云用户标识。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置云用户标识。
                     * @param _uin 云用户标识。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取网站是否需要登录扫描：0-未知；-1-不需要；1-需要。
                     * @return NeedLogin 网站是否需要登录扫描：0-未知；-1-不需要；1-需要。
                     * 
                     */
                    int64_t GetNeedLogin() const;

                    /**
                     * 设置网站是否需要登录扫描：0-未知；-1-不需要；1-需要。
                     * @param _needLogin 网站是否需要登录扫描：0-未知；-1-不需要；1-需要。
                     * 
                     */
                    void SetNeedLogin(const int64_t& _needLogin);

                    /**
                     * 判断参数 NeedLogin 是否已赋值
                     * @return NeedLogin 是否已赋值
                     * 
                     */
                    bool NeedLoginHasBeenSet() const;

                    /**
                     * 获取登录后的cookie。
                     * @return LoginCookie 登录后的cookie。
                     * 
                     */
                    std::string GetLoginCookie() const;

                    /**
                     * 设置登录后的cookie。
                     * @param _loginCookie 登录后的cookie。
                     * 
                     */
                    void SetLoginCookie(const std::string& _loginCookie);

                    /**
                     * 判断参数 LoginCookie 是否已赋值
                     * @return LoginCookie 是否已赋值
                     * 
                     */
                    bool LoginCookieHasBeenSet() const;

                    /**
                     * 获取登录后的cookie是否有效：0-无效；1-有效。
                     * @return LoginCookieValid 登录后的cookie是否有效：0-无效；1-有效。
                     * 
                     */
                    uint64_t GetLoginCookieValid() const;

                    /**
                     * 设置登录后的cookie是否有效：0-无效；1-有效。
                     * @param _loginCookieValid 登录后的cookie是否有效：0-无效；1-有效。
                     * 
                     */
                    void SetLoginCookieValid(const uint64_t& _loginCookieValid);

                    /**
                     * 判断参数 LoginCookieValid 是否已赋值
                     * @return LoginCookieValid 是否已赋值
                     * 
                     */
                    bool LoginCookieValidHasBeenSet() const;

                    /**
                     * 获取用于测试cookie是否有效的URL。
                     * @return LoginCheckUrl 用于测试cookie是否有效的URL。
                     * 
                     */
                    std::string GetLoginCheckUrl() const;

                    /**
                     * 设置用于测试cookie是否有效的URL。
                     * @param _loginCheckUrl 用于测试cookie是否有效的URL。
                     * 
                     */
                    void SetLoginCheckUrl(const std::string& _loginCheckUrl);

                    /**
                     * 判断参数 LoginCheckUrl 是否已赋值
                     * @return LoginCheckUrl 是否已赋值
                     * 
                     */
                    bool LoginCheckUrlHasBeenSet() const;

                    /**
                     * 获取用于测试cookie是否有效的关键字。
                     * @return LoginCheckKw 用于测试cookie是否有效的关键字。
                     * 
                     */
                    std::string GetLoginCheckKw() const;

                    /**
                     * 设置用于测试cookie是否有效的关键字。
                     * @param _loginCheckKw 用于测试cookie是否有效的关键字。
                     * 
                     */
                    void SetLoginCheckKw(const std::string& _loginCheckKw);

                    /**
                     * 判断参数 LoginCheckKw 是否已赋值
                     * @return LoginCheckKw 是否已赋值
                     * 
                     */
                    bool LoginCheckKwHasBeenSet() const;

                    /**
                     * 获取禁止扫描器扫描的目录关键字。
                     * @return ScanDisallow 禁止扫描器扫描的目录关键字。
                     * 
                     */
                    std::string GetScanDisallow() const;

                    /**
                     * 设置禁止扫描器扫描的目录关键字。
                     * @param _scanDisallow 禁止扫描器扫描的目录关键字。
                     * 
                     */
                    void SetScanDisallow(const std::string& _scanDisallow);

                    /**
                     * 判断参数 ScanDisallow 是否已赋值
                     * @return ScanDisallow 是否已赋值
                     * 
                     */
                    bool ScanDisallowHasBeenSet() const;

                    /**
                     * 获取访问网站的客户端标识。
                     * @return UserAgent 访问网站的客户端标识。
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置访问网站的客户端标识。
                     * @param _userAgent 访问网站的客户端标识。
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取内容检测状态：0-未检测；1-已检测；
                     * @return ContentStatus 内容检测状态：0-未检测；1-已检测；
                     * 
                     */
                    uint64_t GetContentStatus() const;

                    /**
                     * 设置内容检测状态：0-未检测；1-已检测；
                     * @param _contentStatus 内容检测状态：0-未检测；1-已检测；
                     * 
                     */
                    void SetContentStatus(const uint64_t& _contentStatus);

                    /**
                     * 判断参数 ContentStatus 是否已赋值
                     * @return ContentStatus 是否已赋值
                     * 
                     */
                    bool ContentStatusHasBeenSet() const;

                    /**
                     * 获取最近一次扫描内容检测数量
                     * @return LastScanContentNum 最近一次扫描内容检测数量
                     * 
                     */
                    uint64_t GetLastScanContentNum() const;

                    /**
                     * 设置最近一次扫描内容检测数量
                     * @param _lastScanContentNum 最近一次扫描内容检测数量
                     * 
                     */
                    void SetLastScanContentNum(const uint64_t& _lastScanContentNum);

                    /**
                     * 判断参数 LastScanContentNum 是否已赋值
                     * @return LastScanContentNum 是否已赋值
                     * 
                     */
                    bool LastScanContentNumHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 监控任务ID，为0时表示未加入监控任务。
                     */
                    uint64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * 站点url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 站点名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     */
                    uint64_t m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                    /**
                     * 监测状态：0-未监测；1-监测中；2-暂停监测。
                     */
                    uint64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     */
                    uint64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 最近一次的AIScanner的扫描任务id，注意取消的情况。
                     */
                    uint64_t m_lastScanTaskId;
                    bool m_lastScanTaskIdHasBeenSet;

                    /**
                     * 最近一次扫描开始时间。
                     */
                    std::string m_lastScanStartTime;
                    bool m_lastScanStartTimeHasBeenSet;

                    /**
                     * 最近一次扫描完成时间。
                     */
                    std::string m_lastScanFinishTime;
                    bool m_lastScanFinishTimeHasBeenSet;

                    /**
                     * 最近一次取消时间，取消即使用上一次扫描结果。
                     */
                    std::string m_lastScanCancelTime;
                    bool m_lastScanCancelTimeHasBeenSet;

                    /**
                     * 最近一次扫描扫描的页面数。
                     */
                    uint64_t m_lastScanPageCount;
                    bool m_lastScanPageCountHasBeenSet;

                    /**
                     * normal-正常扫描；deep-深度扫描。
                     */
                    std::string m_lastScanScannerType;
                    bool m_lastScanScannerTypeHasBeenSet;

                    /**
                     * 最近一次扫描高风险漏洞数量。
                     */
                    uint64_t m_lastScanVulsHighNum;
                    bool m_lastScanVulsHighNumHasBeenSet;

                    /**
                     * 最近一次扫描中风险漏洞数量。
                     */
                    uint64_t m_lastScanVulsMiddleNum;
                    bool m_lastScanVulsMiddleNumHasBeenSet;

                    /**
                     * 最近一次扫描低风险漏洞数量。
                     */
                    uint64_t m_lastScanVulsLowNum;
                    bool m_lastScanVulsLowNumHasBeenSet;

                    /**
                     * 最近一次扫描提示信息数量。
                     */
                    uint64_t m_lastScanVulsNoticeNum;
                    bool m_lastScanVulsNoticeNumHasBeenSet;

                    /**
                     * 记录添加时间。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 记录最近修改时间。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 速率限制，每秒发送X个HTTP请求。
                     */
                    uint64_t m_lastScanRateLimit;
                    bool m_lastScanRateLimitHasBeenSet;

                    /**
                     * 最近一次扫描漏洞总数量。
                     */
                    uint64_t m_lastScanVulsNum;
                    bool m_lastScanVulsNumHasBeenSet;

                    /**
                     * 最近一次扫描提示总数量
                     */
                    uint64_t m_lastScanNoticeNum;
                    bool m_lastScanNoticeNumHasBeenSet;

                    /**
                     * 扫描进度，百分比整数
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 云用户appid。
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 云用户标识。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 网站是否需要登录扫描：0-未知；-1-不需要；1-需要。
                     */
                    int64_t m_needLogin;
                    bool m_needLoginHasBeenSet;

                    /**
                     * 登录后的cookie。
                     */
                    std::string m_loginCookie;
                    bool m_loginCookieHasBeenSet;

                    /**
                     * 登录后的cookie是否有效：0-无效；1-有效。
                     */
                    uint64_t m_loginCookieValid;
                    bool m_loginCookieValidHasBeenSet;

                    /**
                     * 用于测试cookie是否有效的URL。
                     */
                    std::string m_loginCheckUrl;
                    bool m_loginCheckUrlHasBeenSet;

                    /**
                     * 用于测试cookie是否有效的关键字。
                     */
                    std::string m_loginCheckKw;
                    bool m_loginCheckKwHasBeenSet;

                    /**
                     * 禁止扫描器扫描的目录关键字。
                     */
                    std::string m_scanDisallow;
                    bool m_scanDisallowHasBeenSet;

                    /**
                     * 访问网站的客户端标识。
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 内容检测状态：0-未检测；1-已检测；
                     */
                    uint64_t m_contentStatus;
                    bool m_contentStatusHasBeenSet;

                    /**
                     * 最近一次扫描内容检测数量
                     */
                    uint64_t m_lastScanContentNum;
                    bool m_lastScanContentNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_SITE_H_
