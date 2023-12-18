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
using namespace std;

PreExecuteFileSettings::PreExecuteFileSettings() :
    m_pathHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_runOrderHasBeenSet(false),
    m_whenRunHasBeenSet(false),
    m_cosFileNameHasBeenSet(false),
    m_cosFileURIHasBeenSet(false),
    m_cosSecretIdHasBeenSet(false),
    m_cosSecretKeyHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome PreExecuteFileSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.Args` is not array type"));

        const rapidjson::Value &tmpValue = value["Args"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_args.push_back((*itr).GetString());
        }
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("RunOrder") && !value["RunOrder"].IsNull())
    {
        if (!value["RunOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.RunOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runOrder = value["RunOrder"].GetInt64();
        m_runOrderHasBeenSet = true;
    }

    if (value.HasMember("WhenRun") && !value["WhenRun"].IsNull())
    {
        if (!value["WhenRun"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.WhenRun` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whenRun = string(value["WhenRun"].GetString());
        m_whenRunHasBeenSet = true;
    }

    if (value.HasMember("CosFileName") && !value["CosFileName"].IsNull())
    {
        if (!value["CosFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.CosFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosFileName = string(value["CosFileName"].GetString());
        m_cosFileNameHasBeenSet = true;
    }

    if (value.HasMember("CosFileURI") && !value["CosFileURI"].IsNull())
    {
        if (!value["CosFileURI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.CosFileURI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosFileURI = string(value["CosFileURI"].GetString());
        m_cosFileURIHasBeenSet = true;
    }

    if (value.HasMember("CosSecretId") && !value["CosSecretId"].IsNull())
    {
        if (!value["CosSecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.CosSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosSecretId = string(value["CosSecretId"].GetString());
        m_cosSecretIdHasBeenSet = true;
    }

    if (value.HasMember("CosSecretKey") && !value["CosSecretKey"].IsNull())
    {
        if (!value["CosSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.CosSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosSecretKey = string(value["CosSecretKey"].GetString());
        m_cosSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreExecuteFileSettings.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreExecuteFileSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_runOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runOrder, allocator);
    }

    if (m_whenRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhenRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whenRun.c_str(), allocator).Move(), allocator);
    }

    if (m_cosFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosFileURIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosFileURI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosFileURI.c_str(), allocator).Move(), allocator);
    }

    if (m_cosSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_cosSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

int64_t PreExecuteFileSettings::GetRunOrder() const
{
    return m_runOrder;
}

void PreExecuteFileSettings::SetRunOrder(const int64_t& _runOrder)
{
    m_runOrder = _runOrder;
    m_runOrderHasBeenSet = true;
}

bool PreExecuteFileSettings::RunOrderHasBeenSet() const
{
    return m_runOrderHasBeenSet;
}

string PreExecuteFileSettings::GetWhenRun() const
{
    return m_whenRun;
}

void PreExecuteFileSettings::SetWhenRun(const string& _whenRun)
{
    m_whenRun = _whenRun;
    m_whenRunHasBeenSet = true;
}

bool PreExecuteFileSettings::WhenRunHasBeenSet() const
{
    return m_whenRunHasBeenSet;
}

string PreExecuteFileSettings::GetCosFileName() const
{
    return m_cosFileName;
}

void PreExecuteFileSettings::SetCosFileName(const string& _cosFileName)
{
    m_cosFileName = _cosFileName;
    m_cosFileNameHasBeenSet = true;
}

bool PreExecuteFileSettings::CosFileNameHasBeenSet() const
{
    return m_cosFileNameHasBeenSet;
}

string PreExecuteFileSettings::GetCosFileURI() const
{
    return m_cosFileURI;
}

void PreExecuteFileSettings::SetCosFileURI(const string& _cosFileURI)
{
    m_cosFileURI = _cosFileURI;
    m_cosFileURIHasBeenSet = true;
}

bool PreExecuteFileSettings::CosFileURIHasBeenSet() const
{
    return m_cosFileURIHasBeenSet;
}

string PreExecuteFileSettings::GetCosSecretId() const
{
    return m_cosSecretId;
}

void PreExecuteFileSettings::SetCosSecretId(const string& _cosSecretId)
{
    m_cosSecretId = _cosSecretId;
    m_cosSecretIdHasBeenSet = true;
}

bool PreExecuteFileSettings::CosSecretIdHasBeenSet() const
{
    return m_cosSecretIdHasBeenSet;
}

string PreExecuteFileSettings::GetCosSecretKey() const
{
    return m_cosSecretKey;
}

void PreExecuteFileSettings::SetCosSecretKey(const string& _cosSecretKey)
{
    m_cosSecretKey = _cosSecretKey;
    m_cosSecretKeyHasBeenSet = true;
}

bool PreExecuteFileSettings::CosSecretKeyHasBeenSet() const
{
    return m_cosSecretKeyHasBeenSet;
}

string PreExecuteFileSettings::GetAppId() const
{
    return m_appId;
}

void PreExecuteFileSettings::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool PreExecuteFileSettings::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string PreExecuteFileSettings::GetRemark() const
{
    return m_remark;
}

void PreExecuteFileSettings::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PreExecuteFileSettings::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

