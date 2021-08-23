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

#include <tencentcloud/cdb/v20170320/model/UploadInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

UploadInfo::UploadInfo() :
    m_allSliceNumHasBeenSet(false),
    m_completeNumHasBeenSet(false)
{
}

CoreInternalOutcome UploadInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllSliceNum") && !value["AllSliceNum"].IsNull())
    {
        if (!value["AllSliceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UploadInfo.AllSliceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allSliceNum = value["AllSliceNum"].GetInt64();
        m_allSliceNumHasBeenSet = true;
    }

    if (value.HasMember("CompleteNum") && !value["CompleteNum"].IsNull())
    {
        if (!value["CompleteNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UploadInfo.CompleteNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completeNum = value["CompleteNum"].GetInt64();
        m_completeNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allSliceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllSliceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allSliceNum, allocator);
    }

    if (m_completeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompleteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completeNum, allocator);
    }

}


int64_t UploadInfo::GetAllSliceNum() const
{
    return m_allSliceNum;
}

void UploadInfo::SetAllSliceNum(const int64_t& _allSliceNum)
{
    m_allSliceNum = _allSliceNum;
    m_allSliceNumHasBeenSet = true;
}

bool UploadInfo::AllSliceNumHasBeenSet() const
{
    return m_allSliceNumHasBeenSet;
}

int64_t UploadInfo::GetCompleteNum() const
{
    return m_completeNum;
}

void UploadInfo::SetCompleteNum(const int64_t& _completeNum)
{
    m_completeNum = _completeNum;
    m_completeNumHasBeenSet = true;
}

bool UploadInfo::CompleteNumHasBeenSet() const
{
    return m_completeNumHasBeenSet;
}

