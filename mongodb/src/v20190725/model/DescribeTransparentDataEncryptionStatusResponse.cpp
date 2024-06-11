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

#include <tencentcloud/mongodb/v20190725/model/DescribeTransparentDataEncryptionStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DescribeTransparentDataEncryptionStatusResponse::DescribeTransparentDataEncryptionStatusResponse() :
    m_transparentDataEncryptionStatusHasBeenSet(false),
    m_keyInfoListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTransparentDataEncryptionStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TransparentDataEncryptionStatus") && !rsp["TransparentDataEncryptionStatus"].IsNull())
    {
        if (!rsp["TransparentDataEncryptionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransparentDataEncryptionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transparentDataEncryptionStatus = string(rsp["TransparentDataEncryptionStatus"].GetString());
        m_transparentDataEncryptionStatusHasBeenSet = true;
    }

    if (rsp.HasMember("KeyInfoList") && !rsp["KeyInfoList"].IsNull())
    {
        if (!rsp["KeyInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeyInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["KeyInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KMSInfoDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keyInfoList.push_back(item);
        }
        m_keyInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTransparentDataEncryptionStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_transparentDataEncryptionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransparentDataEncryptionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transparentDataEncryptionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_keyInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keyInfoList.begin(); itr != m_keyInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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


string DescribeTransparentDataEncryptionStatusResponse::GetTransparentDataEncryptionStatus() const
{
    return m_transparentDataEncryptionStatus;
}

bool DescribeTransparentDataEncryptionStatusResponse::TransparentDataEncryptionStatusHasBeenSet() const
{
    return m_transparentDataEncryptionStatusHasBeenSet;
}

vector<KMSInfoDetail> DescribeTransparentDataEncryptionStatusResponse::GetKeyInfoList() const
{
    return m_keyInfoList;
}

bool DescribeTransparentDataEncryptionStatusResponse::KeyInfoListHasBeenSet() const
{
    return m_keyInfoListHasBeenSet;
}


