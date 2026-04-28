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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSSPACE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSSPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EsAcl.h>
#include <tencentcloud/es/v20180416/model/DiData.h>
#include <tencentcloud/es/v20180416/model/VpcInfo.h>
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
                * Serverless索引空间信息
                */
                class ServerlessSpace : public AbstractModel
                {
                public:
                    ServerlessSpace();
                    ~ServerlessSpace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Serverless索引空间ID</p>
                     * @return SpaceId <p>Serverless索引空间ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Serverless索引空间ID</p>
                     * @param _spaceId <p>Serverless索引空间ID</p>
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
                     * 获取<p>Serverless索引空间名</p>
                     * @return SpaceName <p>Serverless索引空间名</p>
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置<p>Serverless索引空间名</p>
                     * @param _spaceName <p>Serverless索引空间名</p>
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
                     * 获取<p>Serverless索引空间状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 正常</li><li>2： 流程中</li><li>-3： 已删除</li><li>-4： 隔离中</li></ul>
                     * @return Status <p>Serverless索引空间状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 正常</li><li>2： 流程中</li><li>-3： 已删除</li><li>-4： 隔离中</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Serverless索引空间状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 正常</li><li>2： 流程中</li><li>-3： 已删除</li><li>-4： 隔离中</li></ul>
                     * @param _status <p>Serverless索引空间状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 正常</li><li>2： 流程中</li><li>-3： 已删除</li><li>-4： 隔离中</li></ul>
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
                     * 获取<p>创建日期</p>
                     * @return CreateTime <p>创建日期</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建日期</p>
                     * @param _createTime <p>创建日期</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>空间内索引数量</p>
                     * @return IndexCount <p>空间内索引数量</p>
                     * 
                     */
                    int64_t GetIndexCount() const;

                    /**
                     * 设置<p>空间内索引数量</p>
                     * @param _indexCount <p>空间内索引数量</p>
                     * 
                     */
                    void SetIndexCount(const int64_t& _indexCount);

                    /**
                     * 判断参数 IndexCount 是否已赋值
                     * @return IndexCount 是否已赋值
                     * 
                     */
                    bool IndexCountHasBeenSet() const;

                    /**
                     * 获取<p>kibana公网uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaUrl <p>kibana公网uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaUrl() const;

                    /**
                     * 设置<p>kibana公网uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaUrl <p>kibana公网uri</p>
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
                     * 获取<p>kibana内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPrivateUrl <p>kibana内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPrivateUrl() const;

                    /**
                     * 设置<p>kibana内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPrivateUrl <p>kibana内网url</p>
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
                     * 获取<p>空间内网访问地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexAccessUrl <p>空间内网访问地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexAccessUrl() const;

                    /**
                     * 设置<p>空间内网访问地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexAccessUrl <p>空间内网访问地址</p>
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
                     * 获取<p>空间白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPublicAcl <p>空间白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EsAcl GetKibanaPublicAcl() const;

                    /**
                     * 设置<p>空间白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPublicAcl <p>空间白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaPublicAcl(const EsAcl& _kibanaPublicAcl);

                    /**
                     * 判断参数 KibanaPublicAcl 是否已赋值
                     * @return KibanaPublicAcl 是否已赋值
                     * 
                     */
                    bool KibanaPublicAclHasBeenSet() const;

                    /**
                     * 获取<p>空间检索分析域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaEmbedUrl <p>空间检索分析域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaEmbedUrl() const;

                    /**
                     * 设置<p>空间检索分析域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaEmbedUrl <p>空间检索分析域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaEmbedUrl(const std::string& _kibanaEmbedUrl);

                    /**
                     * 判断参数 KibanaEmbedUrl 是否已赋值
                     * @return KibanaEmbedUrl 是否已赋值
                     * 
                     */
                    bool KibanaEmbedUrlHasBeenSet() const;

                    /**
                     * 获取<p>数据联路</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiDataList <p>数据联路</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiData GetDiDataList() const;

                    /**
                     * 设置<p>数据联路</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diDataList <p>数据联路</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiDataList(const DiData& _diDataList);

                    /**
                     * 判断参数 DiDataList 是否已赋值
                     * @return DiDataList 是否已赋值
                     * 
                     */
                    bool DiDataListHasBeenSet() const;

                    /**
                     * 获取<p>空间vpc信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcInfo <p>空间vpc信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VpcInfo> GetVpcInfo() const;

                    /**
                     * 设置<p>空间vpc信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcInfo <p>空间vpc信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcInfo(const std::vector<VpcInfo>& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>kibana公网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableKibanaPublicAccess <p>kibana公网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnableKibanaPublicAccess() const;

                    /**
                     * 设置<p>kibana公网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableKibanaPublicAccess <p>kibana公网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableKibanaPublicAccess(const int64_t& _enableKibanaPublicAccess);

                    /**
                     * 判断参数 EnableKibanaPublicAccess 是否已赋值
                     * @return EnableKibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool EnableKibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>kibana内网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableKibanaPrivateAccess <p>kibana内网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnableKibanaPrivateAccess() const;

                    /**
                     * 设置<p>kibana内网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableKibanaPrivateAccess <p>kibana内网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableKibanaPrivateAccess(const int64_t& _enableKibanaPrivateAccess);

                    /**
                     * 判断参数 EnableKibanaPrivateAccess 是否已赋值
                     * @return EnableKibanaPrivateAccess 是否已赋值
                     * 
                     */
                    bool EnableKibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取<p>空间所属appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>空间所属appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>空间所属appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>空间所属appid</p>
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
                     * 获取<p>//默认en， 可选zh-CN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaLanguage <p>//默认en， 可选zh-CN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaLanguage() const;

                    /**
                     * 设置<p>//默认en， 可选zh-CN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaLanguage <p>//默认en， 可选zh-CN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKibanaLanguage(const std::string& _kibanaLanguage);

                    /**
                     * 判断参数 KibanaLanguage 是否已赋值
                     * @return KibanaLanguage 是否已赋值
                     * 
                     */
                    bool KibanaLanguageHasBeenSet() const;

                    /**
                     * 获取<p>0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType <p>0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置<p>0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType <p>0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>空间标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList <p>空间标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置<p>空间标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList <p>空间标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否开启mcp服务</p>
                     * @return EnableMcpAccess <p>是否开启mcp服务</p>
                     * 
                     */
                    int64_t GetEnableMcpAccess() const;

                    /**
                     * 设置<p>是否开启mcp服务</p>
                     * @param _enableMcpAccess <p>是否开启mcp服务</p>
                     * 
                     */
                    void SetEnableMcpAccess(const int64_t& _enableMcpAccess);

                    /**
                     * 判断参数 EnableMcpAccess 是否已赋值
                     * @return EnableMcpAccess 是否已赋值
                     * 
                     */
                    bool EnableMcpAccessHasBeenSet() const;

                    /**
                     * 获取<p>mcp的访问地址</p>
                     * @return McpAccess <p>mcp的访问地址</p>
                     * 
                     */
                    std::string GetMcpAccess() const;

                    /**
                     * 设置<p>mcp的访问地址</p>
                     * @param _mcpAccess <p>mcp的访问地址</p>
                     * 
                     */
                    void SetMcpAccess(const std::string& _mcpAccess);

                    /**
                     * 判断参数 McpAccess 是否已赋值
                     * @return McpAccess 是否已赋值
                     * 
                     */
                    bool McpAccessHasBeenSet() const;

                private:

                    /**
                     * <p>Serverless索引空间ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Serverless索引空间名</p>
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * <p>Serverless索引空间状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 正常</li><li>2： 流程中</li><li>-3： 已删除</li><li>-4： 隔离中</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建日期</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>空间内索引数量</p>
                     */
                    int64_t m_indexCount;
                    bool m_indexCountHasBeenSet;

                    /**
                     * <p>kibana公网uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaUrl;
                    bool m_kibanaUrlHasBeenSet;

                    /**
                     * <p>kibana内网url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPrivateUrl;
                    bool m_kibanaPrivateUrlHasBeenSet;

                    /**
                     * <p>空间内网访问地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexAccessUrl;
                    bool m_indexAccessUrlHasBeenSet;

                    /**
                     * <p>空间白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EsAcl m_kibanaPublicAcl;
                    bool m_kibanaPublicAclHasBeenSet;

                    /**
                     * <p>空间检索分析域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaEmbedUrl;
                    bool m_kibanaEmbedUrlHasBeenSet;

                    /**
                     * <p>数据联路</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiData m_diDataList;
                    bool m_diDataListHasBeenSet;

                    /**
                     * <p>空间vpc信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcInfo> m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>kibana公网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enableKibanaPublicAccess;
                    bool m_enableKibanaPublicAccessHasBeenSet;

                    /**
                     * <p>kibana内网开关，0关闭，1开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enableKibanaPrivateAccess;
                    bool m_enableKibanaPrivateAccessHasBeenSet;

                    /**
                     * <p>空间所属appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>//默认en， 可选zh-CN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaLanguage;
                    bool m_kibanaLanguageHasBeenSet;

                    /**
                     * <p>0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>空间标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>是否开启mcp服务</p>
                     */
                    int64_t m_enableMcpAccess;
                    bool m_enableMcpAccessHasBeenSet;

                    /**
                     * <p>mcp的访问地址</p>
                     */
                    std::string m_mcpAccess;
                    bool m_mcpAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSSPACE_H_
