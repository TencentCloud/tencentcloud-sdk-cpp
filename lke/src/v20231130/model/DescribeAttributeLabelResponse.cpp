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

#include <tencentcloud/lke/v20231130/model/DescribeAttributeLabelResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeAttributeLabelResponse::DescribeAttributeLabelResponse() :
    m_attributeBizIdHasBeenSet(false),
    m_attrKeyHasBeenSet(false),
    m_attrNameHasBeenSet(false),
    m_labelNumberHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAttributeLabelResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AttributeBizId") && !rsp["AttributeBizId"].IsNull())
    {
        if (!rsp["AttributeBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeBizId = string(rsp["AttributeBizId"].GetString());
        m_attributeBizIdHasBeenSet = true;
    }

    if (rsp.HasMember("AttrKey") && !rsp["AttrKey"].IsNull())
    {
        if (!rsp["AttrKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attrKey = string(rsp["AttrKey"].GetString());
        m_attrKeyHasBeenSet = true;
    }

    if (rsp.HasMember("AttrName") && !rsp["AttrName"].IsNull())
    {
        if (!rsp["AttrName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attrName = string(rsp["AttrName"].GetString());
        m_attrNameHasBeenSet = true;
    }

    if (rsp.HasMember("LabelNumber") && !rsp["LabelNumber"].IsNull())
    {
        if (!rsp["LabelNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelNumber = string(rsp["LabelNumber"].GetString());
        m_labelNumberHasBeenSet = true;
    }

    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Labels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAttributeLabelResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_attributeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_attrKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attrKey.c_str(), allocator).Move(), allocator);
    }

    if (m_attrNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attrName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
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


string DescribeAttributeLabelResponse::GetAttributeBizId() const
{
    return m_attributeBizId;
}

bool DescribeAttributeLabelResponse::AttributeBizIdHasBeenSet() const
{
    return m_attributeBizIdHasBeenSet;
}

string DescribeAttributeLabelResponse::GetAttrKey() const
{
    return m_attrKey;
}

bool DescribeAttributeLabelResponse::AttrKeyHasBeenSet() const
{
    return m_attrKeyHasBeenSet;
}

string DescribeAttributeLabelResponse::GetAttrName() const
{
    return m_attrName;
}

bool DescribeAttributeLabelResponse::AttrNameHasBeenSet() const
{
    return m_attrNameHasBeenSet;
}

string DescribeAttributeLabelResponse::GetLabelNumber() const
{
    return m_labelNumber;
}

bool DescribeAttributeLabelResponse::LabelNumberHasBeenSet() const
{
    return m_labelNumberHasBeenSet;
}

vector<AttributeLabel> DescribeAttributeLabelResponse::GetLabels() const
{
    return m_labels;
}

bool DescribeAttributeLabelResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}


