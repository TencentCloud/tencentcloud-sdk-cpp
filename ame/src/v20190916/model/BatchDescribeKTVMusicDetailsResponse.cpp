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

#include <tencentcloud/ame/v20190916/model/BatchDescribeKTVMusicDetailsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

BatchDescribeKTVMusicDetailsResponse::BatchDescribeKTVMusicDetailsResponse() :
    m_kTVMusicDetailInfoSetHasBeenSet(false),
    m_notExistMusicIdSetHasBeenSet(false)
{
}

CoreInternalOutcome BatchDescribeKTVMusicDetailsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("KTVMusicDetailInfoSet") && !rsp["KTVMusicDetailInfoSet"].IsNull())
    {
        if (!rsp["KTVMusicDetailInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicDetailInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["KTVMusicDetailInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KTVMusicDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kTVMusicDetailInfoSet.push_back(item);
        }
        m_kTVMusicDetailInfoSetHasBeenSet = true;
    }

    if (rsp.HasMember("NotExistMusicIdSet") && !rsp["NotExistMusicIdSet"].IsNull())
    {
        if (!rsp["NotExistMusicIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotExistMusicIdSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NotExistMusicIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notExistMusicIdSet.push_back((*itr).GetString());
        }
        m_notExistMusicIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string BatchDescribeKTVMusicDetailsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_kTVMusicDetailInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KTVMusicDetailInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kTVMusicDetailInfoSet.begin(); itr != m_kTVMusicDetailInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_notExistMusicIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotExistMusicIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notExistMusicIdSet.begin(); itr != m_notExistMusicIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


vector<KTVMusicDetailInfo> BatchDescribeKTVMusicDetailsResponse::GetKTVMusicDetailInfoSet() const
{
    return m_kTVMusicDetailInfoSet;
}

bool BatchDescribeKTVMusicDetailsResponse::KTVMusicDetailInfoSetHasBeenSet() const
{
    return m_kTVMusicDetailInfoSetHasBeenSet;
}

vector<string> BatchDescribeKTVMusicDetailsResponse::GetNotExistMusicIdSet() const
{
    return m_notExistMusicIdSet;
}

bool BatchDescribeKTVMusicDetailsResponse::NotExistMusicIdSetHasBeenSet() const
{
    return m_notExistMusicIdSetHasBeenSet;
}


