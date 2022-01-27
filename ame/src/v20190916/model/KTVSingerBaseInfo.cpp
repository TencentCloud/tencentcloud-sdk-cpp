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

#include <tencentcloud/ame/v20190916/model/KTVSingerBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

KTVSingerBaseInfo::KTVSingerBaseInfo() :
    m_singerIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome KTVSingerBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SingerId") && !value["SingerId"].IsNull())
    {
        if (!value["SingerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerBaseInfo.SingerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singerId = string(value["SingerId"].GetString());
        m_singerIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVSingerBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_singerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singerId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string KTVSingerBaseInfo::GetSingerId() const
{
    return m_singerId;
}

void KTVSingerBaseInfo::SetSingerId(const string& _singerId)
{
    m_singerId = _singerId;
    m_singerIdHasBeenSet = true;
}

bool KTVSingerBaseInfo::SingerIdHasBeenSet() const
{
    return m_singerIdHasBeenSet;
}

string KTVSingerBaseInfo::GetName() const
{
    return m_name;
}

void KTVSingerBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KTVSingerBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

