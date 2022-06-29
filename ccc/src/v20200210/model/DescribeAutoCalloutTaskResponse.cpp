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

#include <tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeAutoCalloutTaskResponse::DescribeAutoCalloutTaskResponse() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_calleesHasBeenSet(false),
    m_ivrIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAutoCalloutTaskResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("NotBefore") && !rsp["NotBefore"].IsNull())
    {
        if (!rsp["NotBefore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotBefore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notBefore = rsp["NotBefore"].GetInt64();
        m_notBeforeHasBeenSet = true;
    }

    if (rsp.HasMember("NotAfter") && !rsp["NotAfter"].IsNull())
    {
        if (!rsp["NotAfter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotAfter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notAfter = rsp["NotAfter"].GetInt64();
        m_notAfterHasBeenSet = true;
    }

    if (rsp.HasMember("Callers") && !rsp["Callers"].IsNull())
    {
        if (!rsp["Callers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Callers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Callers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_callers.push_back((*itr).GetString());
        }
        m_callersHasBeenSet = true;
    }

    if (rsp.HasMember("Callees") && !rsp["Callees"].IsNull())
    {
        if (!rsp["Callees"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Callees` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Callees"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AutoCalloutTaskCalleeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_callees.push_back(item);
        }
        m_calleesHasBeenSet = true;
    }

    if (rsp.HasMember("IvrId") && !rsp["IvrId"].IsNull())
    {
        if (!rsp["IvrId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IvrId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ivrId = rsp["IvrId"].GetUint64();
        m_ivrIdHasBeenSet = true;
    }

    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = rsp["State"].GetUint64();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAutoCalloutTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_notBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notBefore, allocator);
    }

    if (m_notAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notAfter, allocator);
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_calleesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callees";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_callees.begin(); itr != m_callees.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ivrIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IvrId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ivrId, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeAutoCalloutTaskResponse::GetName() const
{
    return m_name;
}

bool DescribeAutoCalloutTaskResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAutoCalloutTaskResponse::GetDescription() const
{
    return m_description;
}

bool DescribeAutoCalloutTaskResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DescribeAutoCalloutTaskResponse::GetNotBefore() const
{
    return m_notBefore;
}

bool DescribeAutoCalloutTaskResponse::NotBeforeHasBeenSet() const
{
    return m_notBeforeHasBeenSet;
}

int64_t DescribeAutoCalloutTaskResponse::GetNotAfter() const
{
    return m_notAfter;
}

bool DescribeAutoCalloutTaskResponse::NotAfterHasBeenSet() const
{
    return m_notAfterHasBeenSet;
}

vector<string> DescribeAutoCalloutTaskResponse::GetCallers() const
{
    return m_callers;
}

bool DescribeAutoCalloutTaskResponse::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

vector<AutoCalloutTaskCalleeInfo> DescribeAutoCalloutTaskResponse::GetCallees() const
{
    return m_callees;
}

bool DescribeAutoCalloutTaskResponse::CalleesHasBeenSet() const
{
    return m_calleesHasBeenSet;
}

uint64_t DescribeAutoCalloutTaskResponse::GetIvrId() const
{
    return m_ivrId;
}

bool DescribeAutoCalloutTaskResponse::IvrIdHasBeenSet() const
{
    return m_ivrIdHasBeenSet;
}

uint64_t DescribeAutoCalloutTaskResponse::GetState() const
{
    return m_state;
}

bool DescribeAutoCalloutTaskResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}


