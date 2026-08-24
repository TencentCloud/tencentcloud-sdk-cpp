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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CROSSCLOUDDETAILS_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CROSSCLOUDDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 跨云信息
                */
                class CrossCloudDetails : public AbstractModel
                {
                public:
                    CrossCloudDetails();
                    ~CrossCloudDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源端云名称（跨云对端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceCloudName 源端云名称（跨云对端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceCloudName() const;

                    /**
                     * 设置源端云名称（跨云对端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceCloudName 源端云名称（跨云对端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceCloudName(const std::string& _sourceCloudName);

                    /**
                     * 判断参数 SourceCloudName 是否已赋值
                     * @return SourceCloudName 是否已赋值
                     * 
                     */
                    bool SourceCloudNameHasBeenSet() const;

                    /**
                     * 获取目标端云名称（跨云本端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetCloudName 目标端云名称（跨云本端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetCloudName() const;

                    /**
                     * 设置目标端云名称（跨云本端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetCloudName 目标端云名称（跨云本端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetCloudName(const std::string& _targetCloudName);

                    /**
                     * 判断参数 TargetCloudName 是否已赋值
                     * @return TargetCloudName 是否已赋值
                     * 
                     */
                    bool TargetCloudNameHasBeenSet() const;

                    /**
                     * 获取源端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceAppId 源端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSourceAppId() const;

                    /**
                     * 设置源端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceAppId 源端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceAppId(const int64_t& _sourceAppId);

                    /**
                     * 判断参数 SourceAppId 是否已赋值
                     * @return SourceAppId 是否已赋值
                     * 
                     */
                    bool SourceAppIdHasBeenSet() const;

                    /**
                     * 获取源端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceUin 源端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceUin() const;

                    /**
                     * 设置源端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceUin 源端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceUin(const std::string& _sourceUin);

                    /**
                     * 判断参数 SourceUin 是否已赋值
                     * @return SourceUin 是否已赋值
                     * 
                     */
                    bool SourceUinHasBeenSet() const;

                    /**
                     * 获取源端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceSubAccountUin 源端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceSubAccountUin() const;

                    /**
                     * 设置源端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceSubAccountUin 源端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceSubAccountUin(const std::string& _sourceSubAccountUin);

                    /**
                     * 判断参数 SourceSubAccountUin 是否已赋值
                     * @return SourceSubAccountUin 是否已赋值
                     * 
                     */
                    bool SourceSubAccountUinHasBeenSet() const;

                    /**
                     * 获取源端云用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceUserName 源端云用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceUserName() const;

                    /**
                     * 设置源端云用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceUserName 源端云用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceUserName(const std::string& _sourceUserName);

                    /**
                     * 判断参数 SourceUserName 是否已赋值
                     * @return SourceUserName 是否已赋值
                     * 
                     */
                    bool SourceUserNameHasBeenSet() const;

                    /**
                     * 获取目标端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetAppId 目标端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetAppId() const;

                    /**
                     * 设置目标端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetAppId 目标端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetAppId(const int64_t& _targetAppId);

                    /**
                     * 判断参数 TargetAppId 是否已赋值
                     * @return TargetAppId 是否已赋值
                     * 
                     */
                    bool TargetAppIdHasBeenSet() const;

                    /**
                     * 获取目标端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetUin 目标端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetUin() const;

                    /**
                     * 设置目标端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetUin 目标端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetUin(const std::string& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取目标端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSubAccountUin 目标端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetSubAccountUin() const;

                    /**
                     * 设置目标端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSubAccountUin 目标端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetSubAccountUin(const std::string& _targetSubAccountUin);

                    /**
                     * 判断参数 TargetSubAccountUin 是否已赋值
                     * @return TargetSubAccountUin 是否已赋值
                     * 
                     */
                    bool TargetSubAccountUinHasBeenSet() const;

                    /**
                     * 获取对端云的地域显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerRegionName 对端云的地域显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeerRegionName() const;

                    /**
                     * 设置对端云的地域显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerRegionName 对端云的地域显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeerRegionName(const std::string& _peerRegionName);

                    /**
                     * 判断参数 PeerRegionName 是否已赋值
                     * @return PeerRegionName 是否已赋值
                     * 
                     */
                    bool PeerRegionNameHasBeenSet() const;

                    /**
                     * 获取对端云的可用区显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerZoneName 对端云的可用区显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeerZoneName() const;

                    /**
                     * 设置对端云的可用区显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerZoneName 对端云的可用区显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeerZoneName(const std::string& _peerZoneName);

                    /**
                     * 判断参数 PeerZoneName 是否已赋值
                     * @return PeerZoneName 是否已赋值
                     * 
                     */
                    bool PeerZoneNameHasBeenSet() const;

                    /**
                     * 获取对端云的VPC显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerVpcName 对端云的VPC显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeerVpcName() const;

                    /**
                     * 设置对端云的VPC显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerVpcName 对端云的VPC显示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeerVpcName(const std::string& _peerVpcName);

                    /**
                     * 判断参数 PeerVpcName 是否已赋值
                     * @return PeerVpcName 是否已赋值
                     * 
                     */
                    bool PeerVpcNameHasBeenSet() const;

                private:

                    /**
                     * 源端云名称（跨云对端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceCloudName;
                    bool m_sourceCloudNameHasBeenSet;

                    /**
                     * 目标端云名称（跨云本端云名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetCloudName;
                    bool m_targetCloudNameHasBeenSet;

                    /**
                     * 源端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sourceAppId;
                    bool m_sourceAppIdHasBeenSet;

                    /**
                     * 源端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceUin;
                    bool m_sourceUinHasBeenSet;

                    /**
                     * 源端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceSubAccountUin;
                    bool m_sourceSubAccountUinHasBeenSet;

                    /**
                     * 源端云用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceUserName;
                    bool m_sourceUserNameHasBeenSet;

                    /**
                     * 目标端云AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetAppId;
                    bool m_targetAppIdHasBeenSet;

                    /**
                     * 目标端云主账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 目标端云子账号 Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetSubAccountUin;
                    bool m_targetSubAccountUinHasBeenSet;

                    /**
                     * 对端云的地域显示名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_peerRegionName;
                    bool m_peerRegionNameHasBeenSet;

                    /**
                     * 对端云的可用区显示名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_peerZoneName;
                    bool m_peerZoneNameHasBeenSet;

                    /**
                     * 对端云的VPC显示名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_peerVpcName;
                    bool m_peerVpcNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CROSSCLOUDDETAILS_H_
