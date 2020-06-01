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

#include <tencentcloud/iai/v20200303/model/GetPersonGroupInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace rapidjson;
using namespace std;

GetPersonGroupInfoResponse::GetPersonGroupInfoResponse() :
    m_personGroupInfosHasBeenSet(false),
    m_groupNumHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false)
{
}

CoreInternalOutcome GetPersonGroupInfoResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("PersonGroupInfos") && !rsp["PersonGroupInfos"].IsNull())
    {
        if (!rsp["PersonGroupInfos"].IsArray())
            return CoreInternalOutcome(Error("response `PersonGroupInfos` is not array type"));

        const Value &tmpValue = rsp["PersonGroupInfos"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PersonGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_personGroupInfos.push_back(item);
        }
        m_personGroupInfosHasBeenSet = true;
    }

    if (rsp.HasMember("GroupNum") && !rsp["GroupNum"].IsNull())
    {
        if (!rsp["GroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `GroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNum = rsp["GroupNum"].GetUint64();
        m_groupNumHasBeenSet = true;
    }

    if (rsp.HasMember("FaceModelVersion") && !rsp["FaceModelVersion"].IsNull())
    {
        if (!rsp["FaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `FaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceModelVersion = string(rsp["FaceModelVersion"].GetString());
        m_faceModelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<PersonGroupInfo> GetPersonGroupInfoResponse::GetPersonGroupInfos() const
{
    return m_personGroupInfos;
}

bool GetPersonGroupInfoResponse::PersonGroupInfosHasBeenSet() const
{
    return m_personGroupInfosHasBeenSet;
}

uint64_t GetPersonGroupInfoResponse::GetGroupNum() const
{
    return m_groupNum;
}

bool GetPersonGroupInfoResponse::GroupNumHasBeenSet() const
{
    return m_groupNumHasBeenSet;
}

string GetPersonGroupInfoResponse::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

bool GetPersonGroupInfoResponse::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}


