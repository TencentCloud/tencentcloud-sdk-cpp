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

#include <tencentcloud/cdb/v20170320/model/BackupLimitVpcItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

BackupLimitVpcItem::BackupLimitVpcItem() :
    m_regionHasBeenSet(false),
    m_vpcListHasBeenSet(false)
{
}

CoreInternalOutcome BackupLimitVpcItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLimitVpcItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcList") && !value["VpcList"].IsNull())
    {
        if (!value["VpcList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupLimitVpcItem.VpcList` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vpcList.push_back((*itr).GetString());
        }
        m_vpcListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupLimitVpcItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcList.begin(); itr != m_vpcList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BackupLimitVpcItem::GetRegion() const
{
    return m_region;
}

void BackupLimitVpcItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BackupLimitVpcItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> BackupLimitVpcItem::GetVpcList() const
{
    return m_vpcList;
}

void BackupLimitVpcItem::SetVpcList(const vector<string>& _vpcList)
{
    m_vpcList = _vpcList;
    m_vpcListHasBeenSet = true;
}

bool BackupLimitVpcItem::VpcListHasBeenSet() const
{
    return m_vpcListHasBeenSet;
}

