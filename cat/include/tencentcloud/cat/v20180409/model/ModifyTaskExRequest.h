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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_MODIFYTASKEXREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_MODIFYTASKEXREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyTaskEx请求参数结构体
                */
                class ModifyTaskExRequest : public AbstractModel
                {
                public:
                    ModifyTaskExRequest();
                    ~ModifyTaskExRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取http, https, ping, tcp, ftp, smtp, udp, dns 之一
                     * @return CatTypeName http, https, ping, tcp, ftp, smtp, udp, dns 之一
                     */
                    std::string GetCatTypeName() const;

                    /**
                     * 设置http, https, ping, tcp, ftp, smtp, udp, dns 之一
                     * @param CatTypeName http, https, ping, tcp, ftp, smtp, udp, dns 之一
                     */
                    void SetCatTypeName(const std::string& _catTypeName);

                    /**
                     * 判断参数 CatTypeName 是否已赋值
                     * @return CatTypeName 是否已赋值
                     */
                    bool CatTypeNameHasBeenSet() const;

                    /**
                     * 获取拨测的URL，例如：www.qq.com (URL域名解析需要能解析出具体的IP)
                     * @return Url 拨测的URL，例如：www.qq.com (URL域名解析需要能解析出具体的IP)
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置拨测的URL，例如：www.qq.com (URL域名解析需要能解析出具体的IP)
                     * @param Url 拨测的URL，例如：www.qq.com (URL域名解析需要能解析出具体的IP)
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取拨测周期。取值可为1,5,15,30之一, 单位：分钟。精度不能低于用户等级规定的最小精度
                     * @return Period 拨测周期。取值可为1,5,15,30之一, 单位：分钟。精度不能低于用户等级规定的最小精度
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置拨测周期。取值可为1,5,15,30之一, 单位：分钟。精度不能低于用户等级规定的最小精度
                     * @param Period 拨测周期。取值可为1,5,15,30之一, 单位：分钟。精度不能低于用户等级规定的最小精度
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取拨测任务名称不能超过32个字符。同一个用户创建的任务名不可重复
                     * @return TaskName 拨测任务名称不能超过32个字符。同一个用户创建的任务名不可重复
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置拨测任务名称不能超过32个字符。同一个用户创建的任务名不可重复
                     * @param TaskName 拨测任务名称不能超过32个字符。同一个用户创建的任务名不可重复
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取验证成功的拨测任务ID
                     * @return TaskId 验证成功的拨测任务ID
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置验证成功的拨测任务ID
                     * @param TaskId 验证成功的拨测任务ID
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取拨测分组ID，体现本拨测任务要采用哪些运营商作为拨测源。一般可直接填写本用户的默认拨测分组。参见：DescribeAgentGroupList 接口，本参数使用返回结果里的GroupId的值。注意，Type为0时，AgentGroupId为必填
                     * @return AgentGroupId 拨测分组ID，体现本拨测任务要采用哪些运营商作为拨测源。一般可直接填写本用户的默认拨测分组。参见：DescribeAgentGroupList 接口，本参数使用返回结果里的GroupId的值。注意，Type为0时，AgentGroupId为必填
                     */
                    uint64_t GetAgentGroupId() const;

                    /**
                     * 设置拨测分组ID，体现本拨测任务要采用哪些运营商作为拨测源。一般可直接填写本用户的默认拨测分组。参见：DescribeAgentGroupList 接口，本参数使用返回结果里的GroupId的值。注意，Type为0时，AgentGroupId为必填
                     * @param AgentGroupId 拨测分组ID，体现本拨测任务要采用哪些运营商作为拨测源。一般可直接填写本用户的默认拨测分组。参见：DescribeAgentGroupList 接口，本参数使用返回结果里的GroupId的值。注意，Type为0时，AgentGroupId为必填
                     */
                    void SetAgentGroupId(const uint64_t& _agentGroupId);

                    /**
                     * 判断参数 AgentGroupId 是否已赋值
                     * @return AgentGroupId 是否已赋值
                     */
                    bool AgentGroupIdHasBeenSet() const;

                    /**
                     * 获取指定域名(如需要)
                     * @return Host 指定域名(如需要)
                     */
                    std::string GetHost() const;

                    /**
                     * 设置指定域名(如需要)
                     * @param Host 指定域名(如需要)
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
                     * 获取是否为Header请求（非0 发起Header 请求。为0，且PostData非空，发起POST请求。为0，PostData为空，发起GET请求）
                     * @return IsHeader 是否为Header请求（非0 发起Header 请求。为0，且PostData非空，发起POST请求。为0，PostData为空，发起GET请求）
                     */
                    uint64_t GetIsHeader() const;

                    /**
                     * 设置是否为Header请求（非0 发起Header 请求。为0，且PostData非空，发起POST请求。为0，PostData为空，发起GET请求）
                     * @param IsHeader 是否为Header请求（非0 发起Header 请求。为0，且PostData非空，发起POST请求。为0，PostData为空，发起GET请求）
                     */
                    void SetIsHeader(const uint64_t& _isHeader);

                    /**
                     * 判断参数 IsHeader 是否已赋值
                     * @return IsHeader 是否已赋值
                     */
                    bool IsHeaderHasBeenSet() const;

                    /**
                     * 获取URL中含有"https"时有用。缺省为SSLv23。需要为 TLSv1_2, TLSv1_1, TLSv1, SSLv2, SSLv23, SSLv3 之一
                     * @return SslVer URL中含有"https"时有用。缺省为SSLv23。需要为 TLSv1_2, TLSv1_1, TLSv1, SSLv2, SSLv23, SSLv3 之一
                     */
                    std::string GetSslVer() const;

                    /**
                     * 设置URL中含有"https"时有用。缺省为SSLv23。需要为 TLSv1_2, TLSv1_1, TLSv1, SSLv2, SSLv23, SSLv3 之一
                     * @param SslVer URL中含有"https"时有用。缺省为SSLv23。需要为 TLSv1_2, TLSv1_1, TLSv1, SSLv2, SSLv23, SSLv3 之一
                     */
                    void SetSslVer(const std::string& _sslVer);

                    /**
                     * 判断参数 SslVer 是否已赋值
                     * @return SslVer 是否已赋值
                     */
                    bool SslVerHasBeenSet() const;

                    /**
                     * 获取POST 请求数据，空字符串表示非POST请求
                     * @return PostData POST 请求数据，空字符串表示非POST请求
                     */
                    std::string GetPostData() const;

                    /**
                     * 设置POST 请求数据，空字符串表示非POST请求
                     * @param PostData POST 请求数据，空字符串表示非POST请求
                     */
                    void SetPostData(const std::string& _postData);

                    /**
                     * 判断参数 PostData 是否已赋值
                     * @return PostData 是否已赋值
                     */
                    bool PostDataHasBeenSet() const;

                    /**
                     * 获取用户Agent信息
                     * @return UserAgent 用户Agent信息
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置用户Agent信息
                     * @param UserAgent 用户Agent信息
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     */
                    bool UserAgentHasBeenSet() const;

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
                     * 获取需要设置的Cookie信息
                     * @return Cookie 需要设置的Cookie信息
                     */
                    std::string GetCookie() const;

                    /**
                     * 设置需要设置的Cookie信息
                     * @param Cookie 需要设置的Cookie信息
                     */
                    void SetCookie(const std::string& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     */
                    bool CookieHasBeenSet() const;

                    /**
                     * 获取登录服务器的账号。如果为空字符串，表示不用校验用户密码。只做简单连接服务器的拨测
                     * @return UserName 登录服务器的账号。如果为空字符串，表示不用校验用户密码。只做简单连接服务器的拨测
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置登录服务器的账号。如果为空字符串，表示不用校验用户密码。只做简单连接服务器的拨测
                     * @param UserName 登录服务器的账号。如果为空字符串，表示不用校验用户密码。只做简单连接服务器的拨测
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取登录服务器的密码
                     * @return PassWord 登录服务器的密码
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置登录服务器的密码
                     * @param PassWord 登录服务器的密码
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取缺省为0，0 表示请求为字符串类型, 1表示为二进制类型
                     * @return ReqDataType 缺省为0，0 表示请求为字符串类型, 1表示为二进制类型
                     */
                    uint64_t GetReqDataType() const;

                    /**
                     * 设置缺省为0，0 表示请求为字符串类型, 1表示为二进制类型
                     * @param ReqDataType 缺省为0，0 表示请求为字符串类型, 1表示为二进制类型
                     */
                    void SetReqDataType(const uint64_t& _reqDataType);

                    /**
                     * 判断参数 ReqDataType 是否已赋值
                     * @return ReqDataType 是否已赋值
                     */
                    bool ReqDataTypeHasBeenSet() const;

                    /**
                     * 获取发起TCP, UDP请求的协议请求数据
                     * @return ReqData 发起TCP, UDP请求的协议请求数据
                     */
                    std::string GetReqData() const;

                    /**
                     * 设置发起TCP, UDP请求的协议请求数据
                     * @param ReqData 发起TCP, UDP请求的协议请求数据
                     */
                    void SetReqData(const std::string& _reqData);

                    /**
                     * 判断参数 ReqData 是否已赋值
                     * @return ReqData 是否已赋值
                     */
                    bool ReqDataHasBeenSet() const;

                    /**
                     * 获取缺省为0。0 表示请求为字符串类型。1表示为二进制类型
                     * @return RespDataType 缺省为0。0 表示请求为字符串类型。1表示为二进制类型
                     */
                    std::string GetRespDataType() const;

                    /**
                     * 设置缺省为0。0 表示请求为字符串类型。1表示为二进制类型
                     * @param RespDataType 缺省为0。0 表示请求为字符串类型。1表示为二进制类型
                     */
                    void SetRespDataType(const std::string& _respDataType);

                    /**
                     * 判断参数 RespDataType 是否已赋值
                     * @return RespDataType 是否已赋值
                     */
                    bool RespDataTypeHasBeenSet() const;

                    /**
                     * 获取预期的UDP请求的回应数据。字符串型，只需要返回的结果里包含本字符串算校验通过。二进制型，则需要严格等于才算通过
                     * @return RespData 预期的UDP请求的回应数据。字符串型，只需要返回的结果里包含本字符串算校验通过。二进制型，则需要严格等于才算通过
                     */
                    std::string GetRespData() const;

                    /**
                     * 设置预期的UDP请求的回应数据。字符串型，只需要返回的结果里包含本字符串算校验通过。二进制型，则需要严格等于才算通过
                     * @param RespData 预期的UDP请求的回应数据。字符串型，只需要返回的结果里包含本字符串算校验通过。二进制型，则需要严格等于才算通过
                     */
                    void SetRespData(const std::string& _respData);

                    /**
                     * 判断参数 RespData 是否已赋值
                     * @return RespData 是否已赋值
                     */
                    bool RespDataHasBeenSet() const;

                    /**
                     * 获取目的DNS服务器，可以为空字符串
                     * @return DnsSvr 目的DNS服务器，可以为空字符串
                     */
                    std::string GetDnsSvr() const;

                    /**
                     * 设置目的DNS服务器，可以为空字符串
                     * @param DnsSvr 目的DNS服务器，可以为空字符串
                     */
                    void SetDnsSvr(const std::string& _dnsSvr);

                    /**
                     * 判断参数 DnsSvr 是否已赋值
                     * @return DnsSvr 是否已赋值
                     */
                    bool DnsSvrHasBeenSet() const;

                    /**
                     * 获取需要检验是否在DNS IP列表的IP。可以为空字符串，表示不校验
                     * @return DnsCheckIp 需要检验是否在DNS IP列表的IP。可以为空字符串，表示不校验
                     */
                    std::string GetDnsCheckIp() const;

                    /**
                     * 设置需要检验是否在DNS IP列表的IP。可以为空字符串，表示不校验
                     * @param DnsCheckIp 需要检验是否在DNS IP列表的IP。可以为空字符串，表示不校验
                     */
                    void SetDnsCheckIp(const std::string& _dnsCheckIp);

                    /**
                     * 判断参数 DnsCheckIp 是否已赋值
                     * @return DnsCheckIp 是否已赋值
                     */
                    bool DnsCheckIpHasBeenSet() const;

                    /**
                     * 获取需要为下列值之一。缺省为A。A, MX, NS, CNAME, TXT, ANY
                     * @return DnsQueryType 需要为下列值之一。缺省为A。A, MX, NS, CNAME, TXT, ANY
                     */
                    std::string GetDnsQueryType() const;

                    /**
                     * 设置需要为下列值之一。缺省为A。A, MX, NS, CNAME, TXT, ANY
                     * @param DnsQueryType 需要为下列值之一。缺省为A。A, MX, NS, CNAME, TXT, ANY
                     */
                    void SetDnsQueryType(const std::string& _dnsQueryType);

                    /**
                     * 判断参数 DnsQueryType 是否已赋值
                     * @return DnsQueryType 是否已赋值
                     */
                    bool DnsQueryTypeHasBeenSet() const;

                    /**
                     * 获取是否使用安全链接SSL， 0 不使用，1 使用
                     * @return UseSecConn 是否使用安全链接SSL， 0 不使用，1 使用
                     */
                    uint64_t GetUseSecConn() const;

                    /**
                     * 设置是否使用安全链接SSL， 0 不使用，1 使用
                     * @param UseSecConn 是否使用安全链接SSL， 0 不使用，1 使用
                     */
                    void SetUseSecConn(const uint64_t& _useSecConn);

                    /**
                     * 判断参数 UseSecConn 是否已赋值
                     * @return UseSecConn 是否已赋值
                     */
                    bool UseSecConnHasBeenSet() const;

                    /**
                     * 获取FTP登录验证方式，  0 不验证  1 匿名登录  2 需要身份验证
                     * @return NeedAuth FTP登录验证方式，  0 不验证  1 匿名登录  2 需要身份验证
                     */
                    uint64_t GetNeedAuth() const;

                    /**
                     * 设置FTP登录验证方式，  0 不验证  1 匿名登录  2 需要身份验证
                     * @param NeedAuth FTP登录验证方式，  0 不验证  1 匿名登录  2 需要身份验证
                     */
                    void SetNeedAuth(const uint64_t& _needAuth);

                    /**
                     * 判断参数 NeedAuth 是否已赋值
                     * @return NeedAuth 是否已赋值
                     */
                    bool NeedAuthHasBeenSet() const;

                    /**
                     * 获取Type=0 默认 （站点监控） Type=2 可用率监控
                     * @return Type Type=0 默认 （站点监控） Type=2 可用率监控
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Type=0 默认 （站点监控） Type=2 可用率监控
                     * @param Type Type=0 默认 （站点监控） Type=2 可用率监控
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取跟随跳转次数，取值范围0-5，不传则表示不跟随
                     * @return RedirectFollowNum 跟随跳转次数，取值范围0-5，不传则表示不跟随
                     */
                    uint64_t GetRedirectFollowNum() const;

                    /**
                     * 设置跟随跳转次数，取值范围0-5，不传则表示不跟随
                     * @param RedirectFollowNum 跟随跳转次数，取值范围0-5，不传则表示不跟随
                     */
                    void SetRedirectFollowNum(const uint64_t& _redirectFollowNum);

                    /**
                     * 判断参数 RedirectFollowNum 是否已赋值
                     * @return RedirectFollowNum 是否已赋值
                     */
                    bool RedirectFollowNumHasBeenSet() const;

                private:

                    /**
                     * http, https, ping, tcp, ftp, smtp, udp, dns 之一
                     */
                    std::string m_catTypeName;
                    bool m_catTypeNameHasBeenSet;

                    /**
                     * 拨测的URL，例如：www.qq.com (URL域名解析需要能解析出具体的IP)
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 拨测周期。取值可为1,5,15,30之一, 单位：分钟。精度不能低于用户等级规定的最小精度
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 拨测任务名称不能超过32个字符。同一个用户创建的任务名不可重复
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 验证成功的拨测任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 拨测分组ID，体现本拨测任务要采用哪些运营商作为拨测源。一般可直接填写本用户的默认拨测分组。参见：DescribeAgentGroupList 接口，本参数使用返回结果里的GroupId的值。注意，Type为0时，AgentGroupId为必填
                     */
                    uint64_t m_agentGroupId;
                    bool m_agentGroupIdHasBeenSet;

                    /**
                     * 指定域名(如需要)
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 拨测目标的端口号
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 是否为Header请求（非0 发起Header 请求。为0，且PostData非空，发起POST请求。为0，PostData为空，发起GET请求）
                     */
                    uint64_t m_isHeader;
                    bool m_isHeaderHasBeenSet;

                    /**
                     * URL中含有"https"时有用。缺省为SSLv23。需要为 TLSv1_2, TLSv1_1, TLSv1, SSLv2, SSLv23, SSLv3 之一
                     */
                    std::string m_sslVer;
                    bool m_sslVerHasBeenSet;

                    /**
                     * POST 请求数据，空字符串表示非POST请求
                     */
                    std::string m_postData;
                    bool m_postDataHasBeenSet;

                    /**
                     * 用户Agent信息
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

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
                     * 需要设置的Cookie信息
                     */
                    std::string m_cookie;
                    bool m_cookieHasBeenSet;

                    /**
                     * 登录服务器的账号。如果为空字符串，表示不用校验用户密码。只做简单连接服务器的拨测
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 登录服务器的密码
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * 缺省为0，0 表示请求为字符串类型, 1表示为二进制类型
                     */
                    uint64_t m_reqDataType;
                    bool m_reqDataTypeHasBeenSet;

                    /**
                     * 发起TCP, UDP请求的协议请求数据
                     */
                    std::string m_reqData;
                    bool m_reqDataHasBeenSet;

                    /**
                     * 缺省为0。0 表示请求为字符串类型。1表示为二进制类型
                     */
                    std::string m_respDataType;
                    bool m_respDataTypeHasBeenSet;

                    /**
                     * 预期的UDP请求的回应数据。字符串型，只需要返回的结果里包含本字符串算校验通过。二进制型，则需要严格等于才算通过
                     */
                    std::string m_respData;
                    bool m_respDataHasBeenSet;

                    /**
                     * 目的DNS服务器，可以为空字符串
                     */
                    std::string m_dnsSvr;
                    bool m_dnsSvrHasBeenSet;

                    /**
                     * 需要检验是否在DNS IP列表的IP。可以为空字符串，表示不校验
                     */
                    std::string m_dnsCheckIp;
                    bool m_dnsCheckIpHasBeenSet;

                    /**
                     * 需要为下列值之一。缺省为A。A, MX, NS, CNAME, TXT, ANY
                     */
                    std::string m_dnsQueryType;
                    bool m_dnsQueryTypeHasBeenSet;

                    /**
                     * 是否使用安全链接SSL， 0 不使用，1 使用
                     */
                    uint64_t m_useSecConn;
                    bool m_useSecConnHasBeenSet;

                    /**
                     * FTP登录验证方式，  0 不验证  1 匿名登录  2 需要身份验证
                     */
                    uint64_t m_needAuth;
                    bool m_needAuthHasBeenSet;

                    /**
                     * Type=0 默认 （站点监控） Type=2 可用率监控
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 跟随跳转次数，取值范围0-5，不传则表示不跟随
                     */
                    uint64_t m_redirectFollowNum;
                    bool m_redirectFollowNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_MODIFYTASKEXREQUEST_H_
