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

#include <tencentcloud/rce/v20201103/model/InputDescribeNameListDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputDescribeNameListDetail::InputDescribeNameListDetail() :
    m_nameListIdHasBeenSet(false)
{
}

CoreInternalOutcome InputDescribeNameListDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameListId") && !value["NameListId"].IsNull())
    {
        if (!value["NameListId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeNameListDetail.NameListId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nameListId = value["NameListId"].GetInt64();
        m_nameListIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputDescribeNameListDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameListIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameListId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nameListId, allocator);
    }

}


int64_t InputDescribeNameListDetail::GetNameListId() const
{
    return m_nameListId;
}

void InputDescribeNameListDetail::SetNameListId(const int64_t& _nameListId)
{
    m_nameListId = _nameListId;
    m_nameListIdHasBeenSet = true;
}

bool InputDescribeNameListDetail::NameListIdHasBeenSet() const
{
    return m_nameListIdHasBeenSet;
}

