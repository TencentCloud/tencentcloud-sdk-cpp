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

#include <tencentcloud/tdai/v20250717/model/DescribeMemoryPlusSpaceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

DescribeMemoryPlusSpaceResponse::DescribeMemoryPlusSpaceResponse() :
    m_spaceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_memoryUsageHasBeenSet(false),
    m_memoryLimitHasBeenSet(false),
    m_creditUsageHasBeenSet(false),
    m_creditLimitHasBeenSet(false),
    m_accessUrlHasBeenSet(false),
    m_wanAccessUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_expiredAtHasBeenSet(false),
    m_isolatedAtHasBeenSet(false),
    m_destroyAtHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMemoryPlusSpaceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SpaceId") && !rsp["SpaceId"].IsNull())
    {
        if (!rsp["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(rsp["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
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

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceTags") && !rsp["ResourceTags"].IsNull())
    {
        if (!rsp["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceTags.push_back(item);
        }
        m_resourceTagsHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = rsp["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
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

    if (rsp.HasMember("MemoryUsage") && !rsp["MemoryUsage"].IsNull())
    {
        if (!rsp["MemoryUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsage = rsp["MemoryUsage"].GetInt64();
        m_memoryUsageHasBeenSet = true;
    }

    if (rsp.HasMember("MemoryLimit") && !rsp["MemoryLimit"].IsNull())
    {
        if (!rsp["MemoryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLimit = rsp["MemoryLimit"].GetInt64();
        m_memoryLimitHasBeenSet = true;
    }

    if (rsp.HasMember("CreditUsage") && !rsp["CreditUsage"].IsNull())
    {
        if (!rsp["CreditUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreditUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditUsage = rsp["CreditUsage"].GetDouble();
        m_creditUsageHasBeenSet = true;
    }

    if (rsp.HasMember("CreditLimit") && !rsp["CreditLimit"].IsNull())
    {
        if (!rsp["CreditLimit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreditLimit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditLimit = rsp["CreditLimit"].GetDouble();
        m_creditLimitHasBeenSet = true;
    }

    if (rsp.HasMember("AccessUrl") && !rsp["AccessUrl"].IsNull())
    {
        if (!rsp["AccessUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessUrl = string(rsp["AccessUrl"].GetString());
        m_accessUrlHasBeenSet = true;
    }

    if (rsp.HasMember("WanAccessUrl") && !rsp["WanAccessUrl"].IsNull())
    {
        if (!rsp["WanAccessUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WanAccessUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanAccessUrl = string(rsp["WanAccessUrl"].GetString());
        m_wanAccessUrlHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredAt") && !rsp["ExpiredAt"].IsNull())
    {
        if (!rsp["ExpiredAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredAt = string(rsp["ExpiredAt"].GetString());
        m_expiredAtHasBeenSet = true;
    }

    if (rsp.HasMember("IsolatedAt") && !rsp["IsolatedAt"].IsNull())
    {
        if (!rsp["IsolatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsolatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedAt = string(rsp["IsolatedAt"].GetString());
        m_isolatedAtHasBeenSet = true;
    }

    if (rsp.HasMember("DestroyAt") && !rsp["DestroyAt"].IsNull())
    {
        if (!rsp["DestroyAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestroyAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyAt = string(rsp["DestroyAt"].GetString());
        m_destroyAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMemoryPlusSpaceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUsage, allocator);
    }

    if (m_memoryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryLimit, allocator);
    }

    if (m_creditUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creditUsage, allocator);
    }

    if (m_creditLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creditLimit, allocator);
    }

    if (m_accessUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_wanAccessUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanAccessUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanAccessUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyAt.c_str(), allocator).Move(), allocator);
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


string DescribeMemoryPlusSpaceResponse::GetSpaceId() const
{
    return m_spaceId;
}

bool DescribeMemoryPlusSpaceResponse::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetName() const
{
    return m_name;
}

bool DescribeMemoryPlusSpaceResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetDescription() const
{
    return m_description;
}

bool DescribeMemoryPlusSpaceResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DescribeMemoryPlusSpaceResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeMemoryPlusSpaceResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetRegion() const
{
    return m_region;
}

bool DescribeMemoryPlusSpaceResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<ResourceTag> DescribeMemoryPlusSpaceResponse::GetResourceTags() const
{
    return m_resourceTags;
}

bool DescribeMemoryPlusSpaceResponse::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

int64_t DescribeMemoryPlusSpaceResponse::GetStatus() const
{
    return m_status;
}

bool DescribeMemoryPlusSpaceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeMemoryPlusSpaceResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeMemoryPlusSpaceResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetVersion() const
{
    return m_version;
}

bool DescribeMemoryPlusSpaceResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t DescribeMemoryPlusSpaceResponse::GetMemoryUsage() const
{
    return m_memoryUsage;
}

bool DescribeMemoryPlusSpaceResponse::MemoryUsageHasBeenSet() const
{
    return m_memoryUsageHasBeenSet;
}

int64_t DescribeMemoryPlusSpaceResponse::GetMemoryLimit() const
{
    return m_memoryLimit;
}

bool DescribeMemoryPlusSpaceResponse::MemoryLimitHasBeenSet() const
{
    return m_memoryLimitHasBeenSet;
}

double DescribeMemoryPlusSpaceResponse::GetCreditUsage() const
{
    return m_creditUsage;
}

bool DescribeMemoryPlusSpaceResponse::CreditUsageHasBeenSet() const
{
    return m_creditUsageHasBeenSet;
}

double DescribeMemoryPlusSpaceResponse::GetCreditLimit() const
{
    return m_creditLimit;
}

bool DescribeMemoryPlusSpaceResponse::CreditLimitHasBeenSet() const
{
    return m_creditLimitHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetAccessUrl() const
{
    return m_accessUrl;
}

bool DescribeMemoryPlusSpaceResponse::AccessUrlHasBeenSet() const
{
    return m_accessUrlHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetWanAccessUrl() const
{
    return m_wanAccessUrl;
}

bool DescribeMemoryPlusSpaceResponse::WanAccessUrlHasBeenSet() const
{
    return m_wanAccessUrlHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeMemoryPlusSpaceResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetExpiredAt() const
{
    return m_expiredAt;
}

bool DescribeMemoryPlusSpaceResponse::ExpiredAtHasBeenSet() const
{
    return m_expiredAtHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetIsolatedAt() const
{
    return m_isolatedAt;
}

bool DescribeMemoryPlusSpaceResponse::IsolatedAtHasBeenSet() const
{
    return m_isolatedAtHasBeenSet;
}

string DescribeMemoryPlusSpaceResponse::GetDestroyAt() const
{
    return m_destroyAt;
}

bool DescribeMemoryPlusSpaceResponse::DestroyAtHasBeenSet() const
{
    return m_destroyAtHasBeenSet;
}


