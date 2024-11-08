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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AttributeItemDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实例日志简述信息
                */
                class InstanceLogInfo : public AbstractModel
                {
                public:
                    InstanceLogInfo();
                    ~InstanceLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurRunDate 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curRunDate 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tries 尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTries() const;

                    /**
                     * 设置尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tries 尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTries(const std::string& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate 日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdate 日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdate(const std::string& _lastUpdate);

                    /**
                     * 判断参数 LastUpdate 是否已赋值
                     * @return LastUpdate 是否已赋值
                     * 
                     */
                    bool LastUpdateHasBeenSet() const;

                    /**
                     * 获取日志所在节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerIp 日志所在节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置日志所在节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerIp 日志所在节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件名 含全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginFileName 文件名 含全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置文件名 含全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originFileName 文件名 含全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取日志创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 日志创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置日志创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 日志创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例日志类型, run: 运行; kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceLogType 实例日志类型, run: 运行; kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceLogType() const;

                    /**
                     * 设置实例日志类型, run: 运行; kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceLogType 实例日志类型, run: 运行; kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceLogType(const std::string& _instanceLogType);

                    /**
                     * 判断参数 InstanceLogType 是否已赋值
                     * @return InstanceLogType 是否已赋值
                     * 
                     */
                    bool InstanceLogTypeHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostTime 运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costTime 运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCostTime(const std::string& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取实例状态 COMPLETED 完成 FAILED失败重试 EXPIRED失败 RUNNING运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus 实例状态 COMPLETED 完成 FAILED失败重试 EXPIRED失败 RUNNING运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态 COMPLETED 完成 FAILED失败重试 EXPIRED失败 RUNNING运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStatus 实例状态 COMPLETED 完成 FAILED失败重试 EXPIRED失败 RUNNING运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例代码文件，为空表示对应代码文件不存在，可能是因为执行机未升级/对应类型任务无代码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeFileName 实例代码文件，为空表示对应代码文件不存在，可能是因为执行机未升级/对应类型任务无代码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeFileName() const;

                    /**
                     * 设置实例代码文件，为空表示对应代码文件不存在，可能是因为执行机未升级/对应类型任务无代码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeFileName 实例代码文件，为空表示对应代码文件不存在，可能是因为执行机未升级/对应类型任务无代码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeFileName(const std::string& _codeFileName);

                    /**
                     * 判断参数 CodeFileName 是否已赋值
                     * @return CodeFileName 是否已赋值
                     * 
                     */
                    bool CodeFileNameHasBeenSet() const;

                    /**
                     * 获取扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtensionInfo 扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttributeItemDTO> GetExtensionInfo() const;

                    /**
                     * 设置扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extensionInfo 扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtensionInfo(const std::vector<AttributeItemDTO>& _extensionInfo);

                    /**
                     * 判断参数 ExtensionInfo 是否已赋值
                     * @return ExtensionInfo 是否已赋值
                     * 
                     */
                    bool ExtensionInfoHasBeenSet() const;

                    /**
                     * 获取统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionJobId 统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionJobId 统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionJobId(const std::string& _executionJobId);

                    /**
                     * 判断参数 ExecutionJobId 是否已赋值
                     * @return ExecutionJobId 是否已赋值
                     * 
                     */
                    bool ExecutionJobIdHasBeenSet() const;

                private:

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * 日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * 日志所在节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件名 含全路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * 日志创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例日志类型, run: 运行; kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceLogType;
                    bool m_instanceLogTypeHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 实例状态 COMPLETED 完成 FAILED失败重试 EXPIRED失败 RUNNING运行中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例代码文件，为空表示对应代码文件不存在，可能是因为执行机未升级/对应类型任务无代码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeFileName;
                    bool m_codeFileNameHasBeenSet;

                    /**
                     * 扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttributeItemDTO> m_extensionInfo;
                    bool m_extensionInfoHasBeenSet;

                    /**
                     * 统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFO_H_
