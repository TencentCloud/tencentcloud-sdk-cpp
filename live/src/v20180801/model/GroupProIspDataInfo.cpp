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

#include <tencentcloud/live/v20180801/model/GroupProIspDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

GroupProIspDataInfo::GroupProIspDataInfo() :
    m_provinceNameHasBeenSet(false),
    m_ispNameHasBeenSet(false),
    m_detailInfoListHasBeenSet(false)
{
}

CoreInternalOutcome GroupProIspDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProvinceName") && !value["ProvinceName"].IsNull())
    {
        if (!value["ProvinceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupProIspDataInfo.ProvinceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceName = string(value["ProvinceName"].GetString());
        m_provinceNameHasBeenSet = true;
    }

    if (value.HasMember("IspName") && !value["IspName"].IsNull())
    {
        if (!value["IspName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupProIspDataInfo.IspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispName = string(value["IspName"].GetString());
        m_ispNameHasBeenSet = true;
    }

    if (value.HasMember("DetailInfoList") && !value["DetailInfoList"].IsNull())
    {
        if (!value["DetailInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupProIspDataInfo.DetailInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdnPlayStatData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailInfoList.push_back(item);
        }
        m_detailInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupProIspDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_provinceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceName.c_str(), allocator).Move(), allocator);
    }

    if (m_ispNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispName.c_str(), allocator).Move(), allocator);
    }

    if (m_detailInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailInfoList.begin(); itr != m_detailInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GroupProIspDataInfo::GetProvinceName() const
{
    return m_provinceName;
}

void GroupProIspDataInfo::SetProvinceName(const string& _provinceName)
{
    m_provinceName = _provinceName;
    m_provinceNameHasBeenSet = true;
}

bool GroupProIspDataInfo::ProvinceNameHasBeenSet() const
{
    return m_provinceNameHasBeenSet;
}

string GroupProIspDataInfo::GetIspName() const
{
    return m_ispName;
}

void GroupProIspDataInfo::SetIspName(const string& _ispName)
{
    m_ispName = _ispName;
    m_ispNameHasBeenSet = true;
}

bool GroupProIspDataInfo::IspNameHasBeenSet() const
{
    return m_ispNameHasBeenSet;
}

vector<CdnPlayStatData> GroupProIspDataInfo::GetDetailInfoList() const
{
    return m_detailInfoList;
}

void GroupProIspDataInfo::SetDetailInfoList(const vector<CdnPlayStatData>& _detailInfoList)
{
    m_detailInfoList = _detailInfoList;
    m_detailInfoListHasBeenSet = true;
}

bool GroupProIspDataInfo::DetailInfoListHasBeenSet() const
{
    return m_detailInfoListHasBeenSet;
}

