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

#include <tencentcloud/drm/v20181115/model/DrmOutputObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

DrmOutputObject::DrmOutputObject() :
    m_bucketNameHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_paraHasBeenSet(false)
{
}

CoreInternalOutcome DrmOutputObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrmOutputObject.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("ObjectName") && !value["ObjectName"].IsNull())
    {
        if (!value["ObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrmOutputObject.ObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectName = string(value["ObjectName"].GetString());
        m_objectNameHasBeenSet = true;
    }

    if (value.HasMember("Para") && !value["Para"].IsNull())
    {
        if (!value["Para"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DrmOutputObject.Para` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_para.Deserialize(value["Para"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrmOutputObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectName.c_str(), allocator).Move(), allocator);
    }

    if (m_paraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Para";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_para.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DrmOutputObject::GetBucketName() const
{
    return m_bucketName;
}

void DrmOutputObject::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool DrmOutputObject::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string DrmOutputObject::GetObjectName() const
{
    return m_objectName;
}

void DrmOutputObject::SetObjectName(const string& _objectName)
{
    m_objectName = _objectName;
    m_objectNameHasBeenSet = true;
}

bool DrmOutputObject::ObjectNameHasBeenSet() const
{
    return m_objectNameHasBeenSet;
}

DrmOutputPara DrmOutputObject::GetPara() const
{
    return m_para;
}

void DrmOutputObject::SetPara(const DrmOutputPara& _para)
{
    m_para = _para;
    m_paraHasBeenSet = true;
}

bool DrmOutputObject::ParaHasBeenSet() const
{
    return m_paraHasBeenSet;
}

