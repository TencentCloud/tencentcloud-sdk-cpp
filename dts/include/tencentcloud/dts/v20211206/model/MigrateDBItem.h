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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDBITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 查询迁移实例列表的实例对象
                */
                class MigrateDBItem : public AbstractModel
                {
                public:
                    MigrateDBItem();
                    ~MigrateDBItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>实例Vip</p>
                     * @return Vip <p>实例Vip</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>实例Vip</p>
                     * @param _vip <p>实例Vip</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>实例Vport</p>
                     * @return Vport <p>实例Vport</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>实例Vport</p>
                     * @param _vport <p>实例Vport</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>是否可以作为迁移对象，1-可以，0-不可以</p>
                     * @return Usable <p>是否可以作为迁移对象，1-可以，0-不可以</p>
                     * 
                     */
                    int64_t GetUsable() const;

                    /**
                     * 设置<p>是否可以作为迁移对象，1-可以，0-不可以</p>
                     * @param _usable <p>是否可以作为迁移对象，1-可以，0-不可以</p>
                     * 
                     */
                    void SetUsable(const int64_t& _usable);

                    /**
                     * 判断参数 Usable 是否已赋值
                     * @return Usable 是否已赋值
                     * 
                     */
                    bool UsableHasBeenSet() const;

                    /**
                     * 获取<p>不可以作为迁移对象的原因</p>
                     * @return Hint <p>不可以作为迁移对象的原因</p>
                     * 
                     */
                    std::string GetHint() const;

                    /**
                     * 设置<p>不可以作为迁移对象的原因</p>
                     * @param _hint <p>不可以作为迁移对象的原因</p>
                     * 
                     */
                    void SetHint(const std::string& _hint);

                    /**
                     * 判断参数 Hint 是否已赋值
                     * @return Hint 是否已赋值
                     * 
                     */
                    bool HintHasBeenSet() const;

                    /**
                     * 获取<p>硬盘类型，仅Postgresql适用</p><p>枚举值：</p><ul><li>PHYSICAL_LOCAL_SSD： 本地SSD</li><li>CLOUD_PREMIUM： 高性能云硬盘</li><li>CLOUD_SSD： SSD云硬盘</li><li>CLOUD_HSSD： 增强型SSD云硬盘</li></ul>
                     * @return StorageType <p>硬盘类型，仅Postgresql适用</p><p>枚举值：</p><ul><li>PHYSICAL_LOCAL_SSD： 本地SSD</li><li>CLOUD_PREMIUM： 高性能云硬盘</li><li>CLOUD_SSD： SSD云硬盘</li><li>CLOUD_HSSD： 增强型SSD云硬盘</li></ul>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>硬盘类型，仅Postgresql适用</p><p>枚举值：</p><ul><li>PHYSICAL_LOCAL_SSD： 本地SSD</li><li>CLOUD_PREMIUM： 高性能云硬盘</li><li>CLOUD_SSD： SSD云硬盘</li><li>CLOUD_HSSD： 增强型SSD云硬盘</li></ul>
                     * @param _storageType <p>硬盘类型，仅Postgresql适用</p><p>枚举值：</p><ul><li>PHYSICAL_LOCAL_SSD： 本地SSD</li><li>CLOUD_PREMIUM： 高性能云硬盘</li><li>CLOUD_SSD： SSD云硬盘</li><li>CLOUD_HSSD： 增强型SSD云硬盘</li></ul>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例Vip</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>实例Vport</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>是否可以作为迁移对象，1-可以，0-不可以</p>
                     */
                    int64_t m_usable;
                    bool m_usableHasBeenSet;

                    /**
                     * <p>不可以作为迁移对象的原因</p>
                     */
                    std::string m_hint;
                    bool m_hintHasBeenSet;

                    /**
                     * <p>硬盘类型，仅Postgresql适用</p><p>枚举值：</p><ul><li>PHYSICAL_LOCAL_SSD： 本地SSD</li><li>CLOUD_PREMIUM： 高性能云硬盘</li><li>CLOUD_SSD： SSD云硬盘</li><li>CLOUD_HSSD： 增强型SSD云硬盘</li></ul>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDBITEM_H_
