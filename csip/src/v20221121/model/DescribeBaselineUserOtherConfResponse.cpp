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

#include <tencentcloud/csip/v20221121/model/DescribeBaselineUserOtherConfResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeBaselineUserOtherConfResponse::DescribeBaselineUserOtherConfResponse() :
    m_userConfHasBeenSet(false),
    m_isSyncHasBeenSet(false),
    m_adminInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBaselineUserOtherConfResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UserConf") && !rsp["UserConf"].IsNull())
    {
        if (!rsp["UserConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userConf.Deserialize(rsp["UserConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userConfHasBeenSet = true;
    }

    if (rsp.HasMember("IsSync") && !rsp["IsSync"].IsNull())
    {
        if (!rsp["IsSync"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsSync` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSync = rsp["IsSync"].GetBool();
        m_isSyncHasBeenSet = true;
    }

    if (rsp.HasMember("AdminInfo") && !rsp["AdminInfo"].IsNull())
    {
        if (!rsp["AdminInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdminInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adminInfo.Deserialize(rsp["AdminInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adminInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBaselineUserOtherConfResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_userConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSync, allocator);
    }

    if (m_adminInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adminInfo.ToJsonObject(value[key.c_str()], allocator);
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


BaselineUserOtherConf DescribeBaselineUserOtherConfResponse::GetUserConf() const
{
    return m_userConf;
}

bool DescribeBaselineUserOtherConfResponse::UserConfHasBeenSet() const
{
    return m_userConfHasBeenSet;
}

bool DescribeBaselineUserOtherConfResponse::GetIsSync() const
{
    return m_isSync;
}

bool DescribeBaselineUserOtherConfResponse::IsSyncHasBeenSet() const
{
    return m_isSyncHasBeenSet;
}

AccountBriefInfo DescribeBaselineUserOtherConfResponse::GetAdminInfo() const
{
    return m_adminInfo;
}

bool DescribeBaselineUserOtherConfResponse::AdminInfoHasBeenSet() const
{
    return m_adminInfoHasBeenSet;
}


