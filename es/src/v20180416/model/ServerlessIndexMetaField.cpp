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

#include <tencentcloud/es/v20180416/model/ServerlessIndexMetaField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ServerlessIndexMetaField::ServerlessIndexMetaField() :
    m_appIdHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_indexMetaJsonHasBeenSet(false),
    m_indexDocsHasBeenSet(false),
    m_indexStorageHasBeenSet(false),
    m_indexCreateTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_indexOptionsFieldHasBeenSet(false),
    m_indexSettingsFieldHasBeenSet(false),
    m_indexNetworkFieldHasBeenSet(false),
    m_kibanaUrlHasBeenSet(false),
    m_kibanaPrivateUrlHasBeenSet(false),
    m_indexAccessUrlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_indexTrafficHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessIndexMetaField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("IndexMetaJson") && !value["IndexMetaJson"].IsNull())
    {
        if (!value["IndexMetaJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexMetaJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexMetaJson = string(value["IndexMetaJson"].GetString());
        m_indexMetaJsonHasBeenSet = true;
    }

    if (value.HasMember("IndexDocs") && !value["IndexDocs"].IsNull())
    {
        if (!value["IndexDocs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexDocs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexDocs = value["IndexDocs"].GetInt64();
        m_indexDocsHasBeenSet = true;
    }

    if (value.HasMember("IndexStorage") && !value["IndexStorage"].IsNull())
    {
        if (!value["IndexStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexStorage = value["IndexStorage"].GetInt64();
        m_indexStorageHasBeenSet = true;
    }

    if (value.HasMember("IndexCreateTime") && !value["IndexCreateTime"].IsNull())
    {
        if (!value["IndexCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexCreateTime = string(value["IndexCreateTime"].GetString());
        m_indexCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("IndexOptionsField") && !value["IndexOptionsField"].IsNull())
    {
        if (!value["IndexOptionsField"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexOptionsField` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indexOptionsField.Deserialize(value["IndexOptionsField"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indexOptionsFieldHasBeenSet = true;
    }

    if (value.HasMember("IndexSettingsField") && !value["IndexSettingsField"].IsNull())
    {
        if (!value["IndexSettingsField"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexSettingsField` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indexSettingsField.Deserialize(value["IndexSettingsField"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indexSettingsFieldHasBeenSet = true;
    }

    if (value.HasMember("IndexNetworkField") && !value["IndexNetworkField"].IsNull())
    {
        if (!value["IndexNetworkField"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexNetworkField` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indexNetworkField.Deserialize(value["IndexNetworkField"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indexNetworkFieldHasBeenSet = true;
    }

    if (value.HasMember("KibanaUrl") && !value["KibanaUrl"].IsNull())
    {
        if (!value["KibanaUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.KibanaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaUrl = string(value["KibanaUrl"].GetString());
        m_kibanaUrlHasBeenSet = true;
    }

    if (value.HasMember("KibanaPrivateUrl") && !value["KibanaPrivateUrl"].IsNull())
    {
        if (!value["KibanaPrivateUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.KibanaPrivateUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaPrivateUrl = string(value["KibanaPrivateUrl"].GetString());
        m_kibanaPrivateUrlHasBeenSet = true;
    }

    if (value.HasMember("IndexAccessUrl") && !value["IndexAccessUrl"].IsNull())
    {
        if (!value["IndexAccessUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexAccessUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexAccessUrl = string(value["IndexAccessUrl"].GetString());
        m_indexAccessUrlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceName") && !value["SpaceName"].IsNull())
    {
        if (!value["SpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.SpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceName = string(value["SpaceName"].GetString());
        m_spaceNameHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.StorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetInt64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.TagList` is not array type"));

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

    if (value.HasMember("IndexTraffic") && !value["IndexTraffic"].IsNull())
    {
        if (!value["IndexTraffic"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexMetaField.IndexTraffic` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_indexTraffic = value["IndexTraffic"].GetDouble();
        m_indexTrafficHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessIndexMetaField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_indexMetaJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexMetaJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexMetaJson.c_str(), allocator).Move(), allocator);
    }

    if (m_indexDocsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexDocs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexDocs, allocator);
    }

    if (m_indexStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexStorage, allocator);
    }

    if (m_indexCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexOptionsFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexOptionsField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indexOptionsField.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indexSettingsFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexSettingsField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indexSettingsField.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indexNetworkFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexNetworkField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indexNetworkField.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

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

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageType, allocator);
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

    if (m_indexTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexTraffic, allocator);
    }

}


uint64_t ServerlessIndexMetaField::GetAppId() const
{
    return m_appId;
}

void ServerlessIndexMetaField::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ServerlessIndexMetaField::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ServerlessIndexMetaField::GetIndexName() const
{
    return m_indexName;
}

void ServerlessIndexMetaField::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string ServerlessIndexMetaField::GetIndexMetaJson() const
{
    return m_indexMetaJson;
}

void ServerlessIndexMetaField::SetIndexMetaJson(const string& _indexMetaJson)
{
    m_indexMetaJson = _indexMetaJson;
    m_indexMetaJsonHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexMetaJsonHasBeenSet() const
{
    return m_indexMetaJsonHasBeenSet;
}

int64_t ServerlessIndexMetaField::GetIndexDocs() const
{
    return m_indexDocs;
}

void ServerlessIndexMetaField::SetIndexDocs(const int64_t& _indexDocs)
{
    m_indexDocs = _indexDocs;
    m_indexDocsHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexDocsHasBeenSet() const
{
    return m_indexDocsHasBeenSet;
}

int64_t ServerlessIndexMetaField::GetIndexStorage() const
{
    return m_indexStorage;
}

void ServerlessIndexMetaField::SetIndexStorage(const int64_t& _indexStorage)
{
    m_indexStorage = _indexStorage;
    m_indexStorageHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexStorageHasBeenSet() const
{
    return m_indexStorageHasBeenSet;
}

string ServerlessIndexMetaField::GetIndexCreateTime() const
{
    return m_indexCreateTime;
}

void ServerlessIndexMetaField::SetIndexCreateTime(const string& _indexCreateTime)
{
    m_indexCreateTime = _indexCreateTime;
    m_indexCreateTimeHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexCreateTimeHasBeenSet() const
{
    return m_indexCreateTimeHasBeenSet;
}

string ServerlessIndexMetaField::GetInstanceId() const
{
    return m_instanceId;
}

void ServerlessIndexMetaField::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ServerlessIndexMetaField::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ServerlessIndexOptionsField ServerlessIndexMetaField::GetIndexOptionsField() const
{
    return m_indexOptionsField;
}

void ServerlessIndexMetaField::SetIndexOptionsField(const ServerlessIndexOptionsField& _indexOptionsField)
{
    m_indexOptionsField = _indexOptionsField;
    m_indexOptionsFieldHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexOptionsFieldHasBeenSet() const
{
    return m_indexOptionsFieldHasBeenSet;
}

ServerlessIndexSettingsField ServerlessIndexMetaField::GetIndexSettingsField() const
{
    return m_indexSettingsField;
}

void ServerlessIndexMetaField::SetIndexSettingsField(const ServerlessIndexSettingsField& _indexSettingsField)
{
    m_indexSettingsField = _indexSettingsField;
    m_indexSettingsFieldHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexSettingsFieldHasBeenSet() const
{
    return m_indexSettingsFieldHasBeenSet;
}

ServerlessIndexNetworkField ServerlessIndexMetaField::GetIndexNetworkField() const
{
    return m_indexNetworkField;
}

void ServerlessIndexMetaField::SetIndexNetworkField(const ServerlessIndexNetworkField& _indexNetworkField)
{
    m_indexNetworkField = _indexNetworkField;
    m_indexNetworkFieldHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexNetworkFieldHasBeenSet() const
{
    return m_indexNetworkFieldHasBeenSet;
}

string ServerlessIndexMetaField::GetKibanaUrl() const
{
    return m_kibanaUrl;
}

void ServerlessIndexMetaField::SetKibanaUrl(const string& _kibanaUrl)
{
    m_kibanaUrl = _kibanaUrl;
    m_kibanaUrlHasBeenSet = true;
}

bool ServerlessIndexMetaField::KibanaUrlHasBeenSet() const
{
    return m_kibanaUrlHasBeenSet;
}

string ServerlessIndexMetaField::GetKibanaPrivateUrl() const
{
    return m_kibanaPrivateUrl;
}

void ServerlessIndexMetaField::SetKibanaPrivateUrl(const string& _kibanaPrivateUrl)
{
    m_kibanaPrivateUrl = _kibanaPrivateUrl;
    m_kibanaPrivateUrlHasBeenSet = true;
}

bool ServerlessIndexMetaField::KibanaPrivateUrlHasBeenSet() const
{
    return m_kibanaPrivateUrlHasBeenSet;
}

string ServerlessIndexMetaField::GetIndexAccessUrl() const
{
    return m_indexAccessUrl;
}

void ServerlessIndexMetaField::SetIndexAccessUrl(const string& _indexAccessUrl)
{
    m_indexAccessUrl = _indexAccessUrl;
    m_indexAccessUrlHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexAccessUrlHasBeenSet() const
{
    return m_indexAccessUrlHasBeenSet;
}

int64_t ServerlessIndexMetaField::GetStatus() const
{
    return m_status;
}

void ServerlessIndexMetaField::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServerlessIndexMetaField::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServerlessIndexMetaField::GetSpaceId() const
{
    return m_spaceId;
}

void ServerlessIndexMetaField::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ServerlessIndexMetaField::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string ServerlessIndexMetaField::GetSpaceName() const
{
    return m_spaceName;
}

void ServerlessIndexMetaField::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool ServerlessIndexMetaField::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

int64_t ServerlessIndexMetaField::GetStorageType() const
{
    return m_storageType;
}

void ServerlessIndexMetaField::SetStorageType(const int64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool ServerlessIndexMetaField::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

vector<TagInfo> ServerlessIndexMetaField::GetTagList() const
{
    return m_tagList;
}

void ServerlessIndexMetaField::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool ServerlessIndexMetaField::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

double ServerlessIndexMetaField::GetIndexTraffic() const
{
    return m_indexTraffic;
}

void ServerlessIndexMetaField::SetIndexTraffic(const double& _indexTraffic)
{
    m_indexTraffic = _indexTraffic;
    m_indexTrafficHasBeenSet = true;
}

bool ServerlessIndexMetaField::IndexTrafficHasBeenSet() const
{
    return m_indexTrafficHasBeenSet;
}

