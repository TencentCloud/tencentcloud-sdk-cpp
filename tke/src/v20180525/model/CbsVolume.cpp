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

#include <tencentcloud/tke/v20180525/model/CbsVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CbsVolume::CbsVolume() :
    m_cbsDiskIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome CbsVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CbsDiskId") && !value["CbsDiskId"].IsNull())
    {
        if (!value["CbsDiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CbsVolume.CbsDiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cbsDiskId = string(value["CbsDiskId"].GetString());
        m_cbsDiskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CbsVolume.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CbsVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cbsDiskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CbsDiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cbsDiskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string CbsVolume::GetCbsDiskId() const
{
    return m_cbsDiskId;
}

void CbsVolume::SetCbsDiskId(const string& _cbsDiskId)
{
    m_cbsDiskId = _cbsDiskId;
    m_cbsDiskIdHasBeenSet = true;
}

bool CbsVolume::CbsDiskIdHasBeenSet() const
{
    return m_cbsDiskIdHasBeenSet;
}

string CbsVolume::GetName() const
{
    return m_name;
}

void CbsVolume::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CbsVolume::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

