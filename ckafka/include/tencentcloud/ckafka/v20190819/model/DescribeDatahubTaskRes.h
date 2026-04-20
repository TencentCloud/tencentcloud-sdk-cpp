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
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
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
                     * 获取<p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
                     * @return Status <p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
                     * @param _status <p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
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
                     * 获取<p>Connection列表</p>
                     * @return Connections <p>Connection列表</p>
                     * 
                     */
                    std::vector<Connection> GetConnections() const;

                    /**
                     * 设置<p>Connection列表</p>
                     * @param _connections <p>Connection列表</p>
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
                     * 获取<p>任务创建时间</p>
                     * @return CreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _createTime <p>任务创建时间</p>
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
                     * 获取<p>消息处理规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransformParam <p>消息处理规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TransformParam GetTransformParam() const;

                    /**
                     * 设置<p>消息处理规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transformParam <p>消息处理规则</p>
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
                     * 获取<p>数据接入ID</p>
                     * @return DatahubId <p>数据接入ID</p>
                     * 
                     */
                    std::string GetDatahubId() const;

                    /**
                     * 设置<p>数据接入ID</p>
                     * @param _datahubId <p>数据接入ID</p>
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
                     * 获取<p>绑定的SchemaId</p>
                     * @return SchemaId <p>绑定的SchemaId</p>
                     * 
                     */
                    std::string GetSchemaId() const;

                    /**
                     * 设置<p>绑定的SchemaId</p>
                     * @param _schemaId <p>绑定的SchemaId</p>
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
                     * 获取<p>绑定的Schema名称</p>
                     * @return SchemaName <p>绑定的Schema名称</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>绑定的Schema名称</p>
                     * @param _schemaName <p>绑定的Schema名称</p>
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
                     * 获取<p>数据处理规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransformsParam <p>数据处理规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TransformsParam GetTransformsParam() const;

                    /**
                     * 设置<p>数据处理规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transformsParam <p>数据处理规则</p>
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
                     * 获取<p>异常信息</p>
                     * @return ErrorMessage <p>异常信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>异常信息</p>
                     * @param _errorMessage <p>异常信息</p>
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
                     * 获取<p>任务标签列表</p>
                     * @return Tags <p>任务标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>任务标签列表</p>
                     * @param _tags <p>任务标签列表</p>
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

                    /**
                     * 获取<p>1:正常 2:隔离中</p>
                     * @return IsolateStatus <p>1:正常 2:隔离中</p>
                     * 
                     */
                    int64_t GetIsolateStatus() const;

                    /**
                     * 设置<p>1:正常 2:隔离中</p>
                     * @param _isolateStatus <p>1:正常 2:隔离中</p>
                     * 
                     */
                    void SetIsolateStatus(const int64_t& _isolateStatus);

                    /**
                     * 判断参数 IsolateStatus 是否已赋值
                     * @return IsolateStatus 是否已赋值
                     * 
                     */
                    bool IsolateStatusHasBeenSet() const;

                    /**
                     * 获取<p>并发数</p><p>默认值：1</p>
                     * @return TaskMax <p>并发数</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetTaskMax() const;

                    /**
                     * 设置<p>并发数</p><p>默认值：1</p>
                     * @param _taskMax <p>并发数</p><p>默认值：1</p>
                     * 
                     */
                    void SetTaskMax(const int64_t& _taskMax);

                    /**
                     * 判断参数 TaskMax 是否已赋值
                     * @return TaskMax 是否已赋值
                     * 
                     */
                    bool TaskMaxHasBeenSet() const;

                    /**
                     * 获取<p>并发流量预估参考上限，MB/s</p>
                     * @return SyncThrottleLimit <p>并发流量预估参考上限，MB/s</p>
                     * 
                     */
                    int64_t GetSyncThrottleLimit() const;

                    /**
                     * 设置<p>并发流量预估参考上限，MB/s</p>
                     * @param _syncThrottleLimit <p>并发流量预估参考上限，MB/s</p>
                     * 
                     */
                    void SetSyncThrottleLimit(const int64_t& _syncThrottleLimit);

                    /**
                     * 判断参数 SyncThrottleLimit 是否已赋值
                     * @return SyncThrottleLimit 是否已赋值
                     * 
                     */
                    bool SyncThrottleLimitHasBeenSet() const;

                    /**
                     * 获取<p>自动扩容 true:自动扩容 false:手动扩容</p><p>默认值：true</p>
                     * @return AutoExpandFlag <p>自动扩容 true:自动扩容 false:手动扩容</p><p>默认值：true</p>
                     * 
                     */
                    bool GetAutoExpandFlag() const;

                    /**
                     * 设置<p>自动扩容 true:自动扩容 false:手动扩容</p><p>默认值：true</p>
                     * @param _autoExpandFlag <p>自动扩容 true:自动扩容 false:手动扩容</p><p>默认值：true</p>
                     * 
                     */
                    void SetAutoExpandFlag(const bool& _autoExpandFlag);

                    /**
                     * 判断参数 AutoExpandFlag 是否已赋值
                     * @return AutoExpandFlag 是否已赋值
                     * 
                     */
                    bool AutoExpandFlagHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>状态，-1创建失败，0创建中，1运行中，2删除中，3已删除，4删除失败，5暂停中，6已暂停，7暂停失败，8恢复中，9恢复失败</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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
                     * <p>Connection列表</p>
                     */
                    std::vector<Connection> m_connections;
                    bool m_connectionsHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>消息处理规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TransformParam m_transformParam;
                    bool m_transformParamHasBeenSet;

                    /**
                     * <p>数据接入ID</p>
                     */
                    std::string m_datahubId;
                    bool m_datahubIdHasBeenSet;

                    /**
                     * <p>绑定的SchemaId</p>
                     */
                    std::string m_schemaId;
                    bool m_schemaIdHasBeenSet;

                    /**
                     * <p>绑定的Schema名称</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>数据处理规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TransformsParam m_transformsParam;
                    bool m_transformsParamHasBeenSet;

                    /**
                     * <p>异常信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>任务标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>任务描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>1:正常 2:隔离中</p>
                     */
                    int64_t m_isolateStatus;
                    bool m_isolateStatusHasBeenSet;

                    /**
                     * <p>并发数</p><p>默认值：1</p>
                     */
                    int64_t m_taskMax;
                    bool m_taskMaxHasBeenSet;

                    /**
                     * <p>并发流量预估参考上限，MB/s</p>
                     */
                    int64_t m_syncThrottleLimit;
                    bool m_syncThrottleLimitHasBeenSet;

                    /**
                     * <p>自动扩容 true:自动扩容 false:手动扩容</p><p>默认值：true</p>
                     */
                    bool m_autoExpandFlag;
                    bool m_autoExpandFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTASKRES_H_
