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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPEDSVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPEDSVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeExtParamDsVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务类型
                */
                class TaskTypeDsVO : public AbstractModel
                {
                public:
                    TaskTypeDsVO();
                    ~TaskTypeDsVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeId 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeId 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取TypeDesc描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeDesc TypeDesc描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTypeDesc() const;

                    /**
                     * 设置TypeDesc描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeDesc TypeDesc描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeDesc(const std::string& _typeDesc);

                    /**
                     * 判断参数 TypeDesc 是否已赋值
                     * @return TypeDesc 是否已赋值
                     * 
                     */
                    bool TypeDescHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServerType 服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServerType() const;

                    /**
                     * 设置服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServerType 服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceServerType(const std::string& _sourceServerType);

                    /**
                     * 判断参数 SourceServerType 是否已赋值
                     * @return SourceServerType 是否已赋值
                     * 
                     */
                    bool SourceServerTypeHasBeenSet() const;

                    /**
                     * 获取目标服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServerType 目标服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServerType() const;

                    /**
                     * 设置目标服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServerType 目标服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetServerType(const std::string& _targetServerType);

                    /**
                     * 判断参数 TargetServerType 是否已赋值
                     * @return TargetServerType 是否已赋值
                     * 
                     */
                    bool TargetServerTypeHasBeenSet() const;

                    /**
                     * 获取RunJarName名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunJarName RunJarName名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunJarName() const;

                    /**
                     * 设置RunJarName名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runJarName RunJarName名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunJarName(const std::string& _runJarName);

                    /**
                     * 判断参数 RunJarName 是否已赋值
                     * @return RunJarName 是否已赋值
                     * 
                     */
                    bool RunJarNameHasBeenSet() const;

                    /**
                     * 获取Killable参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KillAble Killable参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetKillAble() const;

                    /**
                     * 设置Killable参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _killAble Killable参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKillAble(const int64_t& _killAble);

                    /**
                     * 判断参数 KillAble 是否已赋值
                     * @return KillAble 是否已赋值
                     * 
                     */
                    bool KillAbleHasBeenSet() const;

                    /**
                     * 获取TypeSort类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeSort TypeSort类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTypeSort() const;

                    /**
                     * 设置TypeSort类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeSort TypeSort类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeSort(const std::string& _typeSort);

                    /**
                     * 判断参数 TypeSort 是否已赋值
                     * @return TypeSort 是否已赋值
                     * 
                     */
                    bool TypeSortHasBeenSet() const;

                    /**
                     * 获取InCharge参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge InCharge参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置InCharge参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge InCharge参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取节点对应任务类型运行上限（暂时不考虑）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerParallelism 节点对应任务类型运行上限（暂时不考虑）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBrokerParallelism() const;

                    /**
                     * 设置节点对应任务类型运行上限（暂时不考虑）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerParallelism 节点对应任务类型运行上限（暂时不考虑）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrokerParallelism(const int64_t& _brokerParallelism);

                    /**
                     * 判断参数 BrokerParallelism 是否已赋值
                     * @return BrokerParallelism 是否已赋值
                     * 
                     */
                    bool BrokerParallelismHasBeenSet() const;

                    /**
                     * 获取每个任务运行上限（暂时不考虑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskParallelism 每个任务运行上限（暂时不考虑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskParallelism() const;

                    /**
                     * 设置每个任务运行上限（暂时不考虑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskParallelism 每个任务运行上限（暂时不考虑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskParallelism(const int64_t& _taskParallelism);

                    /**
                     * 判断参数 TaskParallelism 是否已赋值
                     * @return TaskParallelism 是否已赋值
                     * 
                     */
                    bool TaskParallelismHasBeenSet() const;

                    /**
                     * 获取补录和重跑上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DoRedoParallelism 补录和重跑上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDoRedoParallelism() const;

                    /**
                     * 设置补录和重跑上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _doRedoParallelism 补录和重跑上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDoRedoParallelism(const int64_t& _doRedoParallelism);

                    /**
                     * 判断参数 DoRedoParallelism 是否已赋值
                     * @return DoRedoParallelism 是否已赋值
                     * 
                     */
                    bool DoRedoParallelismHasBeenSet() const;

                    /**
                     * 获取0 为不可创建任务; >0 可创建任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DowngradePriorityTries 0 为不可创建任务; >0 可创建任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDowngradePriorityTries() const;

                    /**
                     * 设置0 为不可创建任务; >0 可创建任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downgradePriorityTries 0 为不可创建任务; >0 可创建任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDowngradePriorityTries(const int64_t& _downgradePriorityTries);

                    /**
                     * 判断参数 DowngradePriorityTries 是否已赋值
                     * @return DowngradePriorityTries 是否已赋值
                     * 
                     */
                    bool DowngradePriorityTriesHasBeenSet() const;

                    /**
                     * 获取重试等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWait 重试等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置重试等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryWait 重试等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryWait(const int64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取重试次数（在任务属性配置中设置）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryLimit 重试次数（在任务属性配置中设置）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryLimit() const;

                    /**
                     * 设置重试次数（在任务属性配置中设置）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryLimit 重试次数（在任务属性配置中设置）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryLimit(const int64_t& _retryLimit);

                    /**
                     * 判断参数 RetryLimit 是否已赋值
                     * @return RetryLimit 是否已赋值
                     * 
                     */
                    bool RetryLimitHasBeenSet() const;

                    /**
                     * 获取DefaultAliveWait参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultAliveWait DefaultAliveWait参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDefaultAliveWait() const;

                    /**
                     * 设置DefaultAliveWait参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultAliveWait DefaultAliveWait参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultAliveWait(const int64_t& _defaultAliveWait);

                    /**
                     * 判断参数 DefaultAliveWait 是否已赋值
                     * @return DefaultAliveWait 是否已赋值
                     * 
                     */
                    bool DefaultAliveWaitHasBeenSet() const;

                    /**
                     * 获取PollingSeconds秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PollingSeconds PollingSeconds秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPollingSeconds() const;

                    /**
                     * 设置PollingSeconds秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pollingSeconds PollingSeconds秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPollingSeconds(const int64_t& _pollingSeconds);

                    /**
                     * 判断参数 PollingSeconds 是否已赋值
                     * @return PollingSeconds 是否已赋值
                     * 
                     */
                    bool PollingSecondsHasBeenSet() const;

                    /**
                     * 获取参数列表xml
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamList 参数列表xml
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamList() const;

                    /**
                     * 设置参数列表xml
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramList 参数列表xml
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamList(const std::string& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取TaskTypeExts参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeExtension TaskTypeExts参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskTypeExtParamDsVO> GetTaskTypeExtension() const;

                    /**
                     * 设置TaskTypeExts参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeExtension TaskTypeExts参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeExtension(const std::vector<TaskTypeExtParamDsVO>& _taskTypeExtension);

                    /**
                     * 判断参数 TaskTypeExtension 是否已赋值
                     * @return TaskTypeExtension 是否已赋值
                     * 
                     */
                    bool TaskTypeExtensionHasBeenSet() const;

                    /**
                     * 获取对应文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType 对应文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置对应文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileType 对应文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取是否选择脚本路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectFilePath 是否选择脚本路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSelectFilePath() const;

                    /**
                     * 设置是否选择脚本路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selectFilePath 是否选择脚本路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSelectFilePath(const bool& _selectFilePath);

                    /**
                     * 判断参数 SelectFilePath 是否已赋值
                     * @return SelectFilePath 是否已赋值
                     * 
                     */
                    bool SelectFilePathHasBeenSet() const;

                    /**
                     * 获取classpath是否要排除掉common-lib，默认是0不排除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludeCommonLib classpath是否要排除掉common-lib，默认是0不排除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetExcludeCommonLib() const;

                    /**
                     * 设置classpath是否要排除掉common-lib，默认是0不排除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludeCommonLib classpath是否要排除掉common-lib，默认是0不排除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcludeCommonLib(const bool& _excludeCommonLib);

                    /**
                     * 判断参数 ExcludeCommonLib 是否已赋值
                     * @return ExcludeCommonLib 是否已赋值
                     * 
                     */
                    bool ExcludeCommonLibHasBeenSet() const;

                    /**
                     * 获取runner任务完成后需要触发的hook
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostHooks runner任务完成后需要触发的hook
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPostHooks() const;

                    /**
                     * 设置runner任务完成后需要触发的hook
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postHooks runner任务完成后需要触发的hook
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostHooks(const std::string& _postHooks);

                    /**
                     * 判断参数 PostHooks 是否已赋值
                     * @return PostHooks 是否已赋值
                     * 
                     */
                    bool PostHooksHasBeenSet() const;

                private:

                    /**
                     * 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * TypeDesc描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_typeDesc;
                    bool m_typeDescHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServerType;
                    bool m_sourceServerTypeHasBeenSet;

                    /**
                     * 目标服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServerType;
                    bool m_targetServerTypeHasBeenSet;

                    /**
                     * RunJarName名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runJarName;
                    bool m_runJarNameHasBeenSet;

                    /**
                     * Killable参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_killAble;
                    bool m_killAbleHasBeenSet;

                    /**
                     * TypeSort类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_typeSort;
                    bool m_typeSortHasBeenSet;

                    /**
                     * InCharge参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 节点对应任务类型运行上限（暂时不考虑）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_brokerParallelism;
                    bool m_brokerParallelismHasBeenSet;

                    /**
                     * 每个任务运行上限（暂时不考虑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskParallelism;
                    bool m_taskParallelismHasBeenSet;

                    /**
                     * 补录和重跑上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_doRedoParallelism;
                    bool m_doRedoParallelismHasBeenSet;

                    /**
                     * 0 为不可创建任务; >0 可创建任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_downgradePriorityTries;
                    bool m_downgradePriorityTriesHasBeenSet;

                    /**
                     * 重试等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * 重试次数（在任务属性配置中设置）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryLimit;
                    bool m_retryLimitHasBeenSet;

                    /**
                     * DefaultAliveWait参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_defaultAliveWait;
                    bool m_defaultAliveWaitHasBeenSet;

                    /**
                     * PollingSeconds秒数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pollingSeconds;
                    bool m_pollingSecondsHasBeenSet;

                    /**
                     * 参数列表xml
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * TaskTypeExts参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskTypeExtParamDsVO> m_taskTypeExtension;
                    bool m_taskTypeExtensionHasBeenSet;

                    /**
                     * 对应文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 是否选择脚本路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_selectFilePath;
                    bool m_selectFilePathHasBeenSet;

                    /**
                     * classpath是否要排除掉common-lib，默认是0不排除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_excludeCommonLib;
                    bool m_excludeCommonLibHasBeenSet;

                    /**
                     * runner任务完成后需要触发的hook
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_postHooks;
                    bool m_postHooksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPEDSVO_H_
