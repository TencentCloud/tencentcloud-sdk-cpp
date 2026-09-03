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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DATADISK_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DATADISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 启动配置的数据盘配置信息。若不指定该参数，则默认不购买数据盘，当前仅支持购买的时候指定一个数据盘。
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据盘类型。数据盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围：</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li>默认取值与系统盘类型（SystemDisk.DiskType）保持一致。
                     * @return DiskType <p>数据盘类型。数据盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围：</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li>默认取值与系统盘类型（SystemDisk.DiskType）保持一致。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>数据盘类型。数据盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围：</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li>默认取值与系统盘类型（SystemDisk.DiskType）保持一致。
                     * @param _diskType <p>数据盘类型。数据盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围：</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li>默认取值与系统盘类型（SystemDisk.DiskType）保持一致。
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
                     * 获取<p>数据盘大小，单位：GB。不同数据盘类型取值范围不同，具体限制详见：<a href="https://cloud.tencent.com/document/product/213/2177">CVM实例配置</a>。默认值为0，表示不购买数据盘。更多限制详见<a href="https://cloud.tencent.com/document/product/362/5145">产品文档</a>。</p>
                     * @return DiskSize <p>数据盘大小，单位：GB。不同数据盘类型取值范围不同，具体限制详见：<a href="https://cloud.tencent.com/document/product/213/2177">CVM实例配置</a>。默认值为0，表示不购买数据盘。更多限制详见<a href="https://cloud.tencent.com/document/product/362/5145">产品文档</a>。</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>数据盘大小，单位：GB。不同数据盘类型取值范围不同，具体限制详见：<a href="https://cloud.tencent.com/document/product/213/2177">CVM实例配置</a>。默认值为0，表示不购买数据盘。更多限制详见<a href="https://cloud.tencent.com/document/product/362/5145">产品文档</a>。</p>
                     * @param _diskSize <p>数据盘大小，单位：GB。不同数据盘类型取值范围不同，具体限制详见：<a href="https://cloud.tencent.com/document/product/213/2177">CVM实例配置</a>。默认值为0，表示不购买数据盘。更多限制详见<a href="https://cloud.tencent.com/document/product/362/5145">产品文档</a>。</p>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>数据盘快照 ID，可通过 <a href="https://cloud.tencent.com/document/product/362/15647">DescribeSnapshots</a> 接口获取该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotId <p>数据盘快照 ID，可通过 <a href="https://cloud.tencent.com/document/product/362/15647">DescribeSnapshots</a> 接口获取该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>数据盘快照 ID，可通过 <a href="https://cloud.tencent.com/document/product/362/15647">DescribeSnapshots</a> 接口获取该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotId <p>数据盘快照 ID，可通过 <a href="https://cloud.tencent.com/document/product/362/15647">DescribeSnapshots</a> 接口获取该参数。</p>
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
                     * 获取<p>数据盘是否随子机销毁。取值范围：</p><li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li><li>FALSE：子机销毁时，保留数据盘</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteWithInstance <p>数据盘是否随子机销毁。取值范围：</p><li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li><li>FALSE：子机销毁时，保留数据盘</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置<p>数据盘是否随子机销毁。取值范围：</p><li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li><li>FALSE：子机销毁时，保留数据盘</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteWithInstance <p>数据盘是否随子机销毁。取值范围：</p><li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li><li>FALSE：子机销毁时，保留数据盘</li>
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
                     * 获取<p>是否加密数据盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encrypt <p>是否加密数据盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置<p>是否加密数据盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encrypt <p>是否加密数据盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
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
                     * 获取<p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能，功能介绍和类型限制详见：<a href="https://cloud.tencent.com/document/product/362/51896#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">增强型 SSD 云硬盘额外性能说明</a>。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且 需容量 &gt; 460GB。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThroughputPerformance <p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能，功能介绍和类型限制详见：<a href="https://cloud.tencent.com/document/product/362/51896#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">增强型 SSD 云硬盘额外性能说明</a>。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且 需容量 &gt; 460GB。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置<p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能，功能介绍和类型限制详见：<a href="https://cloud.tencent.com/document/product/362/51896#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">增强型 SSD 云硬盘额外性能说明</a>。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且 需容量 &gt; 460GB。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _throughputPerformance <p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能，功能介绍和类型限制详见：<a href="https://cloud.tencent.com/document/product/362/51896#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">增强型 SSD 云硬盘额外性能说明</a>。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且 需容量 &gt; 460GB。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取<p>突发性能。是否开启突发性能，默认取值为 false。当前该参数仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且需容量 &gt; 460GB。<br>注：内测中，需提单申请后使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BurstPerformance <p>突发性能。是否开启突发性能，默认取值为 false。当前该参数仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且需容量 &gt; 460GB。<br>注：内测中，需提单申请后使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBurstPerformance() const;

                    /**
                     * 设置<p>突发性能。是否开启突发性能，默认取值为 false。当前该参数仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且需容量 &gt; 460GB。<br>注：内测中，需提单申请后使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _burstPerformance <p>突发性能。是否开启突发性能，默认取值为 false。当前该参数仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且需容量 &gt; 460GB。<br>注：内测中，需提单申请后使用。</p>
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

                    /**
                     * 获取<p>数据盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     * @return KmsKeyId <p>数据盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>数据盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     * @param _kmsKeyId <p>数据盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                private:

                    /**
                     * <p>数据盘类型。数据盘类型限制详见<a href="https://cloud.tencent.com/document/product/362/2353">云硬盘类型</a>。取值范围：</p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li>默认取值与系统盘类型（SystemDisk.DiskType）保持一致。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>数据盘大小，单位：GB。不同数据盘类型取值范围不同，具体限制详见：<a href="https://cloud.tencent.com/document/product/213/2177">CVM实例配置</a>。默认值为0，表示不购买数据盘。更多限制详见<a href="https://cloud.tencent.com/document/product/362/5145">产品文档</a>。</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>数据盘快照 ID，可通过 <a href="https://cloud.tencent.com/document/product/362/15647">DescribeSnapshots</a> 接口获取该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>数据盘是否随子机销毁。取值范围：</p><li>TRUE：子机销毁时，销毁数据盘，只支持按小时后付费云盘</li><li>FALSE：子机销毁时，保留数据盘</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * <p>是否加密数据盘。TRUE 表示加密，FALSE 表示不加密；具体盘型、地域及 KMS 规则由 CVM 校验。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * <p>云硬盘性能，单位：MB/s。使用此参数可给云硬盘购买额外的性能，功能介绍和类型限制详见：<a href="https://cloud.tencent.com/document/product/362/51896#.E5.A2.9E.E5.BC.BA.E5.9E.8B-ssd-.E4.BA.91.E7.A1.AC.E7.9B.98.E9.A2.9D.E5.A4.96.E6.80.A7.E8.83.BD">增强型 SSD 云硬盘额外性能说明</a>。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且 需容量 &gt; 460GB。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * <p>突发性能。是否开启突发性能，默认取值为 false。当前该参数仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且需容量 &gt; 460GB。<br>注：内测中，需提单申请后使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_burstPerformance;
                    bool m_burstPerformanceHasBeenSet;

                    /**
                     * <p>数据盘加密使用的 KMS 密钥 ID。密钥有效性、权限以及与盘型和地域的适配性由 CVM 校验。</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DATADISK_H_
