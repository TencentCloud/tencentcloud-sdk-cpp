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

#include <tencentcloud/ticm/v20181127/model/DescribeVideoTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ticm::V20181127::Model;
using namespace rapidjson;
using namespace std;

DescribeVideoTaskResponse::DescribeVideoTaskResponse() :
    m_statusHasBeenSet(false),
    m_beginProcessTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_pornResultHasBeenSet(false),
    m_terrorismResultHasBeenSet(false),
    m_politicalResultHasBeenSet(false),
    m_politicalOcrResultHasBeenSet(false),
    m_pornAsrResultHasBeenSet(false),
    m_politicalAsrResultHasBeenSet(false),
    m_pornOcrResultHasBeenSet(false),
    m_metaDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVideoTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("BeginProcessTime") && !rsp["BeginProcessTime"].IsNull())
    {
        if (!rsp["BeginProcessTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BeginProcessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginProcessTime = string(rsp["BeginProcessTime"].GetString());
        m_beginProcessTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FinishTime") && !rsp["FinishTime"].IsNull())
    {
        if (!rsp["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(rsp["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PornResult") && !rsp["PornResult"].IsNull())
    {
        if (!rsp["PornResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PornResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornResult.Deserialize(rsp["PornResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornResultHasBeenSet = true;
    }

    if (rsp.HasMember("TerrorismResult") && !rsp["TerrorismResult"].IsNull())
    {
        if (!rsp["TerrorismResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TerrorismResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorismResult.Deserialize(rsp["TerrorismResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorismResultHasBeenSet = true;
    }

    if (rsp.HasMember("PoliticalResult") && !rsp["PoliticalResult"].IsNull())
    {
        if (!rsp["PoliticalResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PoliticalResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalResult.Deserialize(rsp["PoliticalResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalResultHasBeenSet = true;
    }

    if (rsp.HasMember("PoliticalOcrResult") && !rsp["PoliticalOcrResult"].IsNull())
    {
        if (!rsp["PoliticalOcrResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PoliticalOcrResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalOcrResult.Deserialize(rsp["PoliticalOcrResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalOcrResultHasBeenSet = true;
    }

    if (rsp.HasMember("PornAsrResult") && !rsp["PornAsrResult"].IsNull())
    {
        if (!rsp["PornAsrResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PornAsrResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornAsrResult.Deserialize(rsp["PornAsrResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornAsrResultHasBeenSet = true;
    }

    if (rsp.HasMember("PoliticalAsrResult") && !rsp["PoliticalAsrResult"].IsNull())
    {
        if (!rsp["PoliticalAsrResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PoliticalAsrResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalAsrResult.Deserialize(rsp["PoliticalAsrResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalAsrResultHasBeenSet = true;
    }

    if (rsp.HasMember("PornOcrResult") && !rsp["PornOcrResult"].IsNull())
    {
        if (!rsp["PornOcrResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PornOcrResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornOcrResult.Deserialize(rsp["PornOcrResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornOcrResultHasBeenSet = true;
    }

    if (rsp.HasMember("MetaData") && !rsp["MetaData"].IsNull())
    {
        if (!rsp["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(rsp["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeVideoTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVideoTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeVideoTaskResponse::GetBeginProcessTime() const
{
    return m_beginProcessTime;
}

bool DescribeVideoTaskResponse::BeginProcessTimeHasBeenSet() const
{
    return m_beginProcessTimeHasBeenSet;
}

string DescribeVideoTaskResponse::GetFinishTime() const
{
    return m_finishTime;
}

bool DescribeVideoTaskResponse::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

VodPornReviewResult DescribeVideoTaskResponse::GetPornResult() const
{
    return m_pornResult;
}

bool DescribeVideoTaskResponse::PornResultHasBeenSet() const
{
    return m_pornResultHasBeenSet;
}

VodTerrorismReviewResult DescribeVideoTaskResponse::GetTerrorismResult() const
{
    return m_terrorismResult;
}

bool DescribeVideoTaskResponse::TerrorismResultHasBeenSet() const
{
    return m_terrorismResultHasBeenSet;
}

VodPoliticalReviewResult DescribeVideoTaskResponse::GetPoliticalResult() const
{
    return m_politicalResult;
}

bool DescribeVideoTaskResponse::PoliticalResultHasBeenSet() const
{
    return m_politicalResultHasBeenSet;
}

VodPoliticalOcrReviewResult DescribeVideoTaskResponse::GetPoliticalOcrResult() const
{
    return m_politicalOcrResult;
}

bool DescribeVideoTaskResponse::PoliticalOcrResultHasBeenSet() const
{
    return m_politicalOcrResultHasBeenSet;
}

VodPornAsrReviewResult DescribeVideoTaskResponse::GetPornAsrResult() const
{
    return m_pornAsrResult;
}

bool DescribeVideoTaskResponse::PornAsrResultHasBeenSet() const
{
    return m_pornAsrResultHasBeenSet;
}

VodPoliticalAsrReviewResult DescribeVideoTaskResponse::GetPoliticalAsrResult() const
{
    return m_politicalAsrResult;
}

bool DescribeVideoTaskResponse::PoliticalAsrResultHasBeenSet() const
{
    return m_politicalAsrResultHasBeenSet;
}

VodPornOcrResult DescribeVideoTaskResponse::GetPornOcrResult() const
{
    return m_pornOcrResult;
}

bool DescribeVideoTaskResponse::PornOcrResultHasBeenSet() const
{
    return m_pornOcrResultHasBeenSet;
}

VodMetaData DescribeVideoTaskResponse::GetMetaData() const
{
    return m_metaData;
}

bool DescribeVideoTaskResponse::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}


