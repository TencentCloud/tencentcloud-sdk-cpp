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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RegionDetail.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 通道组详情列表
                */
                class ProxyGroupInfo : public AbstractModel
                {
                public:
                    ProxyGroupInfo();
                    ~ProxyGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道组id
                     * @return GroupId 通道组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组id
                     * @param _groupId 通道组id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取通道组名称
                     * @return GroupName 通道组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置通道组名称
                     * @param _groupName 通道组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取目标地域
                     * @return RealServerRegionInfo 目标地域
                     * 
                     */
                    RegionDetail GetRealServerRegionInfo() const;

                    /**
                     * 设置目标地域
                     * @param _realServerRegionInfo 目标地域
                     * 
                     */
                    void SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo);

                    /**
                     * 判断参数 RealServerRegionInfo 是否已赋值
                     * @return RealServerRegionInfo 是否已赋值
                     * 
                     */
                    bool RealServerRegionInfoHasBeenSet() const;

                    /**
                     * 获取通道组状态。
其中，
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
MOVING表示通道迁移中；
CLOSED表示已关闭；
CHANGING表示部分部署中。
                     * @return Status 通道组状态。
其中，
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
MOVING表示通道迁移中；
CLOSED表示已关闭；
CHANGING表示部分部署中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置通道组状态。
其中，
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
MOVING表示通道迁移中；
CLOSED表示已关闭；
CHANGING表示部分部署中。
                     * @param _status 通道组状态。
其中，
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
MOVING表示通道迁移中；
CLOSED表示已关闭；
CHANGING表示部分部署中。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取标签列表。
                     * @return TagSet 标签列表。
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置标签列表。
                     * @param _tagSet 标签列表。
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取通道组版本
                     * @return Version 通道组版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置通道组版本
                     * @param _version 通道组版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取通道组是否包含微软通道
                     * @return ProxyType 通道组是否包含微软通道
                     * 
                     */
                    uint64_t GetProxyType() const;

                    /**
                     * 设置通道组是否包含微软通道
                     * @param _proxyType 通道组是否包含微软通道
                     * 
                     */
                    void SetProxyType(const uint64_t& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     * 
                     */
                    bool ProxyTypeHasBeenSet() const;

                    /**
                     * 获取支持Http3特性的标识，其中：
0表示关闭；
1表示启用。
                     * @return Http3Supported 支持Http3特性的标识，其中：
0表示关闭；
1表示启用。
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置支持Http3特性的标识，其中：
0表示关闭；
1表示启用。
                     * @param _http3Supported 支持Http3特性的标识，其中：
0表示关闭；
1表示启用。
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                    /**
                     * 获取特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeatureBitmap 特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFeatureBitmap() const;

                    /**
                     * 设置特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _featureBitmap 特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeatureBitmap(const int64_t& _featureBitmap);

                    /**
                     * 判断参数 FeatureBitmap 是否已赋值
                     * @return FeatureBitmap 是否已赋值
                     * 
                     */
                    bool FeatureBitmapHasBeenSet() const;

                private:

                    /**
                     * 通道组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 通道组域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 通道组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 目标地域
                     */
                    RegionDetail m_realServerRegionInfo;
                    bool m_realServerRegionInfoHasBeenSet;

                    /**
                     * 通道组状态。
其中，
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
MOVING表示通道迁移中；
CLOSED表示已关闭；
CHANGING表示部分部署中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 标签列表。
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 通道组版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 通道组是否包含微软通道
                     */
                    uint64_t m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * 支持Http3特性的标识，其中：
0表示关闭；
1表示启用。
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                    /**
                     * 特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_featureBitmap;
                    bool m_featureBitmapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPINFO_H_
