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

#include <tencentcloud/mps/v20190612/model/TEHDConfigForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TEHDConfigForUpdate::TEHDConfigForUpdate() :
    m_typeHasBeenSet(false),
    m_maxVideoBitrateHasBeenSet(false)
{
}

CoreInternalOutcome TEHDConfigForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TEHDConfigForUpdate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MaxVideoBitrate") && !value["MaxVideoBitrate"].IsNull())
    {
        if (!value["MaxVideoBitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TEHDConfigForUpdate.MaxVideoBitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxVideoBitrate = value["MaxVideoBitrate"].GetInt64();
        m_maxVideoBitrateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TEHDConfigForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_maxVideoBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxVideoBitrate, allocator);
    }

}


string TEHDConfigForUpdate::GetType() const
{
    return m_type;
}

void TEHDConfigForUpdate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TEHDConfigForUpdate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t TEHDConfigForUpdate::GetMaxVideoBitrate() const
{
    return m_maxVideoBitrate;
}

void TEHDConfigForUpdate::SetMaxVideoBitrate(const int64_t& _maxVideoBitrate)
{
    m_maxVideoBitrate = _maxVideoBitrate;
    m_maxVideoBitrateHasBeenSet = true;
}

bool TEHDConfigForUpdate::MaxVideoBitrateHasBeenSet() const
{
    return m_maxVideoBitrateHasBeenSet;
}

