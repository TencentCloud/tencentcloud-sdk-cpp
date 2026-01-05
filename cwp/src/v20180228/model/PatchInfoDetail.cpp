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

#include <tencentcloud/cwp/v20180228/model/PatchInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

PatchInfoDetail::PatchInfoDetail() :
    m_kBNoHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_relatedCveIdHasBeenSet(false),
    m_kbDocUrlHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome PatchInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KBNo") && !value["KBNo"].IsNull())
    {
        if (!value["KBNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchInfoDetail.KBNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kBNo = string(value["KBNo"].GetString());
        m_kBNoHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchInfoDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchInfoDetail.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("RelatedCveId") && !value["RelatedCveId"].IsNull())
    {
        if (!value["RelatedCveId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PatchInfoDetail.RelatedCveId` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedCveId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_relatedCveId.push_back((*itr).GetString());
        }
        m_relatedCveIdHasBeenSet = true;
    }

    if (value.HasMember("KbDocUrl") && !value["KbDocUrl"].IsNull())
    {
        if (!value["KbDocUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchInfoDetail.KbDocUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbDocUrl = string(value["KbDocUrl"].GetString());
        m_kbDocUrlHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PatchInfoDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PatchInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kBNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kBNo.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedCveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedCveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_relatedCveId.begin(); itr != m_relatedCveId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kbDocUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbDocUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbDocUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string PatchInfoDetail::GetKBNo() const
{
    return m_kBNo;
}

void PatchInfoDetail::SetKBNo(const string& _kBNo)
{
    m_kBNo = _kBNo;
    m_kBNoHasBeenSet = true;
}

bool PatchInfoDetail::KBNoHasBeenSet() const
{
    return m_kBNoHasBeenSet;
}

string PatchInfoDetail::GetName() const
{
    return m_name;
}

void PatchInfoDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PatchInfoDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PatchInfoDetail::GetPublishTime() const
{
    return m_publishTime;
}

void PatchInfoDetail::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool PatchInfoDetail::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

vector<string> PatchInfoDetail::GetRelatedCveId() const
{
    return m_relatedCveId;
}

void PatchInfoDetail::SetRelatedCveId(const vector<string>& _relatedCveId)
{
    m_relatedCveId = _relatedCveId;
    m_relatedCveIdHasBeenSet = true;
}

bool PatchInfoDetail::RelatedCveIdHasBeenSet() const
{
    return m_relatedCveIdHasBeenSet;
}

string PatchInfoDetail::GetKbDocUrl() const
{
    return m_kbDocUrl;
}

void PatchInfoDetail::SetKbDocUrl(const string& _kbDocUrl)
{
    m_kbDocUrl = _kbDocUrl;
    m_kbDocUrlHasBeenSet = true;
}

bool PatchInfoDetail::KbDocUrlHasBeenSet() const
{
    return m_kbDocUrlHasBeenSet;
}

uint64_t PatchInfoDetail::GetId() const
{
    return m_id;
}

void PatchInfoDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PatchInfoDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

