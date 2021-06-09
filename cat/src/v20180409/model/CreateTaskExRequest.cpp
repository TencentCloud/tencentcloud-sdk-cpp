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

#include <tencentcloud/cat/v20180409/model/CreateTaskExRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

CreateTaskExRequest::CreateTaskExRequest() :
    m_catTypeNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_agentGroupIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_isHeaderHasBeenSet(false),
    m_sslVerHasBeenSet(false),
    m_postDataHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_checkStrHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_cookieHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_reqDataTypeHasBeenSet(false),
    m_reqDataHasBeenSet(false),
    m_respDataTypeHasBeenSet(false),
    m_respDataHasBeenSet(false),
    m_dnsSvrHasBeenSet(false),
    m_dnsCheckIpHasBeenSet(false),
    m_dnsQueryTypeHasBeenSet(false),
    m_useSecConnHasBeenSet(false),
    m_needAuthHasBeenSet(false),
    m_portHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isVerifyHasBeenSet(false),
    m_redirectFollowNumHasBeenSet(false)
{
}

string CreateTaskExRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatTypeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_agentGroupId, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_isHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isHeader, allocator);
    }

    if (m_sslVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sslVer.c_str(), allocator).Move(), allocator);
    }

    if (m_postDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_postData.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkStr.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkType, allocator);
    }

    if (m_cookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cookie";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cookie.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_passWord.c_str(), allocator).Move(), allocator);
    }

    if (m_reqDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqDataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reqDataType, allocator);
    }

    if (m_reqDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reqData.c_str(), allocator).Move(), allocator);
    }

    if (m_respDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RespDataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_respDataType, allocator);
    }

    if (m_respDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RespData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_respData.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsSvrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsSvr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsSvr.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsCheckIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsCheckIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsCheckIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsQueryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsQueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsQueryType.c_str(), allocator).Move(), allocator);
    }

    if (m_useSecConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseSecConn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useSecConn, allocator);
    }

    if (m_needAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needAuth, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_isVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVerify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isVerify, allocator);
    }

    if (m_redirectFollowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectFollowNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redirectFollowNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskExRequest::GetCatTypeName() const
{
    return m_catTypeName;
}

void CreateTaskExRequest::SetCatTypeName(const string& _catTypeName)
{
    m_catTypeName = _catTypeName;
    m_catTypeNameHasBeenSet = true;
}

bool CreateTaskExRequest::CatTypeNameHasBeenSet() const
{
    return m_catTypeNameHasBeenSet;
}

string CreateTaskExRequest::GetUrl() const
{
    return m_url;
}

void CreateTaskExRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateTaskExRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t CreateTaskExRequest::GetPeriod() const
{
    return m_period;
}

void CreateTaskExRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateTaskExRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateTaskExRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateTaskExRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateTaskExRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t CreateTaskExRequest::GetAgentGroupId() const
{
    return m_agentGroupId;
}

void CreateTaskExRequest::SetAgentGroupId(const uint64_t& _agentGroupId)
{
    m_agentGroupId = _agentGroupId;
    m_agentGroupIdHasBeenSet = true;
}

bool CreateTaskExRequest::AgentGroupIdHasBeenSet() const
{
    return m_agentGroupIdHasBeenSet;
}

string CreateTaskExRequest::GetHost() const
{
    return m_host;
}

void CreateTaskExRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CreateTaskExRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

uint64_t CreateTaskExRequest::GetIsHeader() const
{
    return m_isHeader;
}

void CreateTaskExRequest::SetIsHeader(const uint64_t& _isHeader)
{
    m_isHeader = _isHeader;
    m_isHeaderHasBeenSet = true;
}

bool CreateTaskExRequest::IsHeaderHasBeenSet() const
{
    return m_isHeaderHasBeenSet;
}

string CreateTaskExRequest::GetSslVer() const
{
    return m_sslVer;
}

void CreateTaskExRequest::SetSslVer(const string& _sslVer)
{
    m_sslVer = _sslVer;
    m_sslVerHasBeenSet = true;
}

bool CreateTaskExRequest::SslVerHasBeenSet() const
{
    return m_sslVerHasBeenSet;
}

string CreateTaskExRequest::GetPostData() const
{
    return m_postData;
}

void CreateTaskExRequest::SetPostData(const string& _postData)
{
    m_postData = _postData;
    m_postDataHasBeenSet = true;
}

bool CreateTaskExRequest::PostDataHasBeenSet() const
{
    return m_postDataHasBeenSet;
}

string CreateTaskExRequest::GetUserAgent() const
{
    return m_userAgent;
}

void CreateTaskExRequest::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool CreateTaskExRequest::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string CreateTaskExRequest::GetCheckStr() const
{
    return m_checkStr;
}

void CreateTaskExRequest::SetCheckStr(const string& _checkStr)
{
    m_checkStr = _checkStr;
    m_checkStrHasBeenSet = true;
}

bool CreateTaskExRequest::CheckStrHasBeenSet() const
{
    return m_checkStrHasBeenSet;
}

uint64_t CreateTaskExRequest::GetCheckType() const
{
    return m_checkType;
}

void CreateTaskExRequest::SetCheckType(const uint64_t& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool CreateTaskExRequest::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string CreateTaskExRequest::GetCookie() const
{
    return m_cookie;
}

void CreateTaskExRequest::SetCookie(const string& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool CreateTaskExRequest::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}

uint64_t CreateTaskExRequest::GetTaskId() const
{
    return m_taskId;
}

void CreateTaskExRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateTaskExRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateTaskExRequest::GetUserName() const
{
    return m_userName;
}

void CreateTaskExRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateTaskExRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateTaskExRequest::GetPassWord() const
{
    return m_passWord;
}

void CreateTaskExRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool CreateTaskExRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

uint64_t CreateTaskExRequest::GetReqDataType() const
{
    return m_reqDataType;
}

void CreateTaskExRequest::SetReqDataType(const uint64_t& _reqDataType)
{
    m_reqDataType = _reqDataType;
    m_reqDataTypeHasBeenSet = true;
}

bool CreateTaskExRequest::ReqDataTypeHasBeenSet() const
{
    return m_reqDataTypeHasBeenSet;
}

string CreateTaskExRequest::GetReqData() const
{
    return m_reqData;
}

void CreateTaskExRequest::SetReqData(const string& _reqData)
{
    m_reqData = _reqData;
    m_reqDataHasBeenSet = true;
}

bool CreateTaskExRequest::ReqDataHasBeenSet() const
{
    return m_reqDataHasBeenSet;
}

uint64_t CreateTaskExRequest::GetRespDataType() const
{
    return m_respDataType;
}

void CreateTaskExRequest::SetRespDataType(const uint64_t& _respDataType)
{
    m_respDataType = _respDataType;
    m_respDataTypeHasBeenSet = true;
}

bool CreateTaskExRequest::RespDataTypeHasBeenSet() const
{
    return m_respDataTypeHasBeenSet;
}

string CreateTaskExRequest::GetRespData() const
{
    return m_respData;
}

void CreateTaskExRequest::SetRespData(const string& _respData)
{
    m_respData = _respData;
    m_respDataHasBeenSet = true;
}

bool CreateTaskExRequest::RespDataHasBeenSet() const
{
    return m_respDataHasBeenSet;
}

string CreateTaskExRequest::GetDnsSvr() const
{
    return m_dnsSvr;
}

void CreateTaskExRequest::SetDnsSvr(const string& _dnsSvr)
{
    m_dnsSvr = _dnsSvr;
    m_dnsSvrHasBeenSet = true;
}

bool CreateTaskExRequest::DnsSvrHasBeenSet() const
{
    return m_dnsSvrHasBeenSet;
}

string CreateTaskExRequest::GetDnsCheckIp() const
{
    return m_dnsCheckIp;
}

void CreateTaskExRequest::SetDnsCheckIp(const string& _dnsCheckIp)
{
    m_dnsCheckIp = _dnsCheckIp;
    m_dnsCheckIpHasBeenSet = true;
}

bool CreateTaskExRequest::DnsCheckIpHasBeenSet() const
{
    return m_dnsCheckIpHasBeenSet;
}

string CreateTaskExRequest::GetDnsQueryType() const
{
    return m_dnsQueryType;
}

void CreateTaskExRequest::SetDnsQueryType(const string& _dnsQueryType)
{
    m_dnsQueryType = _dnsQueryType;
    m_dnsQueryTypeHasBeenSet = true;
}

bool CreateTaskExRequest::DnsQueryTypeHasBeenSet() const
{
    return m_dnsQueryTypeHasBeenSet;
}

uint64_t CreateTaskExRequest::GetUseSecConn() const
{
    return m_useSecConn;
}

void CreateTaskExRequest::SetUseSecConn(const uint64_t& _useSecConn)
{
    m_useSecConn = _useSecConn;
    m_useSecConnHasBeenSet = true;
}

bool CreateTaskExRequest::UseSecConnHasBeenSet() const
{
    return m_useSecConnHasBeenSet;
}

uint64_t CreateTaskExRequest::GetNeedAuth() const
{
    return m_needAuth;
}

void CreateTaskExRequest::SetNeedAuth(const uint64_t& _needAuth)
{
    m_needAuth = _needAuth;
    m_needAuthHasBeenSet = true;
}

bool CreateTaskExRequest::NeedAuthHasBeenSet() const
{
    return m_needAuthHasBeenSet;
}

uint64_t CreateTaskExRequest::GetPort() const
{
    return m_port;
}

void CreateTaskExRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateTaskExRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t CreateTaskExRequest::GetType() const
{
    return m_type;
}

void CreateTaskExRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateTaskExRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t CreateTaskExRequest::GetIsVerify() const
{
    return m_isVerify;
}

void CreateTaskExRequest::SetIsVerify(const uint64_t& _isVerify)
{
    m_isVerify = _isVerify;
    m_isVerifyHasBeenSet = true;
}

bool CreateTaskExRequest::IsVerifyHasBeenSet() const
{
    return m_isVerifyHasBeenSet;
}

uint64_t CreateTaskExRequest::GetRedirectFollowNum() const
{
    return m_redirectFollowNum;
}

void CreateTaskExRequest::SetRedirectFollowNum(const uint64_t& _redirectFollowNum)
{
    m_redirectFollowNum = _redirectFollowNum;
    m_redirectFollowNumHasBeenSet = true;
}

bool CreateTaskExRequest::RedirectFollowNumHasBeenSet() const
{
    return m_redirectFollowNumHasBeenSet;
}


