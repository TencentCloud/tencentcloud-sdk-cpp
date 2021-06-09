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

#include <tencentcloud/ims/v20201229/model/ImageRecognitionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ims::V20201229::Model;
using namespace std;

ImageRecognitionResponse::ImageRecognitionResponse() :
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_labelResultsHasBeenSet(false),
    m_objectResultsHasBeenSet(false),
    m_ocrResultsHasBeenSet(false),
    m_libResultsHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_fileMD5HasBeenSet(false)
{
}

CoreInternalOutcome ImageRecognitionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("Label") && !rsp["Label"].IsNull())
    {
        if (!rsp["Label"].IsString())
        {
            return CoreInternalOutcome(Error("response `Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(rsp["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (rsp.HasMember("SubLabel") && !rsp["SubLabel"].IsNull())
    {
        if (!rsp["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(rsp["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (rsp.HasMember("LabelResults") && !rsp["LabelResults"].IsNull())
    {
        if (!rsp["LabelResults"].IsArray())
            return CoreInternalOutcome(Error("response `LabelResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LabelResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelResults.push_back(item);
        }
        m_labelResultsHasBeenSet = true;
    }

    if (rsp.HasMember("ObjectResults") && !rsp["ObjectResults"].IsNull())
    {
        if (!rsp["ObjectResults"].IsArray())
            return CoreInternalOutcome(Error("response `ObjectResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ObjectResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_objectResults.push_back(item);
        }
        m_objectResultsHasBeenSet = true;
    }

    if (rsp.HasMember("OcrResults") && !rsp["OcrResults"].IsNull())
    {
        if (!rsp["OcrResults"].IsArray())
            return CoreInternalOutcome(Error("response `OcrResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OcrResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OcrResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ocrResults.push_back(item);
        }
        m_ocrResultsHasBeenSet = true;
    }

    if (rsp.HasMember("LibResults") && !rsp["LibResults"].IsNull())
    {
        if (!rsp["LibResults"].IsArray())
            return CoreInternalOutcome(Error("response `LibResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LibResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LibResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_libResults.push_back(item);
        }
        m_libResultsHasBeenSet = true;
    }

    if (rsp.HasMember("DataId") && !rsp["DataId"].IsNull())
    {
        if (!rsp["DataId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(rsp["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (rsp.HasMember("BizType") && !rsp["BizType"].IsNull())
    {
        if (!rsp["BizType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(rsp["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (rsp.HasMember("FileMD5") && !rsp["FileMD5"].IsNull())
    {
        if (!rsp["FileMD5"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMD5 = string(rsp["FileMD5"].GetString());
        m_fileMD5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ImageRecognitionResponse::GetSuggestion() const
{
    return m_suggestion;
}

bool ImageRecognitionResponse::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string ImageRecognitionResponse::GetLabel() const
{
    return m_label;
}

bool ImageRecognitionResponse::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ImageRecognitionResponse::GetSubLabel() const
{
    return m_subLabel;
}

bool ImageRecognitionResponse::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

int64_t ImageRecognitionResponse::GetScore() const
{
    return m_score;
}

bool ImageRecognitionResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<LabelResult> ImageRecognitionResponse::GetLabelResults() const
{
    return m_labelResults;
}

bool ImageRecognitionResponse::LabelResultsHasBeenSet() const
{
    return m_labelResultsHasBeenSet;
}

vector<ObjectResult> ImageRecognitionResponse::GetObjectResults() const
{
    return m_objectResults;
}

bool ImageRecognitionResponse::ObjectResultsHasBeenSet() const
{
    return m_objectResultsHasBeenSet;
}

vector<OcrResult> ImageRecognitionResponse::GetOcrResults() const
{
    return m_ocrResults;
}

bool ImageRecognitionResponse::OcrResultsHasBeenSet() const
{
    return m_ocrResultsHasBeenSet;
}

vector<LibResult> ImageRecognitionResponse::GetLibResults() const
{
    return m_libResults;
}

bool ImageRecognitionResponse::LibResultsHasBeenSet() const
{
    return m_libResultsHasBeenSet;
}

string ImageRecognitionResponse::GetDataId() const
{
    return m_dataId;
}

bool ImageRecognitionResponse::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string ImageRecognitionResponse::GetBizType() const
{
    return m_bizType;
}

bool ImageRecognitionResponse::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string ImageRecognitionResponse::GetExtra() const
{
    return m_extra;
}

bool ImageRecognitionResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

string ImageRecognitionResponse::GetFileMD5() const
{
    return m_fileMD5;
}

bool ImageRecognitionResponse::FileMD5HasBeenSet() const
{
    return m_fileMD5HasBeenSet;
}


