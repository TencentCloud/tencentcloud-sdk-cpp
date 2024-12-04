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

#include <tencentcloud/vcube/v20220410/model/DescribeTrialFeatureResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

DescribeTrialFeatureResponse::DescribeTrialFeatureResponse() :
    m_featureListHasBeenSet(false),
    m_xMagicTrialHasBeenSet(false),
    m_xMagicTrialListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTrialFeatureResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FeatureList") && !rsp["FeatureList"].IsNull())
    {
        if (!rsp["FeatureList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeatureList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FeatureList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Feature item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_featureList.push_back(item);
        }
        m_featureListHasBeenSet = true;
    }

    if (rsp.HasMember("XMagicTrial") && !rsp["XMagicTrial"].IsNull())
    {
        if (!rsp["XMagicTrial"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicTrial` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_xMagicTrial.Deserialize(rsp["XMagicTrial"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_xMagicTrialHasBeenSet = true;
    }

    if (rsp.HasMember("XMagicTrialList") && !rsp["XMagicTrialList"].IsNull())
    {
        if (!rsp["XMagicTrialList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `XMagicTrialList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["XMagicTrialList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            XMagicTrial item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_xMagicTrialList.push_back(item);
        }
        m_xMagicTrialListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTrialFeatureResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_featureListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_featureList.begin(); itr != m_featureList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_xMagicTrialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicTrial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_xMagicTrial.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_xMagicTrialListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicTrialList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_xMagicTrialList.begin(); itr != m_xMagicTrialList.end(); ++itr, ++i)
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


vector<Feature> DescribeTrialFeatureResponse::GetFeatureList() const
{
    return m_featureList;
}

bool DescribeTrialFeatureResponse::FeatureListHasBeenSet() const
{
    return m_featureListHasBeenSet;
}

XMagicTrial DescribeTrialFeatureResponse::GetXMagicTrial() const
{
    return m_xMagicTrial;
}

bool DescribeTrialFeatureResponse::XMagicTrialHasBeenSet() const
{
    return m_xMagicTrialHasBeenSet;
}

vector<XMagicTrial> DescribeTrialFeatureResponse::GetXMagicTrialList() const
{
    return m_xMagicTrialList;
}

bool DescribeTrialFeatureResponse::XMagicTrialListHasBeenSet() const
{
    return m_xMagicTrialListHasBeenSet;
}


