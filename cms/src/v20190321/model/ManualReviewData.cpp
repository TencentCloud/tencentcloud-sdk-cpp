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

#include <tencentcloud/cms/v20190321/model/ManualReviewData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

ManualReviewData::ManualReviewData() :
    m_batchIdHasBeenSet(false),
    m_contentIdHasBeenSet(false)
{
}

CoreInternalOutcome ManualReviewData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualReviewData.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("ContentId") && !value["ContentId"].IsNull())
    {
        if (!value["ContentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualReviewData.ContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentId = string(value["ContentId"].GetString());
        m_contentIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManualReviewData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

}


string ManualReviewData::GetBatchId() const
{
    return m_batchId;
}

void ManualReviewData::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool ManualReviewData::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string ManualReviewData::GetContentId() const
{
    return m_contentId;
}

void ManualReviewData::SetContentId(const string& _contentId)
{
    m_contentId = _contentId;
    m_contentIdHasBeenSet = true;
}

bool ManualReviewData::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

