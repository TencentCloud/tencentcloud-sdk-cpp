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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONLIBRARYLISTRESULT_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONLIBRARYLISTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 动作库数据列表
                */
                class ActionLibraryListResult : public AbstractModel
                {
                public:
                    ActionLibraryListResult();
                    ~ActionLibraryListResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作名称
                     * @return ActionName 动作名称
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置动作名称
                     * @param _actionName 动作名称
                     * 
                     */
                    void SetActionName(const std::string& _actionName);

                    /**
                     * 判断参数 ActionName 是否已赋值
                     * @return ActionName 是否已赋值
                     * 
                     */
                    bool ActionNameHasBeenSet() const;

                    /**
                     * 获取动作描述
                     * @return Desc 动作描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置动作描述
                     * @param _desc 动作描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取动作类型。范围：["平台","自定义"]
                     * @return ActionType 动作类型。范围：["平台","自定义"]
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作类型。范围：["平台","自定义"]
                     * @param _actionType 动作类型。范围：["平台","自定义"]
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取动作风险描述
                     * @return RiskDesc 动作风险描述
                     * 
                     */
                    std::string GetRiskDesc() const;

                    /**
                     * 设置动作风险描述
                     * @param _riskDesc 动作风险描述
                     * 
                     */
                    void SetRiskDesc(const std::string& _riskDesc);

                    /**
                     * 判断参数 RiskDesc 是否已赋值
                     * @return RiskDesc 是否已赋值
                     * 
                     */
                    bool RiskDescHasBeenSet() const;

                    /**
                     * 获取动作ID
                     * @return ActionId 动作ID
                     * 
                     */
                    uint64_t GetActionId() const;

                    /**
                     * 设置动作ID
                     * @param _actionId 动作ID
                     * 
                     */
                    void SetActionId(const uint64_t& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取动作属性（ 1：故障  2：恢复）
                     * @return AttributeId 动作属性（ 1：故障  2：恢复）
                     * 
                     */
                    uint64_t GetAttributeId() const;

                    /**
                     * 设置动作属性（ 1：故障  2：恢复）
                     * @param _attributeId 动作属性（ 1：故障  2：恢复）
                     * 
                     */
                    void SetAttributeId(const uint64_t& _attributeId);

                    /**
                     * 判断参数 AttributeId 是否已赋值
                     * @return AttributeId 是否已赋值
                     * 
                     */
                    bool AttributeIdHasBeenSet() const;

                    /**
                     * 获取关联的动作ID
                     * @return RelationActionId 关联的动作ID
                     * 
                     */
                    uint64_t GetRelationActionId() const;

                    /**
                     * 设置关联的动作ID
                     * @param _relationActionId 关联的动作ID
                     * 
                     */
                    void SetRelationActionId(const uint64_t& _relationActionId);

                    /**
                     * 判断参数 RelationActionId 是否已赋值
                     * @return RelationActionId 是否已赋值
                     * 
                     */
                    bool RelationActionIdHasBeenSet() const;

                    /**
                     * 获取操作命令
                     * @return ActionCommand 操作命令
                     * 
                     */
                    std::string GetActionCommand() const;

                    /**
                     * 设置操作命令
                     * @param _actionCommand 操作命令
                     * 
                     */
                    void SetActionCommand(const std::string& _actionCommand);

                    /**
                     * 判断参数 ActionCommand 是否已赋值
                     * @return ActionCommand 是否已赋值
                     * 
                     */
                    bool ActionCommandHasBeenSet() const;

                    /**
                     * 获取动作类型（0 -- tat   1 -- 云API）
                     * @return ActionCommandType 动作类型（0 -- tat   1 -- 云API）
                     * 
                     */
                    uint64_t GetActionCommandType() const;

                    /**
                     * 设置动作类型（0 -- tat   1 -- 云API）
                     * @param _actionCommandType 动作类型（0 -- tat   1 -- 云API）
                     * 
                     */
                    void SetActionCommandType(const uint64_t& _actionCommandType);

                    /**
                     * 判断参数 ActionCommandType 是否已赋值
                     * @return ActionCommandType 是否已赋值
                     * 
                     */
                    bool ActionCommandTypeHasBeenSet() const;

                    /**
                     * 获取自定义动作的参数，json string
                     * @return ActionContent 自定义动作的参数，json string
                     * 
                     */
                    std::string GetActionContent() const;

                    /**
                     * 设置自定义动作的参数，json string
                     * @param _actionContent 自定义动作的参数，json string
                     * 
                     */
                    void SetActionContent(const std::string& _actionContent);

                    /**
                     * 判断参数 ActionContent 是否已赋值
                     * @return ActionContent 是否已赋值
                     * 
                     */
                    bool ActionContentHasBeenSet() const;

                    /**
                     * 获取二级分类
                     * @return ResourceType 二级分类
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置二级分类
                     * @param _resourceType 二级分类
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取动作描述
                     * @return ActionDetail 动作描述
                     * 
                     */
                    std::string GetActionDetail() const;

                    /**
                     * 设置动作描述
                     * @param _actionDetail 动作描述
                     * 
                     */
                    void SetActionDetail(const std::string& _actionDetail);

                    /**
                     * 判断参数 ActionDetail 是否已赋值
                     * @return ActionDetail 是否已赋值
                     * 
                     */
                    bool ActionDetailHasBeenSet() const;

                    /**
                     * 获取是否允许当前账号使用
                     * @return IsAllowed 是否允许当前账号使用
                     * 
                     */
                    bool GetIsAllowed() const;

                    /**
                     * 设置是否允许当前账号使用
                     * @param _isAllowed 是否允许当前账号使用
                     * 
                     */
                    void SetIsAllowed(const bool& _isAllowed);

                    /**
                     * 判断参数 IsAllowed 是否已赋值
                     * @return IsAllowed 是否已赋值
                     * 
                     */
                    bool IsAllowedHasBeenSet() const;

                    /**
                     * 获取最佳实践案例的链接地址
                     * @return ActionBestCase 最佳实践案例的链接地址
                     * 
                     */
                    std::string GetActionBestCase() const;

                    /**
                     * 设置最佳实践案例的链接地址
                     * @param _actionBestCase 最佳实践案例的链接地址
                     * 
                     */
                    void SetActionBestCase(const std::string& _actionBestCase);

                    /**
                     * 判断参数 ActionBestCase 是否已赋值
                     * @return ActionBestCase 是否已赋值
                     * 
                     */
                    bool ActionBestCaseHasBeenSet() const;

                    /**
                     * 获取对象类型
                     * @return ObjectType 对象类型
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置对象类型
                     * @param _objectType 对象类型
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取监控指标ID列表
                     * @return MetricIdList 监控指标ID列表
                     * 
                     */
                    std::vector<uint64_t> GetMetricIdList() const;

                    /**
                     * 设置监控指标ID列表
                     * @param _metricIdList 监控指标ID列表
                     * 
                     */
                    void SetMetricIdList(const std::vector<uint64_t>& _metricIdList);

                    /**
                     * 判断参数 MetricIdList 是否已赋值
                     * @return MetricIdList 是否已赋值
                     * 
                     */
                    bool MetricIdListHasBeenSet() const;

                    /**
                     * 获取是否是新动作
                     * @return IsNewAction 是否是新动作
                     * 
                     */
                    bool GetIsNewAction() const;

                    /**
                     * 设置是否是新动作
                     * @param _isNewAction 是否是新动作
                     * 
                     */
                    void SetIsNewAction(const bool& _isNewAction);

                    /**
                     * 判断参数 IsNewAction 是否已赋值
                     * @return IsNewAction 是否已赋值
                     * 
                     */
                    bool IsNewActionHasBeenSet() const;

                    /**
                     * 获取对象类型ID
                     * @return ObjectTypeId 对象类型ID
                     * 
                     */
                    int64_t GetObjectTypeId() const;

                    /**
                     * 设置对象类型ID
                     * @param _objectTypeId 对象类型ID
                     * 
                     */
                    void SetObjectTypeId(const int64_t& _objectTypeId);

                    /**
                     * 判断参数 ObjectTypeId 是否已赋值
                     * @return ObjectTypeId 是否已赋值
                     * 
                     */
                    bool ObjectTypeIdHasBeenSet() const;

                private:

                    /**
                     * 动作名称
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * 动作描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 动作类型。范围：["平台","自定义"]
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 动作风险描述
                     */
                    std::string m_riskDesc;
                    bool m_riskDescHasBeenSet;

                    /**
                     * 动作ID
                     */
                    uint64_t m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * 动作属性（ 1：故障  2：恢复）
                     */
                    uint64_t m_attributeId;
                    bool m_attributeIdHasBeenSet;

                    /**
                     * 关联的动作ID
                     */
                    uint64_t m_relationActionId;
                    bool m_relationActionIdHasBeenSet;

                    /**
                     * 操作命令
                     */
                    std::string m_actionCommand;
                    bool m_actionCommandHasBeenSet;

                    /**
                     * 动作类型（0 -- tat   1 -- 云API）
                     */
                    uint64_t m_actionCommandType;
                    bool m_actionCommandTypeHasBeenSet;

                    /**
                     * 自定义动作的参数，json string
                     */
                    std::string m_actionContent;
                    bool m_actionContentHasBeenSet;

                    /**
                     * 二级分类
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 动作描述
                     */
                    std::string m_actionDetail;
                    bool m_actionDetailHasBeenSet;

                    /**
                     * 是否允许当前账号使用
                     */
                    bool m_isAllowed;
                    bool m_isAllowedHasBeenSet;

                    /**
                     * 最佳实践案例的链接地址
                     */
                    std::string m_actionBestCase;
                    bool m_actionBestCaseHasBeenSet;

                    /**
                     * 对象类型
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * 监控指标ID列表
                     */
                    std::vector<uint64_t> m_metricIdList;
                    bool m_metricIdListHasBeenSet;

                    /**
                     * 是否是新动作
                     */
                    bool m_isNewAction;
                    bool m_isNewActionHasBeenSet;

                    /**
                     * 对象类型ID
                     */
                    int64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONLIBRARYLISTRESULT_H_
