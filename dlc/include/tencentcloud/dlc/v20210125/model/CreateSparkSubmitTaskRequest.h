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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSUBMITTASKREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSUBMITTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateSparkSubmitTask请求参数结构体
                */
                class CreateSparkSubmitTaskRequest : public AbstractModel
                {
                public:
                    CreateSparkSubmitTaskRequest();
                    ~CreateSparkSubmitTaskRequest() = default;
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
                     * 获取任务类型：当前支持1: BatchType, 2: StreamingType, 4: SQLType
                     * @return TaskType 任务类型：当前支持1: BatchType, 2: StreamingType, 4: SQLType
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置任务类型：当前支持1: BatchType, 2: StreamingType, 4: SQLType
                     * @param _taskType 任务类型：当前支持1: BatchType, 2: StreamingType, 4: SQLType
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取引擎名称，当前仅支持Spark批作业集群
                     * @return DataEngineName 引擎名称，当前仅支持Spark批作业集群
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置引擎名称，当前仅支持Spark批作业集群
                     * @param _dataEngineName 引擎名称，当前仅支持Spark批作业集群
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取指定运行的程序脚本路径，当前仅支持jar和py，对于SQLType该值设为空字符串
                     * @return PackagePath 指定运行的程序脚本路径，当前仅支持jar和py，对于SQLType该值设为空字符串
                     * 
                     */
                    std::string GetPackagePath() const;

                    /**
                     * 设置指定运行的程序脚本路径，当前仅支持jar和py，对于SQLType该值设为空字符串
                     * @param _packagePath 指定运行的程序脚本路径，当前仅支持jar和py，对于SQLType该值设为空字符串
                     * 
                     */
                    void SetPackagePath(const std::string& _packagePath);

                    /**
                     * 判断参数 PackagePath 是否已赋值
                     * @return PackagePath 是否已赋值
                     * 
                     */
                    bool PackagePathHasBeenSet() const;

                    /**
                     * 获取指定的鉴权信息
                     * @return RoleArn 指定的鉴权信息
                     * 
                     */
                    int64_t GetRoleArn() const;

                    /**
                     * 设置指定的鉴权信息
                     * @param _roleArn 指定的鉴权信息
                     * 
                     */
                    void SetRoleArn(const int64_t& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取运行任务所需资源是否继承自集群上配置资源信息，0（默认，不继承）、1（继承，当设置为该值，则任务级资源配置可不额外指定）
                     * @return IsInherit 运行任务所需资源是否继承自集群上配置资源信息，0（默认，不继承）、1（继承，当设置为该值，则任务级资源配置可不额外指定）
                     * 
                     */
                    uint64_t GetIsInherit() const;

                    /**
                     * 设置运行任务所需资源是否继承自集群上配置资源信息，0（默认，不继承）、1（继承，当设置为该值，则任务级资源配置可不额外指定）
                     * @param _isInherit 运行任务所需资源是否继承自集群上配置资源信息，0（默认，不继承）、1（继承，当设置为该值，则任务级资源配置可不额外指定）
                     * 
                     */
                    void SetIsInherit(const uint64_t& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                    /**
                     * 获取jar任务时需要指定主程序
                     * @return MainClass jar任务时需要指定主程序
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置jar任务时需要指定主程序
                     * @param _mainClass jar任务时需要指定主程序
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取当前DriverSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     * @return DriverSize 当前DriverSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置当前DriverSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     * @param _driverSize 当前DriverSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     * 
                     */
                    void SetDriverSize(const std::string& _driverSize);

                    /**
                     * 判断参数 DriverSize 是否已赋值
                     * @return DriverSize 是否已赋值
                     * 
                     */
                    bool DriverSizeHasBeenSet() const;

                    /**
                     * 获取当前ExecutorSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     * @return ExecutorSize 当前ExecutorSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置当前ExecutorSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     * @param _executorSize 当前ExecutorSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     * 
                     */
                    void SetExecutorSize(const std::string& _executorSize);

                    /**
                     * 判断参数 ExecutorSize 是否已赋值
                     * @return ExecutorSize 是否已赋值
                     * 
                     */
                    bool ExecutorSizeHasBeenSet() const;

                    /**
                     * 获取指定使用的executor数量，最小为1
                     * @return ExecutorNumbers 指定使用的executor数量，最小为1
                     * 
                     */
                    uint64_t GetExecutorNumbers() const;

                    /**
                     * 设置指定使用的executor数量，最小为1
                     * @param _executorNumbers 指定使用的executor数量，最小为1
                     * 
                     */
                    void SetExecutorNumbers(const uint64_t& _executorNumbers);

                    /**
                     * 判断参数 ExecutorNumbers 是否已赋值
                     * @return ExecutorNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorNumbersHasBeenSet() const;

                    /**
                     * 获取指定使用的executor最大数量, 当该值大于ExecutorNums则自动开启动态
                     * @return ExecutorMaxNumbers 指定使用的executor最大数量, 当该值大于ExecutorNums则自动开启动态
                     * 
                     */
                    uint64_t GetExecutorMaxNumbers() const;

                    /**
                     * 设置指定使用的executor最大数量, 当该值大于ExecutorNums则自动开启动态
                     * @param _executorMaxNumbers 指定使用的executor最大数量, 当该值大于ExecutorNums则自动开启动态
                     * 
                     */
                    void SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers);

                    /**
                     * 判断参数 ExecutorMaxNumbers 是否已赋值
                     * @return ExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取提交任务的附加配置集合，当前支持Key包含：MAINARGS：程序入口参数，空格分割(SqlType任务通过该值指定base64加密后的sql)、SPARKCONFIG：Spark配置，以换行符分隔、ENI：Eni连接信息、DEPENDENCYPACKAGEPATH：依赖的程序包（--jars、--py-files:支持py/zip/egg等归档格式），多文件以逗号分隔、DEPENDENCYFILEPATH：依赖文件资源（--files: 非jar、zip），多文件以逗号分隔、DEPENDENCYARCHIVESPATH：依赖archives资源（--archives: 支持tar.gz/tgz/tar等归档格式)，多文件以逗号分隔、MAXRETRIES：任务重试次数，非流任务默认为1、SPARKIMAGE：Spark镜像版本号，支持使用dlc镜像/用户自定的tcr镜像运行任务、SPARKIMAGEVERSION：Spark镜像版本名称，与SPARKIMAGE一一对应
                     * @return CmdArgs 提交任务的附加配置集合，当前支持Key包含：MAINARGS：程序入口参数，空格分割(SqlType任务通过该值指定base64加密后的sql)、SPARKCONFIG：Spark配置，以换行符分隔、ENI：Eni连接信息、DEPENDENCYPACKAGEPATH：依赖的程序包（--jars、--py-files:支持py/zip/egg等归档格式），多文件以逗号分隔、DEPENDENCYFILEPATH：依赖文件资源（--files: 非jar、zip），多文件以逗号分隔、DEPENDENCYARCHIVESPATH：依赖archives资源（--archives: 支持tar.gz/tgz/tar等归档格式)，多文件以逗号分隔、MAXRETRIES：任务重试次数，非流任务默认为1、SPARKIMAGE：Spark镜像版本号，支持使用dlc镜像/用户自定的tcr镜像运行任务、SPARKIMAGEVERSION：Spark镜像版本名称，与SPARKIMAGE一一对应
                     * 
                     */
                    std::vector<KVPair> GetCmdArgs() const;

                    /**
                     * 设置提交任务的附加配置集合，当前支持Key包含：MAINARGS：程序入口参数，空格分割(SqlType任务通过该值指定base64加密后的sql)、SPARKCONFIG：Spark配置，以换行符分隔、ENI：Eni连接信息、DEPENDENCYPACKAGEPATH：依赖的程序包（--jars、--py-files:支持py/zip/egg等归档格式），多文件以逗号分隔、DEPENDENCYFILEPATH：依赖文件资源（--files: 非jar、zip），多文件以逗号分隔、DEPENDENCYARCHIVESPATH：依赖archives资源（--archives: 支持tar.gz/tgz/tar等归档格式)，多文件以逗号分隔、MAXRETRIES：任务重试次数，非流任务默认为1、SPARKIMAGE：Spark镜像版本号，支持使用dlc镜像/用户自定的tcr镜像运行任务、SPARKIMAGEVERSION：Spark镜像版本名称，与SPARKIMAGE一一对应
                     * @param _cmdArgs 提交任务的附加配置集合，当前支持Key包含：MAINARGS：程序入口参数，空格分割(SqlType任务通过该值指定base64加密后的sql)、SPARKCONFIG：Spark配置，以换行符分隔、ENI：Eni连接信息、DEPENDENCYPACKAGEPATH：依赖的程序包（--jars、--py-files:支持py/zip/egg等归档格式），多文件以逗号分隔、DEPENDENCYFILEPATH：依赖文件资源（--files: 非jar、zip），多文件以逗号分隔、DEPENDENCYARCHIVESPATH：依赖archives资源（--archives: 支持tar.gz/tgz/tar等归档格式)，多文件以逗号分隔、MAXRETRIES：任务重试次数，非流任务默认为1、SPARKIMAGE：Spark镜像版本号，支持使用dlc镜像/用户自定的tcr镜像运行任务、SPARKIMAGEVERSION：Spark镜像版本名称，与SPARKIMAGE一一对应
                     * 
                     */
                    void SetCmdArgs(const std::vector<KVPair>& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     * 
                     */
                    bool CmdArgsHasBeenSet() const;

                    /**
                     * 获取任务来源信息
                     * @return SourceInfo 任务来源信息
                     * 
                     */
                    std::vector<KVPair> GetSourceInfo() const;

                    /**
                     * 设置任务来源信息
                     * @param _sourceInfo 任务来源信息
                     * 
                     */
                    void SetSourceInfo(const std::vector<KVPair>& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型：当前支持1: BatchType, 2: StreamingType, 4: SQLType
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 引擎名称，当前仅支持Spark批作业集群
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 指定运行的程序脚本路径，当前仅支持jar和py，对于SQLType该值设为空字符串
                     */
                    std::string m_packagePath;
                    bool m_packagePathHasBeenSet;

                    /**
                     * 指定的鉴权信息
                     */
                    int64_t m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * 运行任务所需资源是否继承自集群上配置资源信息，0（默认，不继承）、1（继承，当设置为该值，则任务级资源配置可不额外指定）
                     */
                    uint64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                    /**
                     * jar任务时需要指定主程序
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * 当前DriverSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * 当前ExecutorSize规格仅支持（内存型集群则使用m前缀的枚举值）: small/medium/large/xlarge/m.small/m.medium/m.large/m.xlarge
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * 指定使用的executor数量，最小为1
                     */
                    uint64_t m_executorNumbers;
                    bool m_executorNumbersHasBeenSet;

                    /**
                     * 指定使用的executor最大数量, 当该值大于ExecutorNums则自动开启动态
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                    /**
                     * 提交任务的附加配置集合，当前支持Key包含：MAINARGS：程序入口参数，空格分割(SqlType任务通过该值指定base64加密后的sql)、SPARKCONFIG：Spark配置，以换行符分隔、ENI：Eni连接信息、DEPENDENCYPACKAGEPATH：依赖的程序包（--jars、--py-files:支持py/zip/egg等归档格式），多文件以逗号分隔、DEPENDENCYFILEPATH：依赖文件资源（--files: 非jar、zip），多文件以逗号分隔、DEPENDENCYARCHIVESPATH：依赖archives资源（--archives: 支持tar.gz/tgz/tar等归档格式)，多文件以逗号分隔、MAXRETRIES：任务重试次数，非流任务默认为1、SPARKIMAGE：Spark镜像版本号，支持使用dlc镜像/用户自定的tcr镜像运行任务、SPARKIMAGEVERSION：Spark镜像版本名称，与SPARKIMAGE一一对应
                     */
                    std::vector<KVPair> m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * 任务来源信息
                     */
                    std::vector<KVPair> m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKSUBMITTASKREQUEST_H_
