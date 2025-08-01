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

#include <tencentcloud/iai/v20200303/model/GetUpgradeGroupFaceModelVersionJobListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

GetUpgradeGroupFaceModelVersionJobListResponse::GetUpgradeGroupFaceModelVersionJobListResponse() :
    m_jobInfosHasBeenSet(false),
    m_jobNumHasBeenSet(false)
{
}

CoreInternalOutcome GetUpgradeGroupFaceModelVersionJobListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobInfos") && !rsp["JobInfos"].IsNull())
    {
        if (!rsp["JobInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["JobInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UpgradeJobInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_jobInfos.push_back(item);
        }
        m_jobInfosHasBeenSet = true;
    }

    if (rsp.HasMember("JobNum") && !rsp["JobNum"].IsNull())
    {
        if (!rsp["JobNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobNum = rsp["JobNum"].GetUint64();
        m_jobNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetUpgradeGroupFaceModelVersionJobListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_jobInfos.begin(); itr != m_jobInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jobNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobNum, allocator);
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


vector<UpgradeJobInfo> GetUpgradeGroupFaceModelVersionJobListResponse::GetJobInfos() const
{
    return m_jobInfos;
}

bool GetUpgradeGroupFaceModelVersionJobListResponse::JobInfosHasBeenSet() const
{
    return m_jobInfosHasBeenSet;
}

uint64_t GetUpgradeGroupFaceModelVersionJobListResponse::GetJobNum() const
{
    return m_jobNum;
}

bool GetUpgradeGroupFaceModelVersionJobListResponse::JobNumHasBeenSet() const
{
    return m_jobNumHasBeenSet;
}


