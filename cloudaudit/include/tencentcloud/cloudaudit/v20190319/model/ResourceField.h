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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_RESOURCEFIELD_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_RESOURCEFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * 资源筛选条件
                */
                class ResourceField : public AbstractModel
                {
                public:
                    ResourceField();
                    ~ResourceField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取跟踪事件所属产品（支持全部产品或单个产品，如：cam，全部：*）
                     * @return ResourceType 跟踪事件所属产品（支持全部产品或单个产品，如：cam，全部：*）
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置跟踪事件所属产品（支持全部产品或单个产品，如：cam，全部：*）
                     * @param _resourceType 跟踪事件所属产品（支持全部产品或单个产品，如：cam，全部：*）
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
                     * 获取跟踪事件类型（读：Read；写：Write；全部：*）
                     * @return ActionType 跟踪事件类型（读：Read；写：Write；全部：*）
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置跟踪事件类型（读：Read；写：Write；全部：*）
                     * @param _actionType 跟踪事件类型（读：Read；写：Write；全部：*）
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
                     * 获取跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[""]；指定ResourceType时，支持全部接口：[""]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     * @return EventNames 跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[""]；指定ResourceType时，支持全部接口：[""]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     * 
                     */
                    std::vector<std::string> GetEventNames() const;

                    /**
                     * 设置跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[""]；指定ResourceType时，支持全部接口：[""]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     * @param _eventNames 跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[""]；指定ResourceType时，支持全部接口：[""]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     * 
                     */
                    void SetEventNames(const std::vector<std::string>& _eventNames);

                    /**
                     * 判断参数 EventNames 是否已赋值
                     * @return EventNames 是否已赋值
                     * 
                     */
                    bool EventNamesHasBeenSet() const;

                private:

                    /**
                     * 跟踪事件所属产品（支持全部产品或单个产品，如：cam，全部：*）
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 跟踪事件类型（读：Read；写：Write；全部：*）
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[""]；指定ResourceType时，支持全部接口：[""]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     */
                    std::vector<std::string> m_eventNames;
                    bool m_eventNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_RESOURCEFIELD_H_
