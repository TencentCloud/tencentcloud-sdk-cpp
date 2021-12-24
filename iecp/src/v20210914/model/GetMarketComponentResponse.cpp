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

#include <tencentcloud/iecp/v20210914/model/GetMarketComponentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

GetMarketComponentResponse::GetMarketComponentResponse() :
    m_iDHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_outlineHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_workloadVisualConfigHasBeenSet(false)
{
}

CoreInternalOutcome GetMarketComponentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = rsp["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (rsp.HasMember("AppName") && !rsp["AppName"].IsNull())
    {
        if (!rsp["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(rsp["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (rsp.HasMember("Author") && !rsp["Author"].IsNull())
    {
        if (!rsp["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(rsp["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (rsp.HasMember("ReleaseTime") && !rsp["ReleaseTime"].IsNull())
    {
        if (!rsp["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(rsp["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Outline") && !rsp["Outline"].IsNull())
    {
        if (!rsp["Outline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Outline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outline = string(rsp["Outline"].GetString());
        m_outlineHasBeenSet = true;
    }

    if (rsp.HasMember("Detail") && !rsp["Detail"].IsNull())
    {
        if (!rsp["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(rsp["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (rsp.HasMember("Icon") && !rsp["Icon"].IsNull())
    {
        if (!rsp["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(rsp["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (rsp.HasMember("WorkloadVisualConfig") && !rsp["WorkloadVisualConfig"].IsNull())
    {
        if (!rsp["WorkloadVisualConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadVisualConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadVisualConfig = string(rsp["WorkloadVisualConfig"].GetString());
        m_workloadVisualConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetMarketComponentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_outlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outline.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadVisualConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadVisualConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadVisualConfig.c_str(), allocator).Move(), allocator);
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


int64_t GetMarketComponentResponse::GetID() const
{
    return m_iD;
}

bool GetMarketComponentResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string GetMarketComponentResponse::GetAppName() const
{
    return m_appName;
}

bool GetMarketComponentResponse::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string GetMarketComponentResponse::GetAuthor() const
{
    return m_author;
}

bool GetMarketComponentResponse::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string GetMarketComponentResponse::GetReleaseTime() const
{
    return m_releaseTime;
}

bool GetMarketComponentResponse::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

string GetMarketComponentResponse::GetOutline() const
{
    return m_outline;
}

bool GetMarketComponentResponse::OutlineHasBeenSet() const
{
    return m_outlineHasBeenSet;
}

string GetMarketComponentResponse::GetDetail() const
{
    return m_detail;
}

bool GetMarketComponentResponse::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string GetMarketComponentResponse::GetIcon() const
{
    return m_icon;
}

bool GetMarketComponentResponse::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

string GetMarketComponentResponse::GetVersion() const
{
    return m_version;
}

bool GetMarketComponentResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string GetMarketComponentResponse::GetWorkloadVisualConfig() const
{
    return m_workloadVisualConfig;
}

bool GetMarketComponentResponse::WorkloadVisualConfigHasBeenSet() const
{
    return m_workloadVisualConfigHasBeenSet;
}


