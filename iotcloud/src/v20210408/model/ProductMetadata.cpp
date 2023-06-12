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

#include <tencentcloud/iotcloud/v20210408/model/ProductMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

ProductMetadata::ProductMetadata() :
    m_creationDateHasBeenSet(false),
    m_createUserIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome ProductMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationDate") && !value["CreationDate"].IsNull())
    {
        if (!value["CreationDate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductMetadata.CreationDate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creationDate = value["CreationDate"].GetUint64();
        m_creationDateHasBeenSet = true;
    }

    if (value.HasMember("CreateUserId") && !value["CreateUserId"].IsNull())
    {
        if (!value["CreateUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductMetadata.CreateUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUserId = value["CreateUserId"].GetUint64();
        m_createUserIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductMetadata.UserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetUint64();
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creationDate, allocator);
    }

    if (m_createUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUserId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

}


uint64_t ProductMetadata::GetCreationDate() const
{
    return m_creationDate;
}

void ProductMetadata::SetCreationDate(const uint64_t& _creationDate)
{
    m_creationDate = _creationDate;
    m_creationDateHasBeenSet = true;
}

bool ProductMetadata::CreationDateHasBeenSet() const
{
    return m_creationDateHasBeenSet;
}

uint64_t ProductMetadata::GetCreateUserId() const
{
    return m_createUserId;
}

void ProductMetadata::SetCreateUserId(const uint64_t& _createUserId)
{
    m_createUserId = _createUserId;
    m_createUserIdHasBeenSet = true;
}

bool ProductMetadata::CreateUserIdHasBeenSet() const
{
    return m_createUserIdHasBeenSet;
}

uint64_t ProductMetadata::GetUserId() const
{
    return m_userId;
}

void ProductMetadata::SetUserId(const uint64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ProductMetadata::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

