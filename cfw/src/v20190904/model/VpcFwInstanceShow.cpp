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

#include <tencentcloud/cfw/v20190904/model/VpcFwInstanceShow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

VpcFwInstanceShow::VpcFwInstanceShow() :
    m_fwInsIdHasBeenSet(false),
    m_fwInsNameHasBeenSet(false),
    m_fwInsRegionHasBeenSet(false)
{
}

CoreInternalOutcome VpcFwInstanceShow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FwInsId") && !value["FwInsId"].IsNull())
    {
        if (!value["FwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceShow.FwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsId = string(value["FwInsId"].GetString());
        m_fwInsIdHasBeenSet = true;
    }

    if (value.HasMember("FwInsName") && !value["FwInsName"].IsNull())
    {
        if (!value["FwInsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceShow.FwInsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsName = string(value["FwInsName"].GetString());
        m_fwInsNameHasBeenSet = true;
    }

    if (value.HasMember("FwInsRegion") && !value["FwInsRegion"].IsNull())
    {
        if (!value["FwInsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceShow.FwInsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsRegion = string(value["FwInsRegion"].GetString());
        m_fwInsRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcFwInstanceShow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwInsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsName.c_str(), allocator).Move(), allocator);
    }

    if (m_fwInsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsRegion.c_str(), allocator).Move(), allocator);
    }

}


string VpcFwInstanceShow::GetFwInsId() const
{
    return m_fwInsId;
}

void VpcFwInstanceShow::SetFwInsId(const string& _fwInsId)
{
    m_fwInsId = _fwInsId;
    m_fwInsIdHasBeenSet = true;
}

bool VpcFwInstanceShow::FwInsIdHasBeenSet() const
{
    return m_fwInsIdHasBeenSet;
}

string VpcFwInstanceShow::GetFwInsName() const
{
    return m_fwInsName;
}

void VpcFwInstanceShow::SetFwInsName(const string& _fwInsName)
{
    m_fwInsName = _fwInsName;
    m_fwInsNameHasBeenSet = true;
}

bool VpcFwInstanceShow::FwInsNameHasBeenSet() const
{
    return m_fwInsNameHasBeenSet;
}

string VpcFwInstanceShow::GetFwInsRegion() const
{
    return m_fwInsRegion;
}

void VpcFwInstanceShow::SetFwInsRegion(const string& _fwInsRegion)
{
    m_fwInsRegion = _fwInsRegion;
    m_fwInsRegionHasBeenSet = true;
}

bool VpcFwInstanceShow::FwInsRegionHasBeenSet() const
{
    return m_fwInsRegionHasBeenSet;
}

