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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUP_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TemplateGroupAction.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务分组
                */
                class TemplateGroup : public AbstractModel
                {
                public:
                    TemplateGroup();
                    ~TemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取经验库动作ID
                     * @return TemplateGroupId 经验库动作ID
                     * 
                     */
                    int64_t GetTemplateGroupId() const;

                    /**
                     * 设置经验库动作ID
                     * @param _templateGroupId 经验库动作ID
                     * 
                     */
                    void SetTemplateGroupId(const int64_t& _templateGroupId);

                    /**
                     * 判断参数 TemplateGroupId 是否已赋值
                     * @return TemplateGroupId 是否已赋值
                     * 
                     */
                    bool TemplateGroupIdHasBeenSet() const;

                    /**
                     * 获取经验库动作分组动作列表
                     * @return TemplateGroupActions 经验库动作分组动作列表
                     * 
                     */
                    std::vector<TemplateGroupAction> GetTemplateGroupActions() const;

                    /**
                     * 设置经验库动作分组动作列表
                     * @param _templateGroupActions 经验库动作分组动作列表
                     * 
                     */
                    void SetTemplateGroupActions(const std::vector<TemplateGroupAction>& _templateGroupActions);

                    /**
                     * 判断参数 TemplateGroupActions 是否已赋值
                     * @return TemplateGroupActions 是否已赋值
                     * 
                     */
                    bool TemplateGroupActionsHasBeenSet() const;

                    /**
                     * 获取分组标题
                     * @return Title 分组标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置分组标题
                     * @param _title 分组标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取分组描述
                     * @return Description 分组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置分组描述
                     * @param _description 分组描述
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
                     * 获取分组顺序
                     * @return Order 分组顺序
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置分组顺序
                     * @param _order 分组顺序
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取执行模式。1 --- 顺序执行，2 --- 阶段执行
                     * @return Mode 执行模式。1 --- 顺序执行，2 --- 阶段执行
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置执行模式。1 --- 顺序执行，2 --- 阶段执行
                     * @param _mode 执行模式。1 --- 顺序执行，2 --- 阶段执行
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

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

                    /**
                     * 获取分组创建时间
                     * @return CreateTime 分组创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置分组创建时间
                     * @param _createTime 分组创建时间
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
                     * 获取分组更新时间
                     * @return UpdateTime 分组更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置分组更新时间
                     * @param _updateTime 分组更新时间
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
                     * 经验库动作ID
                     */
                    int64_t m_templateGroupId;
                    bool m_templateGroupIdHasBeenSet;

                    /**
                     * 经验库动作分组动作列表
                     */
                    std::vector<TemplateGroupAction> m_templateGroupActions;
                    bool m_templateGroupActionsHasBeenSet;

                    /**
                     * 分组标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 分组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 分组顺序
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 执行模式。1 --- 顺序执行，2 --- 阶段执行
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 对象类型ID
                     */
                    int64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                    /**
                     * 分组创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分组更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUP_H_
