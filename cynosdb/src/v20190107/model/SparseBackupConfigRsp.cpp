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

#include <tencentcloud/cynosdb/v20190107/model/SparseBackupConfigRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SparseBackupConfigRsp::SparseBackupConfigRsp() :
    m_sparseBackupSwitchHasBeenSet(false),
    m_sparseBackupConfigInfosHasBeenSet(false)
{
}

CoreInternalOutcome SparseBackupConfigRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SparseBackupSwitch") && !value["SparseBackupSwitch"].IsNull())
    {
        if (!value["SparseBackupSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparseBackupConfigRsp.SparseBackupSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparseBackupSwitch = string(value["SparseBackupSwitch"].GetString());
        m_sparseBackupSwitchHasBeenSet = true;
    }

    if (value.HasMember("SparseBackupConfigInfos") && !value["SparseBackupConfigInfos"].IsNull())
    {
        if (!value["SparseBackupConfigInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SparseBackupConfigRsp.SparseBackupConfigInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SparseBackupConfigInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SparseBackupConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sparseBackupConfigInfos.push_back(item);
        }
        m_sparseBackupConfigInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparseBackupConfigRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sparseBackupSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparseBackupSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparseBackupSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_sparseBackupConfigInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparseBackupConfigInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sparseBackupConfigInfos.begin(); itr != m_sparseBackupConfigInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SparseBackupConfigRsp::GetSparseBackupSwitch() const
{
    return m_sparseBackupSwitch;
}

void SparseBackupConfigRsp::SetSparseBackupSwitch(const string& _sparseBackupSwitch)
{
    m_sparseBackupSwitch = _sparseBackupSwitch;
    m_sparseBackupSwitchHasBeenSet = true;
}

bool SparseBackupConfigRsp::SparseBackupSwitchHasBeenSet() const
{
    return m_sparseBackupSwitchHasBeenSet;
}

vector<SparseBackupConfigInfo> SparseBackupConfigRsp::GetSparseBackupConfigInfos() const
{
    return m_sparseBackupConfigInfos;
}

void SparseBackupConfigRsp::SetSparseBackupConfigInfos(const vector<SparseBackupConfigInfo>& _sparseBackupConfigInfos)
{
    m_sparseBackupConfigInfos = _sparseBackupConfigInfos;
    m_sparseBackupConfigInfosHasBeenSet = true;
}

bool SparseBackupConfigRsp::SparseBackupConfigInfosHasBeenSet() const
{
    return m_sparseBackupConfigInfosHasBeenSet;
}

