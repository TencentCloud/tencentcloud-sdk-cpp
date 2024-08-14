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

#include <tencentcloud/es/v20180416/model/ServerlessSpace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ServerlessSpace::ServerlessSpace() :
    m_spaceIdHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_indexCountHasBeenSet(false),
    m_kibanaUrlHasBeenSet(false),
    m_kibanaPrivateUrlHasBeenSet(false),
    m_indexAccessUrlHasBeenSet(false),
    m_kibanaPublicAclHasBeenSet(false),
    m_kibanaEmbedUrlHasBeenSet(false),
    m_diDataListHasBeenSet(false),
    m_vpcInfoHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_enableKibanaPublicAccessHasBeenSet(false),
    m_enableKibanaPrivateAccessHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_kibanaLanguageHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessSpace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceName") && !value["SpaceName"].IsNull())
    {
        if (!value["SpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.SpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceName = string(value["SpaceName"].GetString());
        m_spaceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IndexCount") && !value["IndexCount"].IsNull())
    {
        if (!value["IndexCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.IndexCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexCount = value["IndexCount"].GetInt64();
        m_indexCountHasBeenSet = true;
    }

    if (value.HasMember("KibanaUrl") && !value["KibanaUrl"].IsNull())
    {
        if (!value["KibanaUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.KibanaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaUrl = string(value["KibanaUrl"].GetString());
        m_kibanaUrlHasBeenSet = true;
    }

    if (value.HasMember("KibanaPrivateUrl") && !value["KibanaPrivateUrl"].IsNull())
    {
        if (!value["KibanaPrivateUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.KibanaPrivateUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaPrivateUrl = string(value["KibanaPrivateUrl"].GetString());
        m_kibanaPrivateUrlHasBeenSet = true;
    }

    if (value.HasMember("IndexAccessUrl") && !value["IndexAccessUrl"].IsNull())
    {
        if (!value["IndexAccessUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.IndexAccessUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexAccessUrl = string(value["IndexAccessUrl"].GetString());
        m_indexAccessUrlHasBeenSet = true;
    }

    if (value.HasMember("KibanaPublicAcl") && !value["KibanaPublicAcl"].IsNull())
    {
        if (!value["KibanaPublicAcl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.KibanaPublicAcl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kibanaPublicAcl.Deserialize(value["KibanaPublicAcl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kibanaPublicAclHasBeenSet = true;
    }

    if (value.HasMember("KibanaEmbedUrl") && !value["KibanaEmbedUrl"].IsNull())
    {
        if (!value["KibanaEmbedUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.KibanaEmbedUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaEmbedUrl = string(value["KibanaEmbedUrl"].GetString());
        m_kibanaEmbedUrlHasBeenSet = true;
    }

    if (value.HasMember("DiDataList") && !value["DiDataList"].IsNull())
    {
        if (!value["DiDataList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.DiDataList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diDataList.Deserialize(value["DiDataList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diDataListHasBeenSet = true;
    }

    if (value.HasMember("VpcInfo") && !value["VpcInfo"].IsNull())
    {
        if (!value["VpcInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.VpcInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcInfo.push_back(item);
        }
        m_vpcInfoHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("EnableKibanaPublicAccess") && !value["EnableKibanaPublicAccess"].IsNull())
    {
        if (!value["EnableKibanaPublicAccess"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.EnableKibanaPublicAccess` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableKibanaPublicAccess = value["EnableKibanaPublicAccess"].GetInt64();
        m_enableKibanaPublicAccessHasBeenSet = true;
    }

    if (value.HasMember("EnableKibanaPrivateAccess") && !value["EnableKibanaPrivateAccess"].IsNull())
    {
        if (!value["EnableKibanaPrivateAccess"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.EnableKibanaPrivateAccess` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableKibanaPrivateAccess = value["EnableKibanaPrivateAccess"].GetInt64();
        m_enableKibanaPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("KibanaLanguage") && !value["KibanaLanguage"].IsNull())
    {
        if (!value["KibanaLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.KibanaLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaLanguage = string(value["KibanaLanguage"].GetString());
        m_kibanaLanguageHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.ClusterType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = value["ClusterType"].GetInt64();
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerlessSpace.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessSpace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_indexCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexCount, allocator);
    }

    if (m_kibanaUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPrivateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPrivateUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaPrivateUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_indexAccessUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexAccessUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexAccessUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPublicAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPublicAcl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kibanaPublicAcl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kibanaEmbedUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaEmbedUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaEmbedUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_diDataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiDataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diDataList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfo.begin(); itr != m_vpcInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_enableKibanaPublicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableKibanaPublicAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableKibanaPublicAccess, allocator);
    }

    if (m_enableKibanaPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableKibanaPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableKibanaPrivateAccess, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_kibanaLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterType, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ServerlessSpace::GetSpaceId() const
{
    return m_spaceId;
}

void ServerlessSpace::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ServerlessSpace::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string ServerlessSpace::GetSpaceName() const
{
    return m_spaceName;
}

void ServerlessSpace::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool ServerlessSpace::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

int64_t ServerlessSpace::GetStatus() const
{
    return m_status;
}

void ServerlessSpace::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServerlessSpace::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServerlessSpace::GetCreateTime() const
{
    return m_createTime;
}

void ServerlessSpace::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServerlessSpace::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ServerlessSpace::GetIndexCount() const
{
    return m_indexCount;
}

void ServerlessSpace::SetIndexCount(const int64_t& _indexCount)
{
    m_indexCount = _indexCount;
    m_indexCountHasBeenSet = true;
}

bool ServerlessSpace::IndexCountHasBeenSet() const
{
    return m_indexCountHasBeenSet;
}

string ServerlessSpace::GetKibanaUrl() const
{
    return m_kibanaUrl;
}

void ServerlessSpace::SetKibanaUrl(const string& _kibanaUrl)
{
    m_kibanaUrl = _kibanaUrl;
    m_kibanaUrlHasBeenSet = true;
}

bool ServerlessSpace::KibanaUrlHasBeenSet() const
{
    return m_kibanaUrlHasBeenSet;
}

string ServerlessSpace::GetKibanaPrivateUrl() const
{
    return m_kibanaPrivateUrl;
}

void ServerlessSpace::SetKibanaPrivateUrl(const string& _kibanaPrivateUrl)
{
    m_kibanaPrivateUrl = _kibanaPrivateUrl;
    m_kibanaPrivateUrlHasBeenSet = true;
}

bool ServerlessSpace::KibanaPrivateUrlHasBeenSet() const
{
    return m_kibanaPrivateUrlHasBeenSet;
}

string ServerlessSpace::GetIndexAccessUrl() const
{
    return m_indexAccessUrl;
}

void ServerlessSpace::SetIndexAccessUrl(const string& _indexAccessUrl)
{
    m_indexAccessUrl = _indexAccessUrl;
    m_indexAccessUrlHasBeenSet = true;
}

bool ServerlessSpace::IndexAccessUrlHasBeenSet() const
{
    return m_indexAccessUrlHasBeenSet;
}

EsAcl ServerlessSpace::GetKibanaPublicAcl() const
{
    return m_kibanaPublicAcl;
}

void ServerlessSpace::SetKibanaPublicAcl(const EsAcl& _kibanaPublicAcl)
{
    m_kibanaPublicAcl = _kibanaPublicAcl;
    m_kibanaPublicAclHasBeenSet = true;
}

bool ServerlessSpace::KibanaPublicAclHasBeenSet() const
{
    return m_kibanaPublicAclHasBeenSet;
}

string ServerlessSpace::GetKibanaEmbedUrl() const
{
    return m_kibanaEmbedUrl;
}

void ServerlessSpace::SetKibanaEmbedUrl(const string& _kibanaEmbedUrl)
{
    m_kibanaEmbedUrl = _kibanaEmbedUrl;
    m_kibanaEmbedUrlHasBeenSet = true;
}

bool ServerlessSpace::KibanaEmbedUrlHasBeenSet() const
{
    return m_kibanaEmbedUrlHasBeenSet;
}

DiData ServerlessSpace::GetDiDataList() const
{
    return m_diDataList;
}

void ServerlessSpace::SetDiDataList(const DiData& _diDataList)
{
    m_diDataList = _diDataList;
    m_diDataListHasBeenSet = true;
}

bool ServerlessSpace::DiDataListHasBeenSet() const
{
    return m_diDataListHasBeenSet;
}

vector<VpcInfo> ServerlessSpace::GetVpcInfo() const
{
    return m_vpcInfo;
}

void ServerlessSpace::SetVpcInfo(const vector<VpcInfo>& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool ServerlessSpace::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}

string ServerlessSpace::GetRegion() const
{
    return m_region;
}

void ServerlessSpace::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ServerlessSpace::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ServerlessSpace::GetZone() const
{
    return m_zone;
}

void ServerlessSpace::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ServerlessSpace::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t ServerlessSpace::GetEnableKibanaPublicAccess() const
{
    return m_enableKibanaPublicAccess;
}

void ServerlessSpace::SetEnableKibanaPublicAccess(const int64_t& _enableKibanaPublicAccess)
{
    m_enableKibanaPublicAccess = _enableKibanaPublicAccess;
    m_enableKibanaPublicAccessHasBeenSet = true;
}

bool ServerlessSpace::EnableKibanaPublicAccessHasBeenSet() const
{
    return m_enableKibanaPublicAccessHasBeenSet;
}

int64_t ServerlessSpace::GetEnableKibanaPrivateAccess() const
{
    return m_enableKibanaPrivateAccess;
}

void ServerlessSpace::SetEnableKibanaPrivateAccess(const int64_t& _enableKibanaPrivateAccess)
{
    m_enableKibanaPrivateAccess = _enableKibanaPrivateAccess;
    m_enableKibanaPrivateAccessHasBeenSet = true;
}

bool ServerlessSpace::EnableKibanaPrivateAccessHasBeenSet() const
{
    return m_enableKibanaPrivateAccessHasBeenSet;
}

uint64_t ServerlessSpace::GetAppId() const
{
    return m_appId;
}

void ServerlessSpace::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ServerlessSpace::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ServerlessSpace::GetKibanaLanguage() const
{
    return m_kibanaLanguage;
}

void ServerlessSpace::SetKibanaLanguage(const string& _kibanaLanguage)
{
    m_kibanaLanguage = _kibanaLanguage;
    m_kibanaLanguageHasBeenSet = true;
}

bool ServerlessSpace::KibanaLanguageHasBeenSet() const
{
    return m_kibanaLanguageHasBeenSet;
}

int64_t ServerlessSpace::GetClusterType() const
{
    return m_clusterType;
}

void ServerlessSpace::SetClusterType(const int64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ServerlessSpace::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

vector<TagInfo> ServerlessSpace::GetTagList() const
{
    return m_tagList;
}

void ServerlessSpace::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool ServerlessSpace::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

