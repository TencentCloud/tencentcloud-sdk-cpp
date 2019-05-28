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

#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

PreExecuteFileSettings::PreExecuteFileSettings() :
    m_pathHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome PreExecuteFileSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Error("response `PreExecuteFileSettings.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsArray())
            return CoreInternalOutcome(Error("response `PreExecuteFileSettings.Args` is not array type"));

        const Value &tmpValue = value["Args"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_args.push_back((*itr).GetString());
        }
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Error("response `PreExecuteFileSettings.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `PreExecuteFileSettings.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `PreExecuteFileSettings.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreExecuteFileSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bucketHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


string PreExecuteFileSettings::GetPath() const
{
    return m_path;
}

void PreExecuteFileSettings::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool PreExecuteFileSettings::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

vector<string> PreExecuteFileSettings::GetArgs() const
{
    return m_args;
}

void PreExecuteFileSettings::SetArgs(const vector<string>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool PreExecuteFileSettings::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

string PreExecuteFileSettings::GetBucket() const
{
    return m_bucket;
}

void PreExecuteFileSettings::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool PreExecuteFileSettings::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string PreExecuteFileSettings::GetRegion() const
{
    return m_region;
}

void PreExecuteFileSettings::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PreExecuteFileSettings::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string PreExecuteFileSettings::GetDomain() const
{
    return m_domain;
}

void PreExecuteFileSettings::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool PreExecuteFileSettings::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

