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

#include <tencentcloud/antiddos/v20200309/model/PackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

PackInfo::PackInfo() :
    m_packTypeHasBeenSet(false),
    m_packIdHasBeenSet(false)
{
}

CoreInternalOutcome PackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackType") && !value["PackType"].IsNull())
    {
        if (!value["PackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackInfo.PackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packType = string(value["PackType"].GetString());
        m_packTypeHasBeenSet = true;
    }

    if (value.HasMember("PackId") && !value["PackId"].IsNull())
    {
        if (!value["PackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackInfo.PackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packId = string(value["PackId"].GetString());
        m_packIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packType.c_str(), allocator).Move(), allocator);
    }

    if (m_packIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packId.c_str(), allocator).Move(), allocator);
    }

}


string PackInfo::GetPackType() const
{
    return m_packType;
}

void PackInfo::SetPackType(const string& _packType)
{
    m_packType = _packType;
    m_packTypeHasBeenSet = true;
}

bool PackInfo::PackTypeHasBeenSet() const
{
    return m_packTypeHasBeenSet;
}

string PackInfo::GetPackId() const
{
    return m_packId;
}

void PackInfo::SetPackId(const string& _packId)
{
    m_packId = _packId;
    m_packIdHasBeenSet = true;
}

bool PackInfo::PackIdHasBeenSet() const
{
    return m_packIdHasBeenSet;
}

