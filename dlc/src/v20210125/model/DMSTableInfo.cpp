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

#include <tencentcloud/dlc/v20210125/model/DMSTableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DMSTableInfo::DMSTableInfo() :
    m_tableHasBeenSet(false),
    m_assetHasBeenSet(false)
{
}

CoreInternalOutcome DMSTableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTableInfo.Table` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_table.Deserialize(value["Table"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Asset") && !value["Asset"].IsNull())
    {
        if (!value["Asset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTableInfo.Asset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asset.Deserialize(value["Asset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DMSTableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_table.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asset.ToJsonObject(value[key.c_str()], allocator);
    }

}


DMSTable DMSTableInfo::GetTable() const
{
    return m_table;
}

void DMSTableInfo::SetTable(const DMSTable& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool DMSTableInfo::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

Asset DMSTableInfo::GetAsset() const
{
    return m_asset;
}

void DMSTableInfo::SetAsset(const Asset& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool DMSTableInfo::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

