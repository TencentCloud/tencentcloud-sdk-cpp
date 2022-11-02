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

#include <tencentcloud/ses/v20201002/model/GetEmailTemplateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

GetEmailTemplateResponse::GetEmailTemplateResponse() :
    m_templateContentHasBeenSet(false),
    m_templateStatusHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

CoreInternalOutcome GetEmailTemplateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TemplateContent") && !rsp["TemplateContent"].IsNull())
    {
        if (!rsp["TemplateContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templateContent.Deserialize(rsp["TemplateContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateContentHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateStatus") && !rsp["TemplateStatus"].IsNull())
    {
        if (!rsp["TemplateStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateStatus = rsp["TemplateStatus"].GetUint64();
        m_templateStatusHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateName") && !rsp["TemplateName"].IsNull())
    {
        if (!rsp["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(rsp["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetEmailTemplateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_templateContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templateContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateStatus, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
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


TemplateContent GetEmailTemplateResponse::GetTemplateContent() const
{
    return m_templateContent;
}

bool GetEmailTemplateResponse::TemplateContentHasBeenSet() const
{
    return m_templateContentHasBeenSet;
}

uint64_t GetEmailTemplateResponse::GetTemplateStatus() const
{
    return m_templateStatus;
}

bool GetEmailTemplateResponse::TemplateStatusHasBeenSet() const
{
    return m_templateStatusHasBeenSet;
}

string GetEmailTemplateResponse::GetTemplateName() const
{
    return m_templateName;
}

bool GetEmailTemplateResponse::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}


