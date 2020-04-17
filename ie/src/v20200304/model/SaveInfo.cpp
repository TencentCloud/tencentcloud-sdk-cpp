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

#include <tencentcloud/ie/v20200304/model/SaveInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

SaveInfo::SaveInfo() :
    m_typeHasBeenSet(false),
    m_cosInfoHasBeenSet(false)
{
}

CoreInternalOutcome SaveInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SaveInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CosInfo") && !value["CosInfo"].IsNull())
    {
        if (!value["CosInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SaveInfo.CosInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosInfo.Deserialize(value["CosInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SaveInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_cosInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cosInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t SaveInfo::GetType() const
{
    return m_type;
}

void SaveInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SaveInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

CosInfo SaveInfo::GetCosInfo() const
{
    return m_cosInfo;
}

void SaveInfo::SetCosInfo(const CosInfo& _cosInfo)
{
    m_cosInfo = _cosInfo;
    m_cosInfoHasBeenSet = true;
}

bool SaveInfo::CosInfoHasBeenSet() const
{
    return m_cosInfoHasBeenSet;
}

