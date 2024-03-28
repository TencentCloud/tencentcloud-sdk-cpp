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

#include <tencentcloud/ckafka/v20190819/model/PrometheusDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

PrometheusDTO::PrometheusDTO() :
    m_typeHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_sourcePortHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusDTO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusDTO.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("SourcePort") && !value["SourcePort"].IsNull())
    {
        if (!value["SourcePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusDTO.SourcePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourcePort = value["SourcePort"].GetInt64();
        m_sourcePortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sourcePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourcePort, allocator);
    }

}


string PrometheusDTO::GetType() const
{
    return m_type;
}

void PrometheusDTO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PrometheusDTO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PrometheusDTO::GetSourceIp() const
{
    return m_sourceIp;
}

void PrometheusDTO::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool PrometheusDTO::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

int64_t PrometheusDTO::GetSourcePort() const
{
    return m_sourcePort;
}

void PrometheusDTO::SetSourcePort(const int64_t& _sourcePort)
{
    m_sourcePort = _sourcePort;
    m_sourcePortHasBeenSet = true;
}

bool PrometheusDTO::SourcePortHasBeenSet() const
{
    return m_sourcePortHasBeenSet;
}

