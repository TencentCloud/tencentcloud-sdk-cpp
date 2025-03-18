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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICIESFORTARGET_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICIESFORTARGET_H_

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
                * 查询目标关联的SCP策略列表
                */
                class ListPoliciesForTarget : public AbstractModel
                {
                public:
                    ListPoliciesForTarget();
                    ~ListPoliciesForTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略Id
                     * @return StrategyId 策略Id
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略Id
                     * @param _strategyId 策略Id
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return StrategyName 策略名称
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称
                     * @param _strategyName 策略名称
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
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
                     * 获取关联的账号或节点
                     * @return Uin 关联的账号或节点
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置关联的账号或节点
                     * @param _uin 关联的账号或节点
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取关联类型 1-节点 2-用户
                     * @return Type 关联类型 1-节点 2-用户
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置关联类型 1-节点 2-用户
                     * @param _type 关联类型 1-节点 2-用户
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
                     * 获取部门名称
                     * @return Name 部门名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置部门名称
                     * @param _name 部门名称
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
                     * 获取策略绑定时间
                     * @return AttachTime 策略绑定时间
                     * 
                     */
                    std::string GetAttachTime() const;

                    /**
                     * 设置策略绑定时间
                     * @param _attachTime 策略绑定时间
                     * 
                     */
                    void SetAttachTime(const std::string& _attachTime);

                    /**
                     * 判断参数 AttachTime 是否已赋值
                     * @return AttachTime 是否已赋值
                     * 
                     */
                    bool AttachTimeHasBeenSet() const;

                private:

                    /**
                     * 策略Id
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 关联的账号或节点
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 关联类型 1-节点 2-用户
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 策略创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 策略更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 部门名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略绑定时间
                     */
                    std::string m_attachTime;
                    bool m_attachTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICIESFORTARGET_H_
