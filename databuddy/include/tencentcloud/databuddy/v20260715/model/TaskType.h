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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/TaskTypeNotebookExt.h>
#include <tencentcloud/databuddy/v20260715/model/TaskTypeProperty.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ### `TaskTypePropertyList` 中 `TaskTypeProperty` 针对不同任务类型需要填写不同的 key 和 value；

### 1. NOTEBOOK 任务类型

#### 属性配置

| 属性键       | 属性名称          | 描述                               | 是否必需                |
| ------------ | ----------------- | ---------------------------------- | ----------------------- |
| Source       | 来源              | 只支持填2或5,来源 2:GIT, 5:工作空间    | 是                      |
| NotebookPath | Notebook 相对路径 | Source为5时，需从（ListFiles）获取 | Source 为 2、5 时，必填 |

### 2. DATA_INTEGRATION 任务类型

#### 属性配置

| 属性键                | 属性名称             | 描述                                    | 是否必需 |
| --------------------- | -------------------- | --------------------------------------- | -------- |
| Source                | 来源                 | 必填:4,表示来源为COS                    | 是       |
| TemplatePath          | 数据接入任务配置路径 | 需从（ListBatchIngestionTasks）接口获取 | 是       |
| DataIntegrationTaskId | 数据接入任务ID       | 需从（ListBatchIngestionTasks）接口获取 | 是       |

### 3. RUN_WORKFLOW 任务类型

#### 属性配置

| 属性键     | 属性名称   | 描述                          | 是否必需 |
| ---------- | ---------- | ----------------------------- | -------- |
| WorkflowId | 选择工作流 | 需从（ListWorkflows）接口获取 | 是       |

### 4. SQL 任务类型

#### 属性配置

| 属性键          | 属性名称    | 描述                                          | 是否必需             |
| --------------- | ----------- | --------------------------------------------- | -------------------- |
| Source          | 来源        | 只支持填2或5,来源 2:GIT, 5:工作空间               | 是                   |
| SqlPath         | SQL脚本路径 | SQL脚本路径                                   | Source 为 2 时，必填 |
| CodeFileName    | 文件名称    | Source为5时，需从（ListReleasedQueries）接口获取 | 否                |
| CodeFileId      | 文件ID      | Source为5时，需从（ListReleasedQueries）接口获取 | Source 为 5 时，必填 |
| CodeFileVersion | 文件版本    | Source为5时，需从（ListReleasedQueries）接口获取 | 否                |

### 5. PYTHON 任务类型

#### 属性配置

| 属性键     | 属性名称       | 描述                                   | 是否必需 |
| ---------- | -------------- | -------------------------------------- | -------- |
| Source     | 来源           | 只支持填2或5,来源 2:GIT, 5:工作空间        | 是       |
| SourcePath | Python脚本路径 | Source为5时，需从（ListFiles）接口获取 | 是       |

### 6. DATA_QUALITY（质量监控）任务类型

#### 属性配置

| 属性键         | 属性名称         | 描述                                          | 是否必需 |
| -------------- | ---------------- | --------------------------------------------- | -------- |
| Source         | 来源             | 必填:4,表示来源为COS                          | 是       |
| TemplatePath   | 质量监控配置路径 | 需从（ListDataQualityTaskSummaries）接口获取  | 是       |
| SourceUniqueId | 质量监控ID       | 需从（ListDataQualityTaskSummaries）接口获取  | 是       |
| ExecutionType  | 执行类型         | 必填:SQL                                      | 是       |
| AfterAspect    | 质量任务后置切面 | 需从（ListDataQualityTaskSummaries）接口获取  | 否       |
| BeforeAspect   | 质量任务前置切面 | 需从（ListDataQualityTaskSummaries）接口获取  | 否       |

### 7. IF_ELSE 任务类型

#### 属性配置

| 属性键     | 属性名称 | 描述            | 是否必需 |
| ---------- | -------- | --------------- | -------- |
| Conditions | 条件列表 | IF-ELSE条件配置 | 是       |

### 8. FOR_EACH 任务类型

#### 属性配置

| 属性键         | 属性名称     | 描述                               | 是否必需 |
| -------------- | ------------ | ---------------------------------- | -------- |
| MaxConcurrency | 最大并发数   | 最大并发数，默认为1                | 是       |
| MaxIterations  | 最大迭代次数 | 最大迭代次数，默认1000             | 是       |
| LoopDataArray  | 循环参数     | JSON格式的数组，或 {{}} 包裹的变量 | 是       |

### 9. RAY_JOB（Ray作业）任务类型

#### 属性配置

