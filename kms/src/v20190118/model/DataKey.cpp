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

#include <tencentcloud/kms/v20190118/model/DataKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

DataKey::DataKey() :
    m_dataKeyIdHasBeenSet(false)
{
}

CoreInternalOutcome DataKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataKeyId") && !value["DataKeyId"].IsNull())
    {
        if (!value["DataKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKey.DataKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataKeyId = string(value["DataKeyId"].GetString());
        m_dataKeyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataKeyId.c_str(), allocator).Move(), allocator);
    }

}


string DataKey::GetDataKeyId() const
{
    return m_dataKeyId;
}

void DataKey::SetDataKeyId(const string& _dataKeyId)
{
    m_dataKeyId = _dataKeyId;
    m_dataKeyIdHasBeenSet = true;
}

bool DataKey::DataKeyIdHasBeenSet() const
{
    return m_dataKeyIdHasBeenSet;
}

