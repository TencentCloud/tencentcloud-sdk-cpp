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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTASKRES_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTASKRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DatahubResource.h>
#include <tencentcloud/ckafka/v20190819/model/Connection.h>
#include <tencentcloud/ckafka/v20190819/model/TransformParam.h>
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
                * 查询Datahub任务信息
                */
                class DescribeDatahubTaskRes : public AbstractModel
                {
                public:
                    DescribeDatahubTaskRes();
                    ~DescribeDatahubTaskRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     * @return Status 状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     * @param _status 状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取Connection列表
                     * @return Connections Connection列表
                     * 
                     */
                    std::vector<Connection> GetConnections() const;

                    /**
                     * 设置Connection列表
                     * @param _connections Connection列表
                     * 
                     */
                    void SetConnections(const std::vector<Connection>& _connections);

                    /**
                     * 判断参数 Connections 是否已赋值
                     * @return Connections 是否已赋值
                     * 
                     */
                    bool ConnectionsHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
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
                     * 获取消息处理规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransformParam 消息处理规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TransformParam GetTransformParam() const;

                    /**
                     * 设置消息处理规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transformParam 消息处理规则
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据接入ID
                     * @return DatahubId 数据接入ID
                     * 
                     */
                    std::string GetDatahubId() const;

                    /**
                     * 设置数据接入ID
                     * @param _datahubId 数据接入ID
                     * 
                     */
                    void SetDatahubId(const std::string& _datahubId);

                    /**
                     * 判断参数 DatahubId 是否已赋值
                     * @return DatahubId 是否已赋值
                     * 
                     */
                    bool DatahubIdHasBeenSet() const;

                    /**
                     * 获取绑定的SchemaId
                     * @return SchemaId 绑定的SchemaId
                     * 
                     */
                    std::string GetSchemaId() const;

                    /**
                     * 设置绑定的SchemaId
                     * @param _schemaId 绑定的SchemaId
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
                     * 获取绑定的Schema名称
                     * @return SchemaName 绑定的Schema名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置绑定的Schema名称
                     * @param _schemaName 绑定的Schema名称
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取数据处理规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransformsParam 数据处理规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TransformsParam GetTransformsParam() const;

                    /**
                     * 设置数据处理规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transformsParam 数据处理规则
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取异常信息
                     * @return ErrorMessage 异常信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置异常信息
                     * @param _errorMessage 异常信息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取任务标签列表
                     * @return Tags 任务标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置任务标签列表
                     * @param _tags 任务标签列表
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
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

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
                     * 状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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
                     * Connection列表
                     */
                    std::vector<Connection> m_connections;
                    bool m_connectionsHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 消息处理规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TransformParam m_transformParam;
                    bool m_transformParamHasBeenSet;

                    /**
                     * 数据接入ID
                     */
                    std::string m_datahubId;
                    bool m_datahubIdHasBeenSet;

                    /**
                     * 绑定的SchemaId
                     */
                    std::string m_schemaId;
                    bool m_schemaIdHasBeenSet;

                    /**
                     * 绑定的Schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 数据处理规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TransformsParam m_transformsParam;
                    bool m_transformsParamHasBeenSet;

                    /**
                     * 异常信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 任务标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTASKRES_H_
