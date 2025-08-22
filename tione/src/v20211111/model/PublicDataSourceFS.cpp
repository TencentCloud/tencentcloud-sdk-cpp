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

#include <tencentcloud/tione/v20211111/model/PublicDataSourceFS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

PublicDataSourceFS::PublicDataSourceFS() :
    m_dataSourceIdHasBeenSet(false),
    m_subPathHasBeenSet(false)
{
}

CoreInternalOutcome PublicDataSourceFS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicDataSourceFS.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("SubPath") && !value["SubPath"].IsNull())
    {
        if (!value["SubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicDataSourceFS.SubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPath = string(value["SubPath"].GetString());
        m_subPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicDataSourceFS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPath.c_str(), allocator).Move(), allocator);
    }

}


string PublicDataSourceFS::GetDataSourceId() const
{
    return m_dataSourceId;
}

void PublicDataSourceFS::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool PublicDataSourceFS::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string PublicDataSourceFS::GetSubPath() const
{
    return m_subPath;
}

void PublicDataSourceFS::SetSubPath(const string& _subPath)
{
    m_subPath = _subPath;
    m_subPathHasBeenSet = true;
}

bool PublicDataSourceFS::SubPathHasBeenSet() const
{
    return m_subPathHasBeenSet;
}

