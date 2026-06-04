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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTRELEASE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTRELEASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent发布项目详情
                */
                class AgentRelease : public AbstractModel
                {
                public:
                    AgentRelease();
                    ~AgentRelease() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>名称</p>
                     * @return ItemName <p>名称</p>
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _itemName <p>名称</p>
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取<p>更新时间, unix 秒时间戳 (s)</p>
                     * @return UpdateTime <p>更新时间, unix 秒时间戳 (s)</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间, unix 秒时间戳 (s)</p>
                     * @param _updateTime <p>更新时间, unix 秒时间戳 (s)</p>
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
                     * 获取<p>动作描述</p>
                     * @return ActionDescription <p>动作描述</p>
                     * 
                     */
                    std::string GetActionDescription() const;

                    /**
                     * 设置<p>动作描述</p>
                     * @param _actionDescription <p>动作描述</p>
                     * 
                     */
                    void SetActionDescription(const std::string& _actionDescription);

                    /**
                     * 判断参数 ActionDescription 是否已赋值
                     * @return ActionDescription 是否已赋值
                     * 
                     */
                    bool ActionDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>变更为 测试</p>
                     * @return ReleaseMessage <p>变更为 测试</p>
                     * 
                     */
                    std::string GetReleaseMessage() const;

                    /**
                     * 设置<p>变更为 测试</p>
                     * @param _releaseMessage <p>变更为 测试</p>
                     * 
                     */
                    void SetReleaseMessage(const std::string& _releaseMessage);

                    /**
                     * 判断参数 ReleaseMessage 是否已赋值
                     * @return ReleaseMessage 是否已赋值
                     * 
                     */
                    bool ReleaseMessageHasBeenSet() const;

                private:

                    /**
                     * <p>名称</p>
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * <p>更新时间, unix 秒时间戳 (s)</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>动作描述</p>
                     */
                    std::string m_actionDescription;
                    bool m_actionDescriptionHasBeenSet;

                    /**
                     * <p>变更为 测试</p>
                     */
                    std::string m_releaseMessage;
                    bool m_releaseMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTRELEASE_H_
