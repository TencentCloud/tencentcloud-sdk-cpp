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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STORAGENODESPEC_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STORAGENODESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 存储节点规格
                */
                class StorageNodeSpec : public AbstractModel
                {
                public:
                    StorageNodeSpec();
                    ~StorageNodeSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规格码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecCode <p>规格码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>规格码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specCode <p>规格码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>存储节点CPU核数</p>
                     * @return StorageNodeCpu <p>存储节点CPU核数</p>
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 设置<p>存储节点CPU核数</p>
                     * @param _storageNodeCpu <p>存储节点CPU核数</p>
                     * 
                     */
                    void SetStorageNodeCpu(const int64_t& _storageNodeCpu);

                    /**
                     * 判断参数 StorageNodeCpu 是否已赋值
                     * @return StorageNodeCpu 是否已赋值
                     * 
                     */
                    bool StorageNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>存储节点内存大小</p>
                     * @return StorageNodeMem <p>存储节点内存大小</p>
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 设置<p>存储节点内存大小</p>
                     * @param _storageNodeMem <p>存储节点内存大小</p>
                     * 
                     */
                    void SetStorageNodeMem(const int64_t& _storageNodeMem);

                    /**
                     * 判断参数 StorageNodeMem 是否已赋值
                     * @return StorageNodeMem 是否已赋值
                     * 
                     */
                    bool StorageNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>存储节点最大数量</p>
                     * @return StorageNodeMaxNum <p>存储节点最大数量</p>
                     * 
                     */
                    int64_t GetStorageNodeMaxNum() const;

                    /**
                     * 设置<p>存储节点最大数量</p>
                     * @param _storageNodeMaxNum <p>存储节点最大数量</p>
                     * 
                     */
                    void SetStorageNodeMaxNum(const int64_t& _storageNodeMaxNum);

                    /**
                     * 判断参数 StorageNodeMaxNum 是否已赋值
                     * @return StorageNodeMaxNum 是否已赋值
                     * 
                     */
                    bool StorageNodeMaxNumHasBeenSet() const;

                    /**
                     * 获取<p>存储节点磁盘大小上限</p>
                     * @return StorageNodeMaxDisk <p>存储节点磁盘大小上限</p>
                     * 
                     */
                    int64_t GetStorageNodeMaxDisk() const;

                    /**
                     * 设置<p>存储节点磁盘大小上限</p>
                     * @param _storageNodeMaxDisk <p>存储节点磁盘大小上限</p>
                     * 
                     */
                    void SetStorageNodeMaxDisk(const int64_t& _storageNodeMaxDisk);

                    /**
                     * 判断参数 StorageNodeMaxDisk 是否已赋值
                     * @return StorageNodeMaxDisk 是否已赋值
                     * 
                     */
                    bool StorageNodeMaxDiskHasBeenSet() const;

                    /**
                     * 获取<p>存储节点最小数量</p>
                     * @return StorageNodeMinNum <p>存储节点最小数量</p>
                     * 
                     */
                    int64_t GetStorageNodeMinNum() const;

                    /**
                     * 设置<p>存储节点最小数量</p>
                     * @param _storageNodeMinNum <p>存储节点最小数量</p>
                     * 
                     */
                    void SetStorageNodeMinNum(const int64_t& _storageNodeMinNum);

                    /**
                     * 判断参数 StorageNodeMinNum 是否已赋值
                     * @return StorageNodeMinNum 是否已赋值
                     * 
                     */
                    bool StorageNodeMinNumHasBeenSet() const;

                    /**
                     * 获取<p>存储节点磁盘大小下限</p>
                     * @return StorageNodeMinDisk <p>存储节点磁盘大小下限</p>
                     * 
                     */
                    int64_t GetStorageNodeMinDisk() const;

                    /**
                     * 设置<p>存储节点磁盘大小下限</p>
                     * @param _storageNodeMinDisk <p>存储节点磁盘大小下限</p>
                     * 
                     */
                    void SetStorageNodeMinDisk(const int64_t& _storageNodeMinDisk);

                    /**
                     * 判断参数 StorageNodeMinDisk 是否已赋值
                     * @return StorageNodeMinDisk 是否已赋值
                     * 
                     */
                    bool StorageNodeMinDiskHasBeenSet() const;

                    /**
                     * 获取<p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>存储节点默认磁盘大小，用于前端展示</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageNodeDefaultDisk <p>存储节点默认磁盘大小，用于前端展示</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageNodeDefaultDisk() const;

                    /**
                     * 设置<p>存储节点默认磁盘大小，用于前端展示</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageNodeDefaultDisk <p>存储节点默认磁盘大小，用于前端展示</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageNodeDefaultDisk(const int64_t& _storageNodeDefaultDisk);

                    /**
                     * 判断参数 StorageNodeDefaultDisk 是否已赋值
                     * @return StorageNodeDefaultDisk 是否已赋值
                     * 
                     */
                    bool StorageNodeDefaultDiskHasBeenSet() const;

                    /**
                     * 获取<p>规格支持计费模式列表</p>
                     * @return InstanceMode <p>规格支持计费模式列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceMode() const;

                    /**
                     * 设置<p>规格支持计费模式列表</p>
                     * @param _instanceMode <p>规格支持计费模式列表</p>
                     * 
                     */
                    void SetInstanceMode(const std::vector<std::string>& _instanceMode);

                    /**
                     * 判断参数 InstanceMode 是否已赋值
                     * @return InstanceMode 是否已赋值
                     * 
                     */
                    bool InstanceModeHasBeenSet() const;

                    /**
                     * 获取<p>磁盘类型CLOUD_DISK：云盘LOCAL_DISK：本地盘</p>
                     * @return DiskTypeCategory <p>磁盘类型CLOUD_DISK：云盘LOCAL_DISK：本地盘</p>
                     * 
                     */
                    std::string GetDiskTypeCategory() const;

                    /**
                     * 设置<p>磁盘类型CLOUD_DISK：云盘LOCAL_DISK：本地盘</p>
                     * @param _diskTypeCategory <p>磁盘类型CLOUD_DISK：云盘LOCAL_DISK：本地盘</p>
                     * 
                     */
                    void SetDiskTypeCategory(const std::string& _diskTypeCategory);

                    /**
                     * 判断参数 DiskTypeCategory 是否已赋值
                     * @return DiskTypeCategory 是否已赋值
                     * 
                     */
                    bool DiskTypeCategoryHasBeenSet() const;

                private:

                    /**
                     * <p>规格码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>存储节点CPU核数</p>
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>存储节点内存大小</p>
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>存储节点最大数量</p>
                     */
                    int64_t m_storageNodeMaxNum;
                    bool m_storageNodeMaxNumHasBeenSet;

                    /**
                     * <p>存储节点磁盘大小上限</p>
                     */
                    int64_t m_storageNodeMaxDisk;
                    bool m_storageNodeMaxDiskHasBeenSet;

                    /**
                     * <p>存储节点最小数量</p>
                     */
                    int64_t m_storageNodeMinNum;
                    bool m_storageNodeMinNumHasBeenSet;

                    /**
                     * <p>存储节点磁盘大小下限</p>
                     */
                    int64_t m_storageNodeMinDisk;
                    bool m_storageNodeMinDiskHasBeenSet;

                    /**
                     * <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>存储节点默认磁盘大小，用于前端展示</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageNodeDefaultDisk;
                    bool m_storageNodeDefaultDiskHasBeenSet;

                    /**
                     * <p>规格支持计费模式列表</p>
                     */
                    std::vector<std::string> m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>磁盘类型CLOUD_DISK：云盘LOCAL_DISK：本地盘</p>
                     */
                    std::string m_diskTypeCategory;
                    bool m_diskTypeCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STORAGENODESPEC_H_
