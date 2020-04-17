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

#include <tencentcloud/cam/v20190116/model/DetectStateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

DetectStateResponse::DetectStateResponse() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idcardHasBeenSet(false),
    m_bizTokenHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome DetectStateResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Idcard") && !rsp["Idcard"].IsNull())
    {
        if (!rsp["Idcard"].IsString())
        {
            return CoreInternalOutcome(Error("response `Idcard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcard = string(rsp["Idcard"].GetString());
        m_idcardHasBeenSet = true;
    }

    if (rsp.HasMember("BizToken") && !rsp["BizToken"].IsNull())
    {
        if (!rsp["BizToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizToken = string(rsp["BizToken"].GetString());
        m_bizTokenHasBeenSet = true;
    }

    if (rsp.HasMember("Url") && !rsp["Url"].IsNull())
    {
        if (!rsp["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(rsp["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (rsp.HasMember("RuleId") && !rsp["RuleId"].IsNull())
    {
        if (!rsp["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = rsp["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DetectStateResponse::GetUin() const
{
    return m_uin;
}

bool DetectStateResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DetectStateResponse::GetName() const
{
    return m_name;
}

bool DetectStateResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DetectStateResponse::GetIdcard() const
{
    return m_idcard;
}

bool DetectStateResponse::IdcardHasBeenSet() const
{
    return m_idcardHasBeenSet;
}

string DetectStateResponse::GetBizToken() const
{
    return m_bizToken;
}

bool DetectStateResponse::BizTokenHasBeenSet() const
{
    return m_bizTokenHasBeenSet;
}

string DetectStateResponse::GetUrl() const
{
    return m_url;
}

bool DetectStateResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t DetectStateResponse::GetRuleId() const
{
    return m_ruleId;
}

bool DetectStateResponse::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t DetectStateResponse::GetStatus() const
{
    return m_status;
}

bool DetectStateResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DetectStateResponse::GetType() const
{
    return m_type;
}

bool DetectStateResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


