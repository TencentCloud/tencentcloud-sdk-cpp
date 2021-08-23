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

#include <tencentcloud/tci/v20190318/model/CreatePersonResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

CreatePersonResponse::CreatePersonResponse() :
    m_faceInfoSetHasBeenSet(false),
    m_libraryIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_personNameHasBeenSet(false)
{
}

CoreInternalOutcome CreatePersonResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FaceInfoSet") && !rsp["FaceInfoSet"].IsNull())
    {
        if (!rsp["FaceInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FaceInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FaceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceInfoSet.push_back(item);
        }
        m_faceInfoSetHasBeenSet = true;
    }

    if (rsp.HasMember("LibraryId") && !rsp["LibraryId"].IsNull())
    {
        if (!rsp["LibraryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryId = string(rsp["LibraryId"].GetString());
        m_libraryIdHasBeenSet = true;
    }

    if (rsp.HasMember("PersonId") && !rsp["PersonId"].IsNull())
    {
        if (!rsp["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(rsp["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (rsp.HasMember("PersonName") && !rsp["PersonName"].IsNull())
    {
        if (!rsp["PersonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personName = string(rsp["PersonName"].GetString());
        m_personNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreatePersonResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_faceInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceInfoSet.begin(); itr != m_faceInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_personNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personName.c_str(), allocator).Move(), allocator);
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


vector<FaceInfo> CreatePersonResponse::GetFaceInfoSet() const
{
    return m_faceInfoSet;
}

bool CreatePersonResponse::FaceInfoSetHasBeenSet() const
{
    return m_faceInfoSetHasBeenSet;
}

string CreatePersonResponse::GetLibraryId() const
{
    return m_libraryId;
}

bool CreatePersonResponse::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string CreatePersonResponse::GetPersonId() const
{
    return m_personId;
}

bool CreatePersonResponse::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string CreatePersonResponse::GetPersonName() const
{
    return m_personName;
}

bool CreatePersonResponse::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}


