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

#include <tencentcloud/teo/v20220106/model/DescribeZoneDetailsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeZoneDetailsResponse::DescribeZoneDetailsResponse() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_originalNameServersHasBeenSet(false),
    m_nameServersHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pausedHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false),
    m_vanityNameServersHasBeenSet(false),
    m_vanityNameServersIpsHasBeenSet(false),
    m_cnameSpeedUpHasBeenSet(false),
    m_cnameStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeZoneDetailsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
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

    if (rsp.HasMember("OriginalNameServers") && !rsp["OriginalNameServers"].IsNull())
    {
        if (!rsp["OriginalNameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginalNameServers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OriginalNameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originalNameServers.push_back((*itr).GetString());
        }
        m_originalNameServersHasBeenSet = true;
    }

    if (rsp.HasMember("NameServers") && !rsp["NameServers"].IsNull())
    {
        if (!rsp["NameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NameServers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameServers.push_back((*itr).GetString());
        }
        m_nameServersHasBeenSet = true;
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

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Paused") && !rsp["Paused"].IsNull())
    {
        if (!rsp["Paused"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Paused` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_paused = rsp["Paused"].GetBool();
        m_pausedHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedOn") && !rsp["CreatedOn"].IsNull())
    {
        if (!rsp["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(rsp["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (rsp.HasMember("ModifiedOn") && !rsp["ModifiedOn"].IsNull())
    {
        if (!rsp["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(rsp["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }

    if (rsp.HasMember("VanityNameServers") && !rsp["VanityNameServers"].IsNull())
    {
        if (!rsp["VanityNameServers"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VanityNameServers` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vanityNameServers.Deserialize(rsp["VanityNameServers"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vanityNameServersHasBeenSet = true;
    }

    if (rsp.HasMember("VanityNameServersIps") && !rsp["VanityNameServersIps"].IsNull())
    {
        if (!rsp["VanityNameServersIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VanityNameServersIps` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VanityNameServersIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VanityNameServersIps item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vanityNameServersIps.push_back(item);
        }
        m_vanityNameServersIpsHasBeenSet = true;
    }

    if (rsp.HasMember("CnameSpeedUp") && !rsp["CnameSpeedUp"].IsNull())
    {
        if (!rsp["CnameSpeedUp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnameSpeedUp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnameSpeedUp = string(rsp["CnameSpeedUp"].GetString());
        m_cnameSpeedUpHasBeenSet = true;
    }

    if (rsp.HasMember("CnameStatus") && !rsp["CnameStatus"].IsNull())
    {
        if (!rsp["CnameStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnameStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnameStatus = string(rsp["CnameStatus"].GetString());
        m_cnameStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeZoneDetailsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_originalNameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalNameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originalNameServers.begin(); itr != m_originalNameServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameServers.begin(); itr != m_nameServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pausedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paused";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paused, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_vanityNameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VanityNameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vanityNameServers.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vanityNameServersIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VanityNameServersIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vanityNameServersIps.begin(); itr != m_vanityNameServersIps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cnameSpeedUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameSpeedUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnameSpeedUp.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnameStatus.c_str(), allocator).Move(), allocator);
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


string DescribeZoneDetailsResponse::GetId() const
{
    return m_id;
}

bool DescribeZoneDetailsResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeZoneDetailsResponse::GetName() const
{
    return m_name;
}

bool DescribeZoneDetailsResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> DescribeZoneDetailsResponse::GetOriginalNameServers() const
{
    return m_originalNameServers;
}

bool DescribeZoneDetailsResponse::OriginalNameServersHasBeenSet() const
{
    return m_originalNameServersHasBeenSet;
}

vector<string> DescribeZoneDetailsResponse::GetNameServers() const
{
    return m_nameServers;
}

bool DescribeZoneDetailsResponse::NameServersHasBeenSet() const
{
    return m_nameServersHasBeenSet;
}

string DescribeZoneDetailsResponse::GetStatus() const
{
    return m_status;
}

bool DescribeZoneDetailsResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeZoneDetailsResponse::GetType() const
{
    return m_type;
}

bool DescribeZoneDetailsResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool DescribeZoneDetailsResponse::GetPaused() const
{
    return m_paused;
}

bool DescribeZoneDetailsResponse::PausedHasBeenSet() const
{
    return m_pausedHasBeenSet;
}

string DescribeZoneDetailsResponse::GetCreatedOn() const
{
    return m_createdOn;
}

bool DescribeZoneDetailsResponse::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string DescribeZoneDetailsResponse::GetModifiedOn() const
{
    return m_modifiedOn;
}

bool DescribeZoneDetailsResponse::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

VanityNameServers DescribeZoneDetailsResponse::GetVanityNameServers() const
{
    return m_vanityNameServers;
}

bool DescribeZoneDetailsResponse::VanityNameServersHasBeenSet() const
{
    return m_vanityNameServersHasBeenSet;
}

vector<VanityNameServersIps> DescribeZoneDetailsResponse::GetVanityNameServersIps() const
{
    return m_vanityNameServersIps;
}

bool DescribeZoneDetailsResponse::VanityNameServersIpsHasBeenSet() const
{
    return m_vanityNameServersIpsHasBeenSet;
}

string DescribeZoneDetailsResponse::GetCnameSpeedUp() const
{
    return m_cnameSpeedUp;
}

bool DescribeZoneDetailsResponse::CnameSpeedUpHasBeenSet() const
{
    return m_cnameSpeedUpHasBeenSet;
}

string DescribeZoneDetailsResponse::GetCnameStatus() const
{
    return m_cnameStatus;
}

bool DescribeZoneDetailsResponse::CnameStatusHasBeenSet() const
{
    return m_cnameStatusHasBeenSet;
}


