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

#include <tencentcloud/wedata/v20210820/model/IntegrationNodeSchemaMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

IntegrationNodeSchemaMapping::IntegrationNodeSchemaMapping() :
    m_sourceSchemaIdHasBeenSet(false),
    m_sinkSchemaIdHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationNodeSchemaMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceSchemaId") && !value["SourceSchemaId"].IsNull())
    {
        if (!value["SourceSchemaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeSchemaMapping.SourceSchemaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceSchemaId = string(value["SourceSchemaId"].GetString());
        m_sourceSchemaIdHasBeenSet = true;
    }

    if (value.HasMember("SinkSchemaId") && !value["SinkSchemaId"].IsNull())
    {
        if (!value["SinkSchemaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeSchemaMapping.SinkSchemaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sinkSchemaId = string(value["SinkSchemaId"].GetString());
        m_sinkSchemaIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationNodeSchemaMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceSchemaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceSchemaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceSchemaId.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkSchemaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkSchemaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sinkSchemaId.c_str(), allocator).Move(), allocator);
    }

}


string IntegrationNodeSchemaMapping::GetSourceSchemaId() const
{
    return m_sourceSchemaId;
}

void IntegrationNodeSchemaMapping::SetSourceSchemaId(const string& _sourceSchemaId)
{
    m_sourceSchemaId = _sourceSchemaId;
    m_sourceSchemaIdHasBeenSet = true;
}

bool IntegrationNodeSchemaMapping::SourceSchemaIdHasBeenSet() const
{
    return m_sourceSchemaIdHasBeenSet;
}

string IntegrationNodeSchemaMapping::GetSinkSchemaId() const
{
    return m_sinkSchemaId;
}

void IntegrationNodeSchemaMapping::SetSinkSchemaId(const string& _sinkSchemaId)
{
    m_sinkSchemaId = _sinkSchemaId;
    m_sinkSchemaIdHasBeenSet = true;
}

bool IntegrationNodeSchemaMapping::SinkSchemaIdHasBeenSet() const
{
    return m_sinkSchemaIdHasBeenSet;
}

