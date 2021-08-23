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

#include <tencentcloud/scf/v20180416/model/GetLayerVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

GetLayerVersionResponse::GetLayerVersionResponse() :
    m_compatibleRuntimesHasBeenSet(false),
    m_codeSha256HasBeenSet(false),
    m_locationHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_licenseInfoHasBeenSet(false),
    m_layerVersionHasBeenSet(false),
    m_layerNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome GetLayerVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CompatibleRuntimes") && !rsp["CompatibleRuntimes"].IsNull())
    {
        if (!rsp["CompatibleRuntimes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompatibleRuntimes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CompatibleRuntimes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_compatibleRuntimes.push_back((*itr).GetString());
        }
        m_compatibleRuntimesHasBeenSet = true;
    }

    if (rsp.HasMember("CodeSha256") && !rsp["CodeSha256"].IsNull())
    {
        if (!rsp["CodeSha256"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSha256` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeSha256 = string(rsp["CodeSha256"].GetString());
        m_codeSha256HasBeenSet = true;
    }

    if (rsp.HasMember("Location") && !rsp["Location"].IsNull())
    {
        if (!rsp["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(rsp["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (rsp.HasMember("AddTime") && !rsp["AddTime"].IsNull())
    {
        if (!rsp["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(rsp["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
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

    if (rsp.HasMember("LicenseInfo") && !rsp["LicenseInfo"].IsNull())
    {
        if (!rsp["LicenseInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseInfo = string(rsp["LicenseInfo"].GetString());
        m_licenseInfoHasBeenSet = true;
    }

    if (rsp.HasMember("LayerVersion") && !rsp["LayerVersion"].IsNull())
    {
        if (!rsp["LayerVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layerVersion = rsp["LayerVersion"].GetInt64();
        m_layerVersionHasBeenSet = true;
    }

    if (rsp.HasMember("LayerName") && !rsp["LayerName"].IsNull())
    {
        if (!rsp["LayerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerName = string(rsp["LayerName"].GetString());
        m_layerNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetLayerVersionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_compatibleRuntimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompatibleRuntimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_compatibleRuntimes.begin(); itr != m_compatibleRuntimes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_codeSha256HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSha256";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeSha256.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_layerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerVersion, allocator);
    }

    if (m_layerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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


vector<string> GetLayerVersionResponse::GetCompatibleRuntimes() const
{
    return m_compatibleRuntimes;
}

bool GetLayerVersionResponse::CompatibleRuntimesHasBeenSet() const
{
    return m_compatibleRuntimesHasBeenSet;
}

string GetLayerVersionResponse::GetCodeSha256() const
{
    return m_codeSha256;
}

bool GetLayerVersionResponse::CodeSha256HasBeenSet() const
{
    return m_codeSha256HasBeenSet;
}

string GetLayerVersionResponse::GetLocation() const
{
    return m_location;
}

bool GetLayerVersionResponse::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string GetLayerVersionResponse::GetAddTime() const
{
    return m_addTime;
}

bool GetLayerVersionResponse::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string GetLayerVersionResponse::GetDescription() const
{
    return m_description;
}

bool GetLayerVersionResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GetLayerVersionResponse::GetLicenseInfo() const
{
    return m_licenseInfo;
}

bool GetLayerVersionResponse::LicenseInfoHasBeenSet() const
{
    return m_licenseInfoHasBeenSet;
}

int64_t GetLayerVersionResponse::GetLayerVersion() const
{
    return m_layerVersion;
}

bool GetLayerVersionResponse::LayerVersionHasBeenSet() const
{
    return m_layerVersionHasBeenSet;
}

string GetLayerVersionResponse::GetLayerName() const
{
    return m_layerName;
}

bool GetLayerVersionResponse::LayerNameHasBeenSet() const
{
    return m_layerNameHasBeenSet;
}

string GetLayerVersionResponse::GetStatus() const
{
    return m_status;
}

bool GetLayerVersionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


