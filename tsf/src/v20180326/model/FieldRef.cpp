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

#include <tencentcloud/tsf/v20180326/model/FieldRef.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

FieldRef::FieldRef() :
    m_fieldPathHasBeenSet(false)
{
}

CoreInternalOutcome FieldRef::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldPath") && !value["FieldPath"].IsNull())
    {
        if (!value["FieldPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldRef.FieldPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldPath = string(value["FieldPath"].GetString());
        m_fieldPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldRef::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldPath.c_str(), allocator).Move(), allocator);
    }

}


string FieldRef::GetFieldPath() const
{
    return m_fieldPath;
}

void FieldRef::SetFieldPath(const string& _fieldPath)
{
    m_fieldPath = _fieldPath;
    m_fieldPathHasBeenSet = true;
}

bool FieldRef::FieldPathHasBeenSet() const
{
    return m_fieldPathHasBeenSet;
}

