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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_UPDATERULEREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_UPDATERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateRule请求参数结构体
                */
                class UpdateRuleRequest : public AbstractModel
                {
                public:
                    UpdateRuleRequest();
                    ~UpdateRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取转发动作列表
                     * @return Actions 转发动作列表
                     * 
                     */
                    std::vector<Action> GetActions() const;

                    /**
                     * 设置转发动作列表
                     * @param _actions 转发动作列表
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
                     * 转发动作列表
                     */
                    std::vector<Action> m_actions;
                    bool m_actionsHasBeenSet;

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

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_UPDATERULEREQUEST_H_
