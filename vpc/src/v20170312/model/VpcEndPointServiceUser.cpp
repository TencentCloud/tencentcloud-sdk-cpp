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

#include <tencentcloud/vpc/v20170312/model/VpcEndPointServiceUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

VpcEndPointServiceUser::VpcEndPointServiceUser() :
    m_ownerHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endPointServiceIdHasBeenSet(false)
{
}

CoreInternalOutcome VpcEndPointServiceUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcEndPointServiceUser.Owner` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_owner = value["Owner"].GetUint64();
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcEndPointServiceUser.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcEndPointServiceUser.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcEndPointServiceUser.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndPointServiceId") && !value["EndPointServiceId"].IsNull())
    {
        if (!value["EndPointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcEndPointServiceUser.EndPointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointServiceId = string(value["EndPointServiceId"].GetString());
        m_endPointServiceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcEndPointServiceUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_owner, allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VpcEndPointServiceUser::GetOwner() const
{
    return m_owner;
}

void VpcEndPointServiceUser::SetOwner(const uint64_t& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool VpcEndPointServiceUser::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string VpcEndPointServiceUser::GetUserUin() const
{
    return m_userUin;
}

void VpcEndPointServiceUser::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool VpcEndPointServiceUser::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string VpcEndPointServiceUser::GetDescription() const
{
    return m_description;
}

void VpcEndPointServiceUser::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VpcEndPointServiceUser::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VpcEndPointServiceUser::GetCreateTime() const
{
    return m_createTime;
}

void VpcEndPointServiceUser::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VpcEndPointServiceUser::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VpcEndPointServiceUser::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

void VpcEndPointServiceUser::SetEndPointServiceId(const string& _endPointServiceId)
{
    m_endPointServiceId = _endPointServiceId;
    m_endPointServiceIdHasBeenSet = true;
}

bool VpcEndPointServiceUser::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

