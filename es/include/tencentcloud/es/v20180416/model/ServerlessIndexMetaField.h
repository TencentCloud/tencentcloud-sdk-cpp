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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSINDEXMETAFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSINDEXMETAFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/ServerlessIndexOptionsField.h>
#include <tencentcloud/es/v20180416/model/ServerlessIndexSettingsField.h>
#include <tencentcloud/es/v20180416/model/ServerlessIndexNetworkField.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 索引元数据字段
                */
                class ServerlessIndexMetaField : public AbstractModel
                {
                public:
                    ServerlessIndexMetaField();
                    ~ServerlessIndexMetaField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引所属集群APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 索引所属集群APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置索引所属集群APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 索引所属集群APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexName 索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexName 索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取索引元数据JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexMetaJson 索引元数据JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexMetaJson() const;

                    /**
                     * 设置索引元数据JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexMetaJson 索引元数据JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexMetaJson(const std::string& _indexMetaJson);

                    /**
                     * 判断参数 IndexMetaJson 是否已赋值
                     * @return IndexMetaJson 是否已赋值
                     * 
                     */
                    bool IndexMetaJsonHasBeenSet() const;

                    /**
                     * 获取索引文档数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexDocs 索引文档数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndexDocs() const;

                    /**
                     * 设置索引文档数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexDocs 索引文档数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexDocs(const int64_t& _indexDocs);

                    /**
                     * 判断参数 IndexDocs 是否已赋值
                     * @return IndexDocs 是否已赋值
                     * 
                     */
                    bool IndexDocsHasBeenSet() const;

                    /**
                     * 获取索引存储大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexStorage 索引存储大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndexStorage() const;

                    /**
                     * 设置索引存储大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexStorage 索引存储大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexStorage(const int64_t& _indexStorage);

                    /**
                     * 判断参数 IndexStorage 是否已赋值
                     * @return IndexStorage 是否已赋值
                     * 
                     */
                    bool IndexStorageHasBeenSet() const;

                    /**
                     * 获取索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexCreateTime 索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexCreateTime() const;

                    /**
                     * 设置索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexCreateTime 索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexCreateTime(const std::string& _indexCreateTime);

                    /**
                     * 判断参数 IndexCreateTime 是否已赋值
                     * @return IndexCreateTime 是否已赋值
                     * 
                     */
                    bool IndexCreateTimeHasBeenSet() const;

                    /**
                     * 获取索引实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 索引实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置索引实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 索引实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取索引自治字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexOptionsField 索引自治字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServerlessIndexOptionsField GetIndexOptionsField() const;

                    /**
                     * 设置索引自治字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexOptionsField 索引自治字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexOptionsField(const ServerlessIndexOptionsField& _indexOptionsField);

                    /**
                     * 判断参数 IndexOptionsField 是否已赋值
                     * @return IndexOptionsField 是否已赋值
                     * 
                     */
                    bool IndexOptionsFieldHasBeenSet() const;

                    /**
                     * 获取索引配置字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexSettingsField 索引配置字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServerlessIndexSettingsField GetIndexSettingsField() const;

                    /**
                     * 设置索引配置字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexSettingsField 索引配置字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexSettingsField(const ServerlessIndexSettingsField& _indexSettingsField);

                    /**
                     * 判断参数 IndexSettingsField 是否已赋值
                     * @return IndexSettingsField 是否已赋值
                     * 
                     */
                    bool IndexSettingsFieldHasBeenSet() const;

                    /**
                     * 获取索引所属连接相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexNetworkField 索引所属连接相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServerlessIndexNetworkField GetIndexNetworkField() const;

                    /**
                     * 设置索引所属连接相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexNetworkField 索引所属连接相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexNetworkField(const ServerlessIndexNetworkField& _indexNetworkField);

                    /**
                     * 判断参数 IndexNetworkField 是否已赋值
                     * @return IndexNetworkField 是否已赋值
                     * 
                     */
                    bool IndexNetworkFieldHasBeenSet() const;

                    /**
                     * 获取Kibana公网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaUrl Kibana公网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaUrl() const;

                    /**
                     * 设置Kibana公网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaUrl Kibana公网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaUrl(const std::string& _kibanaUrl);

                    /**
                     * 判断参数 KibanaUrl 是否已赋值
                     * @return KibanaUrl 是否已赋值
                     * 
                     */
                    bool KibanaUrlHasBeenSet() const;

                    /**
                     * 获取Kibana内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPrivateUrl Kibana内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPrivateUrl() const;

                    /**
                     * 设置Kibana内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPrivateUrl Kibana内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaPrivateUrl(const std::string& _kibanaPrivateUrl);

                    /**
                     * 判断参数 KibanaPrivateUrl 是否已赋值
                     * @return KibanaPrivateUrl 是否已赋值
                     * 
                     */
                    bool KibanaPrivateUrlHasBeenSet() const;

                    /**
                     * 获取索引内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexAccessUrl 索引内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexAccessUrl() const;

                    /**
                     * 设置索引内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexAccessUrl 索引内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexAccessUrl(const std::string& _indexAccessUrl);

                    /**
                     * 判断参数 IndexAccessUrl 是否已赋值
                     * @return IndexAccessUrl 是否已赋值
                     * 
                     */
                    bool IndexAccessUrlHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取索引空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpaceId 索引空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置索引空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spaceId 索引空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取索引空间名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpaceName 索引空间名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置索引空间名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spaceName 索引空间名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                    /**
                     * 获取存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return TagList 标签信息
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置标签信息
                     * @param _tagList 标签信息
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取索引流量，单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexTraffic 索引流量，单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetIndexTraffic() const;

                    /**
                     * 设置索引流量，单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexTraffic 索引流量，单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexTraffic(const double& _indexTraffic);

                    /**
                     * 判断参数 IndexTraffic 是否已赋值
                     * @return IndexTraffic 是否已赋值
                     * 
                     */
                    bool IndexTrafficHasBeenSet() const;

                private:

                    /**
                     * 索引所属集群APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 索引名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 索引元数据JSON
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexMetaJson;
                    bool m_indexMetaJsonHasBeenSet;

                    /**
                     * 索引文档数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indexDocs;
                    bool m_indexDocsHasBeenSet;

                    /**
                     * 索引存储大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indexStorage;
                    bool m_indexStorageHasBeenSet;

                    /**
                     * 索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexCreateTime;
                    bool m_indexCreateTimeHasBeenSet;

                    /**
                     * 索引实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 索引自治字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServerlessIndexOptionsField m_indexOptionsField;
                    bool m_indexOptionsFieldHasBeenSet;

                    /**
                     * 索引配置字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServerlessIndexSettingsField m_indexSettingsField;
                    bool m_indexSettingsFieldHasBeenSet;

                    /**
                     * 索引所属连接相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServerlessIndexNetworkField m_indexNetworkField;
                    bool m_indexNetworkFieldHasBeenSet;

                    /**
                     * Kibana公网域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaUrl;
                    bool m_kibanaUrlHasBeenSet;

                    /**
                     * Kibana内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPrivateUrl;
                    bool m_kibanaPrivateUrlHasBeenSet;

                    /**
                     * 索引内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexAccessUrl;
                    bool m_indexAccessUrlHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 索引空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 索引空间名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 索引流量，单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_indexTraffic;
                    bool m_indexTrafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSINDEXMETAFIELD_H_
