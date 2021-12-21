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

#include <tencentcloud/essbasic/v20210526/model/OperateChannelTemplateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

OperateChannelTemplateResponse::OperateChannelTemplateResponse() :
    m_appIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_operateResultHasBeenSet(false),
    m_authTagHasBeenSet(false),
    m_proxyOrganizationOpenIdsHasBeenSet(false),
    m_failMessageListHasBeenSet(false)
{
}

CoreInternalOutcome OperateChannelTemplateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateId") && !rsp["TemplateId"].IsNull())
    {
        if (!rsp["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(rsp["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (rsp.HasMember("OperateResult") && !rsp["OperateResult"].IsNull())
    {
        if (!rsp["OperateResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperateResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateResult = string(rsp["OperateResult"].GetString());
        m_operateResultHasBeenSet = true;
    }

    if (rsp.HasMember("AuthTag") && !rsp["AuthTag"].IsNull())
    {
        if (!rsp["AuthTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authTag = string(rsp["AuthTag"].GetString());
        m_authTagHasBeenSet = true;
    }

    if (rsp.HasMember("ProxyOrganizationOpenIds") && !rsp["ProxyOrganizationOpenIds"].IsNull())
    {
        if (!rsp["ProxyOrganizationOpenIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationOpenIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ProxyOrganizationOpenIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_proxyOrganizationOpenIds.push_back((*itr).GetString());
        }
        m_proxyOrganizationOpenIdsHasBeenSet = true;
    }

    if (rsp.HasMember("FailMessageList") && !rsp["FailMessageList"].IsNull())
    {
        if (!rsp["FailMessageList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailMessageList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailMessageList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthFailMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failMessageList.push_back(item);
        }
        m_failMessageListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string OperateChannelTemplateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateResult.c_str(), allocator).Move(), allocator);
    }

    if (m_authTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authTag.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOrganizationOpenIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationOpenIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_proxyOrganizationOpenIds.begin(); itr != m_proxyOrganizationOpenIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failMessageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessageList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failMessageList.begin(); itr != m_failMessageList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string OperateChannelTemplateResponse::GetAppId() const
{
    return m_appId;
}

bool OperateChannelTemplateResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string OperateChannelTemplateResponse::GetTemplateId() const
{
    return m_templateId;
}

bool OperateChannelTemplateResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string OperateChannelTemplateResponse::GetOperateResult() const
{
    return m_operateResult;
}

bool OperateChannelTemplateResponse::OperateResultHasBeenSet() const
{
    return m_operateResultHasBeenSet;
}

string OperateChannelTemplateResponse::GetAuthTag() const
{
    return m_authTag;
}

bool OperateChannelTemplateResponse::AuthTagHasBeenSet() const
{
    return m_authTagHasBeenSet;
}

vector<string> OperateChannelTemplateResponse::GetProxyOrganizationOpenIds() const
{
    return m_proxyOrganizationOpenIds;
}

bool OperateChannelTemplateResponse::ProxyOrganizationOpenIdsHasBeenSet() const
{
    return m_proxyOrganizationOpenIdsHasBeenSet;
}

vector<AuthFailMessage> OperateChannelTemplateResponse::GetFailMessageList() const
{
    return m_failMessageList;
}

bool OperateChannelTemplateResponse::FailMessageListHasBeenSet() const
{
    return m_failMessageListHasBeenSet;
}


