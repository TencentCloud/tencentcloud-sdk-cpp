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

#include <tencentcloud/iotvideo/v20211125/model/VideoBatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

VideoBatch::VideoBatch() :
    m_idHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_devPreHasBeenSet(false),
    m_devNumHasBeenSet(false),
    m_devNumCreatedHasBeenSet(false),
    m_batchURLHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome VideoBatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DevPre") && !value["DevPre"].IsNull())
    {
        if (!value["DevPre"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.DevPre` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devPre = string(value["DevPre"].GetString());
        m_devPreHasBeenSet = true;
    }

    if (value.HasMember("DevNum") && !value["DevNum"].IsNull())
    {
        if (!value["DevNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.DevNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_devNum = value["DevNum"].GetUint64();
        m_devNumHasBeenSet = true;
    }

    if (value.HasMember("DevNumCreated") && !value["DevNumCreated"].IsNull())
    {
        if (!value["DevNumCreated"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.DevNumCreated` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_devNumCreated = value["DevNumCreated"].GetUint64();
        m_devNumCreatedHasBeenSet = true;
    }

    if (value.HasMember("BatchURL") && !value["BatchURL"].IsNull())
    {
        if (!value["BatchURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.BatchURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchURL = string(value["BatchURL"].GetString());
        m_batchURLHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBatch.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoBatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_devPreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevPre";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devPre.c_str(), allocator).Move(), allocator);
    }

    if (m_devNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_devNum, allocator);
    }

    if (m_devNumCreatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevNumCreated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_devNumCreated, allocator);
    }

    if (m_batchURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchURL.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


uint64_t VideoBatch::GetId() const
{
    return m_id;
}

void VideoBatch::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VideoBatch::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string VideoBatch::GetUserId() const
{
    return m_userId;
}

void VideoBatch::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool VideoBatch::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string VideoBatch::GetProductId() const
{
    return m_productId;
}

void VideoBatch::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool VideoBatch::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t VideoBatch::GetStatus() const
{
    return m_status;
}

void VideoBatch::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VideoBatch::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VideoBatch::GetDevPre() const
{
    return m_devPre;
}

void VideoBatch::SetDevPre(const string& _devPre)
{
    m_devPre = _devPre;
    m_devPreHasBeenSet = true;
}

bool VideoBatch::DevPreHasBeenSet() const
{
    return m_devPreHasBeenSet;
}

uint64_t VideoBatch::GetDevNum() const
{
    return m_devNum;
}

void VideoBatch::SetDevNum(const uint64_t& _devNum)
{
    m_devNum = _devNum;
    m_devNumHasBeenSet = true;
}

bool VideoBatch::DevNumHasBeenSet() const
{
    return m_devNumHasBeenSet;
}

uint64_t VideoBatch::GetDevNumCreated() const
{
    return m_devNumCreated;
}

void VideoBatch::SetDevNumCreated(const uint64_t& _devNumCreated)
{
    m_devNumCreated = _devNumCreated;
    m_devNumCreatedHasBeenSet = true;
}

bool VideoBatch::DevNumCreatedHasBeenSet() const
{
    return m_devNumCreatedHasBeenSet;
}

string VideoBatch::GetBatchURL() const
{
    return m_batchURL;
}

void VideoBatch::SetBatchURL(const string& _batchURL)
{
    m_batchURL = _batchURL;
    m_batchURLHasBeenSet = true;
}

bool VideoBatch::BatchURLHasBeenSet() const
{
    return m_batchURLHasBeenSet;
}

uint64_t VideoBatch::GetCreateTime() const
{
    return m_createTime;
}

void VideoBatch::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VideoBatch::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t VideoBatch::GetUpdateTime() const
{
    return m_updateTime;
}

void VideoBatch::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VideoBatch::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