| 属性键         | 属性名称             | 描述                               | 是否必需 |
| -------------- | -------------------- | ---------------------------------- | -------- |
| RunMode        | 运行方式             | 运行方式，取值：SERVERLESS（按需拉起集群）/ DEDICATED（提交到指定集群）。默认 DEDICATED | 是 |
| Entrypoint     | 入口指令             | 入口指令                           | 是       |
| JobConfig      | 任务配置             | 如存储配置 + 计算环境。传值请参考前端页面保存Ray作业任务时调用UpdateWorkflow。Image请调用DLC接口ListImages接口Url字段获取 | RunMode 为 SERVERLESS 时，必填 |
| ClusterId      | Ray 集群             | 需从所选计算资源下已配置的 Ray 集群（引擎）列表中选择，可通过计算资源相关接口获取 | RunMode 为 DEDICATED 时，必填 |
| Source         | 任务来源             | 任务来源，取值：1（本地文件）/ 5（工作空间） | 是 |
| JobPackage     | 任务来源文件地址     | 任务来源路径：Source 为 1 时存本地上传文件的 COS 地址（支持 .zip / .py 文件）；Source 为 5 时存所选工作空间文件/文件夹路径 | 是 |
| JobPackageName | 任务来源本地文件名   | 任务来源本地文件名                 | Source 为 1 时，必填 |
| CodeFileId     | 代码文件ID           | Source 为 5 时，需从工作空间文件选择组件获取所选文件/文件夹对应的ID | Source 为 5 时，必填 |
| WorkspaceEntryType | 工作空间入口类型 | Source 为 5 时，所选工作空间条目的类型：FILE（文件）/ FOLDER（文件夹），由前端选择器随选择目标自动写入 | Source 为 5 时，必填 |

### 10. DEPENDENCY_SENSOR（依赖检查）任务类型

#### 属性配置

| 属性键                      | 属性名称       | 描述                                                       | 是否必需 |
| --------------------------- | -------------- | ---------------------------------------------------------- | -------- |
| checkIntervalSeconds        | 检查间隔（秒） | 轮询检查间隔，数字字符串，取值 5~600，缺省默认 10          | 否       |
| workflowDependencyCondition | 依赖工作流配置 | 依赖条件 JSON 字符串，结构见下方说明                       | 是       |

> 说明：
> 1. 属性键大小写敏感，仅允许以上两个 key，不允许重复或出现未知 key。
> 2. 该任务类型不支持 `RuntimePropertyList`，传入会报错。

#### workflowDependencyCondition 结构

```json
{
  "condition": {
    "dependencies": [
      {
        "workflowId": "被依赖工作流ID",
        "workflowName": "工作流名称",
        "taskIds": [],
        "timeOffsetExpression": "${yyyyMMdd-1d}",
        "expectedState": "SUCCESS",
        "logicalRelWithPre": "and"
      }
    ]
  }
}
```

| 字段                 | 是否必需               | 描述                                                                 |
| -------------------- | ---------------------- | -------------------------------------------------------------------- |
| dependencies         | 是                     | 依赖项列表，1~20 项                                                  |
| workflowId           | 是                     | 被依赖工作流 ID，不能等于当前工作流自身 ID                           |
| workflowName         | 否                     | 工作流名称快照，仅用于回显，读取时以最新名称覆盖                     |
| taskIds              | 否                     | 本期必须为空数组（表示依赖整个工作流），传非空值会被忽略             |
| timeOffsetExpression | 是                     | 时间偏移表达式，格式见下                                             |
| expectedState        | 是                     | 期望上游状态，本期仅支持 `SUCCESS`                                   |
| logicalRelWithPre    | 首项可空，其余项必填   | 与前一项的逻辑关系，本期仅支持 `and`                                 |

**timeOffsetExpression 格式**：`${基础格式[±N单位]}`

- 基础格式：`yyyy` / `yyyyMM` / `yyyyMMdd` / `yyyyMMddHH` / `yyyyMMddHHmm` / `yyyyMMddHHmmss`
- 偏移单位（大小写敏感）：`y`（年）/ `M`（月）/ `w`（周）/ `d`（天）/ `H`（时）/ `m`（分）/ `s`（秒）
- 不允许包含空格
- 示例：`${yyyyMMdd}`、`${yyyyMMdd-1d}`、`${yyyyMM+1y}`

### 11. JAR（Spark Jar）任务类型

#### 属性配置

