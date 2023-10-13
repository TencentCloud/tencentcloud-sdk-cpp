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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/InstanceStateInfo.h>
#include <tencentcloud/cdwpg/v20201230/model/Tag.h>
#include <tencentcloud/cdwpg/v20201230/model/InstanceNodeGroup.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 云原生实例详情
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID ID值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置ID值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD ID值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Running
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status Running
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Running
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status Running
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStateInfo 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceStateInfo GetInstanceStateInfo() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStateInfo 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStateInfo(const InstanceStateInfo& _instanceStateInfo);

                    /**
                     * 判断参数 InstanceStateInfo 是否已赋值
                     * @return InstanceStateInfo 是否已赋值
                     * 
                     */
                    bool InstanceStateInfoHasBeenSet() const;

                    /**
                     * 获取-
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceID -
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置-
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceID -
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取2022-09-05 20:00:01
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 2022-09-05 20:00:01
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置2022-09-05 20:00:01
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 2022-09-05 20:00:01
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取ap-chongqing
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region ap-chongqing
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置ap-chongqing
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region ap-chongqing
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
                     * 获取ap
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone ap
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置ap
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone ap
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
                     * 获取region
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionDesc region
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionDesc() const;

                    /**
                     * 设置region
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionDesc region
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionDesc(const std::string& _regionDesc);

                    /**
                     * 判断参数 RegionDesc 是否已赋值
                     * @return RegionDesc 是否已赋值
                     * 
                     */
                    bool RegionDescHasBeenSet() const;

                    /**
                     * 获取zone
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneDesc zone
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneDesc() const;

                    /**
                     * 设置zone
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneDesc zone
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneDesc(const std::string& _zoneDesc);

                    /**
                     * 判断参数 ZoneDesc 是否已赋值
                     * @return ZoneDesc 是否已赋值
                     * 
                     */
                    bool ZoneDescHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取v3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version v3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置v3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version v3
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Charset 字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _charset 字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineVersion 引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineVersion 引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取GTM节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GTMNodes GTM节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNodeGroup> GetGTMNodes() const;

                    /**
                     * 设置GTM节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gTMNodes GTM节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGTMNodes(const std::vector<InstanceNodeGroup>& _gTMNodes);

                    /**
                     * 判断参数 GTMNodes 是否已赋值
                     * @return GTMNodes 是否已赋值
                     * 
                     */
                    bool GTMNodesHasBeenSet() const;

                    /**
                     * 获取CN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CNNodes CN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNodeGroup> GetCNNodes() const;

                    /**
                     * 设置CN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cNNodes CN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCNNodes(const std::vector<InstanceNodeGroup>& _cNNodes);

                    /**
                     * 判断参数 CNNodes 是否已赋值
                     * @return CNNodes 是否已赋值
                     * 
                     */
                    bool CNNodesHasBeenSet() const;

                    /**
                     * 获取DN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DNNodes DN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNodeGroup> GetDNNodes() const;

                    /**
                     * 设置DN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dNNodes DN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDNNodes(const std::vector<InstanceNodeGroup>& _dNNodes);

                    /**
                     * 判断参数 DNNodes 是否已赋值
                     * @return DNNodes 是否已赋值
                     * 
                     */
                    bool DNNodesHasBeenSet() const;

                    /**
                     * 获取备份存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupStorage 备份存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNodeGroup> GetBackupStorage() const;

                    /**
                     * 设置备份存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupStorage 备份存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupStorage(const std::vector<InstanceNodeGroup>& _backupStorage);

                    /**
                     * 判断参数 BackupStorage 是否已赋值
                     * @return BackupStorage 是否已赋值
                     * 
                     */
                    bool BackupStorageHasBeenSet() const;

                    /**
                     * 获取FN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FNNodes FN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNodeGroup> GetFNNodes() const;

                    /**
                     * 设置FN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fNNodes FN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFNNodes(const std::vector<InstanceNodeGroup>& _fNNodes);

                    /**
                     * 判断参数 FNNodes 是否已赋值
                     * @return FNNodes 是否已赋值
                     * 
                     */
                    bool FNNodesHasBeenSet() const;

                private:

                    /**
                     * ID值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * cdwpg-cn或者其他
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Running
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceStateInfo m_instanceStateInfo;
                    bool m_instanceStateInfoHasBeenSet;

                    /**
                     * -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 2022-09-05 20:00:01
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * ap-chongqing
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * ap
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * region
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionDesc;
                    bool m_regionDescHasBeenSet;

                    /**
                     * zone
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneDesc;
                    bool m_zoneDescHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * v3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 字符集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * 引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * GTM节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNodeGroup> m_gTMNodes;
                    bool m_gTMNodesHasBeenSet;

                    /**
                     * CN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNodeGroup> m_cNNodes;
                    bool m_cNNodesHasBeenSet;

                    /**
                     * DN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNodeGroup> m_dNNodes;
                    bool m_dNNodesHasBeenSet;

                    /**
                     * 备份存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNodeGroup> m_backupStorage;
                    bool m_backupStorageHasBeenSet;

                    /**
                     * FN节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNodeGroup> m_fNNodes;
                    bool m_fNNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEINFO_H_
