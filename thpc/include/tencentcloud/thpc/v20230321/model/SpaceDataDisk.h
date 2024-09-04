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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_SPACEDATADISK_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_SPACEDATADISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 工作空间数据盘配置
                */
                class SpaceDataDisk : public AbstractModel
                {
                public:
                    SpaceDataDisk();
                    ~SpaceDataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据盘类型。数据盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<br />
<li>
  LOCAL_BASIC：本地硬盘<br />
  <li>
    LOCAL_SSD：本地SSD硬盘<br />
    <li>
      LOCAL_NVME：本地NVME硬盘，与InstanceType强相关，不支持指定<br />
      <li>
        LOCAL_PRO：本地HDD硬盘，与InstanceType强相关，不支持指定<br />
        <li>
          CLOUD_BASIC：普通云硬盘<br />
          <li>
            CLOUD_PREMIUM：高性能云硬盘<br />
            <li>
              CLOUD_SSD：SSD云硬盘<br />
              <li>
                CLOUD_HSSD：增强型SSD云硬盘<br />
                <li>
                  CLOUD_TSSD：极速型SSD云硬盘<br />
                  <li>
                    CLOUD_BSSD：通用型SSD云硬盘<br /><br />默认取值：LOCAL_BASIC。<br /><br />该参数对`ResizeInstanceDisk`接口无效。
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
                     * @return DiskType 数据盘类型。数据盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<br />
<li>
  LOCAL_BASIC：本地硬盘<br />
  <li>
    LOCAL_SSD：本地SSD硬盘<br />
    <li>
      LOCAL_NVME：本地NVME硬盘，与InstanceType强相关，不支持指定<br />
      <li>
        LOCAL_PRO：本地HDD硬盘，与InstanceType强相关，不支持指定<br />
        <li>
          CLOUD_BASIC：普通云硬盘<br />
          <li>
            CLOUD_PREMIUM：高性能云硬盘<br />
            <li>
              CLOUD_SSD：SSD云硬盘<br />
              <li>
                CLOUD_HSSD：增强型SSD云硬盘<br />
                <li>
                  CLOUD_TSSD：极速型SSD云硬盘<br />
                  <li>
                    CLOUD_BSSD：通用型SSD云硬盘<br /><br />默认取值：LOCAL_BASIC。<br /><br />该参数对`ResizeInstanceDisk`接口无效。
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置数据盘类型。数据盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<br />
<li>
  LOCAL_BASIC：本地硬盘<br />
  <li>
    LOCAL_SSD：本地SSD硬盘<br />
    <li>
      LOCAL_NVME：本地NVME硬盘，与InstanceType强相关，不支持指定<br />
      <li>
        LOCAL_PRO：本地HDD硬盘，与InstanceType强相关，不支持指定<br />
        <li>
          CLOUD_BASIC：普通云硬盘<br />
          <li>
            CLOUD_PREMIUM：高性能云硬盘<br />
            <li>
              CLOUD_SSD：SSD云硬盘<br />
              <li>
                CLOUD_HSSD：增强型SSD云硬盘<br />
                <li>
                  CLOUD_TSSD：极速型SSD云硬盘<br />
                  <li>
                    CLOUD_BSSD：通用型SSD云硬盘<br /><br />默认取值：LOCAL_BASIC。<br /><br />该参数对`ResizeInstanceDisk`接口无效。
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
                     * @param _diskType 数据盘类型。数据盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<br />
<li>
  LOCAL_BASIC：本地硬盘<br />
  <li>
    LOCAL_SSD：本地SSD硬盘<br />
    <li>
      LOCAL_NVME：本地NVME硬盘，与InstanceType强相关，不支持指定<br />
      <li>
        LOCAL_PRO：本地HDD硬盘，与InstanceType强相关，不支持指定<br />
        <li>
          CLOUD_BASIC：普通云硬盘<br />
          <li>
            CLOUD_PREMIUM：高性能云硬盘<br />
            <li>
              CLOUD_SSD：SSD云硬盘<br />
              <li>
                CLOUD_HSSD：增强型SSD云硬盘<br />
                <li>
                  CLOUD_TSSD：极速型SSD云硬盘<br />
                  <li>
                    CLOUD_BSSD：通用型SSD云硬盘<br /><br />默认取值：LOCAL_BASIC。<br /><br />该参数对`ResizeInstanceDisk`接口无效。
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskId 数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskId 数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取数据盘大小，单位：GB。最小调整步长为10G，不同数据盘类型取值范围不同，具体限制详见：[存储概述](https://cloud.tencent.com/document/product/213/4952)。默认值为0，表示不购买数据盘。更多限制详见产品文档。
                     * @return DiskSize 数据盘大小，单位：GB。最小调整步长为10G，不同数据盘类型取值范围不同，具体限制详见：[存储概述](https://cloud.tencent.com/document/product/213/4952)。默认值为0，表示不购买数据盘。更多限制详见产品文档。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置数据盘大小，单位：GB。最小调整步长为10G，不同数据盘类型取值范围不同，具体限制详见：[存储概述](https://cloud.tencent.com/document/product/213/4952)。默认值为0，表示不购买数据盘。更多限制详见产品文档。
                     * @param _diskSize 数据盘大小，单位：GB。最小调整步长为10G，不同数据盘类型取值范围不同，具体限制详见：[存储概述](https://cloud.tencent.com/document/product/213/4952)。默认值为0，表示不购买数据盘。更多限制详见产品文档。
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取数据盘是否随子机销毁。取值范围：
<li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li>
<li>
  FALSE：子机销毁时，保留数据盘<br />
  默认取值：TRUE<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteWithInstance 数据盘是否随子机销毁。取值范围：
<li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li>
<li>
  FALSE：子机销毁时，保留数据盘<br />
  默认取值：TRUE<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置数据盘是否随子机销毁。取值范围：
<li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li>
<li>
  FALSE：子机销毁时，保留数据盘<br />
  默认取值：TRUE<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteWithInstance 数据盘是否随子机销毁。取值范围：
<li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li>
<li>
  FALSE：子机销毁时，保留数据盘<br />
  默认取值：TRUE<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取数据盘快照ID。选择的数据盘快照大小需小于数据盘大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotId 数据盘快照ID。选择的数据盘快照大小需小于数据盘大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置数据盘快照ID。选择的数据盘快照大小需小于数据盘大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotId 数据盘快照ID。选择的数据盘快照大小需小于数据盘大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取数据盘是加密。取值范围：
<li>true：加密</li>
<li>
  false：不加密<br />
  默认取值：false<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encrypt 数据盘是加密。取值范围：
<li>true：加密</li>
<li>
  false：不加密<br />
  默认取值：false<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置数据盘是加密。取值范围：
<li>true：加密</li>
<li>
  false：不加密<br />
  默认取值：false<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encrypt 数据盘是加密。取值范围：
<li>true：加密</li>
<li>
  false：不加密<br />
  默认取值：false<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。

该参数目前仅用于 `CreateWorkspaces` 接口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsKeyId 自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。

该参数目前仅用于 `CreateWorkspaces` 接口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。

该参数目前仅用于 `CreateWorkspaces` 接口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsKeyId 自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。

该参数目前仅用于 `CreateWorkspaces` 接口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取云硬盘性能，单位：MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThroughputPerformance 云硬盘性能，单位：MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetThroughputPerformance() const;

                    /**
                     * 设置云硬盘性能，单位：MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _throughputPerformance 云硬盘性能，单位：MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThroughputPerformance(const int64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取突发性能

注：内测中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BurstPerformance 突发性能

注：内测中。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBurstPerformance() const;

                    /**
                     * 设置突发性能

注：内测中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _burstPerformance 突发性能

注：内测中。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBurstPerformance(const bool& _burstPerformance);

                    /**
                     * 判断参数 BurstPerformance 是否已赋值
                     * @return BurstPerformance 是否已赋值
                     * 
                     */
                    bool BurstPerformanceHasBeenSet() const;

                private:

                    /**
                     * 数据盘类型。数据盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<br />
<li>
  LOCAL_BASIC：本地硬盘<br />
  <li>
    LOCAL_SSD：本地SSD硬盘<br />
    <li>
      LOCAL_NVME：本地NVME硬盘，与InstanceType强相关，不支持指定<br />
      <li>
        LOCAL_PRO：本地HDD硬盘，与InstanceType强相关，不支持指定<br />
        <li>
          CLOUD_BASIC：普通云硬盘<br />
          <li>
            CLOUD_PREMIUM：高性能云硬盘<br />
            <li>
              CLOUD_SSD：SSD云硬盘<br />
              <li>
                CLOUD_HSSD：增强型SSD云硬盘<br />
                <li>
                  CLOUD_TSSD：极速型SSD云硬盘<br />
                  <li>
                    CLOUD_BSSD：通用型SSD云硬盘<br /><br />默认取值：LOCAL_BASIC。<br /><br />该参数对`ResizeInstanceDisk`接口无效。
                  </li>
                </li>
              </li>
            </li>
          </li>
        </li>
      </li>
    </li>
  </li>
</li>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 数据盘大小，单位：GB。最小调整步长为10G，不同数据盘类型取值范围不同，具体限制详见：[存储概述](https://cloud.tencent.com/document/product/213/4952)。默认值为0，表示不购买数据盘。更多限制详见产品文档。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 数据盘是否随子机销毁。取值范围：
<li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li>
<li>
  FALSE：子机销毁时，保留数据盘<br />
  默认取值：TRUE<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * 数据盘快照ID。选择的数据盘快照大小需小于数据盘大小。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 数据盘是加密。取值范围：
<li>true：加密</li>
<li>
  false：不加密<br />
  默认取值：false<br />
  该参数目前仅用于 `RunInstances` 接口。
</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * 自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。

该参数目前仅用于 `CreateWorkspaces` 接口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * 云硬盘性能，单位：MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * 突发性能

注：内测中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_burstPerformance;
                    bool m_burstPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SPACEDATADISK_H_
