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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEMETASYNCDATAHUBTASKREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEMETASYNCDATAHUBTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateMetaSyncDatahubTask请求参数结构体
                */
                class CreateMetaSyncDatahubTaskRequest : public AbstractModel
                {
                public:
                    CreateMetaSyncDatahubTaskRequest();
                    ~CreateMetaSyncDatahubTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>连接器任务名称</p><p>64字符内</p>
                     * @return TaskName <p>连接器任务名称</p><p>64字符内</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>连接器任务名称</p><p>64字符内</p>
                     * @param _taskName <p>连接器任务名称</p><p>64字符内</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>同步源连接</p><p>参数格式：resource-test</p>
                     * @return SourceResourceId <p>同步源连接</p><p>参数格式：resource-test</p>
                     * 
                     */
                    std::string GetSourceResourceId() const;

                    /**
                     * 设置<p>同步源连接</p><p>参数格式：resource-test</p>
                     * @param _sourceResourceId <p>同步源连接</p><p>参数格式：resource-test</p>
                     * 
                     */
                    void SetSourceResourceId(const std::string& _sourceResourceId);

                    /**
                     * 判断参数 SourceResourceId 是否已赋值
                     * @return SourceResourceId 是否已赋值
                     * 
                     */
                    bool SourceResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>同步目标连接</p><p>参数格式：resource-test</p>
                     * @return TargetResourceId <p>同步目标连接</p><p>参数格式：resource-test</p>
                     * 
                     */
                    std::string GetTargetResourceId() const;

                    /**
                     * 设置<p>同步目标连接</p><p>参数格式：resource-test</p>
                     * @param _targetResourceId <p>同步目标连接</p><p>参数格式：resource-test</p>
                     * 
                     */
                    void SetTargetResourceId(const std::string& _targetResourceId);

                    /**
                     * 判断参数 TargetResourceId 是否已赋值
                     * @return TargetResourceId 是否已赋值
                     * 
                     */
                    bool TargetResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>连接器任务描述</p><p>128字符内</p>
                     * @return Description <p>连接器任务描述</p><p>128字符内</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>连接器任务描述</p><p>128字符内</p>
                     * @param _description <p>连接器任务描述</p><p>128字符内</p>
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
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>连接器任务名称</p><p>64字符内</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>同步源连接</p><p>参数格式：resource-test</p>
                     */
                    std::string m_sourceResourceId;
                    bool m_sourceResourceIdHasBeenSet;

                    /**
                     * <p>同步目标连接</p><p>参数格式：resource-test</p>
                     */
                    std::string m_targetResourceId;
                    bool m_targetResourceIdHasBeenSet;

                    /**
                     * <p>连接器任务描述</p><p>128字符内</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEMETASYNCDATAHUBTASKREQUEST_H_
