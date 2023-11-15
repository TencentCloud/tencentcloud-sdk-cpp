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

#include <tencentcloud/weilingwith/v20230427/model/WorkspaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

WorkspaceInfo::WorkspaceInfo() :
    m_workspaceIdHasBeenSet(false),
    m_chineseNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_parkNameHasBeenSet(false),
    m_parkNumHasBeenSet(false),
    m_administrativeDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.WorkspaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = value["WorkspaceId"].GetInt64();
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("ChineseName") && !value["ChineseName"].IsNull())
    {
        if (!value["ChineseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.ChineseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chineseName = string(value["ChineseName"].GetString());
        m_chineseNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ParkName") && !value["ParkName"].IsNull())
    {
        if (!value["ParkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.ParkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parkName = string(value["ParkName"].GetString());
        m_parkNameHasBeenSet = true;
    }

    if (value.HasMember("ParkNum") && !value["ParkNum"].IsNull())
    {
        if (!value["ParkNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.ParkNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parkNum = string(value["ParkNum"].GetString());
        m_parkNumHasBeenSet = true;
    }

    if (value.HasMember("AdministrativeDetailSet") && !value["AdministrativeDetailSet"].IsNull())
    {
        if (!value["AdministrativeDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.AdministrativeDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AdministrativeDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdministrativeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_administrativeDetailSet.push_back(item);
        }
        m_administrativeDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_chineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChineseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chineseName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_parkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parkName.c_str(), allocator).Move(), allocator);
    }

    if (m_parkNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParkNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parkNum.c_str(), allocator).Move(), allocator);
    }

    if (m_administrativeDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdministrativeDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_administrativeDetailSet.begin(); itr != m_administrativeDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t WorkspaceInfo::GetWorkspaceId() const
{
    return m_workspaceId;
}

void WorkspaceInfo::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool WorkspaceInfo::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string WorkspaceInfo::GetChineseName() const
{
    return m_chineseName;
}

void WorkspaceInfo::SetChineseName(const string& _chineseName)
{
    m_chineseName = _chineseName;
    m_chineseNameHasBeenSet = true;
}

bool WorkspaceInfo::ChineseNameHasBeenSet() const
{
    return m_chineseNameHasBeenSet;
}

string WorkspaceInfo::GetDescription() const
{
    return m_description;
}

void WorkspaceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkspaceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t WorkspaceInfo::GetStatus() const
{
    return m_status;
}

void WorkspaceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkspaceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WorkspaceInfo::GetParkName() const
{
    return m_parkName;
}

void WorkspaceInfo::SetParkName(const string& _parkName)
{
    m_parkName = _parkName;
    m_parkNameHasBeenSet = true;
}

bool WorkspaceInfo::ParkNameHasBeenSet() const
{
    return m_parkNameHasBeenSet;
}

string WorkspaceInfo::GetParkNum() const
{
    return m_parkNum;
}

void WorkspaceInfo::SetParkNum(const string& _parkNum)
{
    m_parkNum = _parkNum;
    m_parkNumHasBeenSet = true;
}

bool WorkspaceInfo::ParkNumHasBeenSet() const
{
    return m_parkNumHasBeenSet;
}

vector<AdministrativeDetail> WorkspaceInfo::GetAdministrativeDetailSet() const
{
    return m_administrativeDetailSet;
}

void WorkspaceInfo::SetAdministrativeDetailSet(const vector<AdministrativeDetail>& _administrativeDetailSet)
{
    m_administrativeDetailSet = _administrativeDetailSet;
    m_administrativeDetailSetHasBeenSet = true;
}

bool WorkspaceInfo::AdministrativeDetailSetHasBeenSet() const
{
    return m_administrativeDetailSetHasBeenSet;
}

