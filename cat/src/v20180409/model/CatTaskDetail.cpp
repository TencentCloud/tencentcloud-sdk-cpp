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

#include <tencentcloud/cat/v20180409/model/CatTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

CatTaskDetail::CatTaskDetail() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_catTypeNameHasBeenSet(false),
    m_cgiUrlHasBeenSet(false),
    m_agentGroupIdHasBeenSet(false),
    m_policyGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_alarmStatusHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_checkStrHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_cookieHasBeenSet(false),
    m_postDataHasBeenSet(false),
    m_sslVerHasBeenSet(false),
    m_isHeaderHasBeenSet(false),
    m_dnsSvrHasBeenSet(false),
    m_dnsCheckIpHasBeenSet(false),
    m_dnsQueryTypeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_useSecConnHasBeenSet(false),
    m_needAuthHasBeenSet(false),
    m_reqDataTypeHasBeenSet(false),
    m_reqDataHasBeenSet(false),
    m_respDataTypeHasBeenSet(false),
    m_respDataHasBeenSet(false),
    m_redirectFollowNumHasBeenSet(false)
{
}

CoreInternalOutcome CatTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("CatTypeName") && !value["CatTypeName"].IsNull())
    {
        if (!value["CatTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.CatTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catTypeName = string(value["CatTypeName"].GetString());
        m_catTypeNameHasBeenSet = true;
    }

    if (value.HasMember("CgiUrl") && !value["CgiUrl"].IsNull())
    {
        if (!value["CgiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.CgiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cgiUrl = string(value["CgiUrl"].GetString());
        m_cgiUrlHasBeenSet = true;
    }

    if (value.HasMember("AgentGroupId") && !value["AgentGroupId"].IsNull())
    {
        if (!value["AgentGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.AgentGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentGroupId = value["AgentGroupId"].GetUint64();
        m_agentGroupIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyGroupId") && !value["PolicyGroupId"].IsNull())
    {
        if (!value["PolicyGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.PolicyGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyGroupId = value["PolicyGroupId"].GetUint64();
        m_policyGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmStatus") && !value["AlarmStatus"].IsNull())
    {
        if (!value["AlarmStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.AlarmStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmStatus = value["AlarmStatus"].GetUint64();
        m_alarmStatusHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("CheckStr") && !value["CheckStr"].IsNull())
    {
        if (!value["CheckStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.CheckStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStr = string(value["CheckStr"].GetString());
        m_checkStrHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.CheckType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = value["CheckType"].GetUint64();
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("Cookie") && !value["Cookie"].IsNull())
    {
        if (!value["Cookie"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.Cookie` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cookie = string(value["Cookie"].GetString());
        m_cookieHasBeenSet = true;
    }

    if (value.HasMember("PostData") && !value["PostData"].IsNull())
    {
        if (!value["PostData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.PostData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postData = string(value["PostData"].GetString());
        m_postDataHasBeenSet = true;
    }

    if (value.HasMember("SslVer") && !value["SslVer"].IsNull())
    {
        if (!value["SslVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.SslVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVer = string(value["SslVer"].GetString());
        m_sslVerHasBeenSet = true;
    }

    if (value.HasMember("IsHeader") && !value["IsHeader"].IsNull())
    {
        if (!value["IsHeader"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.IsHeader` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isHeader = value["IsHeader"].GetUint64();
        m_isHeaderHasBeenSet = true;
    }

    if (value.HasMember("DnsSvr") && !value["DnsSvr"].IsNull())
    {
        if (!value["DnsSvr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.DnsSvr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsSvr = string(value["DnsSvr"].GetString());
        m_dnsSvrHasBeenSet = true;
    }

    if (value.HasMember("DnsCheckIp") && !value["DnsCheckIp"].IsNull())
    {
        if (!value["DnsCheckIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.DnsCheckIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsCheckIp = string(value["DnsCheckIp"].GetString());
        m_dnsCheckIpHasBeenSet = true;
    }

    if (value.HasMember("DnsQueryType") && !value["DnsQueryType"].IsNull())
    {
        if (!value["DnsQueryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.DnsQueryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsQueryType = string(value["DnsQueryType"].GetString());
        m_dnsQueryTypeHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("PassWord") && !value["PassWord"].IsNull())
    {
        if (!value["PassWord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.PassWord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passWord = string(value["PassWord"].GetString());
        m_passWordHasBeenSet = true;
    }

    if (value.HasMember("UseSecConn") && !value["UseSecConn"].IsNull())
    {
        if (!value["UseSecConn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.UseSecConn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_useSecConn = value["UseSecConn"].GetUint64();
        m_useSecConnHasBeenSet = true;
    }

    if (value.HasMember("NeedAuth") && !value["NeedAuth"].IsNull())
    {
        if (!value["NeedAuth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.NeedAuth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_needAuth = value["NeedAuth"].GetUint64();
        m_needAuthHasBeenSet = true;
    }

    if (value.HasMember("ReqDataType") && !value["ReqDataType"].IsNull())
    {
        if (!value["ReqDataType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.ReqDataType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reqDataType = value["ReqDataType"].GetUint64();
        m_reqDataTypeHasBeenSet = true;
    }

    if (value.HasMember("ReqData") && !value["ReqData"].IsNull())
    {
        if (!value["ReqData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.ReqData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqData = string(value["ReqData"].GetString());
        m_reqDataHasBeenSet = true;
    }

    if (value.HasMember("RespDataType") && !value["RespDataType"].IsNull())
    {
        if (!value["RespDataType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.RespDataType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_respDataType = value["RespDataType"].GetUint64();
        m_respDataTypeHasBeenSet = true;
    }

    if (value.HasMember("RespData") && !value["RespData"].IsNull())
    {
        if (!value["RespData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.RespData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_respData = string(value["RespData"].GetString());
        m_respDataHasBeenSet = true;
    }

    if (value.HasMember("RedirectFollowNum") && !value["RedirectFollowNum"].IsNull())
    {
        if (!value["RedirectFollowNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatTaskDetail.RedirectFollowNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_redirectFollowNum = value["RedirectFollowNum"].GetUint64();
        m_redirectFollowNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CatTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_catTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_cgiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CgiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cgiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_agentGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentGroupId, allocator);
    }

    if (m_policyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyGroupId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmStatus, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_checkStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStr.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkType, allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cookie.c_str(), allocator).Move(), allocator);
    }

    if (m_postDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postData.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVer.c_str(), allocator).Move(), allocator);
    }

    if (m_isHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isHeader, allocator);
    }

    if (m_dnsSvrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsSvr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsSvr.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsCheckIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsCheckIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsCheckIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsQueryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsQueryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsQueryType.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passWord.c_str(), allocator).Move(), allocator);
    }

    if (m_useSecConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseSecConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useSecConn, allocator);
    }

    if (m_needAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needAuth, allocator);
    }

    if (m_reqDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqDataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reqDataType, allocator);
    }

    if (m_reqDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqData.c_str(), allocator).Move(), allocator);
    }

    if (m_respDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RespDataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_respDataType, allocator);
    }

    if (m_respDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RespData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_respData.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectFollowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectFollowNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redirectFollowNum, allocator);
    }

}


uint64_t CatTaskDetail::GetTaskId() const
{
    return m_taskId;
}

void CatTaskDetail::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CatTaskDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CatTaskDetail::GetTaskName() const
{
    return m_taskName;
}

void CatTaskDetail::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CatTaskDetail::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t CatTaskDetail::GetPeriod() const
{
    return m_period;
}

void CatTaskDetail::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CatTaskDetail::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CatTaskDetail::GetCatTypeName() const
{
    return m_catTypeName;
}

void CatTaskDetail::SetCatTypeName(const string& _catTypeName)
{
    m_catTypeName = _catTypeName;
    m_catTypeNameHasBeenSet = true;
}

bool CatTaskDetail::CatTypeNameHasBeenSet() const
{
    return m_catTypeNameHasBeenSet;
}

string CatTaskDetail::GetCgiUrl() const
{
    return m_cgiUrl;
}

void CatTaskDetail::SetCgiUrl(const string& _cgiUrl)
{
    m_cgiUrl = _cgiUrl;
    m_cgiUrlHasBeenSet = true;
}

bool CatTaskDetail::CgiUrlHasBeenSet() const
{
    return m_cgiUrlHasBeenSet;
}

uint64_t CatTaskDetail::GetAgentGroupId() const
{
    return m_agentGroupId;
}

void CatTaskDetail::SetAgentGroupId(const uint64_t& _agentGroupId)
{
    m_agentGroupId = _agentGroupId;
    m_agentGroupIdHasBeenSet = true;
}

bool CatTaskDetail::AgentGroupIdHasBeenSet() const
{
    return m_agentGroupIdHasBeenSet;
}

uint64_t CatTaskDetail::GetPolicyGroupId() const
{
    return m_policyGroupId;
}

void CatTaskDetail::SetPolicyGroupId(const uint64_t& _policyGroupId)
{
    m_policyGroupId = _policyGroupId;
    m_policyGroupIdHasBeenSet = true;
}

bool CatTaskDetail::PolicyGroupIdHasBeenSet() const
{
    return m_policyGroupIdHasBeenSet;
}

uint64_t CatTaskDetail::GetStatus() const
{
    return m_status;
}

void CatTaskDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CatTaskDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CatTaskDetail::GetAddTime() const
{
    return m_addTime;
}

void CatTaskDetail::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool CatTaskDetail::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

uint64_t CatTaskDetail::GetType() const
{
    return m_type;
}

void CatTaskDetail::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CatTaskDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CatTaskDetail::GetTopicId() const
{
    return m_topicId;
}

void CatTaskDetail::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CatTaskDetail::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

uint64_t CatTaskDetail::GetAlarmStatus() const
{
    return m_alarmStatus;
}

void CatTaskDetail::SetAlarmStatus(const uint64_t& _alarmStatus)
{
    m_alarmStatus = _alarmStatus;
    m_alarmStatusHasBeenSet = true;
}

bool CatTaskDetail::AlarmStatusHasBeenSet() const
{
    return m_alarmStatusHasBeenSet;
}

string CatTaskDetail::GetHost() const
{
    return m_host;
}

void CatTaskDetail::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CatTaskDetail::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

uint64_t CatTaskDetail::GetPort() const
{
    return m_port;
}

void CatTaskDetail::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CatTaskDetail::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CatTaskDetail::GetCheckStr() const
{
    return m_checkStr;
}

void CatTaskDetail::SetCheckStr(const string& _checkStr)
{
    m_checkStr = _checkStr;
    m_checkStrHasBeenSet = true;
}

bool CatTaskDetail::CheckStrHasBeenSet() const
{
    return m_checkStrHasBeenSet;
}

uint64_t CatTaskDetail::GetCheckType() const
{
    return m_checkType;
}

void CatTaskDetail::SetCheckType(const uint64_t& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool CatTaskDetail::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string CatTaskDetail::GetUserAgent() const
{
    return m_userAgent;
}

void CatTaskDetail::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool CatTaskDetail::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string CatTaskDetail::GetCookie() const
{
    return m_cookie;
}

void CatTaskDetail::SetCookie(const string& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool CatTaskDetail::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}

string CatTaskDetail::GetPostData() const
{
    return m_postData;
}

void CatTaskDetail::SetPostData(const string& _postData)
{
    m_postData = _postData;
    m_postDataHasBeenSet = true;
}

bool CatTaskDetail::PostDataHasBeenSet() const
{
    return m_postDataHasBeenSet;
}

string CatTaskDetail::GetSslVer() const
{
    return m_sslVer;
}

void CatTaskDetail::SetSslVer(const string& _sslVer)
{
    m_sslVer = _sslVer;
    m_sslVerHasBeenSet = true;
}

bool CatTaskDetail::SslVerHasBeenSet() const
{
    return m_sslVerHasBeenSet;
}

uint64_t CatTaskDetail::GetIsHeader() const
{
    return m_isHeader;
}

void CatTaskDetail::SetIsHeader(const uint64_t& _isHeader)
{
    m_isHeader = _isHeader;
    m_isHeaderHasBeenSet = true;
}

bool CatTaskDetail::IsHeaderHasBeenSet() const
{
    return m_isHeaderHasBeenSet;
}

string CatTaskDetail::GetDnsSvr() const
{
    return m_dnsSvr;
}

void CatTaskDetail::SetDnsSvr(const string& _dnsSvr)
{
    m_dnsSvr = _dnsSvr;
    m_dnsSvrHasBeenSet = true;
}

bool CatTaskDetail::DnsSvrHasBeenSet() const
{
    return m_dnsSvrHasBeenSet;
}

string CatTaskDetail::GetDnsCheckIp() const
{
    return m_dnsCheckIp;
}

void CatTaskDetail::SetDnsCheckIp(const string& _dnsCheckIp)
{
    m_dnsCheckIp = _dnsCheckIp;
    m_dnsCheckIpHasBeenSet = true;
}

bool CatTaskDetail::DnsCheckIpHasBeenSet() const
{
    return m_dnsCheckIpHasBeenSet;
}

string CatTaskDetail::GetDnsQueryType() const
{
    return m_dnsQueryType;
}

void CatTaskDetail::SetDnsQueryType(const string& _dnsQueryType)
{
    m_dnsQueryType = _dnsQueryType;
    m_dnsQueryTypeHasBeenSet = true;
}

bool CatTaskDetail::DnsQueryTypeHasBeenSet() const
{
    return m_dnsQueryTypeHasBeenSet;
}

string CatTaskDetail::GetUserName() const
{
    return m_userName;
}

void CatTaskDetail::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CatTaskDetail::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CatTaskDetail::GetPassWord() const
{
    return m_passWord;
}

void CatTaskDetail::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool CatTaskDetail::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

uint64_t CatTaskDetail::GetUseSecConn() const
{
    return m_useSecConn;
}

void CatTaskDetail::SetUseSecConn(const uint64_t& _useSecConn)
{
    m_useSecConn = _useSecConn;
    m_useSecConnHasBeenSet = true;
}

bool CatTaskDetail::UseSecConnHasBeenSet() const
{
    return m_useSecConnHasBeenSet;
}

uint64_t CatTaskDetail::GetNeedAuth() const
{
    return m_needAuth;
}

void CatTaskDetail::SetNeedAuth(const uint64_t& _needAuth)
{
    m_needAuth = _needAuth;
    m_needAuthHasBeenSet = true;
}

bool CatTaskDetail::NeedAuthHasBeenSet() const
{
    return m_needAuthHasBeenSet;
}

uint64_t CatTaskDetail::GetReqDataType() const
{
    return m_reqDataType;
}

void CatTaskDetail::SetReqDataType(const uint64_t& _reqDataType)
{
    m_reqDataType = _reqDataType;
    m_reqDataTypeHasBeenSet = true;
}

bool CatTaskDetail::ReqDataTypeHasBeenSet() const
{
    return m_reqDataTypeHasBeenSet;
}

string CatTaskDetail::GetReqData() const
{
    return m_reqData;
}

void CatTaskDetail::SetReqData(const string& _reqData)
{
    m_reqData = _reqData;
    m_reqDataHasBeenSet = true;
}

bool CatTaskDetail::ReqDataHasBeenSet() const
{
    return m_reqDataHasBeenSet;
}

uint64_t CatTaskDetail::GetRespDataType() const
{
    return m_respDataType;
}

void CatTaskDetail::SetRespDataType(const uint64_t& _respDataType)
{
    m_respDataType = _respDataType;
    m_respDataTypeHasBeenSet = true;
}

bool CatTaskDetail::RespDataTypeHasBeenSet() const
{
    return m_respDataTypeHasBeenSet;
}

string CatTaskDetail::GetRespData() const
{
    return m_respData;
}

void CatTaskDetail::SetRespData(const string& _respData)
{
    m_respData = _respData;
    m_respDataHasBeenSet = true;
}

bool CatTaskDetail::RespDataHasBeenSet() const
{
    return m_respDataHasBeenSet;
}

uint64_t CatTaskDetail::GetRedirectFollowNum() const
{
    return m_redirectFollowNum;
}

void CatTaskDetail::SetRedirectFollowNum(const uint64_t& _redirectFollowNum)
{
    m_redirectFollowNum = _redirectFollowNum;
    m_redirectFollowNumHasBeenSet = true;
}

bool CatTaskDetail::RedirectFollowNumHasBeenSet() const
{
    return m_redirectFollowNumHasBeenSet;
}

