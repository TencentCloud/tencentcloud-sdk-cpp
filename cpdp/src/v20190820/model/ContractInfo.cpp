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

#include <tencentcloud/cpdp/v20190820/model/ContractInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ContractInfo::ContractInfo() :
    m_channelContractMerchantIdHasBeenSet(false),
    m_channelContractSubMerchantIdHasBeenSet(false),
    m_channelContractAppIdHasBeenSet(false),
    m_channelContractSubAppIdHasBeenSet(false),
    m_outContractCodeHasBeenSet(false),
    m_externalContractUserInfoListHasBeenSet(false),
    m_contractMethodHasBeenSet(false),
    m_contractSceneIdHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_externalContractDataHasBeenSet(false)
{
}

CoreInternalOutcome ContractInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelContractMerchantId") && !value["ChannelContractMerchantId"].IsNull())
    {
        if (!value["ChannelContractMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractInfo.ChannelContractMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelContractMerchantId = string(value["ChannelContractMerchantId"].GetString());
        m_channelContractMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelContractSubMerchantId") && !value["ChannelContractSubMerchantId"].IsNull())
    {
        if (!value["ChannelContractSubMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractInfo.ChannelContractSubMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelContractSubMerchantId = string(value["ChannelContractSubMerchantId"].GetString());
        m_channelContractSubMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelContractAppId") && !value["ChannelContractAppId"].IsNull())
    {
        if (!value["ChannelContractAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractInfo.ChannelContractAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelContractAppId = string(value["ChannelContractAppId"].GetString());
        m_channelContractAppIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelContractSubAppId") && !value["ChannelContractSubAppId"].IsNull())
    {
        if (!value["ChannelContractSubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractInfo.ChannelContractSubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelContractSubAppId = string(value["ChannelContractSubAppId"].GetString());
        m_channelContractSubAppIdHasBeenSet = true;
    }

    if (value.HasMember("OutContractCode") && !value["OutContractCode"].IsNull())
    {
        if (!value["OutContractCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractInfo.OutContractCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outContractCode = string(value["OutContractCode"].GetString());
        m_outContractCodeHasBeenSet = true;
    }

    if (value.HasMember("ExternalContractUserInfoList") && !value["ExternalContractUserInfoList"].IsNull())
    {
        if (!value["ExternalContractUserInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContractInfo.ExternalContractUserInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExternalContractUserInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExternalContractUserInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_externalContractUserInfoList.push_back(item);
        }
        m_externalContractUserInfoListHasBeenSet = true;
    }

    if (value.HasMember("ContractMethod") && !value["ContractMethod"].IsNull())
    {
        if (!value["ContractMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractInfo.ContractMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractMethod = string(value["ContractMethod"].GetString());
        m_contractMethodHasBeenSet = true;
    }

    if (value.HasMember("ContractSceneId") && !value["ContractSceneId"].IsNull())
    {
        if (!value["ContractSceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractInfo.ContractSceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractSceneId = string(value["ContractSceneId"].GetString());
        m_contractSceneIdHasBeenSet = true;
    }

    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContractInfo.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("ExternalContractData") && !value["ExternalContractData"].IsNull())
    {
        if (!value["ExternalContractData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractInfo.ExternalContractData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalContractData = string(value["ExternalContractData"].GetString());
        m_externalContractDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContractInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelContractMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelContractMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelContractMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelContractSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelContractSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelContractSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelContractAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelContractAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelContractAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelContractSubAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelContractSubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelContractSubAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_outContractCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutContractCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outContractCode.c_str(), allocator).Move(), allocator);
    }

    if (m_externalContractUserInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalContractUserInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalContractUserInfoList.begin(); itr != m_externalContractUserInfoList.end(); ++itr, ++i)
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

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalContractDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalContractData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalContractData.c_str(), allocator).Move(), allocator);
    }

}


string ContractInfo::GetChannelContractMerchantId() const
{
    return m_channelContractMerchantId;
}

void ContractInfo::SetChannelContractMerchantId(const string& _channelContractMerchantId)
{
    m_channelContractMerchantId = _channelContractMerchantId;
    m_channelContractMerchantIdHasBeenSet = true;
}

bool ContractInfo::ChannelContractMerchantIdHasBeenSet() const
{
    return m_channelContractMerchantIdHasBeenSet;
}

string ContractInfo::GetChannelContractSubMerchantId() const
{
    return m_channelContractSubMerchantId;
}

void ContractInfo::SetChannelContractSubMerchantId(const string& _channelContractSubMerchantId)
{
    m_channelContractSubMerchantId = _channelContractSubMerchantId;
    m_channelContractSubMerchantIdHasBeenSet = true;
}

bool ContractInfo::ChannelContractSubMerchantIdHasBeenSet() const
{
    return m_channelContractSubMerchantIdHasBeenSet;
}

string ContractInfo::GetChannelContractAppId() const
{
    return m_channelContractAppId;
}

void ContractInfo::SetChannelContractAppId(const string& _channelContractAppId)
{
    m_channelContractAppId = _channelContractAppId;
    m_channelContractAppIdHasBeenSet = true;
}

bool ContractInfo::ChannelContractAppIdHasBeenSet() const
{
    return m_channelContractAppIdHasBeenSet;
}

string ContractInfo::GetChannelContractSubAppId() const
{
    return m_channelContractSubAppId;
}

void ContractInfo::SetChannelContractSubAppId(const string& _channelContractSubAppId)
{
    m_channelContractSubAppId = _channelContractSubAppId;
    m_channelContractSubAppIdHasBeenSet = true;
}

bool ContractInfo::ChannelContractSubAppIdHasBeenSet() const
{
    return m_channelContractSubAppIdHasBeenSet;
}

string ContractInfo::GetOutContractCode() const
{
    return m_outContractCode;
}

void ContractInfo::SetOutContractCode(const string& _outContractCode)
{
    m_outContractCode = _outContractCode;
    m_outContractCodeHasBeenSet = true;
}

bool ContractInfo::OutContractCodeHasBeenSet() const
{
    return m_outContractCodeHasBeenSet;
}

vector<ExternalContractUserInfo> ContractInfo::GetExternalContractUserInfoList() const
{
    return m_externalContractUserInfoList;
}

void ContractInfo::SetExternalContractUserInfoList(const vector<ExternalContractUserInfo>& _externalContractUserInfoList)
{
    m_externalContractUserInfoList = _externalContractUserInfoList;
    m_externalContractUserInfoListHasBeenSet = true;
}

bool ContractInfo::ExternalContractUserInfoListHasBeenSet() const
{
    return m_externalContractUserInfoListHasBeenSet;
}

string ContractInfo::GetContractMethod() const
{
    return m_contractMethod;
}

void ContractInfo::SetContractMethod(const string& _contractMethod)
{
    m_contractMethod = _contractMethod;
    m_contractMethodHasBeenSet = true;
}

bool ContractInfo::ContractMethodHasBeenSet() const
{
    return m_contractMethodHasBeenSet;
}

string ContractInfo::GetContractSceneId() const
{
    return m_contractSceneId;
}

void ContractInfo::SetContractSceneId(const string& _contractSceneId)
{
    m_contractSceneId = _contractSceneId;
    m_contractSceneIdHasBeenSet = true;
}

bool ContractInfo::ContractSceneIdHasBeenSet() const
{
    return m_contractSceneIdHasBeenSet;
}

ContractUserInfo ContractInfo::GetUserInfo() const
{
    return m_userInfo;
}

void ContractInfo::SetUserInfo(const ContractUserInfo& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool ContractInfo::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

string ContractInfo::GetExternalContractData() const
{
    return m_externalContractData;
}

void ContractInfo::SetExternalContractData(const string& _externalContractData)
{
    m_externalContractData = _externalContractData;
    m_externalContractDataHasBeenSet = true;
}

bool ContractInfo::ExternalContractDataHasBeenSet() const
{
    return m_externalContractDataHasBeenSet;
}

