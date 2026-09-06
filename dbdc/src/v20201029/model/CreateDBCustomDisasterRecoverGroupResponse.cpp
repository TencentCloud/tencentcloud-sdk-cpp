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

#include <tencentcloud/dbdc/v20201029/model/CreateDBCustomDisasterRecoverGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

CreateDBCustomDisasterRecoverGroupResponse::CreateDBCustomDisasterRecoverGroupResponse() :
    m_disasterRecoverGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodeQuotaTotalHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_strategyHasBeenSet(false)
{
}

CoreInternalOutcome CreateDBCustomDisasterRecoverGroupResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DisasterRecoverGroupId") && !rsp["DisasterRecoverGroupId"].IsNull())
    {
        if (!rsp["DisasterRecoverGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoverGroupId = string(rsp["DisasterRecoverGroupId"].GetString());
        m_disasterRecoverGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("NodeQuotaTotal") && !rsp["NodeQuotaTotal"].IsNull())
    {
        if (!rsp["NodeQuotaTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeQuotaTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeQuotaTotal = rsp["NodeQuotaTotal"].GetInt64();
        m_nodeQuotaTotalHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentNum") && !rsp["CurrentNum"].IsNull())
    {
        if (!rsp["CurrentNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = rsp["CurrentNum"].GetInt64();
        m_currentNumHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Strategy") && !rsp["Strategy"].IsNull())
    {
        if (!rsp["Strategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = string(rsp["Strategy"].GetString());
        m_strategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateDBCustomDisasterRecoverGroupResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_disasterRecoverGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disasterRecoverGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeQuotaTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeQuotaTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeQuotaTotal, allocator);
    }

    if (m_currentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentNum, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string CreateDBCustomDisasterRecoverGroupResponse::GetDisasterRecoverGroupId() const
{
    return m_disasterRecoverGroupId;
}

bool CreateDBCustomDisasterRecoverGroupResponse::DisasterRecoverGroupIdHasBeenSet() const
{
    return m_disasterRecoverGroupIdHasBeenSet;
}

string CreateDBCustomDisasterRecoverGroupResponse::GetName() const
{
    return m_name;
}

bool CreateDBCustomDisasterRecoverGroupResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDBCustomDisasterRecoverGroupResponse::GetType() const
{
    return m_type;
}

bool CreateDBCustomDisasterRecoverGroupResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateDBCustomDisasterRecoverGroupResponse::GetStatus() const
{
    return m_status;
}

bool CreateDBCustomDisasterRecoverGroupResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CreateDBCustomDisasterRecoverGroupResponse::GetNodeQuotaTotal() const
{
    return m_nodeQuotaTotal;
}

bool CreateDBCustomDisasterRecoverGroupResponse::NodeQuotaTotalHasBeenSet() const
{
    return m_nodeQuotaTotalHasBeenSet;
}

int64_t CreateDBCustomDisasterRecoverGroupResponse::GetCurrentNum() const
{
    return m_currentNum;
}

bool CreateDBCustomDisasterRecoverGroupResponse::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

string CreateDBCustomDisasterRecoverGroupResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool CreateDBCustomDisasterRecoverGroupResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string CreateDBCustomDisasterRecoverGroupResponse::GetStrategy() const
{
    return m_strategy;
}

bool CreateDBCustomDisasterRecoverGroupResponse::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}


