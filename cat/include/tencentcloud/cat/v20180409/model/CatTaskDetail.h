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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_CATTASKDETAIL_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_CATTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 任务信息和告警策略组
                */
                class CatTaskDetail : public AbstractModel
                {
                public:
                    CatTaskDetail();
                    ~CatTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param TaskId 任务Id
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param TaskName 任务名称
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     * @return Period 任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     * @param Period 任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取拨测类型。http, https, ping, tcp 之一
                     * @return CatTypeName 拨测类型。http, https, ping, tcp 之一
                     */
                    std::string GetCatTypeName() const;

                    /**
                     * 设置拨测类型。http, https, ping, tcp 之一
                     * @param CatTypeName 拨测类型。http, https, ping, tcp 之一
                     */
                    void SetCatTypeName(const std::string& _catTypeName);

                    /**
                     * 判断参数 CatTypeName 是否已赋值
                     * @return CatTypeName 是否已赋值
                     */
                    bool CatTypeNameHasBeenSet() const;

                    /**
                     * 获取拨测任务的Url
                     * @return CgiUrl 拨测任务的Url
                     */
                    std::string GetCgiUrl() const;

                    /**
                     * 设置拨测任务的Url
                     * @param CgiUrl 拨测任务的Url
                     */
                    void SetCgiUrl(const std::string& _cgiUrl);

                    /**
                     * 判断参数 CgiUrl 是否已赋值
                     * @return CgiUrl 是否已赋值
                     */
                    bool CgiUrlHasBeenSet() const;

                    /**
                     * 获取拨测分组id
                     * @return AgentGroupId 拨测分组id
                     */
                    uint64_t GetAgentGroupId() const;

                    /**
                     * 设置拨测分组id
                     * @param AgentGroupId 拨测分组id
                     */
                    void SetAgentGroupId(const uint64_t& _agentGroupId);

                    /**
                     * 判断参数 AgentGroupId 是否已赋值
                     * @return AgentGroupId 是否已赋值
                     */
                    bool AgentGroupIdHasBeenSet() const;

                    /**
                     * 获取告警策略组id
                     * @return PolicyGroupId 告警策略组id
                     */
                    uint64_t GetPolicyGroupId() const;

                    /**
                     * 设置告警策略组id
                     * @param PolicyGroupId 告警策略组id
                     */
                    void SetPolicyGroupId(const uint64_t& _policyGroupId);

                    /**
                     * 判断参数 PolicyGroupId 是否已赋值
                     * @return PolicyGroupId 是否已赋值
                     */
                    bool PolicyGroupIdHasBeenSet() const;

                    /**
                     * 获取任务状态。1表示暂停，2表示运行中，0为初始态
                     * @return Status 任务状态。1表示暂停，2表示运行中，0为初始态
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态。1表示暂停，2表示运行中，0为初始态
                     * @param Status 任务状态。1表示暂停，2表示运行中，0为初始态
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return AddTime 任务创建时间
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置任务创建时间
                     * @param AddTime 任务创建时间
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取任务类型。0 站点监控，2 可用性监控
                     * @return Type 任务类型。0 站点监控，2 可用性监控
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置任务类型。0 站点监控，2 可用性监控
                     * @param Type 任务类型。0 站点监控，2 可用性监控
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取绑定的统一告警主题Id
                     * @return TopicId 绑定的统一告警主题Id
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置绑定的统一告警主题Id
                     * @param TopicId 绑定的统一告警主题Id
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取告警状态。0 未启用，1, 启用
                     * @return AlarmStatus 告警状态。0 未启用，1, 启用
                     */
                    uint64_t GetAlarmStatus() const;

                    /**
                     * 设置告警状态。0 未启用，1, 启用
                     * @param AlarmStatus 告警状态。0 未启用，1, 启用
                     */
                    void SetAlarmStatus(const uint64_t& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取指定的域名
                     * @return Host 指定的域名
                     */
                    std::string GetHost() const;

                    /**
                     * 设置指定的域名
                     * @param Host 指定的域名
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取拨测目标的端口号
                     * @return Port 拨测目标的端口号
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置拨测目标的端口号
                     * @param Port 拨测目标的端口号
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取要在结果中进行匹配的字符串
                     * @return CheckStr 要在结果中进行匹配的字符串
                     */
                    std::string GetCheckStr() const;

                    /**
                     * 设置要在结果中进行匹配的字符串
                     * @param CheckStr 要在结果中进行匹配的字符串
                     */
                    void SetCheckStr(const std::string& _checkStr);

                    /**
                     * 判断参数 CheckStr 是否已赋值
                     * @return CheckStr 是否已赋值
                     */
                    bool CheckStrHasBeenSet() const;

                    /**
                     * 获取1 表示通过检查结果是否包含CheckStr 进行校验
                     * @return CheckType 1 表示通过检查结果是否包含CheckStr 进行校验
                     */
                    uint64_t GetCheckType() const;

                    /**
                     * 设置1 表示通过检查结果是否包含CheckStr 进行校验
                     * @param CheckType 1 表示通过检查结果是否包含CheckStr 进行校验
                     */
                    void SetCheckType(const uint64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取用户agent 信息
                     * @return UserAgent 用户agent 信息
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置用户agent 信息
                     * @param UserAgent 用户agent 信息
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取设置的cookie信息
                     * @return Cookie 设置的cookie信息
                     */
                    std::string GetCookie() const;

                    /**
                     * 设置设置的cookie信息
                     * @param Cookie 设置的cookie信息
                     */
                    void SetCookie(const std::string& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     */
                    bool CookieHasBeenSet() const;

                    /**
                     * 获取POST 请求数据。空字符串表示非POST请求
                     * @return PostData POST 请求数据。空字符串表示非POST请求
                     */
                    std::string GetPostData() const;

                    /**
                     * 设置POST 请求数据。空字符串表示非POST请求
                     * @param PostData POST 请求数据。空字符串表示非POST请求
                     */
                    void SetPostData(const std::string& _postData);

                    /**
                     * 判断参数 PostData 是否已赋值
                     * @return PostData 是否已赋值
                     */
                    bool PostDataHasBeenSet() const;

                    /**
                     * 获取SSL协议版本
                     * @return SslVer SSL协议版本
                     */
                    std::string GetSslVer() const;

                    /**
                     * 设置SSL协议版本
                     * @param SslVer SSL协议版本
                     */
                    void SetSslVer(const std::string& _sslVer);

                    /**
                     * 判断参数 SslVer 是否已赋值
                     * @return SslVer 是否已赋值
                     */
                    bool SslVerHasBeenSet() const;

                    /**
                     * 获取是否为Header请求。非0 Header 请求
                     * @return IsHeader 是否为Header请求。非0 Header 请求
                     */
                    uint64_t GetIsHeader() const;

                    /**
                     * 设置是否为Header请求。非0 Header 请求
                     * @param IsHeader 是否为Header请求。非0 Header 请求
                     */
                    void SetIsHeader(const uint64_t& _isHeader);

                    /**
                     * 判断参数 IsHeader 是否已赋值
                     * @return IsHeader 是否已赋值
                     */
                    bool IsHeaderHasBeenSet() const;

                    /**
                     * 获取目的dns服务器
                     * @return DnsSvr 目的dns服务器
                     */
                    std::string GetDnsSvr() const;

                    /**
                     * 设置目的dns服务器
                     * @param DnsSvr 目的dns服务器
                     */
                    void SetDnsSvr(const std::string& _dnsSvr);

                    /**
                     * 判断参数 DnsSvr 是否已赋值
                     * @return DnsSvr 是否已赋值
                     */
                    bool DnsSvrHasBeenSet() const;

                    /**
                     * 获取需要检验是否在dns ip列表的ip
                     * @return DnsCheckIp 需要检验是否在dns ip列表的ip
                     */
                    std::string GetDnsCheckIp() const;

                    /**
                     * 设置需要检验是否在dns ip列表的ip
                     * @param DnsCheckIp 需要检验是否在dns ip列表的ip
                     */
                    void SetDnsCheckIp(const std::string& _dnsCheckIp);

                    /**
                     * 判断参数 DnsCheckIp 是否已赋值
                     * @return DnsCheckIp 是否已赋值
                     */
                    bool DnsCheckIpHasBeenSet() const;

                    /**
                     * 获取dns查询类型
                     * @return DnsQueryType dns查询类型
                     */
                    std::string GetDnsQueryType() const;

                    /**
                     * 设置dns查询类型
                     * @param DnsQueryType dns查询类型
                     */
                    void SetDnsQueryType(const std::string& _dnsQueryType);

                    /**
                     * 判断参数 DnsQueryType 是否已赋值
                     * @return DnsQueryType 是否已赋值
                     */
                    bool DnsQueryTypeHasBeenSet() const;

                    /**
                     * 获取登陆服务器的账号
                     * @return UserName 登陆服务器的账号
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置登陆服务器的账号
                     * @param UserName 登陆服务器的账号
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取登陆服务器的密码
                     * @return PassWord 登陆服务器的密码
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置登陆服务器的密码
                     * @param PassWord 登陆服务器的密码
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取是否使用安全链接ssl  0 不使用，1 使用
                     * @return UseSecConn 是否使用安全链接ssl  0 不使用，1 使用
                     */
                    uint64_t GetUseSecConn() const;

                    /**
                     * 设置是否使用安全链接ssl  0 不使用，1 使用
                     * @param UseSecConn 是否使用安全链接ssl  0 不使用，1 使用
                     */
                    void SetUseSecConn(const uint64_t& _useSecConn);

                    /**
                     * 判断参数 UseSecConn 是否已赋值
                     * @return UseSecConn 是否已赋值
                     */
                    bool UseSecConnHasBeenSet() const;

                    /**
                     * 获取ftp登陆验证方式  0 不验证  1 匿名登陆  2 需要身份验证
                     * @return NeedAuth ftp登陆验证方式  0 不验证  1 匿名登陆  2 需要身份验证
                     */
                    uint64_t GetNeedAuth() const;

                    /**
                     * 设置ftp登陆验证方式  0 不验证  1 匿名登陆  2 需要身份验证
                     * @param NeedAuth ftp登陆验证方式  0 不验证  1 匿名登陆  2 需要身份验证
                     */
                    void SetNeedAuth(const uint64_t& _needAuth);

                    /**
                     * 判断参数 NeedAuth 是否已赋值
                     * @return NeedAuth 是否已赋值
                     */
                    bool NeedAuthHasBeenSet() const;

                    /**
                     * 获取请求数据类型。0 表示请求为字符串类型。1表示为二进制类型
                     * @return ReqDataType 请求数据类型。0 表示请求为字符串类型。1表示为二进制类型
                     */
                    uint64_t GetReqDataType() const;

                    /**
                     * 设置请求数据类型。0 表示请求为字符串类型。1表示为二进制类型
                     * @param ReqDataType 请求数据类型。0 表示请求为字符串类型。1表示为二进制类型
                     */
                    void SetReqDataType(const uint64_t& _reqDataType);

                    /**
                     * 判断参数 ReqDataType 是否已赋值
                     * @return ReqDataType 是否已赋值
                     */
                    bool ReqDataTypeHasBeenSet() const;

                    /**
                     * 获取发起tcp, udp请求的协议请求数据
                     * @return ReqData 发起tcp, udp请求的协议请求数据
                     */
                    std::string GetReqData() const;

                    /**
                     * 设置发起tcp, udp请求的协议请求数据
                     * @param ReqData 发起tcp, udp请求的协议请求数据
                     */
                    void SetReqData(const std::string& _reqData);

                    /**
                     * 判断参数 ReqData 是否已赋值
                     * @return ReqData 是否已赋值
                     */
                    bool ReqDataHasBeenSet() const;

                    /**
                     * 获取响应数据类型。0 表示响应为字符串类型。1表示为二进制类型
                     * @return RespDataType 响应数据类型。0 表示响应为字符串类型。1表示为二进制类型
                     */
                    uint64_t GetRespDataType() const;

                    /**
                     * 设置响应数据类型。0 表示响应为字符串类型。1表示为二进制类型
                     * @param RespDataType 响应数据类型。0 表示响应为字符串类型。1表示为二进制类型
                     */
                    void SetRespDataType(const uint64_t& _respDataType);

                    /**
                     * 判断参数 RespDataType 是否已赋值
                     * @return RespDataType 是否已赋值
                     */
                    bool RespDataTypeHasBeenSet() const;

                    /**
                     * 获取预期的udp请求的回应数据
                     * @return RespData 预期的udp请求的回应数据
                     */
                    std::string GetRespData() const;

                    /**
                     * 设置预期的udp请求的回应数据
                     * @param RespData 预期的udp请求的回应数据
                     */
                    void SetRespData(const std::string& _respData);

                    /**
                     * 判断参数 RespData 是否已赋值
                     * @return RespData 是否已赋值
                     */
                    bool RespDataHasBeenSet() const;

                    /**
                     * 获取跟随跳转次数
                     * @return RedirectFollowNum 跟随跳转次数
                     */
                    uint64_t GetRedirectFollowNum() const;

                    /**
                     * 设置跟随跳转次数
                     * @param RedirectFollowNum 跟随跳转次数
                     */
                    void SetRedirectFollowNum(const uint64_t& _redirectFollowNum);

                    /**
                     * 判断参数 RedirectFollowNum 是否已赋值
                     * @return RedirectFollowNum 是否已赋值
                     */
                    bool RedirectFollowNumHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 拨测类型。http, https, ping, tcp 之一
                     */
                    std::string m_catTypeName;
                    bool m_catTypeNameHasBeenSet;

                    /**
                     * 拨测任务的Url
                     */
                    std::string m_cgiUrl;
                    bool m_cgiUrlHasBeenSet;

                    /**
                     * 拨测分组id
                     */
                    uint64_t m_agentGroupId;
                    bool m_agentGroupIdHasBeenSet;

                    /**
                     * 告警策略组id
                     */
                    uint64_t m_policyGroupId;
                    bool m_policyGroupIdHasBeenSet;

                    /**
                     * 任务状态。1表示暂停，2表示运行中，0为初始态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 任务类型。0 站点监控，2 可用性监控
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 绑定的统一告警主题Id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 告警状态。0 未启用，1, 启用
                     */
                    uint64_t m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * 指定的域名
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 拨测目标的端口号
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 要在结果中进行匹配的字符串
                     */
                    std::string m_checkStr;
                    bool m_checkStrHasBeenSet;

                    /**
                     * 1 表示通过检查结果是否包含CheckStr 进行校验
                     */
                    uint64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * 用户agent 信息
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 设置的cookie信息
                     */
                    std::string m_cookie;
                    bool m_cookieHasBeenSet;

                    /**
                     * POST 请求数据。空字符串表示非POST请求
                     */
                    std::string m_postData;
                    bool m_postDataHasBeenSet;

                    /**
                     * SSL协议版本
                     */
                    std::string m_sslVer;
                    bool m_sslVerHasBeenSet;

                    /**
                     * 是否为Header请求。非0 Header 请求
                     */
                    uint64_t m_isHeader;
                    bool m_isHeaderHasBeenSet;

                    /**
                     * 目的dns服务器
                     */
                    std::string m_dnsSvr;
                    bool m_dnsSvrHasBeenSet;

                    /**
                     * 需要检验是否在dns ip列表的ip
                     */
                    std::string m_dnsCheckIp;
                    bool m_dnsCheckIpHasBeenSet;

                    /**
                     * dns查询类型
                     */
                    std::string m_dnsQueryType;
                    bool m_dnsQueryTypeHasBeenSet;

                    /**
                     * 登陆服务器的账号
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 登陆服务器的密码
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * 是否使用安全链接ssl  0 不使用，1 使用
                     */
                    uint64_t m_useSecConn;
                    bool m_useSecConnHasBeenSet;

                    /**
                     * ftp登陆验证方式  0 不验证  1 匿名登陆  2 需要身份验证
                     */
                    uint64_t m_needAuth;
                    bool m_needAuthHasBeenSet;

                    /**
                     * 请求数据类型。0 表示请求为字符串类型。1表示为二进制类型
                     */
                    uint64_t m_reqDataType;
                    bool m_reqDataTypeHasBeenSet;

                    /**
                     * 发起tcp, udp请求的协议请求数据
                     */
                    std::string m_reqData;
                    bool m_reqDataHasBeenSet;

                    /**
                     * 响应数据类型。0 表示响应为字符串类型。1表示为二进制类型
                     */
                    uint64_t m_respDataType;
                    bool m_respDataTypeHasBeenSet;

                    /**
                     * 预期的udp请求的回应数据
                     */
                    std::string m_respData;
                    bool m_respDataHasBeenSet;

                    /**
                     * 跟随跳转次数
                     */
                    uint64_t m_redirectFollowNum;
                    bool m_redirectFollowNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_CATTASKDETAIL_H_
