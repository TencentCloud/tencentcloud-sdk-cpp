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

#include <tencentcloud/iotexplorer/v20190423/model/TWeCallInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TWeCallInfo::TWeCallInfo() :
    m_snHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_activeNumHasBeenSet(false)
{
}

CoreInternalOutcome TWeCallInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sn") && !value["Sn"].IsNull())
    {
        if (!value["Sn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallInfo.Sn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sn = string(value["Sn"].GetString());
        m_snHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ActiveNum") && !value["ActiveNum"].IsNull())
    {
        if (!value["ActiveNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallInfo.ActiveNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeNum = value["ActiveNum"].GetInt64();
        m_activeNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TWeCallInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sn.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_activeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeNum, allocator);
    }

}


string TWeCallInfo::GetSn() const
{
    return m_sn;
}

void TWeCallInfo::SetSn(const string& _sn)
{
    m_sn = _sn;
    m_snHasBeenSet = true;
}

bool TWeCallInfo::SnHasBeenSet() const
{
    return m_snHasBeenSet;
}

string TWeCallInfo::GetModelId() const
{
    return m_modelId;
}

void TWeCallInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool TWeCallInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

int64_t TWeCallInfo::GetActiveNum() const
{
    return m_activeNum;
}

void TWeCallInfo::SetActiveNum(const int64_t& _activeNum)
{
    m_activeNum = _activeNum;
    m_activeNumHasBeenSet = true;
}

bool TWeCallInfo::ActiveNumHasBeenSet() const
{
    return m_activeNumHasBeenSet;
}

