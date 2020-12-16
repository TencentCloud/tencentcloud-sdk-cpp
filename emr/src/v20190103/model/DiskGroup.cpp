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

#include <tencentcloud/emr/v20190103/model/DiskGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

DiskGroup::DiskGroup() :
    m_specHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome DiskGroup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsObject())
        {
            return CoreInternalOutcome(Error("response `DiskGroup.Spec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spec.Deserialize(value["Spec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_specHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DiskGroup.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskGroup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_specHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_spec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_countHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


DiskSpec DiskGroup::GetSpec() const
{
    return m_spec;
}

void DiskGroup::SetSpec(const DiskSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool DiskGroup::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t DiskGroup::GetCount() const
{
    return m_count;
}

void DiskGroup::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DiskGroup::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

