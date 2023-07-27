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

#include <tencentcloud/facefusion/v20220927/model/MetaData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

MetaData::MetaData() :
    m_metaKeyHasBeenSet(false),
    m_metaValueHasBeenSet(false)
{
}

CoreInternalOutcome MetaData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaKey") && !value["MetaKey"].IsNull())
    {
        if (!value["MetaKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaData.MetaKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaKey = string(value["MetaKey"].GetString());
        m_metaKeyHasBeenSet = true;
    }

    if (value.HasMember("MetaValue") && !value["MetaValue"].IsNull())
    {
        if (!value["MetaValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaData.MetaValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaValue = string(value["MetaValue"].GetString());
        m_metaValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetaData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metaKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaKey.c_str(), allocator).Move(), allocator);
    }

    if (m_metaValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaValue.c_str(), allocator).Move(), allocator);
    }

}


string MetaData::GetMetaKey() const
{
    return m_metaKey;
}

void MetaData::SetMetaKey(const string& _metaKey)
{
    m_metaKey = _metaKey;
    m_metaKeyHasBeenSet = true;
}

bool MetaData::MetaKeyHasBeenSet() const
{
    return m_metaKeyHasBeenSet;
}

string MetaData::GetMetaValue() const
{
    return m_metaValue;
}

void MetaData::SetMetaValue(const string& _metaValue)
{
    m_metaValue = _metaValue;
    m_metaValueHasBeenSet = true;
}

bool MetaData::MetaValueHasBeenSet() const
{
    return m_metaValueHasBeenSet;
}

