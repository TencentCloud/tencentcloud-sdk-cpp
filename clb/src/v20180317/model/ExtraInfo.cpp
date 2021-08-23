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

#include <tencentcloud/clb/v20180317/model/ExtraInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ExtraInfo::ExtraInfo() :
    m_zhiTongHasBeenSet(false),
    m_tgwGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome ExtraInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZhiTong") && !value["ZhiTong"].IsNull())
    {
        if (!value["ZhiTong"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraInfo.ZhiTong` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_zhiTong = value["ZhiTong"].GetBool();
        m_zhiTongHasBeenSet = true;
    }

    if (value.HasMember("TgwGroupName") && !value["TgwGroupName"].IsNull())
    {
        if (!value["TgwGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraInfo.TgwGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tgwGroupName = string(value["TgwGroupName"].GetString());
        m_tgwGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtraInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zhiTongHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZhiTong";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zhiTong, allocator);
    }

    if (m_tgwGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TgwGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tgwGroupName.c_str(), allocator).Move(), allocator);
    }

}


bool ExtraInfo::GetZhiTong() const
{
    return m_zhiTong;
}

void ExtraInfo::SetZhiTong(const bool& _zhiTong)
{
    m_zhiTong = _zhiTong;
    m_zhiTongHasBeenSet = true;
}

bool ExtraInfo::ZhiTongHasBeenSet() const
{
    return m_zhiTongHasBeenSet;
}

string ExtraInfo::GetTgwGroupName() const
{
    return m_tgwGroupName;
}

void ExtraInfo::SetTgwGroupName(const string& _tgwGroupName)
{
    m_tgwGroupName = _tgwGroupName;
    m_tgwGroupNameHasBeenSet = true;
}

bool ExtraInfo::TgwGroupNameHasBeenSet() const
{
    return m_tgwGroupNameHasBeenSet;
}

