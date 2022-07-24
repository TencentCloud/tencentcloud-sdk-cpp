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

#include <tencentcloud/ckafka/v20190819/model/DropCls.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DropCls::DropCls() :
    m_dropInvalidMessageToClsHasBeenSet(false),
    m_dropClsRegionHasBeenSet(false),
    m_dropClsOwneruinHasBeenSet(false),
    m_dropClsTopicIdHasBeenSet(false),
    m_dropClsLogSetHasBeenSet(false)
{
}

CoreInternalOutcome DropCls::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DropInvalidMessageToCls") && !value["DropInvalidMessageToCls"].IsNull())
    {
        if (!value["DropInvalidMessageToCls"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DropCls.DropInvalidMessageToCls` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dropInvalidMessageToCls = value["DropInvalidMessageToCls"].GetBool();
        m_dropInvalidMessageToClsHasBeenSet = true;
    }

    if (value.HasMember("DropClsRegion") && !value["DropClsRegion"].IsNull())
    {
        if (!value["DropClsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DropCls.DropClsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dropClsRegion = string(value["DropClsRegion"].GetString());
        m_dropClsRegionHasBeenSet = true;
    }

    if (value.HasMember("DropClsOwneruin") && !value["DropClsOwneruin"].IsNull())
    {
        if (!value["DropClsOwneruin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DropCls.DropClsOwneruin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dropClsOwneruin = string(value["DropClsOwneruin"].GetString());
        m_dropClsOwneruinHasBeenSet = true;
    }

    if (value.HasMember("DropClsTopicId") && !value["DropClsTopicId"].IsNull())
    {
        if (!value["DropClsTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DropCls.DropClsTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dropClsTopicId = string(value["DropClsTopicId"].GetString());
        m_dropClsTopicIdHasBeenSet = true;
    }

    if (value.HasMember("DropClsLogSet") && !value["DropClsLogSet"].IsNull())
    {
        if (!value["DropClsLogSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DropCls.DropClsLogSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dropClsLogSet = string(value["DropClsLogSet"].GetString());
        m_dropClsLogSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DropCls::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dropInvalidMessageToClsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropInvalidMessageToCls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropInvalidMessageToCls, allocator);
    }

    if (m_dropClsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropClsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dropClsRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dropClsOwneruinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropClsOwneruin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dropClsOwneruin.c_str(), allocator).Move(), allocator);
    }

    if (m_dropClsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dropClsTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_dropClsLogSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropClsLogSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dropClsLogSet.c_str(), allocator).Move(), allocator);
    }

}


bool DropCls::GetDropInvalidMessageToCls() const
{
    return m_dropInvalidMessageToCls;
}

void DropCls::SetDropInvalidMessageToCls(const bool& _dropInvalidMessageToCls)
{
    m_dropInvalidMessageToCls = _dropInvalidMessageToCls;
    m_dropInvalidMessageToClsHasBeenSet = true;
}

bool DropCls::DropInvalidMessageToClsHasBeenSet() const
{
    return m_dropInvalidMessageToClsHasBeenSet;
}

string DropCls::GetDropClsRegion() const
{
    return m_dropClsRegion;
}

void DropCls::SetDropClsRegion(const string& _dropClsRegion)
{
    m_dropClsRegion = _dropClsRegion;
    m_dropClsRegionHasBeenSet = true;
}

bool DropCls::DropClsRegionHasBeenSet() const
{
    return m_dropClsRegionHasBeenSet;
}

string DropCls::GetDropClsOwneruin() const
{
    return m_dropClsOwneruin;
}

void DropCls::SetDropClsOwneruin(const string& _dropClsOwneruin)
{
    m_dropClsOwneruin = _dropClsOwneruin;
    m_dropClsOwneruinHasBeenSet = true;
}

bool DropCls::DropClsOwneruinHasBeenSet() const
{
    return m_dropClsOwneruinHasBeenSet;
}

string DropCls::GetDropClsTopicId() const
{
    return m_dropClsTopicId;
}

void DropCls::SetDropClsTopicId(const string& _dropClsTopicId)
{
    m_dropClsTopicId = _dropClsTopicId;
    m_dropClsTopicIdHasBeenSet = true;
}

bool DropCls::DropClsTopicIdHasBeenSet() const
{
    return m_dropClsTopicIdHasBeenSet;
}

string DropCls::GetDropClsLogSet() const
{
    return m_dropClsLogSet;
}

void DropCls::SetDropClsLogSet(const string& _dropClsLogSet)
{
    m_dropClsLogSet = _dropClsLogSet;
    m_dropClsLogSetHasBeenSet = true;
}

bool DropCls::DropClsLogSetHasBeenSet() const
{
    return m_dropClsLogSetHasBeenSet;
}

