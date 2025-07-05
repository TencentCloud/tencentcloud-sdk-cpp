/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/goosefs/v20220519/model/AddCrossVpcSubnetSupportForClientNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

AddCrossVpcSubnetSupportForClientNodeRequest::AddCrossVpcSubnetSupportForClientNodeRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_subnetInfoHasBeenSet(false)
{
}

string AddCrossVpcSubnetSupportForClientNodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subnetInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddCrossVpcSubnetSupportForClientNodeRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void AddCrossVpcSubnetSupportForClientNodeRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool AddCrossVpcSubnetSupportForClientNodeRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

SubnetInfo AddCrossVpcSubnetSupportForClientNodeRequest::GetSubnetInfo() const
{
    return m_subnetInfo;
}

void AddCrossVpcSubnetSupportForClientNodeRequest::SetSubnetInfo(const SubnetInfo& _subnetInfo)
{
    m_subnetInfo = _subnetInfo;
    m_subnetInfoHasBeenSet = true;
}

bool AddCrossVpcSubnetSupportForClientNodeRequest::SubnetInfoHasBeenSet() const
{
    return m_subnetInfoHasBeenSet;
}


