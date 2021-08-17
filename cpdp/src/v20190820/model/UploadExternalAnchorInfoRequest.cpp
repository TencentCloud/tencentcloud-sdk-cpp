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

#include <tencentcloud/cpdp/v20190820/model/UploadExternalAnchorInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UploadExternalAnchorInfoRequest::UploadExternalAnchorInfoRequest() :
    m_anchorIdHasBeenSet(false),
    m_idCardFrontHasBeenSet(false),
    m_idCardReverseHasBeenSet(false)
{
}

string UploadExternalAnchorInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_anchorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorId.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardFrontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardFront";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardFront.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardReverseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardReverse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardReverse.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadExternalAnchorInfoRequest::GetAnchorId() const
{
    return m_anchorId;
}

void UploadExternalAnchorInfoRequest::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool UploadExternalAnchorInfoRequest::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}

string UploadExternalAnchorInfoRequest::GetIdCardFront() const
{
    return m_idCardFront;
}

void UploadExternalAnchorInfoRequest::SetIdCardFront(const string& _idCardFront)
{
    m_idCardFront = _idCardFront;
    m_idCardFrontHasBeenSet = true;
}

bool UploadExternalAnchorInfoRequest::IdCardFrontHasBeenSet() const
{
    return m_idCardFrontHasBeenSet;
}

string UploadExternalAnchorInfoRequest::GetIdCardReverse() const
{
    return m_idCardReverse;
}

void UploadExternalAnchorInfoRequest::SetIdCardReverse(const string& _idCardReverse)
{
    m_idCardReverse = _idCardReverse;
    m_idCardReverseHasBeenSet = true;
}

bool UploadExternalAnchorInfoRequest::IdCardReverseHasBeenSet() const
{
    return m_idCardReverseHasBeenSet;
}


