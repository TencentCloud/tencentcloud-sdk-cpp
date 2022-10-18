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

#include <tencentcloud/captcha/v20190722/model/RequestTrendObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

RequestTrendObj::RequestTrendObj() :
    m_ftimeHasBeenSet(false),
    m_requestActionHasBeenSet(false),
    m_requestVerifyHasBeenSet(false),
    m_requestThroughputHasBeenSet(false),
    m_requestInterceptHasBeenSet(false)
{
}

CoreInternalOutcome RequestTrendObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ftime") && !value["Ftime"].IsNull())
    {
        if (!value["Ftime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestTrendObj.Ftime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ftime = string(value["Ftime"].GetString());
        m_ftimeHasBeenSet = true;
    }

    if (value.HasMember("RequestAction") && !value["RequestAction"].IsNull())
    {
        if (!value["RequestAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestTrendObj.RequestAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestAction = value["RequestAction"].GetInt64();
        m_requestActionHasBeenSet = true;
    }

    if (value.HasMember("RequestVerify") && !value["RequestVerify"].IsNull())
    {
        if (!value["RequestVerify"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestTrendObj.RequestVerify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestVerify = value["RequestVerify"].GetInt64();
        m_requestVerifyHasBeenSet = true;
    }

    if (value.HasMember("RequestThroughput") && !value["RequestThroughput"].IsNull())
    {
        if (!value["RequestThroughput"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestTrendObj.RequestThroughput` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestThroughput = value["RequestThroughput"].GetInt64();
        m_requestThroughputHasBeenSet = true;
    }

    if (value.HasMember("RequestIntercept") && !value["RequestIntercept"].IsNull())
    {
        if (!value["RequestIntercept"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestTrendObj.RequestIntercept` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestIntercept = value["RequestIntercept"].GetUint64();
        m_requestInterceptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestTrendObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ftimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ftime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ftime.c_str(), allocator).Move(), allocator);
    }

    if (m_requestActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestAction, allocator);
    }

    if (m_requestVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestVerify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestVerify, allocator);
    }

    if (m_requestThroughputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestThroughput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestThroughput, allocator);
    }

    if (m_requestInterceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestIntercept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestIntercept, allocator);
    }

}


string RequestTrendObj::GetFtime() const
{
    return m_ftime;
}

void RequestTrendObj::SetFtime(const string& _ftime)
{
    m_ftime = _ftime;
    m_ftimeHasBeenSet = true;
}

bool RequestTrendObj::FtimeHasBeenSet() const
{
    return m_ftimeHasBeenSet;
}

int64_t RequestTrendObj::GetRequestAction() const
{
    return m_requestAction;
}

void RequestTrendObj::SetRequestAction(const int64_t& _requestAction)
{
    m_requestAction = _requestAction;
    m_requestActionHasBeenSet = true;
}

bool RequestTrendObj::RequestActionHasBeenSet() const
{
    return m_requestActionHasBeenSet;
}

int64_t RequestTrendObj::GetRequestVerify() const
{
    return m_requestVerify;
}

void RequestTrendObj::SetRequestVerify(const int64_t& _requestVerify)
{
    m_requestVerify = _requestVerify;
    m_requestVerifyHasBeenSet = true;
}

bool RequestTrendObj::RequestVerifyHasBeenSet() const
{
    return m_requestVerifyHasBeenSet;
}

int64_t RequestTrendObj::GetRequestThroughput() const
{
    return m_requestThroughput;
}

void RequestTrendObj::SetRequestThroughput(const int64_t& _requestThroughput)
{
    m_requestThroughput = _requestThroughput;
    m_requestThroughputHasBeenSet = true;
}

bool RequestTrendObj::RequestThroughputHasBeenSet() const
{
    return m_requestThroughputHasBeenSet;
}

uint64_t RequestTrendObj::GetRequestIntercept() const
{
    return m_requestIntercept;
}

void RequestTrendObj::SetRequestIntercept(const uint64_t& _requestIntercept)
{
    m_requestIntercept = _requestIntercept;
    m_requestInterceptHasBeenSet = true;
}

bool RequestTrendObj::RequestInterceptHasBeenSet() const
{
    return m_requestInterceptHasBeenSet;
}

