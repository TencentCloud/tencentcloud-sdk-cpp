/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/IndexAccesses.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

IndexAccesses::IndexAccesses() :
    m_opsHasBeenSet(false),
    m_sinceHasBeenSet(false)
{
}

CoreInternalOutcome IndexAccesses::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ops") && !value["Ops"].IsNull())
    {
        if (!value["Ops"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexAccesses.Ops` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ops = value["Ops"].GetInt64();
        m_opsHasBeenSet = true;
    }

    if (value.HasMember("Since") && !value["Since"].IsNull())
    {
        if (!value["Since"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexAccesses.Since` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_since = string(value["Since"].GetString());
        m_sinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexAccesses::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_opsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ops";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ops, allocator);
    }

    if (m_sinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Since";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_since.c_str(), allocator).Move(), allocator);
    }

}


int64_t IndexAccesses::GetOps() const
{
    return m_ops;
}

void IndexAccesses::SetOps(const int64_t& _ops)
{
    m_ops = _ops;
    m_opsHasBeenSet = true;
}

bool IndexAccesses::OpsHasBeenSet() const
{
    return m_opsHasBeenSet;
}

string IndexAccesses::GetSince() const
{
    return m_since;
}

void IndexAccesses::SetSince(const string& _since)
{
    m_since = _since;
    m_sinceHasBeenSet = true;
}

bool IndexAccesses::SinceHasBeenSet() const
{
    return m_sinceHasBeenSet;
}

