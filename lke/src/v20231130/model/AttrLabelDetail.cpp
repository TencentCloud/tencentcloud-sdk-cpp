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

#include <tencentcloud/lke/v20231130/model/AttrLabelDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AttrLabelDetail::AttrLabelDetail() :
    m_attrBizIdHasBeenSet(false),
    m_attrKeyHasBeenSet(false),
    m_attrNameHasBeenSet(false),
    m_labelNamesHasBeenSet(false),
    m_isUpdatingHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_labelTotalCountHasBeenSet(false)
{
}

CoreInternalOutcome AttrLabelDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttrBizId") && !value["AttrBizId"].IsNull())
    {
        if (!value["AttrBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabelDetail.AttrBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attrBizId = string(value["AttrBizId"].GetString());
        m_attrBizIdHasBeenSet = true;
    }

    if (value.HasMember("AttrKey") && !value["AttrKey"].IsNull())
    {
        if (!value["AttrKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabelDetail.AttrKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attrKey = string(value["AttrKey"].GetString());
        m_attrKeyHasBeenSet = true;
    }

    if (value.HasMember("AttrName") && !value["AttrName"].IsNull())
    {
        if (!value["AttrName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabelDetail.AttrName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attrName = string(value["AttrName"].GetString());
        m_attrNameHasBeenSet = true;
    }

    if (value.HasMember("LabelNames") && !value["LabelNames"].IsNull())
    {
        if (!value["LabelNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttrLabelDetail.LabelNames` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelNames.push_back((*itr).GetString());
        }
        m_labelNamesHasBeenSet = true;
    }

    if (value.HasMember("IsUpdating") && !value["IsUpdating"].IsNull())
    {
        if (!value["IsUpdating"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabelDetail.IsUpdating` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUpdating = value["IsUpdating"].GetBool();
        m_isUpdatingHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabelDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabelDetail.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("LabelTotalCount") && !value["LabelTotalCount"].IsNull())
    {
        if (!value["LabelTotalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabelDetail.LabelTotalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelTotalCount = string(value["LabelTotalCount"].GetString());
        m_labelTotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttrLabelDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attrBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attrBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_attrKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attrKey.c_str(), allocator).Move(), allocator);
    }

    if (m_attrNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attrName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelNames.begin(); itr != m_labelNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isUpdatingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUpdating";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUpdating, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_labelTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelTotalCount.c_str(), allocator).Move(), allocator);
    }

}


string AttrLabelDetail::GetAttrBizId() const
{
    return m_attrBizId;
}

void AttrLabelDetail::SetAttrBizId(const string& _attrBizId)
{
    m_attrBizId = _attrBizId;
    m_attrBizIdHasBeenSet = true;
}

bool AttrLabelDetail::AttrBizIdHasBeenSet() const
{
    return m_attrBizIdHasBeenSet;
}

string AttrLabelDetail::GetAttrKey() const
{
    return m_attrKey;
}

void AttrLabelDetail::SetAttrKey(const string& _attrKey)
{
    m_attrKey = _attrKey;
    m_attrKeyHasBeenSet = true;
}

bool AttrLabelDetail::AttrKeyHasBeenSet() const
{
    return m_attrKeyHasBeenSet;
}

string AttrLabelDetail::GetAttrName() const
{
    return m_attrName;
}

void AttrLabelDetail::SetAttrName(const string& _attrName)
{
    m_attrName = _attrName;
    m_attrNameHasBeenSet = true;
}

bool AttrLabelDetail::AttrNameHasBeenSet() const
{
    return m_attrNameHasBeenSet;
}

vector<string> AttrLabelDetail::GetLabelNames() const
{
    return m_labelNames;
}

void AttrLabelDetail::SetLabelNames(const vector<string>& _labelNames)
{
    m_labelNames = _labelNames;
    m_labelNamesHasBeenSet = true;
}

bool AttrLabelDetail::LabelNamesHasBeenSet() const
{
    return m_labelNamesHasBeenSet;
}

bool AttrLabelDetail::GetIsUpdating() const
{
    return m_isUpdating;
}

void AttrLabelDetail::SetIsUpdating(const bool& _isUpdating)
{
    m_isUpdating = _isUpdating;
    m_isUpdatingHasBeenSet = true;
}

bool AttrLabelDetail::IsUpdatingHasBeenSet() const
{
    return m_isUpdatingHasBeenSet;
}

int64_t AttrLabelDetail::GetStatus() const
{
    return m_status;
}

void AttrLabelDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AttrLabelDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AttrLabelDetail::GetStatusDesc() const
{
    return m_statusDesc;
}

void AttrLabelDetail::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool AttrLabelDetail::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string AttrLabelDetail::GetLabelTotalCount() const
{
    return m_labelTotalCount;
}

void AttrLabelDetail::SetLabelTotalCount(const string& _labelTotalCount)
{
    m_labelTotalCount = _labelTotalCount;
    m_labelTotalCountHasBeenSet = true;
}

bool AttrLabelDetail::LabelTotalCountHasBeenSet() const
{
    return m_labelTotalCountHasBeenSet;
}

