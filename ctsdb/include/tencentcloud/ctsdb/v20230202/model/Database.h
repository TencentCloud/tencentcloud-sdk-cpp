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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_DATABASE_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_DATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * 数据库相关信息
                */
                class Database : public AbstractModel
                {
                public:
                    Database();
                    ~Database() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterID <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterID <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>降冷时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoolDownInDays <p>降冷时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCoolDownInDays() const;

                    /**
                     * 设置<p>降冷时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coolDownInDays <p>降冷时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoolDownInDays(const int64_t& _coolDownInDays);

                    /**
                     * 判断参数 CoolDownInDays 是否已赋值
                     * @return CoolDownInDays 是否已赋值
                     * 
                     */
                    bool CoolDownInDaysHasBeenSet() const;

                    /**
                     * 获取<p>数据保留时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionInDays <p>数据保留时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetentionInDays() const;

                    /**
                     * 设置<p>数据保留时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionInDays <p>数据保留时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionInDays(const int64_t& _retentionInDays);

                    /**
                     * 判断参数 RetentionInDays 是否已赋值
                     * @return RetentionInDays 是否已赋值
                     * 
                     */
                    bool RetentionInDaysHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>状态：0: 资源初始化中， 1: 资源创建中， 2: 正常状态， 3: 资源删除中， 4: 资源已删除， 5: 资源禁用中， 6: 资源已禁用， 7: 资源异常，需要人工操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态：0: 资源初始化中， 1: 资源创建中， 2: 正常状态， 3: 资源删除中， 4: 资源已删除， 5: 资源禁用中， 6: 资源已禁用， 7: 资源异常，需要人工操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态：0: 资源初始化中， 1: 资源创建中， 2: 正常状态， 3: 资源删除中， 4: 资源已删除， 5: 资源禁用中， 6: 资源已禁用， 7: 资源异常，需要人工操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态：0: 资源初始化中， 1: 资源创建中， 2: 正常状态， 3: 资源删除中， 4: 资源已删除， 5: 资源禁用中， 6: 资源已禁用， 7: 资源异常，需要人工操作</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt <p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt <p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>降冷开启时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoolDownTime <p>降冷开启时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCoolDownTime() const;

                    /**
                     * 设置<p>降冷开启时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coolDownTime <p>降冷开启时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoolDownTime(const std::string& _coolDownTime);

                    /**
                     * 判断参数 CoolDownTime 是否已赋值
                     * @return CoolDownTime 是否已赋值
                     * 
                     */
                    bool CoolDownTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>降冷时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_coolDownInDays;
                    bool m_coolDownInDaysHasBeenSet;

                    /**
                     * <p>数据保留时间（天）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retentionInDays;
                    bool m_retentionInDaysHasBeenSet;

                    /**
                     * <p>备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>状态：0: 资源初始化中， 1: 资源创建中， 2: 正常状态， 3: 资源删除中， 4: 资源已删除， 5: 资源禁用中， 6: 资源已禁用， 7: 资源异常，需要人工操作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>降冷开启时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coolDownTime;
                    bool m_coolDownTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_DATABASE_H_
