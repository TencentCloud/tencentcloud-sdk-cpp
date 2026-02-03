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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATS_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Warehouse.h>
#include <tencentcloud/oceanus/v20190422/model/SetatsCvmInfo.h>
#include <tencentcloud/oceanus/v20190422/model/Tag.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * setats类型
                */
                class Setats : public AbstractModel
                {
                public:
                    Setats();
                    ~Setats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>setats serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetatsSerialId <p>setats serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetatsSerialId() const;

                    /**
                     * 设置<p>setats serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setatsSerialId <p>setats serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetatsSerialId(const std::string& _setatsSerialId);

                    /**
                     * 判断参数 SetatsSerialId 是否已赋值
                     * @return SetatsSerialId 是否已赋值
                     * 
                     */
                    bool SetatsSerialIdHasBeenSet() const;

                    /**
                     * 获取<p>1  // 停止<br>2  // 运行中<br>3  // 初始化中<br>4  // 扩容中<br>5  // Warehoouse未配置<br>6  // Warehoouse配置中<br>7  // 重启中<br>-2 // 已删除(集群被销毁时更新为此状态)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>1  // 停止<br>2  // 运行中<br>3  // 初始化中<br>4  // 扩容中<br>5  // Warehoouse未配置<br>6  // Warehoouse配置中<br>7  // 重启中<br>-2 // 已删除(集群被销毁时更新为此状态)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>1  // 停止<br>2  // 运行中<br>3  // 初始化中<br>4  // 扩容中<br>5  // Warehoouse未配置<br>6  // Warehoouse配置中<br>7  // 重启中<br>-2 // 已删除(集群被销毁时更新为此状态)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>1  // 停止<br>2  // 运行中<br>3  // 初始化中<br>4  // 扩容中<br>5  // Warehoouse未配置<br>6  // Warehoouse配置中<br>7  // 重启中<br>-2 // 已删除(集群被销毁时更新为此状态)</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>setats warehouse</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warehouse <p>setats warehouse</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Warehouse GetWarehouse() const;

                    /**
                     * 设置<p>setats warehouse</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warehouse <p>setats warehouse</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarehouse(const Warehouse& _warehouse);

                    /**
                     * 判断参数 Warehouse 是否已赋值
                     * @return Warehouse 是否已赋值
                     * 
                     */
                    bool WarehouseHasBeenSet() const;

                    /**
                     * 获取<p>setats master 机器规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterInfo <p>setats master 机器规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SetatsCvmInfo GetMasterInfo() const;

                    /**
                     * 设置<p>setats master 机器规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _masterInfo <p>setats master 机器规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMasterInfo(const SetatsCvmInfo& _masterInfo);

                    /**
                     * 判断参数 MasterInfo 是否已赋值
                     * @return MasterInfo 是否已赋值
                     * 
                     */
                    bool MasterInfoHasBeenSet() const;

                    /**
                     * 获取<p>setats worker规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkerInfo <p>setats worker规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SetatsCvmInfo GetWorkerInfo() const;

                    /**
                     * 设置<p>setats worker规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workerInfo <p>setats worker规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkerInfo(const SetatsCvmInfo& _workerInfo);

                    /**
                     * 判断参数 WorkerInfo 是否已赋值
                     * @return WorkerInfo 是否已赋值
                     * 
                     */
                    bool WorkerInfoHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签</p>
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
                     * 获取<p>自动续费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag <p>自动续费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag <p>自动续费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>过期时间 秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondsUntilExpiry <p>过期时间 秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecondsUntilExpiry() const;

                    /**
                     * 设置<p>过期时间 秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secondsUntilExpiry <p>过期时间 秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecondsUntilExpiry(const std::string& _secondsUntilExpiry);

                    /**
                     * 判断参数 SecondsUntilExpiry 是否已赋值
                     * @return SecondsUntilExpiry 是否已赋值
                     * 
                     */
                    bool SecondsUntilExpiryHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>manager url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManagerUrl <p>manager url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManagerUrl() const;

                    /**
                     * 设置<p>manager url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _managerUrl <p>manager url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManagerUrl(const std::string& _managerUrl);

                    /**
                     * 判断参数 ManagerUrl 是否已赋值
                     * @return ManagerUrl 是否已赋值
                     * 
                     */
                    bool ManagerUrlHasBeenSet() const;

                    /**
                     * 获取<p>隔离时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime <p>隔离时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置<p>隔离时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTime <p>隔离时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Setats集群自己的id</p>
                     * @return OwnerClusterGroupSerialId <p>Setats集群自己的id</p>
                     * 
                     */
                    std::string GetOwnerClusterGroupSerialId() const;

                    /**
                     * 设置<p>Setats集群自己的id</p>
                     * @param _ownerClusterGroupSerialId <p>Setats集群自己的id</p>
                     * 
                     */
                    void SetOwnerClusterGroupSerialId(const std::string& _ownerClusterGroupSerialId);

                    /**
                     * 判断参数 OwnerClusterGroupSerialId 是否已赋值
                     * @return OwnerClusterGroupSerialId 是否已赋值
                     * 
                     */
                    bool OwnerClusterGroupSerialIdHasBeenSet() const;

                    /**
                     * 获取<p>setats 集群类型</p>
                     * @return Type <p>setats 集群类型</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>setats 集群类型</p>
                     * @param _type <p>setats 集群类型</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Setats UI url</p>
                     * @return SetatsUiUrl <p>Setats UI url</p>
                     * 
                     */
                    std::string GetSetatsUiUrl() const;

                    /**
                     * 设置<p>Setats UI url</p>
                     * @param _setatsUiUrl <p>Setats UI url</p>
                     * 
                     */
                    void SetSetatsUiUrl(const std::string& _setatsUiUrl);

                    /**
                     * 判断参数 SetatsUiUrl 是否已赋值
                     * @return SetatsUiUrl 是否已赋值
                     * 
                     */
                    bool SetatsUiUrlHasBeenSet() const;

                    /**
                     * 获取<p>setats镜像版本</p>
                     * @return ImageVersion <p>setats镜像版本</p>
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置<p>setats镜像版本</p>
                     * @param _imageVersion <p>setats镜像版本</p>
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                private:

                    /**
                     * <p>setats serialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setatsSerialId;
                    bool m_setatsSerialIdHasBeenSet;

                    /**
                     * <p>1  // 停止<br>2  // 运行中<br>3  // 初始化中<br>4  // 扩容中<br>5  // Warehoouse未配置<br>6  // Warehoouse配置中<br>7  // 重启中<br>-2 // 已删除(集群被销毁时更新为此状态)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>setats warehouse</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Warehouse m_warehouse;
                    bool m_warehouseHasBeenSet;

                    /**
                     * <p>setats master 机器规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SetatsCvmInfo m_masterInfo;
                    bool m_masterInfoHasBeenSet;

                    /**
                     * <p>setats worker规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SetatsCvmInfo m_workerInfo;
                    bool m_workerInfoHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>自动续费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>过期时间 秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secondsUntilExpiry;
                    bool m_secondsUntilExpiryHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>manager url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_managerUrl;
                    bool m_managerUrlHasBeenSet;

                    /**
                     * <p>隔离时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * <p>Setats集群自己的id</p>
                     */
                    std::string m_ownerClusterGroupSerialId;
                    bool m_ownerClusterGroupSerialIdHasBeenSet;

                    /**
                     * <p>setats 集群类型</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Setats UI url</p>
                     */
                    std::string m_setatsUiUrl;
                    bool m_setatsUiUrlHasBeenSet;

                    /**
                     * <p>setats镜像版本</p>
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATS_H_
