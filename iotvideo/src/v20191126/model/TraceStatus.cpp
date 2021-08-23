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

#include <tencentcloud/iotvideo/v20191126/model/TraceStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

TraceStatus::TraceStatus() :
    m_tidHasBeenSet(false),
    m_isExistHasBeenSet(false)
{
}

CoreInternalOutcome TraceStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceStatus.Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(value["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("IsExist") && !value["IsExist"].IsNull())
    {
        if (!value["IsExist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TraceStatus.IsExist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExist = value["IsExist"].GetBool();
        m_isExistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TraceStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_isExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExist, allocator);
    }

}


string TraceStatus::GetTid() const
{
    return m_tid;
}

void TraceStatus::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool TraceStatus::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

bool TraceStatus::GetIsExist() const
{
    return m_isExist;
}

void TraceStatus::SetIsExist(const bool& _isExist)
{
    m_isExist = _isExist;
    m_isExistHasBeenSet = true;
}

bool TraceStatus::IsExistHasBeenSet() const
{
    return m_isExistHasBeenSet;
}

