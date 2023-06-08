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

#include <tencentcloud/ckafka/v20190819/model/OperateResponseData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

OperateResponseData::OperateResponseData() :
    m_flowIdHasBeenSet(false),
    m_routeDTOHasBeenSet(false)
{
}

CoreInternalOutcome OperateResponseData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OperateResponseData.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("RouteDTO") && !value["RouteDTO"].IsNull())
    {
        if (!value["RouteDTO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OperateResponseData.RouteDTO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_routeDTO.Deserialize(value["RouteDTO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_routeDTOHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperateResponseData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_routeDTOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteDTO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routeDTO.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t OperateResponseData::GetFlowId() const
{
    return m_flowId;
}

void OperateResponseData::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool OperateResponseData::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

RouteDTO OperateResponseData::GetRouteDTO() const
{
    return m_routeDTO;
}

void OperateResponseData::SetRouteDTO(const RouteDTO& _routeDTO)
{
    m_routeDTO = _routeDTO;
    m_routeDTOHasBeenSet = true;
}

bool OperateResponseData::RouteDTOHasBeenSet() const
{
    return m_routeDTOHasBeenSet;
}

