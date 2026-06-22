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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_SYSTEMDISK_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_SYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了操作系统所在块设备即系统盘的信息
                */
                class SystemDisk : public AbstractModel
                {
                public:
                    SystemDisk();
                    ~SystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/213/4952">存储概述</a>。取值范围：<br></p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><br>默认取值：当前有库存的硬盘类型。
                     * @return DiskType <p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/213/4952">存储概述</a>。取值范围：<br></p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><br>默认取值：当前有库存的硬盘类型。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/213/4952">存储概述</a>。取值范围：<br></p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><br>默认取值：当前有库存的硬盘类型。
                     * @param _diskType <p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/213/4952">存储概述</a>。取值范围：<br></p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><br>默认取值：当前有库存的硬盘类型。
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
                     * 获取<p>系统盘ID。<br>该参数目前仅用于 <a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a> 等查询类接口的返回参数，不可用于 <a href="https://cloud.tencent.com/document/product/213/15730">RunInstances</a> 等写接口的入参。</p>
                     * @return DiskId <p>系统盘ID。<br>该参数目前仅用于 <a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a> 等查询类接口的返回参数，不可用于 <a href="https://cloud.tencent.com/document/product/213/15730">RunInstances</a> 等写接口的入参。</p>
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>系统盘ID。<br>该参数目前仅用于 <a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a> 等查询类接口的返回参数，不可用于 <a href="https://cloud.tencent.com/document/product/213/15730">RunInstances</a> 等写接口的入参。</p>
                     * @param _diskId <p>系统盘ID。<br>该参数目前仅用于 <a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a> 等查询类接口的返回参数，不可用于 <a href="https://cloud.tencent.com/document/product/213/15730">RunInstances</a> 等写接口的入参。</p>
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
                     * 获取<p>系统盘大小，单位：GiB。默认值为 50</p>
                     * @return DiskSize <p>系统盘大小，单位：GiB。默认值为 50</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>系统盘大小，单位：GiB。默认值为 50</p>
                     * @param _diskSize <p>系统盘大小，单位：GiB。默认值为 50</p>
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
                     * 获取<p>所属的独享集群ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcId <p>所属的独享集群ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>所属的独享集群ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdcId <p>所属的独享集群ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>磁盘名称，长度不超过128 个字符。</p>
                     * @return DiskName <p>磁盘名称，长度不超过128 个字符。</p>
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置<p>磁盘名称，长度不超过128 个字符。</p>
                     * @param _diskName <p>磁盘名称，长度不超过128 个字符。</p>
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取<p>系统盘是否加密。取值范围：true：加密false：不加密默认取值：false该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
                     * @return Encrypt <p>系统盘是否加密。取值范围：true：加密false：不加密默认取值：false该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置<p>系统盘是否加密。取值范围：true：加密false：不加密默认取值：false该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
                     * @param _encrypt <p>系统盘是否加密。取值范围：true：加密false：不加密默认取值：false该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
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
                     * 获取<p>自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
                     * @return KmsKeyId <p>自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
                     * @param _kmsKeyId <p>自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
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
                     * <p>系统盘类型。系统盘类型限制详见<a href="https://cloud.tencent.com/document/product/213/4952">存储概述</a>。取值范围：<br></p><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用型SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li><br>默认取值：当前有库存的硬盘类型。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>系统盘ID。<br>该参数目前仅用于 <a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a> 等查询类接口的返回参数，不可用于 <a href="https://cloud.tencent.com/document/product/213/15730">RunInstances</a> 等写接口的入参。</p>
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <p>系统盘大小，单位：GiB。默认值为 50</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>所属的独享集群ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>磁盘名称，长度不超过128 个字符。</p>
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * <p>系统盘是否加密。取值范围：true：加密false：不加密默认取值：false该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * <p>自定义CMK对应的ID，取值为UUID或者类似kms-abcd1234。用于加密云盘。该参数目前仅用于 RunInstances 接口。当前参数灰度中。</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_SYSTEMDISK_H_
