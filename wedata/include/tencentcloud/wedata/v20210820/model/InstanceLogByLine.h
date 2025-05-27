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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGBYLINE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGBYLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/JobLogErrorTip.h>
#include <tencentcloud/wedata/v20210820/model/ExtensionInfoVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 日志信息
                */
                class InstanceLogByLine : public AbstractModel
                {
                public:
                    InstanceLogByLine();
                    ~InstanceLogByLine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 返回行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置返回行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 返回行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::vector<std::string>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取文件是否读取完
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Over 文件是否读取完
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOver() const;

                    /**
                     * 设置文件是否读取完
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _over 文件是否读取完
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOver(const bool& _over);

                    /**
                     * 判断参数 Over 是否已赋值
                     * @return Over 是否已赋值
                     * 
                     */
                    bool OverHasBeenSet() const;

                    /**
                     * 获取实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceState 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceState 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取执行机类型 0:老执行机loader 1:新执行机woker
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkerType 执行机类型 0:老执行机loader 1:新执行机woker
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWorkerType() const;

                    /**
                     * 设置执行机类型 0:老执行机loader 1:新执行机woker
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workerType 执行机类型 0:老执行机loader 1:新执行机woker
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkerType(const int64_t& _workerType);

                    /**
                     * 判断参数 WorkerType 是否已赋值
                     * @return WorkerType 是否已赋值
                     * 
                     */
                    bool WorkerTypeHasBeenSet() const;

                    /**
                     * 获取日志sql错误信息，包含行列信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobLogErrorTip 日志sql错误信息，包含行列信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JobLogErrorTip GetJobLogErrorTip() const;

                    /**
                     * 设置日志sql错误信息，包含行列信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobLogErrorTip 日志sql错误信息，包含行列信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobLogErrorTip(const JobLogErrorTip& _jobLogErrorTip);

                    /**
                     * 判断参数 JobLogErrorTip 是否已赋值
                     * @return JobLogErrorTip 是否已赋值
                     * 
                     */
                    bool JobLogErrorTipHasBeenSet() const;

                    /**
                     * 获取执行实例的扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionExtendedProps 执行实例的扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExtensionInfoVO> GetExecutionExtendedProps() const;

                    /**
                     * 设置执行实例的扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionExtendedProps 执行实例的扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionExtendedProps(const std::vector<ExtensionInfoVO>& _executionExtendedProps);

                    /**
                     * 判断参数 ExecutionExtendedProps 是否已赋值
                     * @return ExecutionExtendedProps 是否已赋值
                     * 
                     */
                    bool ExecutionExtendedPropsHasBeenSet() const;

                    /**
                     * 获取如果queryFileFlag为1，则ext返回当前页数据的结束行信息，下一页把这个extInfo透传过来
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtInfo 如果queryFileFlag为1，则ext返回当前页数据的结束行信息，下一页把这个extInfo透传过来
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置如果queryFileFlag为1，则ext返回当前页数据的结束行信息，下一页把这个extInfo透传过来
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extInfo 如果queryFileFlag为1，则ext返回当前页数据的结束行信息，下一页把这个extInfo透传过来
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * 返回行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 文件是否读取完
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_over;
                    bool m_overHasBeenSet;

                    /**
                     * 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 执行机类型 0:老执行机loader 1:新执行机woker
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_workerType;
                    bool m_workerTypeHasBeenSet;

                    /**
                     * 日志sql错误信息，包含行列信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JobLogErrorTip m_jobLogErrorTip;
                    bool m_jobLogErrorTipHasBeenSet;

                    /**
                     * 执行实例的扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExtensionInfoVO> m_executionExtendedProps;
                    bool m_executionExtendedPropsHasBeenSet;

                    /**
                     * 如果queryFileFlag为1，则ext返回当前页数据的结束行信息，下一页把这个extInfo透传过来
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGBYLINE_H_
