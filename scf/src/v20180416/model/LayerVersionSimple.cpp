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

#include <tencentcloud/scf/v20180416/model/LayerVersionSimple.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

LayerVersionSimple::LayerVersionSimple() :
    m_layerNameHasBeenSet(false),
    m_layerVersionHasBeenSet(false)
{
}

CoreInternalOutcome LayerVersionSimple::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LayerName") && !value["LayerName"].IsNull())
    {
        if (!value["LayerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersionSimple.LayerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerName = string(value["LayerName"].GetString());
        m_layerNameHasBeenSet = true;
    }

    if (value.HasMember("LayerVersion") && !value["LayerVersion"].IsNull())
    {
        if (!value["LayerVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersionSimple.LayerVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layerVersion = value["LayerVersion"].GetInt64();
        m_layerVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LayerVersionSimple::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerName.c_str(), allocator).Move(), allocator);
    }

    if (m_layerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerVersion, allocator);
    }

}


string LayerVersionSimple::GetLayerName() const
{
    return m_layerName;
}

void LayerVersionSimple::SetLayerName(const string& _layerName)
{
    m_layerName = _layerName;
    m_layerNameHasBeenSet = true;
}

bool LayerVersionSimple::LayerNameHasBeenSet() const
{
    return m_layerNameHasBeenSet;
}

int64_t LayerVersionSimple::GetLayerVersion() const
{
    return m_layerVersion;
}

void LayerVersionSimple::SetLayerVersion(const int64_t& _layerVersion)
{
    m_layerVersion = _layerVersion;
    m_layerVersionHasBeenSet = true;
}

bool LayerVersionSimple::LayerVersionHasBeenSet() const
{
    return m_layerVersionHasBeenSet;
}

