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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHEDUSERPOLICY_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHEDUSERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/AttachedUserPolicyGroupInfo.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 用户关联的策略详情
                */
                class AttachedUserPolicy : public AbstractModel
                {
                public:
                    AttachedUserPolicy();
                    ~AttachedUserPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名
                     * @return PolicyName 策略名
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名
                     * @param _policyName 策略名
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return Description 策略描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述
                     * @param _description 策略描述
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
                     * 获取创建时间
                     * @return AddTime 创建时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置创建时间
                     * @param _addTime 创建时间
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取策略类型(1表示自定义策略，2表示预设策略)
                     * @return StrategyType 策略类型(1表示自定义策略，2表示预设策略)
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置策略类型(1表示自定义策略，2表示预设策略)
                     * @param _strategyType 策略类型(1表示自定义策略，2表示预设策略)
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取创建模式(1表示按产品或项目权限创建的策略，其他表示策略语法创建的策略)
                     * @return CreateMode 创建模式(1表示按产品或项目权限创建的策略，其他表示策略语法创建的策略)
                     * 
                     */
                    std::string GetCreateMode() const;

                    /**
                     * 设置创建模式(1表示按产品或项目权限创建的策略，其他表示策略语法创建的策略)
                     * @param _createMode 创建模式(1表示按产品或项目权限创建的策略，其他表示策略语法创建的策略)
                     * 
                     */
                    void SetCreateMode(const std::string& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     * 
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取随组关联信息
                     * @return Groups 随组关联信息
                     * 
                     */
                    std::vector<AttachedUserPolicyGroupInfo> GetGroups() const;

                    /**
                     * 设置随组关联信息
                     * @param _groups 随组关联信息
                     * 
                     */
                    void SetGroups(const std::vector<AttachedUserPolicyGroupInfo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取是否已下线(0:否 1:是)
                     * @return Deactived 是否已下线(0:否 1:是)
                     * 
                     */
                    uint64_t GetDeactived() const;

                    /**
                     * 设置是否已下线(0:否 1:是)
                     * @param _deactived 是否已下线(0:否 1:是)
                     * 
                     */
                    void SetDeactived(const uint64_t& _deactived);

                    /**
                     * 判断参数 Deactived 是否已赋值
                     * @return Deactived 是否已赋值
                     * 
                     */
                    bool DeactivedHasBeenSet() const;

                    /**
                     * 获取已下线的产品列表
                     * @return DeactivedDetail 已下线的产品列表
                     * 
                     */
                    std::vector<std::string> GetDeactivedDetail() const;

                    /**
                     * 设置已下线的产品列表
                     * @param _deactivedDetail 已下线的产品列表
                     * 
                     */
                    void SetDeactivedDetail(const std::vector<std::string>& _deactivedDetail);

                    /**
                     * 判断参数 DeactivedDetail 是否已赋值
                     * @return DeactivedDetail 是否已赋值
                     * 
                     */
                    bool DeactivedDetailHasBeenSet() const;

                private:

                    /**
                     * 策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 策略类型(1表示自定义策略，2表示预设策略)
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 创建模式(1表示按产品或项目权限创建的策略，其他表示策略语法创建的策略)
                     */
                    std::string m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * 随组关联信息
                     */
                    std::vector<AttachedUserPolicyGroupInfo> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 是否已下线(0:否 1:是)
                     */
                    uint64_t m_deactived;
                    bool m_deactivedHasBeenSet;

                    /**
                     * 已下线的产品列表
                     */
                    std::vector<std::string> m_deactivedDetail;
                    bool m_deactivedDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHEDUSERPOLICY_H_
