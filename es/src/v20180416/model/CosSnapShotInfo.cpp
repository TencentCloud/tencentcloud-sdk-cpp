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

#include <tencentcloud/es/v20180416/model/CosSnapShotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CosSnapShotInfo::CosSnapShotInfo() :
    m_cosBucketHasBeenSet(false),
    m_basePathHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_commonIndexArrHasBeenSet(false),
    m_dataStreamArrHasBeenSet(false)
{
}

CoreInternalOutcome CosSnapShotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucket") && !value["CosBucket"].IsNull())
    {
        if (!value["CosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosSnapShotInfo.CosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucket = string(value["CosBucket"].GetString());
        m_cosBucketHasBeenSet = true;
    }

    if (value.HasMember("BasePath") && !value["BasePath"].IsNull())
    {
        if (!value["BasePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosSnapShotInfo.BasePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_basePath = string(value["BasePath"].GetString());
        m_basePathHasBeenSet = true;
    }

    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosSnapShotInfo.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosSnapShotInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosSnapShotInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CommonIndexArr") && !value["CommonIndexArr"].IsNull())
    {
        if (!value["CommonIndexArr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosSnapShotInfo.CommonIndexArr` is not array type"));

        const rapidjson::Value &tmpValue = value["CommonIndexArr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonIndexInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_commonIndexArr.push_back(item);
        }
        m_commonIndexArrHasBeenSet = true;
    }

    if (value.HasMember("DataStreamArr") && !value["DataStreamArr"].IsNull())
    {
        if (!value["DataStreamArr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosSnapShotInfo.DataStreamArr` is not array type"));

        const rapidjson::Value &tmpValue = value["DataStreamArr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataStreamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataStreamArr.push_back(item);
        }
        m_dataStreamArrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosSnapShotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_basePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_basePath.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_commonIndexArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonIndexArr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_commonIndexArr.begin(); itr != m_commonIndexArr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataStreamArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataStreamArr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataStreamArr.begin(); itr != m_dataStreamArr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CosSnapShotInfo::GetCosBucket() const
{
    return m_cosBucket;
}

void CosSnapShotInfo::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool CosSnapShotInfo::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string CosSnapShotInfo::GetBasePath() const
{
    return m_basePath;
}

void CosSnapShotInfo::SetBasePath(const string& _basePath)
{
    m_basePath = _basePath;
    m_basePathHasBeenSet = true;
}

bool CosSnapShotInfo::BasePathHasBeenSet() const
{
    return m_basePathHasBeenSet;
}

string CosSnapShotInfo::GetSnapshotName() const
{
    return m_snapshotName;
}

void CosSnapShotInfo::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool CosSnapShotInfo::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string CosSnapShotInfo::GetState() const
{
    return m_state;
}

void CosSnapShotInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CosSnapShotInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CosSnapShotInfo::GetVersion() const
{
    return m_version;
}

void CosSnapShotInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool CosSnapShotInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<CommonIndexInfo> CosSnapShotInfo::GetCommonIndexArr() const
{
    return m_commonIndexArr;
}

void CosSnapShotInfo::SetCommonIndexArr(const vector<CommonIndexInfo>& _commonIndexArr)
{
    m_commonIndexArr = _commonIndexArr;
    m_commonIndexArrHasBeenSet = true;
}

bool CosSnapShotInfo::CommonIndexArrHasBeenSet() const
{
    return m_commonIndexArrHasBeenSet;
}

vector<DataStreamInfo> CosSnapShotInfo::GetDataStreamArr() const
{
    return m_dataStreamArr;
}

void CosSnapShotInfo::SetDataStreamArr(const vector<DataStreamInfo>& _dataStreamArr)
{
    m_dataStreamArr = _dataStreamArr;
    m_dataStreamArrHasBeenSet = true;
}

bool CosSnapShotInfo::DataStreamArrHasBeenSet() const
{
    return m_dataStreamArrHasBeenSet;
}

