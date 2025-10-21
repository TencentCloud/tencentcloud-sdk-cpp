/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cpdp/v20190820/model/DistributeAccreditQueryResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DistributeAccreditQueryResult::DistributeAccreditQueryResult() :
    m_statusHasBeenSet(false),
    m_contractUrlHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome DistributeAccreditQueryResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeAccreditQueryResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ContractUrl") && !value["ContractUrl"].IsNull())
    {
        if (!value["ContractUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeAccreditQueryResult.ContractUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractUrl = string(value["ContractUrl"].GetString());
        m_contractUrlHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeAccreditQueryResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DistributeAccreditQueryResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_contractUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string DistributeAccreditQueryResult::GetStatus() const
{
    return m_status;
}

void DistributeAccreditQueryResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DistributeAccreditQueryResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DistributeAccreditQueryResult::GetContractUrl() const
{
    return m_contractUrl;
}

void DistributeAccreditQueryResult::SetContractUrl(const string& _contractUrl)
{
    m_contractUrl = _contractUrl;
    m_contractUrlHasBeenSet = true;
}

bool DistributeAccreditQueryResult::ContractUrlHasBeenSet() const
{
    return m_contractUrlHasBeenSet;
}

string DistributeAccreditQueryResult::GetRemark() const
{
    return m_remark;
}

void DistributeAccreditQueryResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DistributeAccreditQueryResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

