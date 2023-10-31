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

#include <tencentcloud/tiw/v20190919/model/DescribePPTCheckResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribePPTCheckResponse::DescribePPTCheckResponse() :
    m_taskIdHasBeenSet(false),
    m_isOKHasBeenSet(false),
    m_resultUrlHasBeenSet(false),
    m_slidesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_errsHasBeenSet(false)
{
}

CoreInternalOutcome DescribePPTCheckResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("IsOK") && !rsp["IsOK"].IsNull())
    {
        if (!rsp["IsOK"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsOK` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOK = rsp["IsOK"].GetBool();
        m_isOKHasBeenSet = true;
    }

    if (rsp.HasMember("ResultUrl") && !rsp["ResultUrl"].IsNull())
    {
        if (!rsp["ResultUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultUrl = string(rsp["ResultUrl"].GetString());
        m_resultUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Slides") && !rsp["Slides"].IsNull())
    {
        if (!rsp["Slides"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Slides` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Slides"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PPTErrSlide item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slides.push_back(item);
        }
        m_slidesHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("Errs") && !rsp["Errs"].IsNull())
    {
        if (!rsp["Errs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Errs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Errs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PPTErr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errs.push_back(item);
        }
        m_errsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePPTCheckResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_isOKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOK, allocator);
    }

    if (m_resultUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_slidesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Slides";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slides.begin(); itr != m_slides.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_errsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errs.begin(); itr != m_errs.end(); ++itr, ++i)
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


string DescribePPTCheckResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribePPTCheckResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

bool DescribePPTCheckResponse::GetIsOK() const
{
    return m_isOK;
}

bool DescribePPTCheckResponse::IsOKHasBeenSet() const
{
    return m_isOKHasBeenSet;
}

string DescribePPTCheckResponse::GetResultUrl() const
{
    return m_resultUrl;
}

bool DescribePPTCheckResponse::ResultUrlHasBeenSet() const
{
    return m_resultUrlHasBeenSet;
}

vector<PPTErrSlide> DescribePPTCheckResponse::GetSlides() const
{
    return m_slides;
}

bool DescribePPTCheckResponse::SlidesHasBeenSet() const
{
    return m_slidesHasBeenSet;
}

string DescribePPTCheckResponse::GetStatus() const
{
    return m_status;
}

bool DescribePPTCheckResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribePPTCheckResponse::GetProgress() const
{
    return m_progress;
}

bool DescribePPTCheckResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

vector<PPTErr> DescribePPTCheckResponse::GetErrs() const
{
    return m_errs;
}

bool DescribePPTCheckResponse::ErrsHasBeenSet() const
{
    return m_errsHasBeenSet;
}


