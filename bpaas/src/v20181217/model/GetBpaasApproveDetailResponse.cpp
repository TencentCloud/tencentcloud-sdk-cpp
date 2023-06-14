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

#include <tencentcloud/bpaas/v20181217/model/GetBpaasApproveDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bpaas::V20181217::Model;
using namespace std;

GetBpaasApproveDetailResponse::GetBpaasApproveDetailResponse() :
    m_applyUinHasBeenSet(false),
    m_applyOwnUinHasBeenSet(false),
    m_applyUinNickHasBeenSet(false),
    m_bpaasIdHasBeenSet(false),
    m_bpaasNameHasBeenSet(false),
    m_applicationParamsHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_approvingNodeIdHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome GetBpaasApproveDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ApplyUin") && !rsp["ApplyUin"].IsNull())
    {
        if (!rsp["ApplyUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applyUin = rsp["ApplyUin"].GetUint64();
        m_applyUinHasBeenSet = true;
    }

    if (rsp.HasMember("ApplyOwnUin") && !rsp["ApplyOwnUin"].IsNull())
    {
        if (!rsp["ApplyOwnUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyOwnUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applyOwnUin = rsp["ApplyOwnUin"].GetUint64();
        m_applyOwnUinHasBeenSet = true;
    }

    if (rsp.HasMember("ApplyUinNick") && !rsp["ApplyUinNick"].IsNull())
    {
        if (!rsp["ApplyUinNick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyUinNick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyUinNick = string(rsp["ApplyUinNick"].GetString());
        m_applyUinNickHasBeenSet = true;
    }

    if (rsp.HasMember("BpaasId") && !rsp["BpaasId"].IsNull())
    {
        if (!rsp["BpaasId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BpaasId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bpaasId = rsp["BpaasId"].GetUint64();
        m_bpaasIdHasBeenSet = true;
    }

    if (rsp.HasMember("BpaasName") && !rsp["BpaasName"].IsNull())
    {
        if (!rsp["BpaasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BpaasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bpaasName = string(rsp["BpaasName"].GetString());
        m_bpaasNameHasBeenSet = true;
    }

    if (rsp.HasMember("ApplicationParams") && !rsp["ApplicationParams"].IsNull())
    {
        if (!rsp["ApplicationParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationParams` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApplicationParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplyParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_applicationParams.push_back(item);
        }
        m_applicationParamsHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Nodes") && !rsp["Nodes"].IsNull())
    {
        if (!rsp["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Nodes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatusNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodes.push_back(item);
        }
        m_nodesHasBeenSet = true;
    }

    if (rsp.HasMember("ApprovingNodeId") && !rsp["ApprovingNodeId"].IsNull())
    {
        if (!rsp["ApprovingNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApprovingNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvingNodeId = string(rsp["ApprovingNodeId"].GetString());
        m_approvingNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetBpaasApproveDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_applyUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyUin, allocator);
    }

    if (m_applyOwnUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyOwnUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyOwnUin, allocator);
    }

    if (m_applyUinNickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyUinNick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyUinNick.c_str(), allocator).Move(), allocator);
    }

    if (m_bpaasIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BpaasId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bpaasId, allocator);
    }

    if (m_bpaasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BpaasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bpaasName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applicationParams.begin(); itr != m_applicationParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_approvingNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovingNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvingNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
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


uint64_t GetBpaasApproveDetailResponse::GetApplyUin() const
{
    return m_applyUin;
}

bool GetBpaasApproveDetailResponse::ApplyUinHasBeenSet() const
{
    return m_applyUinHasBeenSet;
}

uint64_t GetBpaasApproveDetailResponse::GetApplyOwnUin() const
{
    return m_applyOwnUin;
}

bool GetBpaasApproveDetailResponse::ApplyOwnUinHasBeenSet() const
{
    return m_applyOwnUinHasBeenSet;
}

string GetBpaasApproveDetailResponse::GetApplyUinNick() const
{
    return m_applyUinNick;
}

bool GetBpaasApproveDetailResponse::ApplyUinNickHasBeenSet() const
{
    return m_applyUinNickHasBeenSet;
}

uint64_t GetBpaasApproveDetailResponse::GetBpaasId() const
{
    return m_bpaasId;
}

bool GetBpaasApproveDetailResponse::BpaasIdHasBeenSet() const
{
    return m_bpaasIdHasBeenSet;
}

string GetBpaasApproveDetailResponse::GetBpaasName() const
{
    return m_bpaasName;
}

bool GetBpaasApproveDetailResponse::BpaasNameHasBeenSet() const
{
    return m_bpaasNameHasBeenSet;
}

vector<ApplyParam> GetBpaasApproveDetailResponse::GetApplicationParams() const
{
    return m_applicationParams;
}

bool GetBpaasApproveDetailResponse::ApplicationParamsHasBeenSet() const
{
    return m_applicationParamsHasBeenSet;
}

string GetBpaasApproveDetailResponse::GetReason() const
{
    return m_reason;
}

bool GetBpaasApproveDetailResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string GetBpaasApproveDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool GetBpaasApproveDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t GetBpaasApproveDetailResponse::GetStatus() const
{
    return m_status;
}

bool GetBpaasApproveDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<StatusNode> GetBpaasApproveDetailResponse::GetNodes() const
{
    return m_nodes;
}

bool GetBpaasApproveDetailResponse::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

string GetBpaasApproveDetailResponse::GetApprovingNodeId() const
{
    return m_approvingNodeId;
}

bool GetBpaasApproveDetailResponse::ApprovingNodeIdHasBeenSet() const
{
    return m_approvingNodeIdHasBeenSet;
}

string GetBpaasApproveDetailResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool GetBpaasApproveDetailResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}


