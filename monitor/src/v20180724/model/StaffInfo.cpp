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

#include <tencentcloud/monitor/v20180724/model/StaffInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

StaffInfo::StaffInfo() :
    m_staffIDsHasBeenSet(false)
{
}

CoreInternalOutcome StaffInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StaffIDs") && !value["StaffIDs"].IsNull())
    {
        if (!value["StaffIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StaffInfo.StaffIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["StaffIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_staffIDs.push_back((*itr).GetString());
        }
        m_staffIDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaffInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_staffIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_staffIDs.begin(); itr != m_staffIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> StaffInfo::GetStaffIDs() const
{
    return m_staffIDs;
}

void StaffInfo::SetStaffIDs(const vector<string>& _staffIDs)
{
    m_staffIDs = _staffIDs;
    m_staffIDsHasBeenSet = true;
}

bool StaffInfo::StaffIDsHasBeenSet() const
{
    return m_staffIDsHasBeenSet;
}

