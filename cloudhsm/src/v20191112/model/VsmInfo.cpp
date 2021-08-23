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

#include <tencentcloud/cloudhsm/v20191112/model/VsmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

VsmInfo::VsmInfo() :
    m_typeNameHasBeenSet(false),
    m_typeIDHasBeenSet(false)
{
}

CoreInternalOutcome VsmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VsmInfo.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("TypeID") && !value["TypeID"].IsNull())
    {
        if (!value["TypeID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VsmInfo.TypeID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_typeID = value["TypeID"].GetInt64();
        m_typeIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VsmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeID, allocator);
    }

}


string VsmInfo::GetTypeName() const
{
    return m_typeName;
}

void VsmInfo::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool VsmInfo::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

int64_t VsmInfo::GetTypeID() const
{
    return m_typeID;
}

void VsmInfo::SetTypeID(const int64_t& _typeID)
{
    m_typeID = _typeID;
    m_typeIDHasBeenSet = true;
}

bool VsmInfo::TypeIDHasBeenSet() const
{
    return m_typeIDHasBeenSet;
}

