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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DATADISK_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DATADISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DB Custom 节点数据盘信息。
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_HSSD： 增强型云硬盘</li><li>LOCAL_NVME： 本地硬盘</li></ul>
                     * @return DiskType <p>磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_HSSD： 增强型云硬盘</li><li>LOCAL_NVME： 本地硬盘</li></ul>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_HSSD： 增强型云硬盘</li><li>LOCAL_NVME： 本地硬盘</li></ul>
                     * @param _diskType <p>磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_HSSD： 增强型云硬盘</li><li>LOCAL_NVME： 本地硬盘</li></ul>
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
                     * 获取<p>磁盘大小</p><p>单位：GiB</p>
                     * @return DiskSize <p>磁盘大小</p><p>单位：GiB</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>磁盘大小</p><p>单位：GiB</p>
                     * @param _diskSize <p>磁盘大小</p><p>单位：GiB</p>
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
                     * 获取<p>磁盘名称</p><p>DataDisk 作为输入参数时，DiskName 无效。</p>
                     * @return DiskName <p>磁盘名称</p><p>DataDisk 作为输入参数时，DiskName 无效。</p>
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置<p>磁盘名称</p><p>DataDisk 作为输入参数时，DiskName 无效。</p>
                     * @param _diskName <p>磁盘名称</p><p>DataDisk 作为输入参数时，DiskName 无效。</p>
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
                     * 获取<p>数据盘是否加密</p><p>枚举值：</p><ul><li>false： 不加密</li><li>true： 加密</li></ul>
                     * @return Encrypt <p>数据盘是否加密</p><p>枚举值：</p><ul><li>false： 不加密</li><li>true： 加密</li></ul>
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置<p>数据盘是否加密</p><p>枚举值：</p><ul><li>false： 不加密</li><li>true： 加密</li></ul>
                     * @param _encrypt <p>数据盘是否加密</p><p>枚举值：</p><ul><li>false： 不加密</li><li>true： 加密</li></ul>
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
                     * 获取<p>磁盘ID</p><p>入参限制：该参数目前仅用于 DescribeDBCustomNodes 等查询类接口的返回参数，不可用于 CreateDBCustomNodes 等写接口的入参。</p>
                     * @return DiskId <p>磁盘ID</p><p>入参限制：该参数目前仅用于 DescribeDBCustomNodes 等查询类接口的返回参数，不可用于 CreateDBCustomNodes 等写接口的入参。</p>
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>磁盘ID</p><p>入参限制：该参数目前仅用于 DescribeDBCustomNodes 等查询类接口的返回参数，不可用于 CreateDBCustomNodes 等写接口的入参。</p>
                     * @param _diskId <p>磁盘ID</p><p>入参限制：该参数目前仅用于 DescribeDBCustomNodes 等查询类接口的返回参数，不可用于 CreateDBCustomNodes 等写接口的入参。</p>
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
                     * 获取<p>数据盘快照ID</p><p>入参限制：选择的数据盘快照大小需小于数据盘大小</p>
                     * @return SnapshotId <p>数据盘快照ID</p><p>入参限制：选择的数据盘快照大小需小于数据盘大小</p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>数据盘快照ID</p><p>入参限制：选择的数据盘快照大小需小于数据盘大小</p>
                     * @param _snapshotId <p>数据盘快照ID</p><p>入参限制：选择的数据盘快照大小需小于数据盘大小</p>
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
                     * 获取<p>自定义的数据盘标识（如 data / log / backup）</p>
                     * @return ClientDiskKey <p>自定义的数据盘标识（如 data / log / backup）</p>
                     * 
                     */
                    std::string GetClientDiskKey() const;

                    /**
                     * 设置<p>自定义的数据盘标识（如 data / log / backup）</p>
                     * @param _clientDiskKey <p>自定义的数据盘标识（如 data / log / backup）</p>
                     * 
                     */
                    void SetClientDiskKey(const std::string& _clientDiskKey);

                    /**
                     * 判断参数 ClientDiskKey 是否已赋值
                     * @return ClientDiskKey 是否已赋值
                     * 
                     */
                    bool ClientDiskKeyHasBeenSet() const;

                private:

                    /**
                     * <p>磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_HSSD： 增强型云硬盘</li><li>LOCAL_NVME： 本地硬盘</li></ul>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>磁盘大小</p><p>单位：GiB</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>磁盘名称</p><p>DataDisk 作为输入参数时，DiskName 无效。</p>
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * <p>数据盘是否加密</p><p>枚举值：</p><ul><li>false： 不加密</li><li>true： 加密</li></ul>
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * <p>磁盘ID</p><p>入参限制：该参数目前仅用于 DescribeDBCustomNodes 等查询类接口的返回参数，不可用于 CreateDBCustomNodes 等写接口的入参。</p>
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <p>数据盘快照ID</p><p>入参限制：选择的数据盘快照大小需小于数据盘大小</p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>自定义的数据盘标识（如 data / log / backup）</p>
                     */
                    std::string m_clientDiskKey;
                    bool m_clientDiskKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DATADISK_H_
