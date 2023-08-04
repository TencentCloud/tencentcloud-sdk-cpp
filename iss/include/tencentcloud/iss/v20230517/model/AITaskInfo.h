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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_AITASKINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_AITASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/AITemplates.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AI任务信息
                */
                class AITaskInfo : public AbstractModel
                {
                public:
                    AITaskInfo();
                    ~AITaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI 任务 ID
                     * @return TaskId AI 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置AI 任务 ID
                     * @param _taskId AI 任务 ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取AI 任务名称
                     * @return Name AI 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置AI 任务名称
                     * @param _name AI 任务名称
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
                     * 获取AI 任务描述
                     * @return Desc AI 任务描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置AI 任务描述
                     * @param _desc AI 任务描述
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
                     * 获取AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止 AI 分析任务
                     * @return Status AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止 AI 分析任务
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止 AI 分析任务
                     * @param _status AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止 AI 分析任务
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取通道 ID 列表
                     * @return ChannelList 通道 ID 列表
                     * 
                     */
                    std::vector<std::string> GetChannelList() const;

                    /**
                     * 设置通道 ID 列表
                     * @param _channelList 通道 ID 列表
                     * 
                     */
                    void SetChannelList(const std::vector<std::string>& _channelList);

                    /**
                     * 判断参数 ChannelList 是否已赋值
                     * @return ChannelList 是否已赋值
                     * 
                     */
                    bool ChannelListHasBeenSet() const;

                    /**
                     * 获取AI 结果回调地址
                     * @return CallbackUrl AI 结果回调地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置AI 结果回调地址
                     * @param _callbackUrl AI 结果回调地址
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取AI 配置列表
                     * @return Templates AI 配置列表
                     * 
                     */
                    std::vector<AITemplates> GetTemplates() const;

                    /**
                     * 设置AI 配置列表
                     * @param _templates AI 配置列表
                     * 
                     */
                    void SetTemplates(const std::vector<AITemplates>& _templates);

                    /**
                     * 判断参数 Templates 是否已赋值
                     * @return Templates 是否已赋值
                     * 
                     */
                    bool TemplatesHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedTime 更新时间
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间
                     * @param _updatedTime 更新时间
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * AI 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * AI 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * AI 任务描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止 AI 分析任务
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 通道 ID 列表
                     */
                    std::vector<std::string> m_channelList;
                    bool m_channelListHasBeenSet;

                    /**
                     * AI 结果回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * AI 配置列表
                     */
                    std::vector<AITemplates> m_templates;
                    bool m_templatesHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_AITASKINFO_H_
