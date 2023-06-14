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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCONDITIONTPL_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCONDITIONTPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 查询策略输出的模板策略组信息
                */
                class DescribePolicyGroupInfoConditionTpl : public AbstractModel
                {
                public:
                    DescribePolicyGroupInfoConditionTpl();
                    ~DescribePolicyGroupInfoConditionTpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略组id
                     * @return GroupId 策略组id
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置策略组id
                     * @param _groupId 策略组id
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取策略组名称
                     * @return GroupName 策略组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置策略组名称
                     * @param _groupName 策略组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取策略类型
                     * @return ViewName 策略类型
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置策略类型
                     * @param _viewName 策略类型
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取策略组说明
                     * @return Remark 策略组说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置策略组说明
                     * @param _remark 策略组说明
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
                     * 获取最后编辑的用户uin
                     * @return LastEditUin 最后编辑的用户uin
                     * 
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置最后编辑的用户uin
                     * @param _lastEditUin 最后编辑的用户uin
                     * 
                     */
                    void SetLastEditUin(const std::string& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取是否且规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUnionRule 是否且规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置是否且规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isUnionRule 是否且规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     * 
                     */
                    bool IsUnionRuleHasBeenSet() const;

                private:

                    /**
                     * 策略组id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 策略组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 策略组说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 最后编辑的用户uin
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 是否且规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCONDITIONTPL_H_
