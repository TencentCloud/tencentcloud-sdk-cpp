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
                     * 获取Serverless索引空间ID
                     * @return SpaceId Serverless索引空间ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置Serverless索引空间ID
                     * @param _spaceId Serverless索引空间ID
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
                     * 获取Serverless索引空间名
                     * @return SpaceName Serverless索引空间名
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置Serverless索引空间名
                     * @param _spaceName Serverless索引空间名
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
                     * 获取Serverless索引空间状态，0正常，-1已删除
                     * @return Status Serverless索引空间状态，0正常，-1已删除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Serverless索引空间状态，0正常，-1已删除
                     * @param _status Serverless索引空间状态，0正常，-1已删除
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
                     * 获取创建日期
                     * @return CreateTime 创建日期
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建日期
                     * @param _createTime 创建日期
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
                     * 获取空间内索引数量
                     * @return IndexCount 空间内索引数量
                     * 
                     */
                    int64_t GetIndexCount() const;

                    /**
                     * 设置空间内索引数量
                     * @param _indexCount 空间内索引数量
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
                     * 获取kibana公网uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaUrl kibana公网uri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaUrl() const;

                    /**
                     * 设置kibana公网uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaUrl kibana公网uri
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
                     * 获取kibana内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPrivateUrl kibana内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaPrivateUrl() const;

                    /**
                     * 设置kibana内网url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPrivateUrl kibana内网url
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
                     * 获取空间内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexAccessUrl 空间内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexAccessUrl() const;

                    /**
                     * 设置空间内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexAccessUrl 空间内网访问地址
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
                     * 获取空间白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaPublicAcl 空间白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EsAcl GetKibanaPublicAcl() const;

                    /**
                     * 设置空间白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaPublicAcl 空间白名单
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
                     * 获取空间检索分析域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaEmbedUrl 空间检索分析域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaEmbedUrl() const;

                    /**
                     * 设置空间检索分析域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaEmbedUrl 空间检索分析域名
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
                     * 获取数据联路
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiDataList 数据联路
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiData GetDiDataList() const;

                    /**
                     * 设置数据联路
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diDataList 数据联路
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
                     * 获取空间vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcInfo 空间vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VpcInfo> GetVpcInfo() const;

                    /**
                     * 设置空间vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcInfo 空间vpc信息
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
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
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
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 可用区
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
                     * 获取kibana公网开关，0关闭，1开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableKibanaPublicAccess kibana公网开关，0关闭，1开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnableKibanaPublicAccess() const;

                    /**
                     * 设置kibana公网开关，0关闭，1开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableKibanaPublicAccess kibana公网开关，0关闭，1开启
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
                     * 获取kibana内网开关，0关闭，1开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableKibanaPrivateAccess kibana内网开关，0关闭，1开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnableKibanaPrivateAccess() const;

                    /**
                     * 设置kibana内网开关，0关闭，1开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableKibanaPrivateAccess kibana内网开关，0关闭，1开启
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
                     * 获取空间所属appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 空间所属appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置空间所属appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 空间所属appid
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
                     * 获取//默认en， 可选zh-CN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanaLanguage //默认en， 可选zh-CN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKibanaLanguage() const;

                    /**
                     * 设置//默认en， 可选zh-CN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kibanaLanguage //默认en， 可选zh-CN
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
                     * 获取0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 0
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
                     * 获取空间标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 空间标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置空间标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList 空间标签信息
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

                private:

                    /**
                     * Serverless索引空间ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * Serverless索引空间名
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * Serverless索引空间状态，0正常，-1已删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建日期
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 空间内索引数量
                     */
                    int64_t m_indexCount;
                    bool m_indexCountHasBeenSet;

                    /**
                     * kibana公网uri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaUrl;
                    bool m_kibanaUrlHasBeenSet;

                    /**
                     * kibana内网url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaPrivateUrl;
                    bool m_kibanaPrivateUrlHasBeenSet;

                    /**
                     * 空间内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexAccessUrl;
                    bool m_indexAccessUrlHasBeenSet;

                    /**
                     * 空间白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EsAcl m_kibanaPublicAcl;
                    bool m_kibanaPublicAclHasBeenSet;

                    /**
                     * 空间检索分析域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaEmbedUrl;
                    bool m_kibanaEmbedUrlHasBeenSet;

                    /**
                     * 数据联路
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiData m_diDataList;
                    bool m_diDataListHasBeenSet;

                    /**
                     * 空间vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcInfo> m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * kibana公网开关，0关闭，1开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enableKibanaPublicAccess;
                    bool m_enableKibanaPublicAccessHasBeenSet;

                    /**
                     * kibana内网开关，0关闭，1开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enableKibanaPrivateAccess;
                    bool m_enableKibanaPrivateAccessHasBeenSet;

                    /**
                     * 空间所属appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * //默认en， 可选zh-CN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kibanaLanguage;
                    bool m_kibanaLanguageHasBeenSet;

                    /**
                     * 0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 空间标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSSPACE_H_
