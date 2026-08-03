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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DRINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 灾备实例信息
                */
                class DrInfo : public AbstractModel
                {
                public:
                    DrInfo();
                    ~DrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>灾备实例状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 运行中</li><li>4： 正在进行隔离操作</li><li>5： 已隔离</li></ul>
                     * @return Status <p>灾备实例状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 运行中</li><li>4： 正在进行隔离操作</li><li>5： 已隔离</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>灾备实例状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 运行中</li><li>4： 正在进行隔离操作</li><li>5： 已隔离</li></ul>
                     * @param _status <p>灾备实例状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 运行中</li><li>4： 正在进行隔离操作</li><li>5： 已隔离</li></ul>
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
                     * 获取<p>可用区信息</p>
                     * @return Zone <p>可用区信息</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区信息</p>
                     * @param _zone <p>可用区信息</p>
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
                     * 获取<p>地域信息</p>
                     * @return Region <p>地域信息</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域信息</p>
                     * @param _region <p>地域信息</p>
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
                     * 获取<p>实例同步状态。可能的返回值为：<br>0 - 灾备未同步；<br>1 - 灾备同步中；<br>2 - 灾备同步成功；<br>3 - 灾备同步失败；<br>4 - 灾备同步修复中。</p>
                     * @return SyncStatus <p>实例同步状态。可能的返回值为：<br>0 - 灾备未同步；<br>1 - 灾备同步中；<br>2 - 灾备同步成功；<br>3 - 灾备同步失败；<br>4 - 灾备同步修复中。</p>
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 设置<p>实例同步状态。可能的返回值为：<br>0 - 灾备未同步；<br>1 - 灾备同步中；<br>2 - 灾备同步成功；<br>3 - 灾备同步失败；<br>4 - 灾备同步修复中。</p>
                     * @param _syncStatus <p>实例同步状态。可能的返回值为：<br>0 - 灾备未同步；<br>1 - 灾备同步中；<br>2 - 灾备同步成功；<br>3 - 灾备同步失败；<br>4 - 灾备同步修复中。</p>
                     * 
                     */
                    void SetSyncStatus(const int64_t& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

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
                     * 获取<p>实例类型</p>
                     * @return InstanceType <p>实例类型</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>实例类型</p>
                     * @param _instanceType <p>实例类型</p>
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>灾备实例状态</p><p>枚举值：</p><ul><li>0： 创建中</li><li>1： 运行中</li><li>4： 正在进行隔离操作</li><li>5： 已隔离</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>可用区信息</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>地域信息</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例同步状态。可能的返回值为：<br>0 - 灾备未同步；<br>1 - 灾备同步中；<br>2 - 灾备同步成功；<br>3 - 灾备同步失败；<br>4 - 灾备同步修复中。</p>
                     */
                    int64_t m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DRINFO_H_
