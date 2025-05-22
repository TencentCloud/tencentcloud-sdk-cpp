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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPREQUEST_H_

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
                * ModifySparkApp请求参数结构体
                */
                class ModifySparkAppRequest : public AbstractModel
                {
                public:
                    ModifySparkAppRequest();
                    ~ModifySparkAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取spark作业名
                     * @return AppName spark作业名
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置spark作业名
                     * @param _appName spark作业名
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
                     * 获取spark作业类型，1代表spark jar作业，2代表spark streaming作业
                     * @return AppType spark作业类型，1代表spark jar作业，2代表spark streaming作业
                     * 
                     */
                    int64_t GetAppType() const;

                    /**
                     * 设置spark作业类型，1代表spark jar作业，2代表spark streaming作业
                     * @param _appType spark作业类型，1代表spark jar作业，2代表spark streaming作业
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
                     * 获取执行spark作业的数据引擎名称
                     * @return DataEngine 执行spark作业的数据引擎名称
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置执行spark作业的数据引擎名称
                     * @param _dataEngine 执行spark作业的数据引擎名称
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
                     * 获取spark作业程序包文件路径
                     * @return AppFile spark作业程序包文件路径
                     * 
                     */
                    std::string GetAppFile() const;

                    /**
                     * 设置spark作业程序包文件路径
                     * @param _appFile spark作业程序包文件路径
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
                     * 获取数据访问策略，CAM Role arn
                     * @return RoleArn 数据访问策略，CAM Role arn
                     * 
                     */
                    int64_t GetRoleArn() const;

                    /**
                     * 设置数据访问策略，CAM Role arn
                     * @param _roleArn 数据访问策略，CAM Role arn
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
                     * 获取指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * @return AppDriverSize 指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * 
                     */
                    std::string GetAppDriverSize() const;

                    /**
                     * 设置指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * @param _appDriverSize 指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
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
                     * 获取指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * @return AppExecutorSize 指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * 
                     */
                    std::string GetAppExecutorSize() const;

                    /**
                     * 设置指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     * @param _appExecutorSize 指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
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
                     * 获取spark作业executor个数
                     * @return AppExecutorNums spark作业executor个数
                     * 
                     */
                    int64_t GetAppExecutorNums() const;

                    /**
                     * 设置spark作业executor个数
                     * @param _appExecutorNums spark作业executor个数
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
                     * 获取spark作业Id
                     * @return SparkAppId spark作业Id
                     * 
                     */
                    std::string GetSparkAppId() const;

                    /**
                     * 设置spark作业Id
                     * @param _sparkAppId spark作业Id
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
                     * 获取该字段已下线，请使用字段Datasource
                     * @return Eni 该字段已下线，请使用字段Datasource
                     * 
                     */
                    std::string GetEni() const;

                    /**
                     * 设置该字段已下线，请使用字段Datasource
                     * @param _eni 该字段已下线，请使用字段Datasource
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
                     * 获取spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @return IsLocal spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * 
                     */
                    std::string GetIsLocal() const;

                    /**
                     * 设置spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @param _isLocal spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
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
                     * 获取spark作业主类
                     * @return MainClass spark作业主类
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置spark作业主类
                     * @param _mainClass spark作业主类
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
                     * 获取spark配置，以换行符分隔
                     * @return AppConf spark配置，以换行符分隔
                     * 
                     */
                    std::string GetAppConf() const;

                    /**
                     * 设置spark配置，以换行符分隔
                     * @param _appConf spark配置，以换行符分隔
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
                     * 获取spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @return IsLocalJars spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * 
                     */
                    std::string GetIsLocalJars() const;

                    /**
                     * 设置spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @param _isLocalJars spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
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
                     * 获取spark 作业依赖jar包（--jars），以逗号分隔
                     * @return AppJars spark 作业依赖jar包（--jars），以逗号分隔
                     * 
                     */
                    std::string GetAppJars() const;

                    /**
                     * 设置spark 作业依赖jar包（--jars），以逗号分隔
                     * @param _appJars spark 作业依赖jar包（--jars），以逗号分隔
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
                     * 获取spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @return IsLocalFiles spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * 
                     */
                    std::string GetIsLocalFiles() const;

                    /**
                     * 设置spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @param _isLocalFiles spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
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
                     * 获取spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔
                     * @return AppFiles spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔
                     * 
                     */
                    std::string GetAppFiles() const;

                    /**
                     * 设置spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔
                     * @param _appFiles spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔
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
                     * 获取pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @return IsLocalPythonFiles pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * 
                     */
                    std::string GetIsLocalPythonFiles() const;

                    /**
                     * 设置pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @param _isLocalPythonFiles pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
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
                     * 获取pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔
                     * @return AppPythonFiles pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔
                     * 
                     */
                    std::string GetAppPythonFiles() const;

                    /**
                     * 设置pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔
                     * @param _appPythonFiles pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔
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
                     * 获取spark作业程序入参
                     * @return CmdArgs spark作业程序入参
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置spark作业程序入参
                     * @param _cmdArgs spark作业程序入参
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
                     * 获取最大重试次数，只对spark流任务生效
                     * @return MaxRetries 最大重试次数，只对spark流任务生效
                     * 
                     */
                    int64_t GetMaxRetries() const;

                    /**
                     * 设置最大重试次数，只对spark流任务生效
                     * @param _maxRetries 最大重试次数，只对spark流任务生效
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
                     * 获取数据源名
                     * @return DataSource 数据源名
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置数据源名
                     * @param _dataSource 数据源名
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
                     * 获取spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @return IsLocalArchives spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * 
                     */
                    std::string GetIsLocalArchives() const;

                    /**
                     * 设置spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     * @param _isLocalArchives spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
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
                     * 获取spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔
                     * @return AppArchives spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔
                     * 
                     */
                    std::string GetAppArchives() const;

                    /**
                     * 设置spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔
                     * @param _appArchives spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔
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
                     * 获取Spark Image 版本号
                     * @return SparkImage Spark Image 版本号
                     * 
                     */
                    std::string GetSparkImage() const;

                    /**
                     * 设置Spark Image 版本号
                     * @param _sparkImage Spark Image 版本号
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
                     * 获取Spark Image 版本名称
                     * @return SparkImageVersion Spark Image 版本名称
                     * 
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置Spark Image 版本名称
                     * @param _sparkImageVersion Spark Image 版本名称
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
                     * 获取指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     * @return AppExecutorMaxNumbers 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     * 
                     */
                    int64_t GetAppExecutorMaxNumbers() const;

                    /**
                     * 设置指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     * @param _appExecutorMaxNumbers 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
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
                     * 获取关联dlc查询脚本
                     * @return SessionId 关联dlc查询脚本
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置关联dlc查询脚本
                     * @param _sessionId 关联dlc查询脚本
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
                     * 获取任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承
                     * @return IsInherit 任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承
                     * 
                     */
                    uint64_t GetIsInherit() const;

                    /**
                     * 设置任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承
                     * @param _isInherit 任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承
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
                     * 获取是否使用session脚本的sql运行任务：false：否，true：是
                     * @return IsSessionStarted 是否使用session脚本的sql运行任务：false：否，true：是
                     * 
                     */
                    bool GetIsSessionStarted() const;

                    /**
                     * 设置是否使用session脚本的sql运行任务：false：否，true：是
                     * @param _isSessionStarted 是否使用session脚本的sql运行任务：false：否，true：是
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
                     * 获取标准引擎依赖包
                     * @return DependencyPackages 标准引擎依赖包
                     * 
                     */
                    std::vector<DependencyPackage> GetDependencyPackages() const;

                    /**
                     * 设置标准引擎依赖包
                     * @param _dependencyPackages 标准引擎依赖包
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
                     * spark作业名
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * spark作业类型，1代表spark jar作业，2代表spark streaming作业
                     */
                    int64_t m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 执行spark作业的数据引擎名称
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * spark作业程序包文件路径
                     */
                    std::string m_appFile;
                    bool m_appFileHasBeenSet;

                    /**
                     * 数据访问策略，CAM Role arn
                     */
                    int64_t m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * 指定的Driver规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     */
                    std::string m_appDriverSize;
                    bool m_appDriverSizeHasBeenSet;

                    /**
                     * 指定的Executor规格，当前支持：small（默认，1cu）、medium（2cu）、large（4cu）、xlarge（8cu）
                     */
                    std::string m_appExecutorSize;
                    bool m_appExecutorSizeHasBeenSet;

                    /**
                     * spark作业executor个数
                     */
                    int64_t m_appExecutorNums;
                    bool m_appExecutorNumsHasBeenSet;

                    /**
                     * spark作业Id
                     */
                    std::string m_sparkAppId;
                    bool m_sparkAppIdHasBeenSet;

                    /**
                     * 该字段已下线，请使用字段Datasource
                     */
                    std::string m_eni;
                    bool m_eniHasBeenSet;

                    /**
                     * spark作业程序包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     */
                    std::string m_isLocal;
                    bool m_isLocalHasBeenSet;

                    /**
                     * spark作业主类
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * spark配置，以换行符分隔
                     */
                    std::string m_appConf;
                    bool m_appConfHasBeenSet;

                    /**
                     * spark 作业依赖jar包是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     */
                    std::string m_isLocalJars;
                    bool m_isLocalJarsHasBeenSet;

                    /**
                     * spark 作业依赖jar包（--jars），以逗号分隔
                     */
                    std::string m_appJars;
                    bool m_appJarsHasBeenSet;

                    /**
                     * spark作业依赖文件资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     */
                    std::string m_isLocalFiles;
                    bool m_isLocalFilesHasBeenSet;

                    /**
                     * spark作业依赖文件资源（--files）（非jar、zip），以逗号分隔
                     */
                    std::string m_appFiles;
                    bool m_appFilesHasBeenSet;

                    /**
                     * pyspark：依赖上传方式，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     */
                    std::string m_isLocalPythonFiles;
                    bool m_isLocalPythonFilesHasBeenSet;

                    /**
                     * pyspark作业依赖python资源（--py-files），支持py/zip/egg等归档格式，多文件以逗号分隔
                     */
                    std::string m_appPythonFiles;
                    bool m_appPythonFilesHasBeenSet;

                    /**
                     * spark作业程序入参
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * 最大重试次数，只对spark流任务生效
                     */
                    int64_t m_maxRetries;
                    bool m_maxRetriesHasBeenSet;

                    /**
                     * 数据源名
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * spark作业依赖archives资源是否本地上传，cos：存放与cos，lakefs：本地上传（控制台使用，该方式不支持直接接口调用）
                     */
                    std::string m_isLocalArchives;
                    bool m_isLocalArchivesHasBeenSet;

                    /**
                     * spark作业依赖archives资源（--archives），支持tar.gz/tgz/tar等归档格式，以逗号分隔
                     */
                    std::string m_appArchives;
                    bool m_appArchivesHasBeenSet;

                    /**
                     * Spark Image 版本号
                     */
                    std::string m_sparkImage;
                    bool m_sparkImageHasBeenSet;

                    /**
                     * Spark Image 版本名称
                     */
                    std::string m_sparkImageVersion;
                    bool m_sparkImageVersionHasBeenSet;

                    /**
                     * 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     */
                    int64_t m_appExecutorMaxNumbers;
                    bool m_appExecutorMaxNumbersHasBeenSet;

                    /**
                     * 关联dlc查询脚本
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 任务资源配置是否继承集群配置模板：0（默认）不继承、1：继承
                     */
                    uint64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                    /**
                     * 是否使用session脚本的sql运行任务：false：否，true：是
                     */
                    bool m_isSessionStarted;
                    bool m_isSessionStartedHasBeenSet;

                    /**
                     * 标准引擎依赖包
                     */
                    std::vector<DependencyPackage> m_dependencyPackages;
                    bool m_dependencyPackagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPREQUEST_H_
