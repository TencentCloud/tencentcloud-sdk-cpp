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

#include <tencentcloud/gaap/v20180529/model/DomainErrorPageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DomainErrorPageInfo::DomainErrorPageInfo() :
    m_errorPageIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_errorNosHasBeenSet(false),
    m_newErrorNoHasBeenSet(false),
    m_clearHeadersHasBeenSet(false),
    m_setHeadersHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DomainErrorPageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorPageId") && !value["ErrorPageId"].IsNull())
    {
        if (!value["ErrorPageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainErrorPageInfo.ErrorPageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorPageId = string(value["ErrorPageId"].GetString());
        m_errorPageIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainErrorPageInfo.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainErrorPageInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ErrorNos") && !value["ErrorNos"].IsNull())
    {
        if (!value["ErrorNos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainErrorPageInfo.ErrorNos` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorNos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorNos.push_back((*itr).GetInt64());
        }
        m_errorNosHasBeenSet = true;
    }

    if (value.HasMember("NewErrorNo") && !value["NewErrorNo"].IsNull())
    {
        if (!value["NewErrorNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainErrorPageInfo.NewErrorNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newErrorNo = value["NewErrorNo"].GetInt64();
        m_newErrorNoHasBeenSet = true;
    }

    if (value.HasMember("ClearHeaders") && !value["ClearHeaders"].IsNull())
    {
        if (!value["ClearHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainErrorPageInfo.ClearHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["ClearHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clearHeaders.push_back((*itr).GetString());
        }
        m_clearHeadersHasBeenSet = true;
    }

    if (value.HasMember("SetHeaders") && !value["SetHeaders"].IsNull())
    {
        if (!value["SetHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainErrorPageInfo.SetHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["SetHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HttpHeaderParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_setHeaders.push_back(item);
        }
        m_setHeadersHasBeenSet = true;
    }

    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainErrorPageInfo.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainErrorPageInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainErrorPageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorPageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorPageId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_errorNosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorNos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorNos.begin(); itr != m_errorNos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_newErrorNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewErrorNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newErrorNo, allocator);
    }

    if (m_clearHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clearHeaders.begin(); itr != m_clearHeaders.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_setHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_setHeaders.begin(); itr != m_setHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string DomainErrorPageInfo::GetErrorPageId() const
{
    return m_errorPageId;
}

void DomainErrorPageInfo::SetErrorPageId(const string& _errorPageId)
{
    m_errorPageId = _errorPageId;
    m_errorPageIdHasBeenSet = true;
}

bool DomainErrorPageInfo::ErrorPageIdHasBeenSet() const
{
    return m_errorPageIdHasBeenSet;
}

string DomainErrorPageInfo::GetListenerId() const
{
    return m_listenerId;
}

void DomainErrorPageInfo::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DomainErrorPageInfo::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string DomainErrorPageInfo::GetDomain() const
{
    return m_domain;
}

void DomainErrorPageInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainErrorPageInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<int64_t> DomainErrorPageInfo::GetErrorNos() const
{
    return m_errorNos;
}

void DomainErrorPageInfo::SetErrorNos(const vector<int64_t>& _errorNos)
{
    m_errorNos = _errorNos;
    m_errorNosHasBeenSet = true;
}

bool DomainErrorPageInfo::ErrorNosHasBeenSet() const
{
    return m_errorNosHasBeenSet;
}

int64_t DomainErrorPageInfo::GetNewErrorNo() const
{
    return m_newErrorNo;
}

void DomainErrorPageInfo::SetNewErrorNo(const int64_t& _newErrorNo)
{
    m_newErrorNo = _newErrorNo;
    m_newErrorNoHasBeenSet = true;
}

bool DomainErrorPageInfo::NewErrorNoHasBeenSet() const
{
    return m_newErrorNoHasBeenSet;
}

vector<string> DomainErrorPageInfo::GetClearHeaders() const
{
    return m_clearHeaders;
}

void DomainErrorPageInfo::SetClearHeaders(const vector<string>& _clearHeaders)
{
    m_clearHeaders = _clearHeaders;
    m_clearHeadersHasBeenSet = true;
}

bool DomainErrorPageInfo::ClearHeadersHasBeenSet() const
{
    return m_clearHeadersHasBeenSet;
}

vector<HttpHeaderParam> DomainErrorPageInfo::GetSetHeaders() const
{
    return m_setHeaders;
}

void DomainErrorPageInfo::SetSetHeaders(const vector<HttpHeaderParam>& _setHeaders)
{
    m_setHeaders = _setHeaders;
    m_setHeadersHasBeenSet = true;
}

bool DomainErrorPageInfo::SetHeadersHasBeenSet() const
{
    return m_setHeadersHasBeenSet;
}

string DomainErrorPageInfo::GetBody() const
{
    return m_body;
}

void DomainErrorPageInfo::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool DomainErrorPageInfo::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

int64_t DomainErrorPageInfo::GetStatus() const
{
    return m_status;
}

void DomainErrorPageInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainErrorPageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

