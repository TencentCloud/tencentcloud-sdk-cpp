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

#include <tencentcloud/cme/v20191029/model/VODExportInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

VODExportInfo::VODExportInfo() :
    m_nameHasBeenSet(false),
    m_classIdHasBeenSet(false)
{
}

CoreInternalOutcome VODExportInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `VODExportInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VODExportInfo.ClassId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetUint64();
        m_classIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VODExportInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

}


string VODExportInfo::GetName() const
{
    return m_name;
}

void VODExportInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VODExportInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t VODExportInfo::GetClassId() const
{
    return m_classId;
}

void VODExportInfo::SetClassId(const uint64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool VODExportInfo::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

