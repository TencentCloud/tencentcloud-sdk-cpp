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

#include <tencentcloud/chc/v20230418/model/SelfOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

SelfOperation::SelfOperation() :
    m_stuffContactHasBeenSet(false),
    m_stuffIDCardHasBeenSet(false),
    m_stuffNameHasBeenSet(false),
    m_operationTimeHasBeenSet(false),
    m_iDCardTypeHasBeenSet(false)
{
}

CoreInternalOutcome SelfOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StuffContact") && !value["StuffContact"].IsNull())
    {
        if (!value["StuffContact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelfOperation.StuffContact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stuffContact = string(value["StuffContact"].GetString());
        m_stuffContactHasBeenSet = true;
    }

    if (value.HasMember("StuffIDCard") && !value["StuffIDCard"].IsNull())
    {
        if (!value["StuffIDCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelfOperation.StuffIDCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stuffIDCard = string(value["StuffIDCard"].GetString());
        m_stuffIDCardHasBeenSet = true;
    }

    if (value.HasMember("StuffName") && !value["StuffName"].IsNull())
    {
        if (!value["StuffName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelfOperation.StuffName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stuffName = string(value["StuffName"].GetString());
        m_stuffNameHasBeenSet = true;
    }

    if (value.HasMember("OperationTime") && !value["OperationTime"].IsNull())
    {
        if (!value["OperationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelfOperation.OperationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationTime = string(value["OperationTime"].GetString());
        m_operationTimeHasBeenSet = true;
    }

    if (value.HasMember("IDCardType") && !value["IDCardType"].IsNull())
    {
        if (!value["IDCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelfOperation.IDCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDCardType = string(value["IDCardType"].GetString());
        m_iDCardTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SelfOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stuffContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StuffContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stuffContact.c_str(), allocator).Move(), allocator);
    }

    if (m_stuffIDCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StuffIDCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stuffIDCard.c_str(), allocator).Move(), allocator);
    }

    if (m_stuffNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StuffName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stuffName.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_iDCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDCardType.c_str(), allocator).Move(), allocator);
    }

}


string SelfOperation::GetStuffContact() const
{
    return m_stuffContact;
}

void SelfOperation::SetStuffContact(const string& _stuffContact)
{
    m_stuffContact = _stuffContact;
    m_stuffContactHasBeenSet = true;
}

bool SelfOperation::StuffContactHasBeenSet() const
{
    return m_stuffContactHasBeenSet;
}

string SelfOperation::GetStuffIDCard() const
{
    return m_stuffIDCard;
}

void SelfOperation::SetStuffIDCard(const string& _stuffIDCard)
{
    m_stuffIDCard = _stuffIDCard;
    m_stuffIDCardHasBeenSet = true;
}

bool SelfOperation::StuffIDCardHasBeenSet() const
{
    return m_stuffIDCardHasBeenSet;
}

string SelfOperation::GetStuffName() const
{
    return m_stuffName;
}

void SelfOperation::SetStuffName(const string& _stuffName)
{
    m_stuffName = _stuffName;
    m_stuffNameHasBeenSet = true;
}

bool SelfOperation::StuffNameHasBeenSet() const
{
    return m_stuffNameHasBeenSet;
}

string SelfOperation::GetOperationTime() const
{
    return m_operationTime;
}

void SelfOperation::SetOperationTime(const string& _operationTime)
{
    m_operationTime = _operationTime;
    m_operationTimeHasBeenSet = true;
}

bool SelfOperation::OperationTimeHasBeenSet() const
{
    return m_operationTimeHasBeenSet;
}

string SelfOperation::GetIDCardType() const
{
    return m_iDCardType;
}

void SelfOperation::SetIDCardType(const string& _iDCardType)
{
    m_iDCardType = _iDCardType;
    m_iDCardTypeHasBeenSet = true;
}

bool SelfOperation::IDCardTypeHasBeenSet() const
{
    return m_iDCardTypeHasBeenSet;
}

