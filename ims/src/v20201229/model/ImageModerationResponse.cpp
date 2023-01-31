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

#include <tencentcloud/ims/v20201229/model/ImageModerationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ims::V20201229::Model;
using namespace std;

ImageModerationResponse::ImageModerationResponse() :
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
    m_fileMD5HasBeenSet(false),
    m_recognitionResultsHasBeenSet(false)
{
}

CoreInternalOutcome ImageModerationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("Label") && !rsp["Label"].IsNull())
    {
        if (!rsp["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(rsp["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (rsp.HasMember("SubLabel") && !rsp["SubLabel"].IsNull())
    {
        if (!rsp["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(rsp["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (rsp.HasMember("LabelResults") && !rsp["LabelResults"].IsNull())
    {
        if (!rsp["LabelResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelResults` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ObjectResults` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `OcrResults` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `LibResults` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(rsp["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (rsp.HasMember("BizType") && !rsp["BizType"].IsNull())
    {
        if (!rsp["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(rsp["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (rsp.HasMember("FileMD5") && !rsp["FileMD5"].IsNull())
    {
        if (!rsp["FileMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMD5 = string(rsp["FileMD5"].GetString());
        m_fileMD5HasBeenSet = true;
    }

    if (rsp.HasMember("RecognitionResults") && !rsp["RecognitionResults"].IsNull())
    {
        if (!rsp["RecognitionResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognitionResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecognitionResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecognitionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recognitionResults.push_back(item);
        }
        m_recognitionResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ImageModerationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_labelResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelResults.begin(); itr != m_labelResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_objectResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_objectResults.begin(); itr != m_objectResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ocrResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ocrResults.begin(); itr != m_ocrResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_libResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_libResults.begin(); itr != m_libResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_recognitionResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognitionResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recognitionResults.begin(); itr != m_recognitionResults.end(); ++itr, ++i)
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


string ImageModerationResponse::GetSuggestion() const
{
    return m_suggestion;
}

bool ImageModerationResponse::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string ImageModerationResponse::GetLabel() const
{
    return m_label;
}

bool ImageModerationResponse::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ImageModerationResponse::GetSubLabel() const
{
    return m_subLabel;
}

bool ImageModerationResponse::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

int64_t ImageModerationResponse::GetScore() const
{
    return m_score;
}

bool ImageModerationResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<LabelResult> ImageModerationResponse::GetLabelResults() const
{
    return m_labelResults;
}

bool ImageModerationResponse::LabelResultsHasBeenSet() const
{
    return m_labelResultsHasBeenSet;
}

vector<ObjectResult> ImageModerationResponse::GetObjectResults() const
{
    return m_objectResults;
}

bool ImageModerationResponse::ObjectResultsHasBeenSet() const
{
    return m_objectResultsHasBeenSet;
}

vector<OcrResult> ImageModerationResponse::GetOcrResults() const
{
    return m_ocrResults;
}

bool ImageModerationResponse::OcrResultsHasBeenSet() const
{
    return m_ocrResultsHasBeenSet;
}

vector<LibResult> ImageModerationResponse::GetLibResults() const
{
    return m_libResults;
}

bool ImageModerationResponse::LibResultsHasBeenSet() const
{
    return m_libResultsHasBeenSet;
}

string ImageModerationResponse::GetDataId() const
{
    return m_dataId;
}

bool ImageModerationResponse::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string ImageModerationResponse::GetBizType() const
{
    return m_bizType;
}

bool ImageModerationResponse::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string ImageModerationResponse::GetExtra() const
{
    return m_extra;
}

bool ImageModerationResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

string ImageModerationResponse::GetFileMD5() const
{
    return m_fileMD5;
}

bool ImageModerationResponse::FileMD5HasBeenSet() const
{
    return m_fileMD5HasBeenSet;
}

vector<RecognitionResult> ImageModerationResponse::GetRecognitionResults() const
{
    return m_recognitionResults;
}

bool ImageModerationResponse::RecognitionResultsHasBeenSet() const
{
    return m_recognitionResultsHasBeenSet;
}


