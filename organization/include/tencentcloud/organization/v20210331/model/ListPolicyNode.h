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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICYNODE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 企业组织策略列表
                */
                class ListPolicyNode : public AbstractModel
                {
                public:
                    ListPolicyNode();
                    ~ListPolicyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略创建时间
                     * @return AddTime 策略创建时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置策略创建时间
                     * @param _addTime 策略创建时间
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
                     * 获取策略绑定次数
                     * @return AttachedTimes 策略绑定次数
                     * 
                     */
                    uint64_t GetAttachedTimes() const;

                    /**
                     * 设置策略绑定次数
                     * @param _attachedTimes 策略绑定次数
                     * 
                     */
                    void SetAttachedTimes(const uint64_t& _attachedTimes);

                    /**
                     * 判断参数 AttachedTimes 是否已赋值
                     * @return AttachedTimes 是否已赋值
                     * 
                     */
                    bool AttachedTimesHasBeenSet() const;

                    /**
                     * 获取策略描述信息
                     * @return Description 策略描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述信息
                     * @param _description 策略描述信息
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
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
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
                     * 获取策略Id
                     * @return PolicyId 策略Id
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略Id
                     * @param _policyId 策略Id
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略更新时间
                     * @return UpdateTime 策略更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置策略更新时间
                     * @param _updateTime 策略更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取策略类型 1-自定义 2-预设
                     * @return Type 策略类型 1-自定义 2-预设
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置策略类型 1-自定义 2-预设
                     * @param _type 策略类型 1-自定义 2-预设
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 策略创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 策略绑定次数
                     */
                    uint64_t m_attachedTimes;
                    bool m_attachedTimesHasBeenSet;

                    /**
                     * 策略描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略Id
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 策略类型 1-自定义 2-预设
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICYNODE_H_