| 属性键       | 属性名称     | 描述                                                                                         | 是否必需 |
| ------------ | ------------ | -------------------------------------------------------------------------------------------- | -------- |
| Source       | 来源         | 只支持填 5，表示来源为工作空间                                                               | 是       |
| SourcePath   | Jar 文件路径 | 工作空间中 Jar 文件的完整路径，必须以 `.jar` 结尾（不区分大小写）                            | 是       |
| MainClass    | 主类         | 作业入口类全限定名，如 `com.example.JobMain`，长度 1~128                                     | 是       |
| ProgramArgs  | 程序参数     | 传给 main 方法的参数，单个字符串，多个参数以空格分隔，长度不超过 65536，支持 `${}` 参数      | 否       |
| EngineConfig | 引擎参数     | Spark 参数（SparkConfig，最多 100 项，key 唯一）及数据访问策略（RoleArn，数字字符串）        | 否       |

> 说明：
> 1. 仅支持作业集群（DATA_COMPUTE），不支持交互式集群。
> 2. 资源配置通过 `RuntimePropertyList` 传入，参见下方 RuntimePropertyList 说明（ResourceMode、ExecutorCU 等）。


### RuntimePropertyList
<p>任务运行参数列表，用于配置任务运行时的计算资源，与 TaskTypePropertyList（任务扩展属性）区分：TaskTypePropertyList 承载任务自身的业务配置（如脚本来源、路径等），RuntimePropertyList 承载任务运行时的资源配置（如资源模式、CU规格、Executor数量等）。</p>
<p>主要适用于需要配置计算资源的任务类型（如 NOTEBOOK、PYTHON）。</p>
<p>具体可填写的属性键以任务类型属性配置为准，可通过 ListWorkflowTaskTypeProperties 接口获取（propertyType 为 RUNTIME 的属性项）。常见运行参数键说明：</p>

| 属性键 | 属性名称 | 描述 | 必填性（联动条件满足时） | 默认值 |
| ---------- | -------------- | ---------------------------------- | -------- | -------- |
| ResourceMode | 资源模式 | 1：分布式；2：单节点 | 是 | 1 |
| ConfigType | 配置类型 | DEFAULT：默认配置；CUSTOM：自定义配置 | 是 | DEFAULT |
| ExecutorAllocation | Executor分配模式 | DYNAMIC：动态分配；FIXED：固定分配 | 是（分布式且自定义配置时） | DYNAMIC |
| ExecutorMinNum | Executor最小个数 | 正整数 | 是（动态分配时） | 1 |
| ExecutorMaxNum | Executor最大个数 | 正整数 | 是（动态分配时） | 1 |
| ExecutorFixedNum | Executor固定个数 | 正整数 | 否（固定分配时） | - |
| ExecutorCU | Executor资源规格 | small / medium / large / xlarge / 4xlarge | 否（分布式且自定义配置时） | - |
| DriverCU | Driver资源规格 | small / medium / large / xlarge / 4xlarge | 否（分布式且自定义配置时 或者单节点时） | - |
| ExecutorGPU | Executor GPU数量 | 0表示不使用GPU | 否（分布式且自定义配置时） | - |
| DriverGPU | Driver GPU数量 | 0表示不使用GPU | 否（分布式且自定义配置时） | - |
| Style | 配置样式 | UI / JSON | 是（自定义配置时） | UI |

