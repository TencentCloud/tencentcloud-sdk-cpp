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
                     * 获取setats serialId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetatsSerialId setats serialId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSetatsSerialId() const;

                    /**
                     * 设置setats serialId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setatsSerialId setats serialId
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
                     * 获取1  // 停止
2  // 运行中
3  // 初始化中
4  // 扩容中
5  // Warehoouse未配置
6  // Warehoouse配置中
7  // 重启中
-2 // 已删除(集群被销毁时更新为此状态)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 1  // 停止
2  // 运行中
3  // 初始化中
4  // 扩容中
5  // Warehoouse未配置
6  // Warehoouse配置中
7  // 重启中
-2 // 已删除(集群被销毁时更新为此状态)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置1  // 停止
2  // 运行中
3  // 初始化中
4  // 扩容中
5  // Warehoouse未配置
6  // Warehoouse配置中
7  // 重启中
-2 // 已删除(集群被销毁时更新为此状态)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 1  // 停止
2  // 运行中
3  // 初始化中
4  // 扩容中
5  // Warehoouse未配置
6  // Warehoouse配置中
7  // 重启中
-2 // 已删除(集群被销毁时更新为此状态)
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
                     * 获取setats warehouse
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warehouse setats warehouse
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Warehouse GetWarehouse() const;

                    /**
                     * 设置setats warehouse
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warehouse setats warehouse
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
                     * 获取setats master 机器规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterInfo setats master 机器规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SetatsCvmInfo GetMasterInfo() const;

                    /**
                     * 设置setats master 机器规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _masterInfo setats master 机器规格
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
                     * 获取setats worker规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkerInfo setats worker规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SetatsCvmInfo GetWorkerInfo() const;

                    /**
                     * 设置setats worker规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workerInfo setats worker规格
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
                     * 获取自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag 自动续费
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
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 过期时间
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
                     * 获取过期时间 秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondsUntilExpiry 过期时间 秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecondsUntilExpiry() const;

                    /**
                     * 设置过期时间 秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secondsUntilExpiry 过期时间 秒
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取manager url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManagerUrl manager url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManagerUrl() const;

                    /**
                     * 设置manager url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _managerUrl manager url
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
                     * 获取隔离时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime 隔离时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置隔离时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTime 隔离时间
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

                private:

                    /**
                     * setats serialId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_setatsSerialId;
                    bool m_setatsSerialIdHasBeenSet;

                    /**
                     * 1  // 停止
2  // 运行中
3  // 初始化中
4  // 扩容中
5  // Warehoouse未配置
6  // Warehoouse配置中
7  // 重启中
-2 // 已删除(集群被销毁时更新为此状态)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * setats warehouse
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Warehouse m_warehouse;
                    bool m_warehouseHasBeenSet;

                    /**
                     * setats master 机器规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SetatsCvmInfo m_masterInfo;
                    bool m_masterInfoHasBeenSet;

                    /**
                     * setats worker规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SetatsCvmInfo m_workerInfo;
                    bool m_workerInfoHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 过期时间 秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secondsUntilExpiry;
                    bool m_secondsUntilExpiryHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * manager url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_managerUrl;
                    bool m_managerUrlHasBeenSet;

                    /**
                     * 隔离时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATS_H_
