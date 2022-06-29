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

#include <tencentcloud/cbs/v20170312/model/SnapshotCopyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

SnapshotCopyResult::SnapshotCopyResult() :
    m_snapshotIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_destinationRegionHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotCopyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotCopyResult.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotCopyResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotCopyResult.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("DestinationRegion") && !value["DestinationRegion"].IsNull())
    {
        if (!value["DestinationRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotCopyResult.DestinationRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationRegion = string(value["DestinationRegion"].GetString());
        m_destinationRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotCopyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationRegion.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotCopyResult::GetSnapshotId() const
{
    return m_snapshotId;
}

void SnapshotCopyResult::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool SnapshotCopyResult::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string SnapshotCopyResult::GetMessage() const
{
    return m_message;
}

void SnapshotCopyResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SnapshotCopyResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string SnapshotCopyResult::GetCode() const
{
    return m_code;
}

void SnapshotCopyResult::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool SnapshotCopyResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string SnapshotCopyResult::GetDestinationRegion() const
{
    return m_destinationRegion;
}

void SnapshotCopyResult::SetDestinationRegion(const string& _destinationRegion)
{
    m_destinationRegion = _destinationRegion;
    m_destinationRegionHasBeenSet = true;
}

bool SnapshotCopyResult::DestinationRegionHasBeenSet() const
{
    return m_destinationRegionHasBeenSet;
}

