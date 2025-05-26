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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTASKREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DatahubResource.h>
#include <tencentcloud/ckafka/v20190819/model/TransformParam.h>
#include <tencentcloud/ckafka/v20190819/model/PrivateLinkParam.h>
#include <tencentcloud/ckafka/v20190819/model/TransformsParam.h>
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
                * CreateDatahubTask请求参数结构体
                */
                class CreateDatahubTaskRequest : public AbstractModel
                {
                public:
                    CreateDatahubTaskRequest();
                    ~CreateDatahubTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
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
                     * 获取任务类型，SOURCE数据接入，SINK数据流出
                     * @return TaskType 任务类型，SOURCE数据接入，SINK数据流出
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，SOURCE数据接入，SINK数据流出
                     * @param _taskType 任务类型，SOURCE数据接入，SINK数据流出
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取数据源
                     * @return SourceResource 数据源
                     * 
                     */
                    DatahubResource GetSourceResource() const;

                    /**
                     * 设置数据源
                     * @param _sourceResource 数据源
                     * 
                     */
                    void SetSourceResource(const DatahubResource& _sourceResource);

                    /**
                     * 判断参数 SourceResource 是否已赋值
                     * @return SourceResource 是否已赋值
                     * 
                     */
                    bool SourceResourceHasBeenSet() const;

                    /**
                     * 获取数据目标
                     * @return TargetResource 数据目标
                     * 
                     */
                    DatahubResource GetTargetResource() const;

                    /**
                     * 设置数据目标
                     * @param _targetResource 数据目标
                     * 
                     */
                    void SetTargetResource(const DatahubResource& _targetResource);

                    /**
                     * 判断参数 TargetResource 是否已赋值
                     * @return TargetResource 是否已赋值
                     * 
                     */
                    bool TargetResourceHasBeenSet() const;

                    /**
                     * 获取数据处理规则
                     * @return TransformParam 数据处理规则
                     * 
                     */
                    TransformParam GetTransformParam() const;

                    /**
                     * 设置数据处理规则
                     * @param _transformParam 数据处理规则
                     * 
                     */
                    void SetTransformParam(const TransformParam& _transformParam);

                    /**
                     * 判断参数 TransformParam 是否已赋值
                     * @return TransformParam 是否已赋值
                     * 
                     */
                    bool TransformParamHasBeenSet() const;

                    /**
                     * 获取实例连接参数【已废弃】
                     * @return PrivateLinkParam 实例连接参数【已废弃】
                     * @deprecated
                     */
                    PrivateLinkParam GetPrivateLinkParam() const;

                    /**
                     * 设置实例连接参数【已废弃】
                     * @param _privateLinkParam 实例连接参数【已废弃】
                     * @deprecated
                     */
                    void SetPrivateLinkParam(const PrivateLinkParam& _privateLinkParam);

                    /**
                     * 判断参数 PrivateLinkParam 是否已赋值
                     * @return PrivateLinkParam 是否已赋值
                     * @deprecated
                     */
                    bool PrivateLinkParamHasBeenSet() const;

                    /**
                     * 获取选择所要绑定的SchemaId
                     * @return SchemaId 选择所要绑定的SchemaId
                     * 
                     */
                    std::string GetSchemaId() const;

                    /**
                     * 设置选择所要绑定的SchemaId
                     * @param _schemaId 选择所要绑定的SchemaId
                     * 
                     */
                    void SetSchemaId(const std::string& _schemaId);

                    /**
                     * 判断参数 SchemaId 是否已赋值
                     * @return SchemaId 是否已赋值
                     * 
                     */
                    bool SchemaIdHasBeenSet() const;

                    /**
                     * 获取数据处理规则
                     * @return TransformsParam 数据处理规则
                     * 
                     */
                    TransformsParam GetTransformsParam() const;

                    /**
                     * 设置数据处理规则
                     * @param _transformsParam 数据处理规则
                     * 
                     */
                    void SetTransformsParam(const TransformsParam& _transformsParam);

                    /**
                     * 判断参数 TransformsParam 是否已赋值
                     * @return TransformsParam 是否已赋值
                     * 
                     */
                    bool TransformsParamHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
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
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取任务描述信息
                     * @return Description 任务描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述信息
                     * @param _description 任务描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型，SOURCE数据接入，SINK数据流出
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 数据源
                     */
                    DatahubResource m_sourceResource;
                    bool m_sourceResourceHasBeenSet;

                    /**
                     * 数据目标
                     */
                    DatahubResource m_targetResource;
                    bool m_targetResourceHasBeenSet;

                    /**
                     * 数据处理规则
                     */
                    TransformParam m_transformParam;
                    bool m_transformParamHasBeenSet;

                    /**
                     * 实例连接参数【已废弃】
                     */
                    PrivateLinkParam m_privateLinkParam;
                    bool m_privateLinkParamHasBeenSet;

                    /**
                     * 选择所要绑定的SchemaId
                     */
                    std::string m_schemaId;
                    bool m_schemaIdHasBeenSet;

                    /**
                     * 数据处理规则
                     */
                    TransformsParam m_transformsParam;
                    bool m_transformsParamHasBeenSet;

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 任务描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTASKREQUEST_H_
