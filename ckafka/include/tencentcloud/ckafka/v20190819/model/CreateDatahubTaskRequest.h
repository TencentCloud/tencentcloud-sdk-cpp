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
                     * 获取<p>任务名称,只能以字母起始,允许包含字母、数字、- 、.  、 下划线且长度不超过64 (、为分割符号规则不包含)</p>
                     * @return TaskName <p>任务名称,只能以字母起始,允许包含字母、数字、- 、.  、 下划线且长度不超过64 (、为分割符号规则不包含)</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称,只能以字母起始,允许包含字母、数字、- 、.  、 下划线且长度不超过64 (、为分割符号规则不包含)</p>
                     * @param _taskName <p>任务名称,只能以字母起始,允许包含字母、数字、- 、.  、 下划线且长度不超过64 (、为分割符号规则不包含)</p>
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
                     * 获取<p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     * @return TaskType <p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     * @param _taskType <p>任务类型，SOURCE数据接入，SINK数据流出</p>
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
                     * 获取<p>数据源</p>
                     * @return SourceResource <p>数据源</p>
                     * 
                     */
                    DatahubResource GetSourceResource() const;

                    /**
                     * 设置<p>数据源</p>
                     * @param _sourceResource <p>数据源</p>
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
                     * 获取<p>数据目标</p>
                     * @return TargetResource <p>数据目标</p>
                     * 
                     */
                    DatahubResource GetTargetResource() const;

                    /**
                     * 设置<p>数据目标</p>
                     * @param _targetResource <p>数据目标</p>
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
                     * 获取<p>数据处理规则</p>
                     * @return TransformParam <p>数据处理规则</p>
                     * 
                     */
                    TransformParam GetTransformParam() const;

                    /**
                     * 设置<p>数据处理规则</p>
                     * @param _transformParam <p>数据处理规则</p>
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
                     * 获取<p>实例连接参数【已废弃】</p>
                     * @return PrivateLinkParam <p>实例连接参数【已废弃】</p>
                     * @deprecated
                     */
                    PrivateLinkParam GetPrivateLinkParam() const;

                    /**
                     * 设置<p>实例连接参数【已废弃】</p>
                     * @param _privateLinkParam <p>实例连接参数【已废弃】</p>
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
                     * 获取<p>选择所要绑定的SchemaId</p>
                     * @return SchemaId <p>选择所要绑定的SchemaId</p>
                     * 
                     */
                    std::string GetSchemaId() const;

                    /**
                     * 设置<p>选择所要绑定的SchemaId</p>
                     * @param _schemaId <p>选择所要绑定的SchemaId</p>
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
                     * 获取<p>数据处理规则</p>
                     * @return TransformsParam <p>数据处理规则</p>
                     * 
                     */
                    TransformsParam GetTransformsParam() const;

                    /**
                     * 设置<p>数据处理规则</p>
                     * @param _transformsParam <p>数据处理规则</p>
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
                     * 获取<p>任务Id</p>
                     * @return TaskId <p>任务Id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务Id</p>
                     * @param _taskId <p>任务Id</p>
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

                    /**
                     * 获取<p>任务描述信息</p>
                     * @return Description <p>任务描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述信息</p>
                     * @param _description <p>任务描述信息</p>
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
                     * <p>任务名称,只能以字母起始,允许包含字母、数字、- 、.  、 下划线且长度不超过64 (、为分割符号规则不包含)</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>数据源</p>
                     */
                    DatahubResource m_sourceResource;
                    bool m_sourceResourceHasBeenSet;

                    /**
                     * <p>数据目标</p>
                     */
                    DatahubResource m_targetResource;
                    bool m_targetResourceHasBeenSet;

                    /**
                     * <p>数据处理规则</p>
                     */
                    TransformParam m_transformParam;
                    bool m_transformParamHasBeenSet;

                    /**
                     * <p>实例连接参数【已废弃】</p>
                     */
                    PrivateLinkParam m_privateLinkParam;
                    bool m_privateLinkParamHasBeenSet;

                    /**
                     * <p>选择所要绑定的SchemaId</p>
                     */
                    std::string m_schemaId;
                    bool m_schemaIdHasBeenSet;

                    /**
                     * <p>数据处理规则</p>
                     */
                    TransformsParam m_transformsParam;
                    bool m_transformsParamHasBeenSet;

                    /**
                     * <p>任务Id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>任务描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTASKREQUEST_H_
