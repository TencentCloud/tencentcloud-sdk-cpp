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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPFORTDLCREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPFORTDLCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DependencyPackage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ModifySparkAppForTDLC请求参数结构体
                */
                class ModifySparkAppForTDLCRequest : public AbstractModel
                {
                public:
                    ModifySparkAppForTDLCRequest();
                    ~ModifySparkAppForTDLCRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>spark作业名</p>
                     * @return AppName <p>spark作业名</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>spark作业名</p>
                     * @param _appName <p>spark作业名</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>spark作业类型，1代表spark jar作业，2代表spark streaming作业</p>
                     * @return AppType <p>spark作业类型，1代表spark jar作业，2代表spark streaming作业</p>
                     * 
                     */
                    int64_t GetAppType() const;

                    /**
                     * 设置<p>spark作业类型，1代表spark jar作业，2代表spark streaming作业</p>
                     * @param _appType <p>spark作业类型，1代表spark jar作业，2代表spark streaming作业</p>
                     * 
                     */
                    void SetAppType(const int64_t& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取<p>执行spark作业的数据引擎名称</p>
                     * @return DataEngine <p>执行spark作业的数据引擎名称</p>
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置<p>执行spark作业的数据引擎名称</p>
                     * @param _dataEngine <p>执行spark作业的数据引擎名称</p>
                     * 
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     * 
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取<p>spark作业程序包文件路径</p>
                     * @return AppFile <p>spark作业程序包文件路径</p>
                     * 
                     */
                    std::string GetAppFile() const;

                    /**
                     * 设置<p>spark作业程序包文件路径</p>
                     * @param _appFile <p>spark作业程序包文件路径</p>
                     * 
                     */
                    void SetAppFile(const std::string& _appFile);

                    /**
                     * 判断参数 AppFile 是否已赋值
                     * @return AppFile 是否已赋值
                     * 
                     */
                    bool AppFileHasBeenSet() const;

                    /**
                     * 获取<p>数据访问策略，CAM Role arn</p>
                     * @return RoleArn <p>数据访问策略，CAM Role arn</p>
                     * 
                     */
                    int64_t GetRoleArn() const;

                    /**
                     * 设置<p>数据访问策略，CAM Role arn</p>
                     * @param _roleArn <p>数据访问策略，CAM Role arn</p>
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
                     * 获取<p>指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     * @return AppDriverSize <p>指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     * 
                     */
                    std::string GetAppDriverSize() const;

                    /**
                     * 设置<p>指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     * @param _appDriverSize <p>指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     * 
                     */
                    void SetAppDriverSize(const std::string& _appDriverSize);

                    /**
                     * 判断参数 AppDriverSize 是否已赋值
                     * @return AppDriverSize 是否已赋值
                     * 
                     */
                    bool AppDriverSizeHasBeenSet() const;

                    /**
                     * 获取<p>指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     * @return AppExecutorSize <p>指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     * 
                     */
                    std::string GetAppExecutorSize() const;

                    /**
                     * 设置<p>指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     * @param _appExecutorSize <p>指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     * 
                     */
                    void SetAppExecutorSize(const std::string& _appExecutorSize);

                    /**
                     * 判断参数 AppExecutorSize 是否已赋值
                     * @return AppExecutorSize 是否已赋值
                     * 
                     */
                    bool AppExecutorSizeHasBeenSet() const;

                    /**
                     * 获取<p>spark作业executor个数</p>
                     * @return AppExecutorNums <p>spark作业executor个数</p>
                     * 
                     */
                    int64_t GetAppExecutorNums() const;

                    /**
                     * 设置<p>spark作业executor个数</p>
                     * @param _appExecutorNums <p>spark作业executor个数</p>
                     * 
                     */
                    void SetAppExecutorNums(const int64_t& _appExecutorNums);

                    /**
                     * 判断参数 AppExecutorNums 是否已赋值
                     * @return AppExecutorNums 是否已赋值
                     * 
                     */
                    bool AppExecutorNumsHasBeenSet() const;

                    /**
                     * 获取<p>spark作业Id</p>
                     * @return SparkAppId <p>spark作业Id</p>
                     * 
                     */
                    std::string GetSparkAppId() const;

                    /**
                     * 设置<p>spark作业Id</p>
                     * @param _sparkAppId <p>spark作业Id</p>
                     * 
                     */
                    void SetSparkAppId(const std::string& _sparkAppId);

                    /**
                     * 判断参数 SparkAppId 是否已赋值
                     * @return SparkAppId 是否已赋值
                     * 
                     */
                    bool SparkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>该字段已下线，请使用字段Datasource</p>
                     * @return Eni <p>该字段已下线，请使用字段Datasource</p>
                     * 
                     */
                    std::string GetEni() const;

                    /**
                     * 设置<p>该字段已下线，请使用字段Datasource</p>
                     * @param _eni <p>该字段已下线，请使用字段Datasource</p>
                     * 
                     */
                    void SetEni(const std::string& _eni);

                    /**
                     * 判断参数 Eni 是否已赋值
                     * @return Eni 是否已赋值
                     * 
                     */
                    bool EniHasBeenSet() const;

                    /**
                     * 获取<p>spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @return IsLocal <p>spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    std::string GetIsLocal() const;

                    /**
                     * 设置<p>spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @param _isLocal <p>spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    void SetIsLocal(const std::string& _isLocal);

                    /**
                     * 判断参数 IsLocal 是否已赋值
                     * @return IsLocal 是否已赋值
                     * 
                     */
                    bool IsLocalHasBeenSet() const;

                    /**
                     * 获取<p>spark作业主类</p>
                     * @return MainClass <p>spark作业主类</p>
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置<p>spark作业主类</p>
                     * @param _mainClass <p>spark作业主类</p>
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
                     * 获取<p>spark配置，以换行符分隔</p>
                     * @return AppConf <p>spark配置，以换行符分隔</p>
                     * 
                     */
                    std::string GetAppConf() const;

                    /**
                     * 设置<p>spark配置，以换行符分隔</p>
                     * @param _appConf <p>spark配置，以换行符分隔</p>
                     * 
                     */
                    void SetAppConf(const std::string& _appConf);

                    /**
                     * 判断参数 AppConf 是否已赋值
                     * @return AppConf 是否已赋值
                     * 
                     */
                    bool AppConfHasBeenSet() const;

                    /**
                     * 获取<p>spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @return IsLocalJars <p>spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    std::string GetIsLocalJars() const;

                    /**
                     * 设置<p>spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @param _isLocalJars <p>spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    void SetIsLocalJars(const std::string& _isLocalJars);

                    /**
                     * 判断参数 IsLocalJars 是否已赋值
                     * @return IsLocalJars 是否已赋值
                     * 
                     */
                    bool IsLocalJarsHasBeenSet() const;

                    /**
                     * 获取<p>spark 作业依赖jar包（--jars），以逗号分隔</p>
                     * @return AppJars <p>spark 作业依赖jar包（--jars），以逗号分隔</p>
                     * 
                     */
                    std::string GetAppJars() const;

                    /**
                     * 设置<p>spark 作业依赖jar包（--jars），以逗号分隔</p>
                     * @param _appJars <p>spark 作业依赖jar包（--jars），以逗号分隔</p>
                     * 
                     */
                    void SetAppJars(const std::string& _appJars);

                    /**
                     * 判断参数 AppJars 是否已赋值
                     * @return AppJars 是否已赋值
                     * 
                     */
                    bool AppJarsHasBeenSet() const;

                    /**
                     * 获取<p>spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @return IsLocalFiles <p>spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    std::string GetIsLocalFiles() const;

                    /**
                     * 设置<p>spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @param _isLocalFiles <p>spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    void SetIsLocalFiles(const std::string& _isLocalFiles);

                    /**
                     * 判断参数 IsLocalFiles 是否已赋值
                     * @return IsLocalFiles 是否已赋值
                     * 
                     */
                    bool IsLocalFilesHasBeenSet() const;

                    /**
                     * 获取<p>spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔</p>
                     * @return AppFiles <p>spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔</p>
                     * 
                     */
                    std::string GetAppFiles() const;

                    /**
                     * 设置<p>spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔</p>
                     * @param _appFiles <p>spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔</p>
                     * 
                     */
                    void SetAppFiles(const std::string& _appFiles);

                    /**
                     * 判断参数 AppFiles 是否已赋值
                     * @return AppFiles 是否已赋值
                     * 
                     */
                    bool AppFilesHasBeenSet() const;

                    /**
                     * 获取<p>pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @return IsLocalPythonFiles <p>pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    std::string GetIsLocalPythonFiles() const;

                    /**
                     * 设置<p>pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @param _isLocalPythonFiles <p>pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    void SetIsLocalPythonFiles(const std::string& _isLocalPythonFiles);

                    /**
                     * 判断参数 IsLocalPythonFiles 是否已赋值
                     * @return IsLocalPythonFiles 是否已赋值
                     * 
                     */
                    bool IsLocalPythonFilesHasBeenSet() const;

                    /**
                     * 获取<p>pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔</p>
                     * @return AppPythonFiles <p>pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔</p>
                     * 
                     */
                    std::string GetAppPythonFiles() const;

                    /**
                     * 设置<p>pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔</p>
                     * @param _appPythonFiles <p>pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔</p>
                     * 
                     */
                    void SetAppPythonFiles(const std::string& _appPythonFiles);

                    /**
                     * 判断参数 AppPythonFiles 是否已赋值
                     * @return AppPythonFiles 是否已赋值
                     * 
                     */
                    bool AppPythonFilesHasBeenSet() const;

                    /**
                     * 获取<p>spark作业程序入参</p>
                     * @return CmdArgs <p>spark作业程序入参</p>
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置<p>spark作业程序入参</p>
                     * @param _cmdArgs <p>spark作业程序入参</p>
                     * 
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     * 
                     */
                    bool CmdArgsHasBeenSet() const;

                    /**
                     * 获取<p>最大重试次数，只对spark流任务生效</p>
                     * @return MaxRetries <p>最大重试次数，只对spark流任务生效</p>
                     * 
                     */
                    int64_t GetMaxRetries() const;

                    /**
                     * 设置<p>最大重试次数，只对spark流任务生效</p>
                     * @param _maxRetries <p>最大重试次数，只对spark流任务生效</p>
                     * 
                     */
                    void SetMaxRetries(const int64_t& _maxRetries);

                    /**
                     * 判断参数 MaxRetries 是否已赋值
                     * @return MaxRetries 是否已赋值
                     * 
                     */
                    bool MaxRetriesHasBeenSet() const;

                    /**
                     * 获取<p>数据源名</p>
                     * @return DataSource <p>数据源名</p>
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置<p>数据源名</p>
                     * @param _dataSource <p>数据源名</p>
                     * 
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取<p>spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @return IsLocalArchives <p>spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    std::string GetIsLocalArchives() const;

                    /**
                     * 设置<p>spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * @param _isLocalArchives <p>spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     * 
                     */
                    void SetIsLocalArchives(const std::string& _isLocalArchives);

                    /**
                     * 判断参数 IsLocalArchives 是否已赋值
                     * @return IsLocalArchives 是否已赋值
                     * 
                     */
                    bool IsLocalArchivesHasBeenSet() const;

                    /**
                     * 获取<p>spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔</p>
                     * @return AppArchives <p>spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔</p>
                     * 
                     */
                    std::string GetAppArchives() const;

                    /**
                     * 设置<p>spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔</p>
                     * @param _appArchives <p>spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔</p>
                     * 
                     */
                    void SetAppArchives(const std::string& _appArchives);

                    /**
                     * 判断参数 AppArchives 是否已赋值
                     * @return AppArchives 是否已赋值
                     * 
                     */
                    bool AppArchivesHasBeenSet() const;

                    /**
                     * 获取<p>Spark Image 版本号</p>
                     * @return SparkImage <p>Spark Image 版本号</p>
                     * 
                     */
                    std::string GetSparkImage() const;

                    /**
                     * 设置<p>Spark Image 版本号</p>
                     * @param _sparkImage <p>Spark Image 版本号</p>
                     * 
                     */
                    void SetSparkImage(const std::string& _sparkImage);

                    /**
                     * 判断参数 SparkImage 是否已赋值
                     * @return SparkImage 是否已赋值
                     * 
                     */
                    bool SparkImageHasBeenSet() const;

                    /**
                     * 获取<p>Spark Image 版本名称</p>
                     * @return SparkImageVersion <p>Spark Image 版本名称</p>
                     * 
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置<p>Spark Image 版本名称</p>
                     * @param _sparkImageVersion <p>Spark Image 版本名称</p>
                     * 
                     */
                    void SetSparkImageVersion(const std::string& _sparkImageVersion);

                    /**
                     * 判断参数 SparkImageVersion 是否已赋值
                     * @return SparkImageVersion 是否已赋值
                     * 
                     */
                    bool SparkImageVersionHasBeenSet() const;

                    /**
                     * 获取<p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums</p>
                     * @return AppExecutorMaxNumbers <p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums</p>
                     * 
                     */
                    int64_t GetAppExecutorMaxNumbers() const;

                    /**
                     * 设置<p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums</p>
                     * @param _appExecutorMaxNumbers <p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums</p>
                     * 
                     */
                    void SetAppExecutorMaxNumbers(const int64_t& _appExecutorMaxNumbers);

                    /**
                     * 判断参数 AppExecutorMaxNumbers 是否已赋值
                     * @return AppExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool AppExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取<p>关联dlc查询脚本</p>
                     * @return SessionId <p>关联dlc查询脚本</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>关联dlc查询脚本</p>
                     * @param _sessionId <p>关联dlc查询脚本</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承</p>
                     * @return IsInherit <p>任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承</p>
                     * 
                     */
                    uint64_t GetIsInherit() const;

                    /**
                     * 设置<p>任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承</p>
                     * @param _isInherit <p>任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承</p>
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
                     * 获取<p>是否使用session脚本的sql运行任务：false：否，true：是</p>
                     * @return IsSessionStarted <p>是否使用session脚本的sql运行任务：false：否，true：是</p>
                     * 
                     */
                    bool GetIsSessionStarted() const;

                    /**
                     * 设置<p>是否使用session脚本的sql运行任务：false：否，true：是</p>
                     * @param _isSessionStarted <p>是否使用session脚本的sql运行任务：false：否，true：是</p>
                     * 
                     */
                    void SetIsSessionStarted(const bool& _isSessionStarted);

                    /**
                     * 判断参数 IsSessionStarted 是否已赋值
                     * @return IsSessionStarted 是否已赋值
                     * 
                     */
                    bool IsSessionStartedHasBeenSet() const;

                    /**
                     * 获取<p>标准引擎依赖包</p>
                     * @return DependencyPackages <p>标准引擎依赖包</p>
                     * 
                     */
                    std::vector<DependencyPackage> GetDependencyPackages() const;

                    /**
                     * 设置<p>标准引擎依赖包</p>
                     * @param _dependencyPackages <p>标准引擎依赖包</p>
                     * 
                     */
                    void SetDependencyPackages(const std::vector<DependencyPackage>& _dependencyPackages);

                    /**
                     * 判断参数 DependencyPackages 是否已赋值
                     * @return DependencyPackages 是否已赋值
                     * 
                     */
                    bool DependencyPackagesHasBeenSet() const;

                private:

                    /**
                     * <p>spark作业名</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>spark作业类型，1代表spark jar作业，2代表spark streaming作业</p>
                     */
                    int64_t m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * <p>执行spark作业的数据引擎名称</p>
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * <p>spark作业程序包文件路径</p>
                     */
                    std::string m_appFile;
                    bool m_appFileHasBeenSet;

                    /**
                     * <p>数据访问策略，CAM Role arn</p>
                     */
                    int64_t m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     */
                    std::string m_appDriverSize;
                    bool m_appDriverSizeHasBeenSet;

                    /**
                     * <p>指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）</p>
                     */
                    std::string m_appExecutorSize;
                    bool m_appExecutorSizeHasBeenSet;

                    /**
                     * <p>spark作业executor个数</p>
                     */
                    int64_t m_appExecutorNums;
                    bool m_appExecutorNumsHasBeenSet;

                    /**
                     * <p>spark作业Id</p>
                     */
                    std::string m_sparkAppId;
                    bool m_sparkAppIdHasBeenSet;

                    /**
                     * <p>该字段已下线，请使用字段Datasource</p>
                     */
                    std::string m_eni;
                    bool m_eniHasBeenSet;

                    /**
                     * <p>spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     */
                    std::string m_isLocal;
                    bool m_isLocalHasBeenSet;

                    /**
                     * <p>spark作业主类</p>
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * <p>spark配置，以换行符分隔</p>
                     */
                    std::string m_appConf;
                    bool m_appConfHasBeenSet;

                    /**
                     * <p>spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     */
                    std::string m_isLocalJars;
                    bool m_isLocalJarsHasBeenSet;

                    /**
                     * <p>spark 作业依赖jar包（--jars），以逗号分隔</p>
                     */
                    std::string m_appJars;
                    bool m_appJarsHasBeenSet;

                    /**
                     * <p>spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     */
                    std::string m_isLocalFiles;
                    bool m_isLocalFilesHasBeenSet;

                    /**
                     * <p>spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔</p>
                     */
                    std::string m_appFiles;
                    bool m_appFilesHasBeenSet;

                    /**
                     * <p>pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     */
                    std::string m_isLocalPythonFiles;
                    bool m_isLocalPythonFilesHasBeenSet;

                    /**
                     * <p>pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔</p>
                     */
                    std::string m_appPythonFiles;
                    bool m_appPythonFilesHasBeenSet;

                    /**
                     * <p>spark作业程序入参</p>
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * <p>最大重试次数，只对spark流任务生效</p>
                     */
                    int64_t m_maxRetries;
                    bool m_maxRetriesHasBeenSet;

                    /**
                     * <p>数据源名</p>
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * <p>spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）</p>
                     */
                    std::string m_isLocalArchives;
                    bool m_isLocalArchivesHasBeenSet;

                    /**
                     * <p>spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔</p>
                     */
                    std::string m_appArchives;
                    bool m_appArchivesHasBeenSet;

                    /**
                     * <p>Spark Image 版本号</p>
                     */
                    std::string m_sparkImage;
                    bool m_sparkImageHasBeenSet;

                    /**
                     * <p>Spark Image 版本名称</p>
                     */
                    std::string m_sparkImageVersion;
                    bool m_sparkImageVersionHasBeenSet;

                    /**
                     * <p>指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums</p>
                     */
                    int64_t m_appExecutorMaxNumbers;
                    bool m_appExecutorMaxNumbersHasBeenSet;

                    /**
                     * <p>关联dlc查询脚本</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承</p>
                     */
                    uint64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                    /**
                     * <p>是否使用session脚本的sql运行任务：false：否，true：是</p>
                     */
                    bool m_isSessionStarted;
                    bool m_isSessionStartedHasBeenSet;

                    /**
                     * <p>标准引擎依赖包</p>
                     */
                    std::vector<DependencyPackage> m_dependencyPackages;
                    bool m_dependencyPackagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPFORTDLCREQUEST_H_
