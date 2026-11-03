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

#include <tencentcloud/csip/v20221121/model/RuleContentK8sAPI.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RuleContentK8sAPI::RuleContentK8sAPI() :
    m_requestURIHasBeenSet(false),
    m_verbHasBeenSet(false),
    m_requestUserHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_sourceIPSHasBeenSet(false),
    m_responseStatusCodeHasBeenSet(false),
    m_requestObjectHasBeenSet(false),
    m_responseObjectHasBeenSet(false),
    m_mountHostDirHasBeenSet(false),
    m_podNameIPHasBeenSet(false),
    m_auditIDHasBeenSet(false)
{
}

CoreInternalOutcome RuleContentK8sAPI::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestURI") && !value["RequestURI"].IsNull())
    {
        if (!value["RequestURI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.RequestURI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestURI = string(value["RequestURI"].GetString());
        m_requestURIHasBeenSet = true;
    }

    if (value.HasMember("Verb") && !value["Verb"].IsNull())
    {
        if (!value["Verb"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.Verb` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verb = string(value["Verb"].GetString());
        m_verbHasBeenSet = true;
    }

    if (value.HasMember("RequestUser") && !value["RequestUser"].IsNull())
    {
        if (!value["RequestUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.RequestUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestUser = string(value["RequestUser"].GetString());
        m_requestUserHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("SourceIPS") && !value["SourceIPS"].IsNull())
    {
        if (!value["SourceIPS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.SourceIPS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIPS = string(value["SourceIPS"].GetString());
        m_sourceIPSHasBeenSet = true;
    }

    if (value.HasMember("ResponseStatusCode") && !value["ResponseStatusCode"].IsNull())
    {
        if (!value["ResponseStatusCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.ResponseStatusCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseStatusCode = string(value["ResponseStatusCode"].GetString());
        m_responseStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("RequestObject") && !value["RequestObject"].IsNull())
    {
        if (!value["RequestObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.RequestObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestObject = string(value["RequestObject"].GetString());
        m_requestObjectHasBeenSet = true;
    }

    if (value.HasMember("ResponseObject") && !value["ResponseObject"].IsNull())
    {
        if (!value["ResponseObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.ResponseObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseObject = string(value["ResponseObject"].GetString());
        m_responseObjectHasBeenSet = true;
    }

    if (value.HasMember("MountHostDir") && !value["MountHostDir"].IsNull())
    {
        if (!value["MountHostDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.MountHostDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountHostDir = string(value["MountHostDir"].GetString());
        m_mountHostDirHasBeenSet = true;
    }

    if (value.HasMember("PodNameIP") && !value["PodNameIP"].IsNull())
    {
        if (!value["PodNameIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.PodNameIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podNameIP = string(value["PodNameIP"].GetString());
        m_podNameIPHasBeenSet = true;
    }

    if (value.HasMember("AuditID") && !value["AuditID"].IsNull())
    {
        if (!value["AuditID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentK8sAPI.AuditID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditID = string(value["AuditID"].GetString());
        m_auditIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleContentK8sAPI::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestURIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestURI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestURI.c_str(), allocator).Move(), allocator);
    }

    if (m_verbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Verb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verb.c_str(), allocator).Move(), allocator);
    }

    if (m_requestUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestUser.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIPS.c_str(), allocator).Move(), allocator);
    }

    if (m_responseStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseStatusCode.c_str(), allocator).Move(), allocator);
    }

    if (m_requestObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestObject.c_str(), allocator).Move(), allocator);
    }

    if (m_responseObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseObject.c_str(), allocator).Move(), allocator);
    }

    if (m_mountHostDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountHostDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountHostDir.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodNameIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podNameIP.c_str(), allocator).Move(), allocator);
    }

    if (m_auditIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditID.c_str(), allocator).Move(), allocator);
    }

}


string RuleContentK8sAPI::GetRequestURI() const
{
    return m_requestURI;
}

void RuleContentK8sAPI::SetRequestURI(const string& _requestURI)
{
    m_requestURI = _requestURI;
    m_requestURIHasBeenSet = true;
}

bool RuleContentK8sAPI::RequestURIHasBeenSet() const
{
    return m_requestURIHasBeenSet;
}

string RuleContentK8sAPI::GetVerb() const
{
    return m_verb;
}

void RuleContentK8sAPI::SetVerb(const string& _verb)
{
    m_verb = _verb;
    m_verbHasBeenSet = true;
}

bool RuleContentK8sAPI::VerbHasBeenSet() const
{
    return m_verbHasBeenSet;
}

string RuleContentK8sAPI::GetRequestUser() const
{
    return m_requestUser;
}

void RuleContentK8sAPI::SetRequestUser(const string& _requestUser)
{
    m_requestUser = _requestUser;
    m_requestUserHasBeenSet = true;
}

bool RuleContentK8sAPI::RequestUserHasBeenSet() const
{
    return m_requestUserHasBeenSet;
}

string RuleContentK8sAPI::GetUserAgent() const
{
    return m_userAgent;
}

void RuleContentK8sAPI::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool RuleContentK8sAPI::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string RuleContentK8sAPI::GetSourceIPS() const
{
    return m_sourceIPS;
}

void RuleContentK8sAPI::SetSourceIPS(const string& _sourceIPS)
{
    m_sourceIPS = _sourceIPS;
    m_sourceIPSHasBeenSet = true;
}

bool RuleContentK8sAPI::SourceIPSHasBeenSet() const
{
    return m_sourceIPSHasBeenSet;
}

string RuleContentK8sAPI::GetResponseStatusCode() const
{
    return m_responseStatusCode;
}

void RuleContentK8sAPI::SetResponseStatusCode(const string& _responseStatusCode)
{
    m_responseStatusCode = _responseStatusCode;
    m_responseStatusCodeHasBeenSet = true;
}

bool RuleContentK8sAPI::ResponseStatusCodeHasBeenSet() const
{
    return m_responseStatusCodeHasBeenSet;
}

string RuleContentK8sAPI::GetRequestObject() const
{
    return m_requestObject;
}

void RuleContentK8sAPI::SetRequestObject(const string& _requestObject)
{
    m_requestObject = _requestObject;
    m_requestObjectHasBeenSet = true;
}

bool RuleContentK8sAPI::RequestObjectHasBeenSet() const
{
    return m_requestObjectHasBeenSet;
}

string RuleContentK8sAPI::GetResponseObject() const
{
    return m_responseObject;
}

void RuleContentK8sAPI::SetResponseObject(const string& _responseObject)
{
    m_responseObject = _responseObject;
    m_responseObjectHasBeenSet = true;
}

bool RuleContentK8sAPI::ResponseObjectHasBeenSet() const
{
    return m_responseObjectHasBeenSet;
}

string RuleContentK8sAPI::GetMountHostDir() const
{
    return m_mountHostDir;
}

void RuleContentK8sAPI::SetMountHostDir(const string& _mountHostDir)
{
    m_mountHostDir = _mountHostDir;
    m_mountHostDirHasBeenSet = true;
}

bool RuleContentK8sAPI::MountHostDirHasBeenSet() const
{
    return m_mountHostDirHasBeenSet;
}

string RuleContentK8sAPI::GetPodNameIP() const
{
    return m_podNameIP;
}

void RuleContentK8sAPI::SetPodNameIP(const string& _podNameIP)
{
    m_podNameIP = _podNameIP;
    m_podNameIPHasBeenSet = true;
}

bool RuleContentK8sAPI::PodNameIPHasBeenSet() const
{
    return m_podNameIPHasBeenSet;
}

string RuleContentK8sAPI::GetAuditID() const
{
    return m_auditID;
}

void RuleContentK8sAPI::SetAuditID(const string& _auditID)
{
    m_auditID = _auditID;
    m_auditIDHasBeenSet = true;
}

bool RuleContentK8sAPI::AuditIDHasBeenSet() const
{
    return m_auditIDHasBeenSet;
}

