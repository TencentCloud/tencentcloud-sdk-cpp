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

#include <tencentcloud/tcss/v20201101/model/ClusterRiskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ClusterRiskItem::ClusterRiskItem() :
    m_checkItemHasBeenSet(false),
    m_verifyInfoHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_affectedClusterCountHasBeenSet(false),
    m_affectedNodeCountHasBeenSet(false)
{
}

CoreInternalOutcome ClusterRiskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckItem") && !value["CheckItem"].IsNull())
    {
        if (!value["CheckItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterRiskItem.CheckItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkItem.Deserialize(value["CheckItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkItemHasBeenSet = true;
    }

    if (value.HasMember("VerifyInfo") && !value["VerifyInfo"].IsNull())
    {
        if (!value["VerifyInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterRiskItem.VerifyInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyInfo = string(value["VerifyInfo"].GetString());
        m_verifyInfoHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterRiskItem.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("AffectedClusterCount") && !value["AffectedClusterCount"].IsNull())
    {
        if (!value["AffectedClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterRiskItem.AffectedClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedClusterCount = value["AffectedClusterCount"].GetUint64();
        m_affectedClusterCountHasBeenSet = true;
    }

    if (value.HasMember("AffectedNodeCount") && !value["AffectedNodeCount"].IsNull())
    {
        if (!value["AffectedNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterRiskItem.AffectedNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedNodeCount = value["AffectedNodeCount"].GetUint64();
        m_affectedNodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterRiskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_verifyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedClusterCount, allocator);
    }

    if (m_affectedNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedNodeCount, allocator);
    }

}


ClusterCheckItem ClusterRiskItem::GetCheckItem() const
{
    return m_checkItem;
}

void ClusterRiskItem::SetCheckItem(const ClusterCheckItem& _checkItem)
{
    m_checkItem = _checkItem;
    m_checkItemHasBeenSet = true;
}

bool ClusterRiskItem::CheckItemHasBeenSet() const
{
    return m_checkItemHasBeenSet;
}

string ClusterRiskItem::GetVerifyInfo() const
{
    return m_verifyInfo;
}

void ClusterRiskItem::SetVerifyInfo(const string& _verifyInfo)
{
    m_verifyInfo = _verifyInfo;
    m_verifyInfoHasBeenSet = true;
}

bool ClusterRiskItem::VerifyInfoHasBeenSet() const
{
    return m_verifyInfoHasBeenSet;
}

string ClusterRiskItem::GetErrorMessage() const
{
    return m_errorMessage;
}

void ClusterRiskItem::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ClusterRiskItem::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

uint64_t ClusterRiskItem::GetAffectedClusterCount() const
{
    return m_affectedClusterCount;
}

void ClusterRiskItem::SetAffectedClusterCount(const uint64_t& _affectedClusterCount)
{
    m_affectedClusterCount = _affectedClusterCount;
    m_affectedClusterCountHasBeenSet = true;
}

bool ClusterRiskItem::AffectedClusterCountHasBeenSet() const
{
    return m_affectedClusterCountHasBeenSet;
}

uint64_t ClusterRiskItem::GetAffectedNodeCount() const
{
    return m_affectedNodeCount;
}

void ClusterRiskItem::SetAffectedNodeCount(const uint64_t& _affectedNodeCount)
{
    m_affectedNodeCount = _affectedNodeCount;
    m_affectedNodeCountHasBeenSet = true;
}

bool ClusterRiskItem::AffectedNodeCountHasBeenSet() const
{
    return m_affectedNodeCountHasBeenSet;
}

