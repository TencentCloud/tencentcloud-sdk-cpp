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

#include <tencentcloud/lighthouse/v20200324/model/CcnAttachedInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

CcnAttachedInstance::CcnAttachedInstance() :
    m_ccnIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_attachedTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome CcnAttachedInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnAttachedInstance.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CcnAttachedInstance.CidrBlock` is not array type"));

        const rapidjson::Value &tmpValue = value["CidrBlock"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cidrBlock.push_back((*itr).GetString());
        }
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnAttachedInstance.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AttachedTime") && !value["AttachedTime"].IsNull())
    {
        if (!value["AttachedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnAttachedInstance.AttachedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachedTime = string(value["AttachedTime"].GetString());
        m_attachedTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnAttachedInstance.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnAttachedInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cidrBlock.begin(); itr != m_cidrBlock.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string CcnAttachedInstance::GetCcnId() const
{
    return m_ccnId;
}

void CcnAttachedInstance::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CcnAttachedInstance::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

vector<string> CcnAttachedInstance::GetCidrBlock() const
{
    return m_cidrBlock;
}

void CcnAttachedInstance::SetCidrBlock(const vector<string>& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool CcnAttachedInstance::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string CcnAttachedInstance::GetState() const
{
    return m_state;
}

void CcnAttachedInstance::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CcnAttachedInstance::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CcnAttachedInstance::GetAttachedTime() const
{
    return m_attachedTime;
}

void CcnAttachedInstance::SetAttachedTime(const string& _attachedTime)
{
    m_attachedTime = _attachedTime;
    m_attachedTimeHasBeenSet = true;
}

bool CcnAttachedInstance::AttachedTimeHasBeenSet() const
{
    return m_attachedTimeHasBeenSet;
}

string CcnAttachedInstance::GetDescription() const
{
    return m_description;
}

void CcnAttachedInstance::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CcnAttachedInstance::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

