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

#include <tencentcloud/cpdp/v20190820/model/ContractSyncInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ContractSyncInfo::ContractSyncInfo() :
    m_externalReturnContractInfoHasBeenSet(false),
    m_externalContractUserInfoHasBeenSet(false),
    m_contractMethodHasBeenSet(false),
    m_contractSceneIdHasBeenSet(false),
    m_externalReturnContractDataHasBeenSet(false)
{
}

CoreInternalOutcome ContractSyncInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalReturnContractInfo") && !value["ExternalReturnContractInfo"].IsNull())
    {
        if (!value["ExternalReturnContractInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContractSyncInfo.ExternalReturnContractInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externalReturnContractInfo.Deserialize(value["ExternalReturnContractInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalReturnContractInfoHasBeenSet = true;
    }

    if (value.HasMember("ExternalContractUserInfo") && !value["ExternalContractUserInfo"].IsNull())
    {
        if (!value["ExternalContractUserInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContractSyncInfo.ExternalContractUserInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ExternalContractUserInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExternalContractUserInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_externalContractUserInfo.push_back(item);
        }
        m_externalContractUserInfoHasBeenSet = true;
    }

    if (value.HasMember("ContractMethod") && !value["ContractMethod"].IsNull())
    {
        if (!value["ContractMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractSyncInfo.ContractMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractMethod = string(value["ContractMethod"].GetString());
        m_contractMethodHasBeenSet = true;
    }

    if (value.HasMember("ContractSceneId") && !value["ContractSceneId"].IsNull())
    {
        if (!value["ContractSceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractSyncInfo.ContractSceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractSceneId = string(value["ContractSceneId"].GetString());
        m_contractSceneIdHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractData") && !value["ExternalReturnContractData"].IsNull())
    {
        if (!value["ExternalReturnContractData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractSyncInfo.ExternalReturnContractData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnContractData = string(value["ExternalReturnContractData"].GetString());
        m_externalReturnContractDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContractSyncInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalReturnContractInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalReturnContractInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalContractUserInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalContractUserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalContractUserInfo.begin(); itr != m_externalContractUserInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_contractMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_contractSceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractSceneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractSceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnContractDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnContractData.c_str(), allocator).Move(), allocator);
    }

}


ExternalReturnContractInfo ContractSyncInfo::GetExternalReturnContractInfo() const
{
    return m_externalReturnContractInfo;
}

void ContractSyncInfo::SetExternalReturnContractInfo(const ExternalReturnContractInfo& _externalReturnContractInfo)
{
    m_externalReturnContractInfo = _externalReturnContractInfo;
    m_externalReturnContractInfoHasBeenSet = true;
}

bool ContractSyncInfo::ExternalReturnContractInfoHasBeenSet() const
{
    return m_externalReturnContractInfoHasBeenSet;
}

vector<ExternalContractUserInfo> ContractSyncInfo::GetExternalContractUserInfo() const
{
    return m_externalContractUserInfo;
}

void ContractSyncInfo::SetExternalContractUserInfo(const vector<ExternalContractUserInfo>& _externalContractUserInfo)
{
    m_externalContractUserInfo = _externalContractUserInfo;
    m_externalContractUserInfoHasBeenSet = true;
}

bool ContractSyncInfo::ExternalContractUserInfoHasBeenSet() const
{
    return m_externalContractUserInfoHasBeenSet;
}

string ContractSyncInfo::GetContractMethod() const
{
    return m_contractMethod;
}

void ContractSyncInfo::SetContractMethod(const string& _contractMethod)
{
    m_contractMethod = _contractMethod;
    m_contractMethodHasBeenSet = true;
}

bool ContractSyncInfo::ContractMethodHasBeenSet() const
{
    return m_contractMethodHasBeenSet;
}

string ContractSyncInfo::GetContractSceneId() const
{
    return m_contractSceneId;
}

void ContractSyncInfo::SetContractSceneId(const string& _contractSceneId)
{
    m_contractSceneId = _contractSceneId;
    m_contractSceneIdHasBeenSet = true;
}

bool ContractSyncInfo::ContractSceneIdHasBeenSet() const
{
    return m_contractSceneIdHasBeenSet;
}

string ContractSyncInfo::GetExternalReturnContractData() const
{
    return m_externalReturnContractData;
}

void ContractSyncInfo::SetExternalReturnContractData(const string& _externalReturnContractData)
{
    m_externalReturnContractData = _externalReturnContractData;
    m_externalReturnContractDataHasBeenSet = true;
}

bool ContractSyncInfo::ExternalReturnContractDataHasBeenSet() const
{
    return m_externalReturnContractDataHasBeenSet;
}

