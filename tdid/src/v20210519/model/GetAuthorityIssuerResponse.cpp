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

#include <tencentcloud/tdid/v20210519/model/GetAuthorityIssuerResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetAuthorityIssuerResponse::GetAuthorityIssuerResponse() :
    m_nameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_didHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_recognizeTimeHasBeenSet(false)
{
}

CoreInternalOutcome GetAuthorityIssuerResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = rsp["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("Did") && !rsp["Did"].IsNull())
    {
        if (!rsp["Did"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Did` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_did = string(rsp["Did"].GetString());
        m_didHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("RegisterTime") && !rsp["RegisterTime"].IsNull())
    {
        if (!rsp["RegisterTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerTime = string(rsp["RegisterTime"].GetString());
        m_registerTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeTime") && !rsp["RecognizeTime"].IsNull())
    {
        if (!rsp["RecognizeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recognizeTime = string(rsp["RecognizeTime"].GetString());
        m_recognizeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetAuthorityIssuerResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_registerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recognizeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recognizeTime.c_str(), allocator).Move(), allocator);
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


string GetAuthorityIssuerResponse::GetName() const
{
    return m_name;
}

bool GetAuthorityIssuerResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetAuthorityIssuerResponse::GetClusterId() const
{
    return m_clusterId;
}

bool GetAuthorityIssuerResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t GetAuthorityIssuerResponse::GetGroupId() const
{
    return m_groupId;
}

bool GetAuthorityIssuerResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GetAuthorityIssuerResponse::GetDid() const
{
    return m_did;
}

bool GetAuthorityIssuerResponse::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

string GetAuthorityIssuerResponse::GetRemark() const
{
    return m_remark;
}

bool GetAuthorityIssuerResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string GetAuthorityIssuerResponse::GetRegisterTime() const
{
    return m_registerTime;
}

bool GetAuthorityIssuerResponse::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

string GetAuthorityIssuerResponse::GetRecognizeTime() const
{
    return m_recognizeTime;
}

bool GetAuthorityIssuerResponse::RecognizeTimeHasBeenSet() const
{
    return m_recognizeTimeHasBeenSet;
}