<p>补充说明：</p>
<p>1. "必填性"指属性配置中的必填标记，仅当属性联动条件（如 ResourceMode=1 且 ConfigType=CUSTOM）满足时才触发必填校验；</p>
<p>2. ConfigType 为 DEFAULT（默认配置）时，需调用 ListComputeResourceOptions 接口获取所选计算资源的默认规格值，并将其填充到运行参数（ExecutorCU、DriverCU、ExecutorMinNum、ExecutorMaxNum 等）后传入；ConfigType 为 CUSTOM（自定义配置）时，运行参数由调用方自行指定；</p>
                */
                class TaskType : public AbstractModel
                {
                public:
                    TaskType();
                    ~TaskType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务类型：SQL：用于执行SQL查询和数据处理操作；DATA_INTEGRATION：用于离线数据接入操作；NOTEBOOK：用于运行Notebook脚本；RUN_WORKFLOW：用于执行嵌套工作流；PYTHON：用于运行Python脚本；RAY_JOB：用于运行Ray作业；DATA_QUALITY：用于数据质量监控；IF_ELSE：用于条件分支判断；FOR_EACH：用于循环遍历执行；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeName <p>任务类型：SQL：用于执行SQL查询和数据处理操作；DATA_INTEGRATION：用于离线数据接入操作；NOTEBOOK：用于运行Notebook脚本；RUN_WORKFLOW：用于执行嵌套工作流；PYTHON：用于运行Python脚本；RAY_JOB：用于运行Ray作业；DATA_QUALITY：用于数据质量监控；IF_ELSE：用于条件分支判断；FOR_EACH：用于循环遍历执行；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeName() const;

                    /**
                     * 设置<p>任务类型：SQL：用于执行SQL查询和数据处理操作；DATA_INTEGRATION：用于离线数据接入操作；NOTEBOOK：用于运行Notebook脚本；RUN_WORKFLOW：用于执行嵌套工作流；PYTHON：用于运行Python脚本；RAY_JOB：用于运行Ray作业；DATA_QUALITY：用于数据质量监控；IF_ELSE：用于条件分支判断；FOR_EACH：用于循环遍历执行；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeName <p>任务类型：SQL：用于执行SQL查询和数据处理操作；DATA_INTEGRATION：用于离线数据接入操作；NOTEBOOK：用于运行Notebook脚本；RUN_WORKFLOW：用于执行嵌套工作流；PYTHON：用于运行Python脚本；RAY_JOB：用于运行Ray作业；DATA_QUALITY：用于数据质量监控；IF_ELSE：用于条件分支判断；FOR_EACH：用于循环遍历执行；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeName(const std::string& _taskTypeName);

                    /**
                     * 判断参数 TaskTypeName 是否已赋值
                     * @return TaskTypeName 是否已赋值
                     * 
                     */
                    bool TaskTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>Notebook 类型扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notebook <p>Notebook 类型扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    TaskTypeNotebookExt GetNotebook() const;

                    /**
                     * 设置<p>Notebook 类型扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notebook <p>Notebook 类型扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetNotebook(const TaskTypeNotebookExt& _notebook);

                    /**
                     * 判断参数 Notebook 是否已赋值
                     * @return Notebook 是否已赋值
                     * @deprecated
                     */
                    bool NotebookHasBeenSet() const;

                    /**
                     * 获取<p>任务扩展属性列表，具体填写参考TaskType.TaskPropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypePropertyList <p>任务扩展属性列表，具体填写参考TaskType.TaskPropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskTypeProperty> GetTaskTypePropertyList() const;

                    /**
                     * 设置<p>任务扩展属性列表，具体填写参考TaskType.TaskPropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypePropertyList <p>任务扩展属性列表，具体填写参考TaskType.TaskPropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypePropertyList(const std::vector<TaskTypeProperty>& _taskTypePropertyList);

                    /**
                     * 判断参数 TaskTypePropertyList 是否已赋值
                     * @return TaskTypePropertyList 是否已赋值
                     * 
                     */
                    bool TaskTypePropertyListHasBeenSet() const;

                    /**
                     * 获取<p>运行时属性列表，具体填写参考TaskType.RuntimePropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimePropertyList <p>运行时属性列表，具体填写参考TaskType.RuntimePropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskTypeProperty> GetRuntimePropertyList() const;

                    /**
                     * 设置<p>运行时属性列表，具体填写参考TaskType.RuntimePropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimePropertyList <p>运行时属性列表，具体填写参考TaskType.RuntimePropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntimePropertyList(const std::vector<TaskTypeProperty>& _runtimePropertyList);

                    /**
                     * 判断参数 RuntimePropertyList 是否已赋值
                     * @return RuntimePropertyList 是否已赋值
                     * 
                     */
                    bool RuntimePropertyListHasBeenSet() const;

                private:

                    /**
                     * <p>任务类型：SQL：用于执行SQL查询和数据处理操作；DATA_INTEGRATION：用于离线数据接入操作；NOTEBOOK：用于运行Notebook脚本；RUN_WORKFLOW：用于执行嵌套工作流；PYTHON：用于运行Python脚本；RAY_JOB：用于运行Ray作业；DATA_QUALITY：用于数据质量监控；IF_ELSE：用于条件分支判断；FOR_EACH：用于循环遍历执行；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeName;
                    bool m_taskTypeNameHasBeenSet;

                    /**
                     * <p>Notebook 类型扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeNotebookExt m_notebook;
                    bool m_notebookHasBeenSet;

                    /**
                     * <p>任务扩展属性列表，具体填写参考TaskType.TaskPropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskTypeProperty> m_taskTypePropertyList;
                    bool m_taskTypePropertyListHasBeenSet;

                    /**
                     * <p>运行时属性列表，具体填写参考TaskType.RuntimePropertyList描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskTypeProperty> m_runtimePropertyList;
                    bool m_runtimePropertyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPE_H_
