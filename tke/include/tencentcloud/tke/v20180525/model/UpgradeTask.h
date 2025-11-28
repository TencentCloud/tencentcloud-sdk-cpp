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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADETASK_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 升级任务
                */
                class UpgradeTask : public AbstractModel
                {
                public:
                    UpgradeTask();
                    ~UpgradeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return ID 任务ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置任务ID
                     * @param _iD 任务ID
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
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
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
                     * 获取组件名称
                     * @return Component 组件名称
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件名称
                     * @param _component 组件名称
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取关联资源
                     * @return RelatedResources 关联资源
                     * 
                     */
                    std::vector<std::string> GetRelatedResources() const;

                    /**
                     * 设置关联资源
                     * @param _relatedResources 关联资源
                     * 
                     */
                    void SetRelatedResources(const std::vector<std::string>& _relatedResources);

                    /**
                     * 判断参数 RelatedResources 是否已赋值
                     * @return RelatedResources 是否已赋值
                     * 
                     */
                    bool RelatedResourcesHasBeenSet() const;

                    /**
                     * 获取升级影响
                     * @return UpgradeImpact 升级影响
                     * 
                     */
                    std::string GetUpgradeImpact() const;

                    /**
                     * 设置升级影响
                     * @param _upgradeImpact 升级影响
                     * 
                     */
                    void SetUpgradeImpact(const std::string& _upgradeImpact);

                    /**
                     * 判断参数 UpgradeImpact 是否已赋值
                     * @return UpgradeImpact 是否已赋值
                     * 
                     */
                    bool UpgradeImpactHasBeenSet() const;

                    /**
                     * 获取预计开始时间
                     * @return PlanedStartAt 预计开始时间
                     * 
                     */
                    std::string GetPlanedStartAt() const;

                    /**
                     * 设置预计开始时间
                     * @param _planedStartAt 预计开始时间
                     * 
                     */
                    void SetPlanedStartAt(const std::string& _planedStartAt);

                    /**
                     * 判断参数 PlanedStartAt 是否已赋值
                     * @return PlanedStartAt 是否已赋值
                     * 
                     */
                    bool PlanedStartAtHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 组件名称
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 关联资源
                     */
                    std::vector<std::string> m_relatedResources;
                    bool m_relatedResourcesHasBeenSet;

                    /**
                     * 升级影响
                     */
                    std::string m_upgradeImpact;
                    bool m_upgradeImpactHasBeenSet;

                    /**
                     * 预计开始时间
                     */
                    std::string m_planedStartAt;
                    bool m_planedStartAtHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADETASK_H_
