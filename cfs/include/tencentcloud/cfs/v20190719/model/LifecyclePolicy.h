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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEPOLICY_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/LifecycleRule.h>
#include <tencentcloud/cfs/v20190719/model/PathInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 生命周期管理策略信息
                */
                class LifecyclePolicy : public AbstractModel
                {
                public:
                    LifecyclePolicy();
                    ~LifecyclePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生命周期管理策略创建的时间
                     * @return CreateTime 生命周期管理策略创建的时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置生命周期管理策略创建的时间
                     * @param _createTime 生命周期管理策略创建的时间
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
                     * 获取生命周期管理策略ID
                     * @return LifecyclePolicyID 生命周期管理策略ID
                     * 
                     */
                    std::string GetLifecyclePolicyID() const;

                    /**
                     * 设置生命周期管理策略ID
                     * @param _lifecyclePolicyID 生命周期管理策略ID
                     * 
                     */
                    void SetLifecyclePolicyID(const std::string& _lifecyclePolicyID);

                    /**
                     * 判断参数 LifecyclePolicyID 是否已赋值
                     * @return LifecyclePolicyID 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyIDHasBeenSet() const;

                    /**
                     * 获取生命周期管理策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifecyclePolicyName 生命周期管理策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLifecyclePolicyName() const;

                    /**
                     * 设置生命周期管理策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecyclePolicyName 生命周期管理策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifecyclePolicyName(const std::string& _lifecyclePolicyName);

                    /**
                     * 判断参数 LifecyclePolicyName 是否已赋值
                     * @return LifecyclePolicyName 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyNameHasBeenSet() const;

                    /**
                     * 获取生命周期管理策略关联的管理规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifecycleRules 生命周期管理策略关联的管理规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LifecycleRule> GetLifecycleRules() const;

                    /**
                     * 设置生命周期管理策略关联的管理规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecycleRules 生命周期管理策略关联的管理规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifecycleRules(const std::vector<LifecycleRule>& _lifecycleRules);

                    /**
                     * 判断参数 LifecycleRules 是否已赋值
                     * @return LifecycleRules 是否已赋值
                     * 
                     */
                    bool LifecycleRulesHasBeenSet() const;

                    /**
                     * 获取生命周期管理策略关联目录的绝对路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Paths 生命周期管理策略关联目录的绝对路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PathInfo> GetPaths() const;

                    /**
                     * 设置生命周期管理策略关联目录的绝对路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paths 生命周期管理策略关联目录的绝对路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaths(const std::vector<PathInfo>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * 生命周期管理策略创建的时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 生命周期管理策略ID
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                    /**
                     * 生命周期管理策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lifecyclePolicyName;
                    bool m_lifecyclePolicyNameHasBeenSet;

                    /**
                     * 生命周期管理策略关联的管理规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LifecycleRule> m_lifecycleRules;
                    bool m_lifecycleRulesHasBeenSet;

                    /**
                     * 生命周期管理策略关联目录的绝对路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PathInfo> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEPOLICY_H_
