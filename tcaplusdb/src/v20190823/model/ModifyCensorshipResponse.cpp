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

#include <tencentcloud/tcaplusdb/v20190823/model/ModifyCensorshipResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

ModifyCensorshipResponse::ModifyCensorshipResponse() :
    m_clusterIdHasBeenSet(false),
    m_uinsHasBeenSet(false),
    m_censorshipHasBeenSet(false)
{
}

CoreInternalOutcome ModifyCensorshipResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("Uins") && !rsp["Uins"].IsNull())
    {
        if (!rsp["Uins"].IsArray())
            return CoreInternalOutcome(Error("response `Uins` is not array type"));

        const Value &tmpValue = rsp["Uins"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uins.push_back((*itr).GetString());
        }
        m_uinsHasBeenSet = true;
    }

    if (rsp.HasMember("Censorship") && !rsp["Censorship"].IsNull())
    {
        if (!rsp["Censorship"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Censorship` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_censorship = rsp["Censorship"].GetInt64();
        m_censorshipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ModifyCensorshipResponse::GetClusterId() const
{
    return m_clusterId;
}

bool ModifyCensorshipResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> ModifyCensorshipResponse::GetUins() const
{
    return m_uins;
}

bool ModifyCensorshipResponse::UinsHasBeenSet() const
{
    return m_uinsHasBeenSet;
}

int64_t ModifyCensorshipResponse::GetCensorship() const
{
    return m_censorship;
}

bool ModifyCensorshipResponse::CensorshipHasBeenSet() const
{
    return m_censorshipHasBeenSet;
}


