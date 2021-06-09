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

#include <tencentcloud/tse/v20201207/model/DescribeConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeConfigResponse::DescribeConfigResponse() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_isDirHasBeenSet(false),
    m_listHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConfigResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("Key") && !rsp["Key"].IsNull())
    {
        if (!rsp["Key"].IsString())
        {
            return CoreInternalOutcome(Error("response `Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(rsp["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (rsp.HasMember("Value") && !rsp["Value"].IsNull())
    {
        if (!rsp["Value"].IsString())
        {
            return CoreInternalOutcome(Error("response `Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(rsp["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (rsp.HasMember("IsDir") && !rsp["IsDir"].IsNull())
    {
        if (!rsp["IsDir"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsDir` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDir = rsp["IsDir"].GetBool();
        m_isDirHasBeenSet = true;
    }

    if (rsp.HasMember("List") && !rsp["List"].IsNull())
    {
        if (!rsp["List"].IsArray())
            return CoreInternalOutcome(Error("response `List` is not array type"));

        const rapidjson::Value &tmpValue = rsp["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_list.push_back((*itr).GetString());
        }
        m_listHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeConfigResponse::GetKey() const
{
    return m_key;
}

bool DescribeConfigResponse::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string DescribeConfigResponse::GetValue() const
{
    return m_value;
}

bool DescribeConfigResponse::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

bool DescribeConfigResponse::GetIsDir() const
{
    return m_isDir;
}

bool DescribeConfigResponse::IsDirHasBeenSet() const
{
    return m_isDirHasBeenSet;
}

vector<string> DescribeConfigResponse::GetList() const
{
    return m_list;
}

bool DescribeConfigResponse::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}


