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

#include <tencentcloud/ssa/v20180608/model/Tag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

Tag::Tag() :
    m_fidHasBeenSet(false),
    m_fnameHasBeenSet(false)
{
}

CoreInternalOutcome Tag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Fid") && !value["Fid"].IsNull())
    {
        if (!value["Fid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tag.Fid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fid = value["Fid"].GetInt64();
        m_fidHasBeenSet = true;
    }

    if (value.HasMember("Fname") && !value["Fname"].IsNull())
    {
        if (!value["Fname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tag.Fname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fname = string(value["Fname"].GetString());
        m_fnameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Tag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fid, allocator);
    }

    if (m_fnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fname.c_str(), allocator).Move(), allocator);
    }

}


int64_t Tag::GetFid() const
{
    return m_fid;
}

void Tag::SetFid(const int64_t& _fid)
{
    m_fid = _fid;
    m_fidHasBeenSet = true;
}

bool Tag::FidHasBeenSet() const
{
    return m_fidHasBeenSet;
}

string Tag::GetFname() const
{
    return m_fname;
}

void Tag::SetFname(const string& _fname)
{
    m_fname = _fname;
    m_fnameHasBeenSet = true;
}

bool Tag::FnameHasBeenSet() const
{
    return m_fnameHasBeenSet;
}

