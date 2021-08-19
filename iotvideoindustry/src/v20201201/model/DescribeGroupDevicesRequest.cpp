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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeGroupDevicesRequest::DescribeGroupDevicesRequest() :
    m_groupIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_recordableHasBeenSet(false),
    m_deviceTypesHasBeenSet(false)
{
}

string DescribeGroupDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_recordableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recordable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordable, allocator);
    }

    if (m_deviceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceTypes.begin(); itr != m_deviceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGroupDevicesRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeGroupDevicesRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeGroupDevicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGroupDevicesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeGroupDevicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGroupDevicesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGroupDevicesRequest::GetNickName() const
{
    return m_nickName;
}

void DescribeGroupDevicesRequest::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

int64_t DescribeGroupDevicesRequest::GetRecordable() const
{
    return m_recordable;
}

void DescribeGroupDevicesRequest::SetRecordable(const int64_t& _recordable)
{
    m_recordable = _recordable;
    m_recordableHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::RecordableHasBeenSet() const
{
    return m_recordableHasBeenSet;
}

vector<int64_t> DescribeGroupDevicesRequest::GetDeviceTypes() const
{
    return m_deviceTypes;
}

void DescribeGroupDevicesRequest::SetDeviceTypes(const vector<int64_t>& _deviceTypes)
{
    m_deviceTypes = _deviceTypes;
    m_deviceTypesHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::DeviceTypesHasBeenSet() const
{
    return m_deviceTypesHasBeenSet;
}


