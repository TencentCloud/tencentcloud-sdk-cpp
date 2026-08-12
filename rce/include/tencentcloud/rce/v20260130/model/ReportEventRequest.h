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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_REPORTEVENTREQUEST_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_REPORTEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/EventDetail.h>
#include <tencentcloud/rce/v20260130/model/Browser.h>
#include <tencentcloud/rce/v20260130/model/App.h>
#include <tencentcloud/rce/v20260130/model/DataAuthorization.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * ReportEvent请求参数结构体
                */
                class ReportEventRequest : public AbstractModel
                {
                public:
                    ReportEventRequest();
                    ~ReportEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>事件码，标准事件包含：</p><p>枚举值：</p><ul><li>login： 登录</li><li>register： 注册</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>charge_back： 拒付</li><li>sms： 短信</li><li>logout： 登出</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>security_verification： 安全验证</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li><li>withdraw： 提现</li><li>cust_event： 自定义事件，cust_xxx</li><li>scan_code： 扫码</li><li>lucky_draw： 抽奖</li><li>task： 做任务</li><li>invitation： 邀请</li><li>claim_red_packet： 领红包</li><li>browse： 浏览</li></ul><p>自定义事件可与RCE约定后进行风险评估</p>
                     * @return EventCode <p>事件码，标准事件包含：</p><p>枚举值：</p><ul><li>login： 登录</li><li>register： 注册</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>charge_back： 拒付</li><li>sms： 短信</li><li>logout： 登出</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>security_verification： 安全验证</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li><li>withdraw： 提现</li><li>cust_event： 自定义事件，cust_xxx</li><li>scan_code： 扫码</li><li>lucky_draw： 抽奖</li><li>task： 做任务</li><li>invitation： 邀请</li><li>claim_red_packet： 领红包</li><li>browse： 浏览</li></ul><p>自定义事件可与RCE约定后进行风险评估</p>
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置<p>事件码，标准事件包含：</p><p>枚举值：</p><ul><li>login： 登录</li><li>register： 注册</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>charge_back： 拒付</li><li>sms： 短信</li><li>logout： 登出</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>security_verification： 安全验证</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li><li>withdraw： 提现</li><li>cust_event： 自定义事件，cust_xxx</li><li>scan_code： 扫码</li><li>lucky_draw： 抽奖</li><li>task： 做任务</li><li>invitation： 邀请</li><li>claim_red_packet： 领红包</li><li>browse： 浏览</li></ul><p>自定义事件可与RCE约定后进行风险评估</p>
                     * @param _eventCode <p>事件码，标准事件包含：</p><p>枚举值：</p><ul><li>login： 登录</li><li>register： 注册</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>charge_back： 拒付</li><li>sms： 短信</li><li>logout： 登出</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>security_verification： 安全验证</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li><li>withdraw： 提现</li><li>cust_event： 自定义事件，cust_xxx</li><li>scan_code： 扫码</li><li>lucky_draw： 抽奖</li><li>task： 做任务</li><li>invitation： 邀请</li><li>claim_red_packet： 领红包</li><li>browse： 浏览</li></ul><p>自定义事件可与RCE约定后进行风险评估</p>
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取<p>事件的发生时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @return EventTime <p>事件的发生时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置<p>事件的发生时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @param _eventTime <p>事件的发生时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户当前会话 ID， 用于关联用户登录前后的动作，如果没有传UserId，则SessionId必传，如缺失则可填充空字符串</p>
                     * @return SessionId <p>用户当前会话 ID， 用于关联用户登录前后的动作，如果没有传UserId，则SessionId必传，如缺失则可填充空字符串</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用户当前会话 ID， 用于关联用户登录前后的动作，如果没有传UserId，则SessionId必传，如缺失则可填充空字符串</p>
                     * @param _sessionId <p>用户当前会话 ID， 用于关联用户登录前后的动作，如果没有传UserId，则SessionId必传，如缺失则可填充空字符串</p>
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
                     * 获取<p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     * @return DeviceToken <p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置<p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     * @param _deviceToken <p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     * 
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     * 
                     */
                    bool DeviceTokenHasBeenSet() const;

                    /**
                     * 获取<p>客户端 IP 地址（IPv4或IPv6）</p>
                     * @return UserIp <p>客户端 IP 地址（IPv4或IPv6）</p>
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置<p>客户端 IP 地址（IPv4或IPv6）</p>
                     * @param _userIp <p>客户端 IP 地址（IPv4或IPv6）</p>
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取<p>事件详情，根据您输入的事件码传入对应的事件信息</p>
                     * @return EventDetail <p>事件详情，根据您输入的事件码传入对应的事件信息</p>
                     * 
                     */
                    EventDetail GetEventDetail() const;

                    /**
                     * 设置<p>事件详情，根据您输入的事件码传入对应的事件信息</p>
                     * @param _eventDetail <p>事件详情，根据您输入的事件码传入对应的事件信息</p>
                     * 
                     */
                    void SetEventDetail(const EventDetail& _eventDetail);

                    /**
                     * 判断参数 EventDetail 是否已赋值
                     * @return EventDetail 是否已赋值
                     * 
                     */
                    bool EventDetailHasBeenSet() const;

                    /**
                     * 获取<p>用户在您系统中的唯一ID</p>
                     * @return UserId <p>用户在您系统中的唯一ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户在您系统中的唯一ID</p>
                     * @param _userId <p>用户在您系统中的唯一ID</p>
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
                     * 获取<p>用户邮箱</p>
                     * @return UserEmail <p>用户邮箱</p>
                     * 
                     */
                    std::string GetUserEmail() const;

                    /**
                     * 设置<p>用户邮箱</p>
                     * @param _userEmail <p>用户邮箱</p>
                     * 
                     */
                    void SetUserEmail(const std::string& _userEmail);

                    /**
                     * 判断参数 UserEmail 是否已赋值
                     * @return UserEmail 是否已赋值
                     * 
                     */
                    bool UserEmailHasBeenSet() const;

                    /**
                     * 获取<p>用户提供的联系方式</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @return UserPhone <p>用户提供的联系方式</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    std::string GetUserPhone() const;

                    /**
                     * 设置<p>用户提供的联系方式</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @param _userPhone <p>用户提供的联系方式</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    void SetUserPhone(const std::string& _userPhone);

                    /**
                     * 判断参数 UserPhone 是否已赋值
                     * @return UserPhone 是否已赋值
                     * 
                     */
                    bool UserPhoneHasBeenSet() const;

                    /**
                     * 获取<p>web浏览器相关信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     * @return Browser <p>web浏览器相关信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     * 
                     */
                    Browser GetBrowser() const;

                    /**
                     * 设置<p>web浏览器相关信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     * @param _browser <p>web浏览器相关信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     * 
                     */
                    void SetBrowser(const Browser& _browser);

                    /**
                     * 判断参数 Browser 是否已赋值
                     * @return Browser 是否已赋值
                     * 
                     */
                    bool BrowserHasBeenSet() const;

                    /**
                     * 获取<p>应用程序、操作系统和移动设备详细信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     * @return App <p>应用程序、操作系统和移动设备详细信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     * 
                     */
                    App GetApp() const;

                    /**
                     * 设置<p>应用程序、操作系统和移动设备详细信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     * @param _app <p>应用程序、操作系统和移动设备详细信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     * 
                     */
                    void SetApp(const App& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     * 
                     */
                    bool AppHasBeenSet() const;

                    /**
                     * 获取<p>数据授权信息，国内地域必填</p>
                     * @return DataAuthorization <p>数据授权信息，国内地域必填</p>
                     * 
                     */
                    DataAuthorization GetDataAuthorization() const;

                    /**
                     * 设置<p>数据授权信息，国内地域必填</p>
                     * @param _dataAuthorization <p>数据授权信息，国内地域必填</p>
                     * 
                     */
                    void SetDataAuthorization(const DataAuthorization& _dataAuthorization);

                    /**
                     * 判断参数 DataAuthorization 是否已赋值
                     * @return DataAuthorization 是否已赋值
                     * 
                     */
                    bool DataAuthorizationHasBeenSet() const;

                    /**
                     * 获取<p>手机号码加密方式，国内地域必填</p><p>枚举值：</p><ul><li>md5： md5加密</li><li>plain： 明文</li></ul>
                     * @return UserPhoneEncrypt <p>手机号码加密方式，国内地域必填</p><p>枚举值：</p><ul><li>md5： md5加密</li><li>plain： 明文</li></ul>
                     * 
                     */
                    std::string GetUserPhoneEncrypt() const;

                    /**
                     * 设置<p>手机号码加密方式，国内地域必填</p><p>枚举值：</p><ul><li>md5： md5加密</li><li>plain： 明文</li></ul>
                     * @param _userPhoneEncrypt <p>手机号码加密方式，国内地域必填</p><p>枚举值：</p><ul><li>md5： md5加密</li><li>plain： 明文</li></ul>
                     * 
                     */
                    void SetUserPhoneEncrypt(const std::string& _userPhoneEncrypt);

                    /**
                     * 判断参数 UserPhoneEncrypt 是否已赋值
                     * @return UserPhoneEncrypt 是否已赋值
                     * 
                     */
                    bool UserPhoneEncryptHasBeenSet() const;

                    /**
                     * 获取<p>微信开放账号</p>
                     * @return WeChatOpenId <p>微信开放账号</p>
                     * 
                     */
                    std::string GetWeChatOpenId() const;

                    /**
                     * 设置<p>微信开放账号</p>
                     * @param _weChatOpenId <p>微信开放账号</p>
                     * 
                     */
                    void SetWeChatOpenId(const std::string& _weChatOpenId);

                    /**
                     * 判断参数 WeChatOpenId 是否已赋值
                     * @return WeChatOpenId 是否已赋值
                     * 
                     */
                    bool WeChatOpenIdHasBeenSet() const;

                    /**
                     * 获取<p>QQ开放账号</p>
                     * @return QQOpenId <p>QQ开放账号</p>
                     * 
                     */
                    std::string GetQQOpenId() const;

                    /**
                     * 设置<p>QQ开放账号</p>
                     * @param _qQOpenId <p>QQ开放账号</p>
                     * 
                     */
                    void SetQQOpenId(const std::string& _qQOpenId);

                    /**
                     * 判断参数 QQOpenId 是否已赋值
                     * @return QQOpenId 是否已赋值
                     * 
                     */
                    bool QQOpenIdHasBeenSet() const;

                    /**
                     * 获取<p>QQ应用ID，当传入QQ开放账号时，该字段必填，QQ分配给网站或应用的AppId，用来唯一标识网站或应用</p>
                     * @return QQAppId <p>QQ应用ID，当传入QQ开放账号时，该字段必填，QQ分配给网站或应用的AppId，用来唯一标识网站或应用</p>
                     * 
                     */
                    std::string GetQQAppId() const;

                    /**
                     * 设置<p>QQ应用ID，当传入QQ开放账号时，该字段必填，QQ分配给网站或应用的AppId，用来唯一标识网站或应用</p>
                     * @param _qQAppId <p>QQ应用ID，当传入QQ开放账号时，该字段必填，QQ分配给网站或应用的AppId，用来唯一标识网站或应用</p>
                     * 
                     */
                    void SetQQAppId(const std::string& _qQAppId);

                    /**
                     * 判断参数 QQAppId 是否已赋值
                     * @return QQAppId 是否已赋值
                     * 
                     */
                    bool QQAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>事件码，标准事件包含：</p><p>枚举值：</p><ul><li>login： 登录</li><li>register： 注册</li><li>create_order： 创建订单</li><li>transaction： 交易支付</li><li>charge_back： 拒付</li><li>sms： 短信</li><li>logout： 登出</li><li>modify_account： 修改账号</li><li>modify_password： 修改密码</li><li>security_verification： 安全验证</li><li>add_promotion： 参加营销活动</li><li>redeem： 兑奖</li><li>withdraw： 提现</li><li>cust_event： 自定义事件，cust_xxx</li><li>scan_code： 扫码</li><li>lucky_draw： 抽奖</li><li>task： 做任务</li><li>invitation： 邀请</li><li>claim_red_packet： 领红包</li><li>browse： 浏览</li></ul><p>自定义事件可与RCE约定后进行风险评估</p>
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * <p>事件的发生时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * <p>用户当前会话 ID， 用于关联用户登录前后的动作，如果没有传UserId，则SessionId必传，如缺失则可填充空字符串</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>用户设备指纹token标识，在您的网站或者应用程序中集成设备指纹的SDK后获取</p>
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * <p>客户端 IP 地址（IPv4或IPv6）</p>
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * <p>事件详情，根据您输入的事件码传入对应的事件信息</p>
                     */
                    EventDetail m_eventDetail;
                    bool m_eventDetailHasBeenSet;

                    /**
                     * <p>用户在您系统中的唯一ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>用户邮箱</p>
                     */
                    std::string m_userEmail;
                    bool m_userEmailHasBeenSet;

                    /**
                     * <p>用户提供的联系方式</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     */
                    std::string m_userPhone;
                    bool m_userPhoneHasBeenSet;

                    /**
                     * <p>web浏览器相关信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     */
                    Browser m_browser;
                    bool m_browserHasBeenSet;

                    /**
                     * <p>应用程序、操作系统和移动设备详细信息，若您已集成我们的设备指纹SDK，则无需传入此字段</p>
                     */
                    App m_app;
                    bool m_appHasBeenSet;

                    /**
                     * <p>数据授权信息，国内地域必填</p>
                     */
                    DataAuthorization m_dataAuthorization;
                    bool m_dataAuthorizationHasBeenSet;

                    /**
                     * <p>手机号码加密方式，国内地域必填</p><p>枚举值：</p><ul><li>md5： md5加密</li><li>plain： 明文</li></ul>
                     */
                    std::string m_userPhoneEncrypt;
                    bool m_userPhoneEncryptHasBeenSet;

                    /**
                     * <p>微信开放账号</p>
                     */
                    std::string m_weChatOpenId;
                    bool m_weChatOpenIdHasBeenSet;

                    /**
                     * <p>QQ开放账号</p>
                     */
                    std::string m_qQOpenId;
                    bool m_qQOpenIdHasBeenSet;

                    /**
                     * <p>QQ应用ID，当传入QQ开放账号时，该字段必填，QQ分配给网站或应用的AppId，用来唯一标识网站或应用</p>
                     */
                    std::string m_qQAppId;
                    bool m_qQAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_REPORTEVENTREQUEST_H_
