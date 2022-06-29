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

#include <tencentcloud/icr/v20211014/model/ReqMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

ReqMetadata::ReqMetadata() :
    m_channelIDHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_gUIDHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_lBSHasBeenSet(false),
    m_vagrantsHasBeenSet(false)
{
}

CoreInternalOutcome ReqMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelID") && !value["ChannelID"].IsNull())
    {
        if (!value["ChannelID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReqMetadata.ChannelID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelID = string(value["ChannelID"].GetString());
        m_channelIDHasBeenSet = true;
    }

    if (value.HasMember("BusinessName") && !value["BusinessName"].IsNull())
    {
        if (!value["BusinessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReqMetadata.BusinessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessName = string(value["BusinessName"].GetString());
        m_businessNameHasBeenSet = true;
    }

    if (value.HasMember("GUID") && !value["GUID"].IsNull())
    {
        if (!value["GUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReqMetadata.GUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gUID = string(value["GUID"].GetString());
        m_gUIDHasBeenSet = true;
    }

    if (value.HasMember("AppKey") && !value["AppKey"].IsNull())
    {
        if (!value["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReqMetadata.AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(value["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (value.HasMember("LBS") && !value["LBS"].IsNull())
    {
        if (!value["LBS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReqMetadata.LBS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lBS.Deserialize(value["LBS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lBSHasBeenSet = true;
    }

    if (value.HasMember("Vagrants") && !value["Vagrants"].IsNull())
    {
        if (!value["Vagrants"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReqMetadata.Vagrants` is not array type"));

        const rapidjson::Value &tmpValue = value["Vagrants"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReqMetadataVagrant item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vagrants.push_back(item);
        }
        m_vagrantsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReqMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelID.c_str(), allocator).Move(), allocator);
    }

    if (m_businessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessName.c_str(), allocator).Move(), allocator);
    }

    if (m_gUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gUID.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_lBSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LBS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lBS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vagrantsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vagrants";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vagrants.begin(); itr != m_vagrants.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ReqMetadata::GetChannelID() const
{
    return m_channelID;
}

void ReqMetadata::SetChannelID(const string& _channelID)
{
    m_channelID = _channelID;
    m_channelIDHasBeenSet = true;
}

bool ReqMetadata::ChannelIDHasBeenSet() const
{
    return m_channelIDHasBeenSet;
}

string ReqMetadata::GetBusinessName() const
{
    return m_businessName;
}

void ReqMetadata::SetBusinessName(const string& _businessName)
{
    m_businessName = _businessName;
    m_businessNameHasBeenSet = true;
}

bool ReqMetadata::BusinessNameHasBeenSet() const
{
    return m_businessNameHasBeenSet;
}

string ReqMetadata::GetGUID() const
{
    return m_gUID;
}

void ReqMetadata::SetGUID(const string& _gUID)
{
    m_gUID = _gUID;
    m_gUIDHasBeenSet = true;
}

bool ReqMetadata::GUIDHasBeenSet() const
{
    return m_gUIDHasBeenSet;
}

string ReqMetadata::GetAppKey() const
{
    return m_appKey;
}

void ReqMetadata::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool ReqMetadata::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

ReqMetadataLBS ReqMetadata::GetLBS() const
{
    return m_lBS;
}

void ReqMetadata::SetLBS(const ReqMetadataLBS& _lBS)
{
    m_lBS = _lBS;
    m_lBSHasBeenSet = true;
}

bool ReqMetadata::LBSHasBeenSet() const
{
    return m_lBSHasBeenSet;
}

vector<ReqMetadataVagrant> ReqMetadata::GetVagrants() const
{
    return m_vagrants;
}

void ReqMetadata::SetVagrants(const vector<ReqMetadataVagrant>& _vagrants)
{
    m_vagrants = _vagrants;
    m_vagrantsHasBeenSet = true;
}

bool ReqMetadata::VagrantsHasBeenSet() const
{
    return m_vagrantsHasBeenSet;
}

