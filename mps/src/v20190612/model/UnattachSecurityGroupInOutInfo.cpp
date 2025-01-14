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

#include <tencentcloud/mps/v20190612/model/UnattachSecurityGroupInOutInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

UnattachSecurityGroupInOutInfo::UnattachSecurityGroupInOutInfo() :
    m_flowIdHasBeenSet(false),
    m_inOutIdHasBeenSet(false),
    m_inOutTypeHasBeenSet(false),
    m_flowRegionHasBeenSet(false)
{
}

CoreInternalOutcome UnattachSecurityGroupInOutInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnattachSecurityGroupInOutInfo.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("InOutId") && !value["InOutId"].IsNull())
    {
        if (!value["InOutId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnattachSecurityGroupInOutInfo.InOutId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inOutId = string(value["InOutId"].GetString());
        m_inOutIdHasBeenSet = true;
    }

    if (value.HasMember("InOutType") && !value["InOutType"].IsNull())
    {
        if (!value["InOutType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnattachSecurityGroupInOutInfo.InOutType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inOutType = string(value["InOutType"].GetString());
        m_inOutTypeHasBeenSet = true;
    }

    if (value.HasMember("FlowRegion") && !value["FlowRegion"].IsNull())
    {
        if (!value["FlowRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnattachSecurityGroupInOutInfo.FlowRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowRegion = string(value["FlowRegion"].GetString());
        m_flowRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnattachSecurityGroupInOutInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_inOutIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InOutId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inOutId.c_str(), allocator).Move(), allocator);
    }

    if (m_inOutTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InOutType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inOutType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowRegion.c_str(), allocator).Move(), allocator);
    }

}


string UnattachSecurityGroupInOutInfo::GetFlowId() const
{
    return m_flowId;
}

void UnattachSecurityGroupInOutInfo::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool UnattachSecurityGroupInOutInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string UnattachSecurityGroupInOutInfo::GetInOutId() const
{
    return m_inOutId;
}

void UnattachSecurityGroupInOutInfo::SetInOutId(const string& _inOutId)
{
    m_inOutId = _inOutId;
    m_inOutIdHasBeenSet = true;
}

bool UnattachSecurityGroupInOutInfo::InOutIdHasBeenSet() const
{
    return m_inOutIdHasBeenSet;
}

string UnattachSecurityGroupInOutInfo::GetInOutType() const
{
    return m_inOutType;
}

void UnattachSecurityGroupInOutInfo::SetInOutType(const string& _inOutType)
{
    m_inOutType = _inOutType;
    m_inOutTypeHasBeenSet = true;
}

bool UnattachSecurityGroupInOutInfo::InOutTypeHasBeenSet() const
{
    return m_inOutTypeHasBeenSet;
}

string UnattachSecurityGroupInOutInfo::GetFlowRegion() const
{
    return m_flowRegion;
}

void UnattachSecurityGroupInOutInfo::SetFlowRegion(const string& _flowRegion)
{
    m_flowRegion = _flowRegion;
    m_flowRegionHasBeenSet = true;
}

bool UnattachSecurityGroupInOutInfo::FlowRegionHasBeenSet() const
{
    return m_flowRegionHasBeenSet;
}

