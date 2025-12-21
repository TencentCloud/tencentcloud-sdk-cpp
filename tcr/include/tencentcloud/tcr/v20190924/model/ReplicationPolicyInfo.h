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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONPOLICYINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/PolicyFilter.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 实例复制/实例同步策略信息ID
                */
                class ReplicationPolicyInfo : public AbstractModel
                {
                public:
                    ReplicationPolicyInfo();
                    ~ReplicationPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取策略名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 策略名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 策略名字
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
                     * 获取策略描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 策略描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 策略描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取策略过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filters 策略过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PolicyFilter> GetFilters() const;

                    /**
                     * 设置策略过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filters 策略过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilters(const std::vector<PolicyFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取是否覆盖对端同名镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Override 是否覆盖对端同名镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOverride() const;

                    /**
                     * 设置是否覆盖对端同名镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _override 是否覆盖对端同名镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOverride(const bool& _override);

                    /**
                     * 判断参数 Override 是否已赋值
                     * @return Override 是否已赋值
                     * 
                     */
                    bool OverrideHasBeenSet() const;

                    /**
                     * 获取是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled 是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcResource 源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcResource() const;

                    /**
                     * 设置源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcResource 源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcResource(const std::string& _srcResource);

                    /**
                     * 判断参数 SrcResource 是否已赋值
                     * @return SrcResource 是否已赋值
                     * 
                     */
                    bool SrcResourceHasBeenSet() const;

                    /**
                     * 获取目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestResource 目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestResource() const;

                    /**
                     * 设置目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destResource 目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestResource(const std::string& _destResource);

                    /**
                     * 判断参数 DestResource 是否已赋值
                     * @return DestResource 是否已赋值
                     * 
                     */
                    bool DestResourceHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 策略名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 策略过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PolicyFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否覆盖对端同名镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_override;
                    bool m_overrideHasBeenSet;

                    /**
                     * 是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcResource;
                    bool m_srcResourceHasBeenSet;

                    /**
                     * 目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destResource;
                    bool m_destResourceHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONPOLICYINFO_H_
