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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_RULE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/RuleQuery.h>
#include <tencentcloud/iot/v20180123/model/Action.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * 规则
                */
                class Rule : public AbstractModel
                {
                public:
                    Rule();
                    ~Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则Id
                     * @return RuleId 规则Id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则Id
                     * @param _ruleId 规则Id
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取AppId
                     * @return AppId AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置AppId
                     * @param _appId AppId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取查询
                     * @return Query 查询
                     * 
                     */
                    RuleQuery GetQuery() const;

                    /**
                     * 设置查询
                     * @param _query 查询
                     * 
                     */
                    void SetQuery(const RuleQuery& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取转发
                     * @return Actions 转发
                     * 
                     */
                    std::vector<Action> GetActions() const;

                    /**
                     * 设置转发
                     * @param _actions 转发
                     * 
                     */
                    void SetActions(const std::vector<Action>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取已启动
                     * @return Active 已启动
                     * 
                     */
                    uint64_t GetActive() const;

                    /**
                     * 设置已启动
                     * @param _active 已启动
                     * 
                     */
                    void SetActive(const uint64_t& _active);

                    /**
                     * 判断参数 Active 是否已赋值
                     * @return Active 是否已赋值
                     * 
                     */
                    bool ActiveHasBeenSet() const;

                    /**
                     * 获取已删除
                     * @return Deleted 已删除
                     * 
                     */
                    uint64_t GetDeleted() const;

                    /**
                     * 设置已删除
                     * @param _deleted 已删除
                     * 
                     */
                    void SetDeleted(const uint64_t& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

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
                     * 获取消息顺序
                     * @return MsgOrder 消息顺序
                     * 
                     */
                    uint64_t GetMsgOrder() const;

                    /**
                     * 设置消息顺序
                     * @param _msgOrder 消息顺序
                     * 
                     */
                    void SetMsgOrder(const uint64_t& _msgOrder);

                    /**
                     * 判断参数 MsgOrder 是否已赋值
                     * @return MsgOrder 是否已赋值
                     * 
                     */
                    bool MsgOrderHasBeenSet() const;

                    /**
                     * 获取数据类型（0：文本，1：二进制）
                     * @return DataType 数据类型（0：文本，1：二进制）
                     * 
                     */
                    uint64_t GetDataType() const;

                    /**
                     * 设置数据类型（0：文本，1：二进制）
                     * @param _dataType 数据类型（0：文本，1：二进制）
                     * 
                     */
                    void SetDataType(const uint64_t& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                private:

                    /**
                     * 规则Id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 查询
                     */
                    RuleQuery m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 转发
                     */
                    std::vector<Action> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 已启动
                     */
                    uint64_t m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * 已删除
                     */
                    uint64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 消息顺序
                     */
                    uint64_t m_msgOrder;
                    bool m_msgOrderHasBeenSet;

                    /**
                     * 数据类型（0：文本，1：二进制）
                     */
                    uint64_t m_dataType;
                    bool m_dataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_RULE_H_
