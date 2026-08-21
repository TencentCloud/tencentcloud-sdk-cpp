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

#include <tencentcloud/cloudrc/v20240606/model/DescribeResourceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudrc::V20240606::Model;
using namespace std;

DescribeResourceResponse::DescribeResourceResponse() :
    m_resourceIdHasBeenSet(false),
    m_resourceAliasHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_zoneCodeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceAlias") && !rsp["ResourceAlias"].IsNull())
    {
        if (!rsp["ResourceAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceAlias = string(rsp["ResourceAlias"].GetString());
        m_resourceAliasHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = rsp["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceType") && !rsp["ResourceType"].IsNull())
    {
        if (!rsp["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(rsp["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RegionCode") && !rsp["RegionCode"].IsNull())
    {
        if (!rsp["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(rsp["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneCode") && !rsp["ZoneCode"].IsNull())
    {
        if (!rsp["ZoneCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneCode = string(rsp["ZoneCode"].GetString());
        m_zoneCodeHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(rsp["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PrivateIpAddress") && !rsp["PrivateIpAddress"].IsNull())
    {
        if (!rsp["PrivateIpAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivateIpAddress` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PrivateIpAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddress.push_back((*itr).GetString());
        }
        m_privateIpAddressHasBeenSet = true;
    }

    if (rsp.HasMember("PublicIpAddress") && !rsp["PublicIpAddress"].IsNull())
    {
        if (!rsp["PublicIpAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicIpAddress` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PublicIpAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddress.push_back((*itr).GetString());
        }
        m_publicIpAddressHasBeenSet = true;
    }

    if (rsp.HasMember("Properties") && !rsp["Properties"].IsNull())
    {
        if (!rsp["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(rsp["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeResourceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneCode.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddress.begin(); itr != m_privateIpAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddress.begin(); itr != m_publicIpAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string DescribeResourceResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeResourceResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeResourceResponse::GetResourceAlias() const
{
    return m_resourceAlias;
}

bool DescribeResourceResponse::ResourceAliasHasBeenSet() const
{
    return m_resourceAliasHasBeenSet;
}

int64_t DescribeResourceResponse::GetUin() const
{
    return m_uin;
}

bool DescribeResourceResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeResourceResponse::GetResourceType() const
{
    return m_resourceType;
}

bool DescribeResourceResponse::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeResourceResponse::GetRegionCode() const
{
    return m_regionCode;
}

bool DescribeResourceResponse::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string DescribeResourceResponse::GetZoneCode() const
{
    return m_zoneCode;
}

bool DescribeResourceResponse::ZoneCodeHasBeenSet() const
{
    return m_zoneCodeHasBeenSet;
}

string DescribeResourceResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeResourceResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeResourceResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeResourceResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeResourceResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeResourceResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<string> DescribeResourceResponse::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

bool DescribeResourceResponse::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

vector<string> DescribeResourceResponse::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

bool DescribeResourceResponse::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

string DescribeResourceResponse::GetProperties() const
{
    return m_properties;
}

bool DescribeResourceResponse::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<Tag> DescribeResourceResponse::GetTags() const
{
    return m_tags;
}

bool DescribeResourceResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


