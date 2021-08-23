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

#include <tencentcloud/iotcloud/v20180614/model/ProductMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

ProductMetadata::ProductMetadata() :
    m_creationDateHasBeenSet(false)
{
}

CoreInternalOutcome ProductMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationDate") && !value["CreationDate"].IsNull())
    {
        if (!value["CreationDate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductMetadata.CreationDate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creationDate = value["CreationDate"].GetUint64();
        m_creationDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creationDate, allocator);
    }

}


uint64_t ProductMetadata::GetCreationDate() const
{
    return m_creationDate;
}

void ProductMetadata::SetCreationDate(const uint64_t& _creationDate)
{
    m_creationDate = _creationDate;
    m_creationDateHasBeenSet = true;
}

bool ProductMetadata::CreationDateHasBeenSet() const
{
    return m_creationDateHasBeenSet;
}

