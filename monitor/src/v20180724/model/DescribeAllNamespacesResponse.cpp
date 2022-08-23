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

#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeAllNamespacesResponse::DescribeAllNamespacesResponse() :
    m_qceNamespacesHasBeenSet(false),
    m_customNamespacesHasBeenSet(false),
    m_qceNamespacesNewHasBeenSet(false),
    m_customNamespacesNewHasBeenSet(false),
    m_commonNamespacesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAllNamespacesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("QceNamespaces") && !rsp["QceNamespaces"].IsNull())
    {
        if (!rsp["QceNamespaces"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QceNamespaces` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qceNamespaces.Deserialize(rsp["QceNamespaces"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qceNamespacesHasBeenSet = true;
    }

    if (rsp.HasMember("CustomNamespaces") && !rsp["CustomNamespaces"].IsNull())
    {
        if (!rsp["CustomNamespaces"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomNamespaces` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customNamespaces.Deserialize(rsp["CustomNamespaces"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customNamespacesHasBeenSet = true;
    }

    if (rsp.HasMember("QceNamespacesNew") && !rsp["QceNamespacesNew"].IsNull())
    {
        if (!rsp["QceNamespacesNew"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QceNamespacesNew` is not array type"));

        const rapidjson::Value &tmpValue = rsp["QceNamespacesNew"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonNamespace item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qceNamespacesNew.push_back(item);
        }
        m_qceNamespacesNewHasBeenSet = true;
    }

    if (rsp.HasMember("CustomNamespacesNew") && !rsp["CustomNamespacesNew"].IsNull())
    {
        if (!rsp["CustomNamespacesNew"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomNamespacesNew` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CustomNamespacesNew"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonNamespace item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customNamespacesNew.push_back(item);
        }
        m_customNamespacesNewHasBeenSet = true;
    }

    if (rsp.HasMember("CommonNamespaces") && !rsp["CommonNamespaces"].IsNull())
    {
        if (!rsp["CommonNamespaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CommonNamespaces` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CommonNamespaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonNamespaceNew item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_commonNamespaces.push_back(item);
        }
        m_commonNamespacesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAllNamespacesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_qceNamespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QceNamespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qceNamespaces.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customNamespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomNamespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customNamespaces.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qceNamespacesNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QceNamespacesNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qceNamespacesNew.begin(); itr != m_qceNamespacesNew.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customNamespacesNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomNamespacesNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customNamespacesNew.begin(); itr != m_customNamespacesNew.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_commonNamespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonNamespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_commonNamespaces.begin(); itr != m_commonNamespaces.end(); ++itr, ++i)
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


CommonNamespace DescribeAllNamespacesResponse::GetQceNamespaces() const
{
    return m_qceNamespaces;
}

bool DescribeAllNamespacesResponse::QceNamespacesHasBeenSet() const
{
    return m_qceNamespacesHasBeenSet;
}

CommonNamespace DescribeAllNamespacesResponse::GetCustomNamespaces() const
{
    return m_customNamespaces;
}

bool DescribeAllNamespacesResponse::CustomNamespacesHasBeenSet() const
{
    return m_customNamespacesHasBeenSet;
}

vector<CommonNamespace> DescribeAllNamespacesResponse::GetQceNamespacesNew() const
{
    return m_qceNamespacesNew;
}

bool DescribeAllNamespacesResponse::QceNamespacesNewHasBeenSet() const
{
    return m_qceNamespacesNewHasBeenSet;
}

vector<CommonNamespace> DescribeAllNamespacesResponse::GetCustomNamespacesNew() const
{
    return m_customNamespacesNew;
}

bool DescribeAllNamespacesResponse::CustomNamespacesNewHasBeenSet() const
{
    return m_customNamespacesNewHasBeenSet;
}

vector<CommonNamespaceNew> DescribeAllNamespacesResponse::GetCommonNamespaces() const
{
    return m_commonNamespaces;
}

bool DescribeAllNamespacesResponse::CommonNamespacesHasBeenSet() const
{
    return m_commonNamespacesHasBeenSet;
}


