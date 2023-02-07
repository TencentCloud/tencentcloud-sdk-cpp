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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateSparkApp请求参数结构体
                */
                class CreateSparkAppRequest : public AbstractModel
                {
                public:
                    CreateSparkAppRequest();
                    ~CreateSparkAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取spark应用名
                     * @return AppName spark应用名
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置spark应用名
                     * @param AppName spark应用名
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取1代表spark jar应用，2代表spark streaming应用
                     * @return AppType 1代表spark jar应用，2代表spark streaming应用
                     */
                    int64_t GetAppType() const;

                    /**
                     * 设置1代表spark jar应用，2代表spark streaming应用
                     * @param AppType 1代表spark jar应用，2代表spark streaming应用
                     */
                    void SetAppType(const int64_t& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取执行spark作业的数据引擎
                     * @return DataEngine 执行spark作业的数据引擎
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置执行spark作业的数据引擎
                     * @param DataEngine 执行spark作业的数据引擎
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取spark应用的执行入口
                     * @return AppFile spark应用的执行入口
                     */
                    std::string GetAppFile() const;

                    /**
                     * 设置spark应用的执行入口
                     * @param AppFile spark应用的执行入口
                     */
                    void SetAppFile(const std::string& _appFile);

                    /**
                     * 判断参数 AppFile 是否已赋值
                     * @return AppFile 是否已赋值
                     */
                    bool AppFileHasBeenSet() const;

                    /**
                     * 获取执行spark作业的角色ID
                     * @return RoleArn 执行spark作业的角色ID
                     */
                    int64_t GetRoleArn() const;

                    /**
                     * 设置执行spark作业的角色ID
                     * @param RoleArn 执行spark作业的角色ID
                     */
                    void SetRoleArn(const int64_t& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取spark作业driver资源规格大小, 可取small,medium,large,xlarge
                     * @return AppDriverSize spark作业driver资源规格大小, 可取small,medium,large,xlarge
                     */
                    std::string GetAppDriverSize() const;

                    /**
                     * 设置spark作业driver资源规格大小, 可取small,medium,large,xlarge
                     * @param AppDriverSize spark作业driver资源规格大小, 可取small,medium,large,xlarge
                     */
                    void SetAppDriverSize(const std::string& _appDriverSize);

                    /**
                     * 判断参数 AppDriverSize 是否已赋值
                     * @return AppDriverSize 是否已赋值
                     */
                    bool AppDriverSizeHasBeenSet() const;

                    /**
                     * 获取spark作业executor资源规格大小, 可取small,medium,large,xlarge
                     * @return AppExecutorSize spark作业executor资源规格大小, 可取small,medium,large,xlarge
                     */
                    std::string GetAppExecutorSize() const;

                    /**
                     * 设置spark作业executor资源规格大小, 可取small,medium,large,xlarge
                     * @param AppExecutorSize spark作业executor资源规格大小, 可取small,medium,large,xlarge
                     */
                    void SetAppExecutorSize(const std::string& _appExecutorSize);

                    /**
                     * 判断参数 AppExecutorSize 是否已赋值
                     * @return AppExecutorSize 是否已赋值
                     */
                    bool AppExecutorSizeHasBeenSet() const;

                    /**
                     * 获取spark作业executor个数
                     * @return AppExecutorNums spark作业executor个数
                     */
                    int64_t GetAppExecutorNums() const;

                    /**
                     * 设置spark作业executor个数
                     * @param AppExecutorNums spark作业executor个数
                     */
                    void SetAppExecutorNums(const int64_t& _appExecutorNums);

                    /**
                     * 判断参数 AppExecutorNums 是否已赋值
                     * @return AppExecutorNums 是否已赋值
                     */
                    bool AppExecutorNumsHasBeenSet() const;

                    /**
                     * 获取该字段已下线，请使用字段Datasource
                     * @return Eni 该字段已下线，请使用字段Datasource
                     */
                    std::string GetEni() const;

                    /**
                     * 设置该字段已下线，请使用字段Datasource
                     * @param Eni 该字段已下线，请使用字段Datasource
                     */
                    void SetEni(const std::string& _eni);

                    /**
                     * 判断参数 Eni 是否已赋值
                     * @return Eni 是否已赋值
                     */
                    bool EniHasBeenSet() const;

                    /**
                     * 获取是否本地上传，可去cos,lakefs
                     * @return IsLocal 是否本地上传，可去cos,lakefs
                     */
                    std::string GetIsLocal() const;

                    /**
                     * 设置是否本地上传，可去cos,lakefs
                     * @param IsLocal 是否本地上传，可去cos,lakefs
                     */
                    void SetIsLocal(const std::string& _isLocal);

                    /**
                     * 判断参数 IsLocal 是否已赋值
                     * @return IsLocal 是否已赋值
                     */
                    bool IsLocalHasBeenSet() const;

                    /**
                     * 获取spark jar作业时的主类
                     * @return MainClass spark jar作业时的主类
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置spark jar作业时的主类
                     * @param MainClass spark jar作业时的主类
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取spark配置，以换行符分隔
                     * @return AppConf spark配置，以换行符分隔
                     */
                    std::string GetAppConf() const;

                    /**
                     * 设置spark配置，以换行符分隔
                     * @param AppConf spark配置，以换行符分隔
                     */
                    void SetAppConf(const std::string& _appConf);

                    /**
                     * 判断参数 AppConf 是否已赋值
                     * @return AppConf 是否已赋值
                     */
                    bool AppConfHasBeenSet() const;

                    /**
                     * 获取是否本地上传，包含cos,lakefs
                     * @return IsLocalJars 是否本地上传，包含cos,lakefs
                     */
                    std::string GetIsLocalJars() const;

                    /**
                     * 设置是否本地上传，包含cos,lakefs
                     * @param IsLocalJars 是否本地上传，包含cos,lakefs
                     */
                    void SetIsLocalJars(const std::string& _isLocalJars);

                    /**
                     * 判断参数 IsLocalJars 是否已赋值
                     * @return IsLocalJars 是否已赋值
                     */
                    bool IsLocalJarsHasBeenSet() const;

                    /**
                     * 获取spark jar作业依赖jars，以逗号分隔
                     * @return AppJars spark jar作业依赖jars，以逗号分隔
                     */
                    std::string GetAppJars() const;

                    /**
                     * 设置spark jar作业依赖jars，以逗号分隔
                     * @param AppJars spark jar作业依赖jars，以逗号分隔
                     */
                    void SetAppJars(const std::string& _appJars);

                    /**
                     * 判断参数 AppJars 是否已赋值
                     * @return AppJars 是否已赋值
                     */
                    bool AppJarsHasBeenSet() const;

                    /**
                     * 获取是否本地上传，包含cos,lakefs
                     * @return IsLocalFiles 是否本地上传，包含cos,lakefs
                     */
                    std::string GetIsLocalFiles() const;

                    /**
                     * 设置是否本地上传，包含cos,lakefs
                     * @param IsLocalFiles 是否本地上传，包含cos,lakefs
                     */
                    void SetIsLocalFiles(const std::string& _isLocalFiles);

                    /**
                     * 判断参数 IsLocalFiles 是否已赋值
                     * @return IsLocalFiles 是否已赋值
                     */
                    bool IsLocalFilesHasBeenSet() const;

                    /**
                     * 获取spark作业依赖资源，以逗号分隔
                     * @return AppFiles spark作业依赖资源，以逗号分隔
                     */
                    std::string GetAppFiles() const;

                    /**
                     * 设置spark作业依赖资源，以逗号分隔
                     * @param AppFiles spark作业依赖资源，以逗号分隔
                     */
                    void SetAppFiles(const std::string& _appFiles);

                    /**
                     * 判断参数 AppFiles 是否已赋值
                     * @return AppFiles 是否已赋值
                     */
                    bool AppFilesHasBeenSet() const;

                    /**
                     * 获取spark作业命令行参数
                     * @return CmdArgs spark作业命令行参数
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置spark作业命令行参数
                     * @param CmdArgs spark作业命令行参数
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     */
                    bool CmdArgsHasBeenSet() const;

                    /**
                     * 获取只对spark流任务生效
                     * @return MaxRetries 只对spark流任务生效
                     */
                    int64_t GetMaxRetries() const;

                    /**
                     * 设置只对spark流任务生效
                     * @param MaxRetries 只对spark流任务生效
                     */
                    void SetMaxRetries(const int64_t& _maxRetries);

                    /**
                     * 判断参数 MaxRetries 是否已赋值
                     * @return MaxRetries 是否已赋值
                     */
                    bool MaxRetriesHasBeenSet() const;

                    /**
                     * 获取数据源名
                     * @return DataSource 数据源名
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置数据源名
                     * @param DataSource 数据源名
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     * @return IsLocalPythonFiles pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     */
                    std::string GetIsLocalPythonFiles() const;

                    /**
                     * 设置pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     * @param IsLocalPythonFiles pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     */
                    void SetIsLocalPythonFiles(const std::string& _isLocalPythonFiles);

                    /**
                     * 判断参数 IsLocalPythonFiles 是否已赋值
                     * @return IsLocalPythonFiles 是否已赋值
                     */
                    bool IsLocalPythonFilesHasBeenSet() const;

                    /**
                     * 获取pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
                     * @return AppPythonFiles pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
                     */
                    std::string GetAppPythonFiles() const;

                    /**
                     * 设置pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
                     * @param AppPythonFiles pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
                     */
                    void SetAppPythonFiles(const std::string& _appPythonFiles);

                    /**
                     * 判断参数 AppPythonFiles 是否已赋值
                     * @return AppPythonFiles 是否已赋值
                     */
                    bool AppPythonFilesHasBeenSet() const;

                    /**
                     * 获取archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     * @return IsLocalArchives archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     */
                    std::string GetIsLocalArchives() const;

                    /**
                     * 设置archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     * @param IsLocalArchives archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     */
                    void SetIsLocalArchives(const std::string& _isLocalArchives);

                    /**
                     * 判断参数 IsLocalArchives 是否已赋值
                     * @return IsLocalArchives 是否已赋值
                     */
                    bool IsLocalArchivesHasBeenSet() const;

                    /**
                     * 获取archives：依赖资源
                     * @return AppArchives archives：依赖资源
                     */
                    std::string GetAppArchives() const;

                    /**
                     * 设置archives：依赖资源
                     * @param AppArchives archives：依赖资源
                     */
                    void SetAppArchives(const std::string& _appArchives);

                    /**
                     * 判断参数 AppArchives 是否已赋值
                     * @return AppArchives 是否已赋值
                     */
                    bool AppArchivesHasBeenSet() const;

                    /**
                     * 获取Spark Image 版本
                     * @return SparkImage Spark Image 版本
                     */
                    std::string GetSparkImage() const;

                    /**
                     * 设置Spark Image 版本
                     * @param SparkImage Spark Image 版本
                     */
                    void SetSparkImage(const std::string& _sparkImage);

                    /**
                     * 判断参数 SparkImage 是否已赋值
                     * @return SparkImage 是否已赋值
                     */
                    bool SparkImageHasBeenSet() const;

                    /**
                     * 获取Spark Image 版本名称
                     * @return SparkImageVersion Spark Image 版本名称
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置Spark Image 版本名称
                     * @param SparkImageVersion Spark Image 版本名称
                     */
                    void SetSparkImageVersion(const std::string& _sparkImageVersion);

                    /**
                     * 判断参数 SparkImageVersion 是否已赋值
                     * @return SparkImageVersion 是否已赋值
                     */
                    bool SparkImageVersionHasBeenSet() const;

                    /**
                     * 获取指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     * @return AppExecutorMaxNumbers 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     */
                    int64_t GetAppExecutorMaxNumbers() const;

                    /**
                     * 设置指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     * @param AppExecutorMaxNumbers 指定的Executor数量（最大值），默认为1，当开启动态分配有效，若未开启，则该值等于AppExecutorNums
                     */
                    void SetAppExecutorMaxNumbers(const int64_t& _appExecutorMaxNumbers);

                    /**
                     * 判断参数 AppExecutorMaxNumbers 是否已赋值
                     * @return AppExecutorMaxNumbers 是否已赋值
                     */
                    bool AppExecutorMaxNumbersHasBeenSet() const;

                private:

                    /**
                     * spark应用名
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 1代表spark jar应用，2代表spark streaming应用
                     */
                    int64_t m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 执行spark作业的数据引擎
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * spark应用的执行入口
                     */
                    std::string m_appFile;
                    bool m_appFileHasBeenSet;

                    /**
                     * 执行spark作业的角色ID
                     */
                    int64_t m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * spark作业driver资源规格大小, 可取small,medium,large,xlarge
                     */
                    std::string m_appDriverSize;
                    bool m_appDriverSizeHasBeenSet;

                    /**
                     * spark作业executor资源规格大小, 可取small,medium,large,xlarge
                     */
                    std::string m_appExecutorSize;
                    bool m_appExecutorSizeHasBeenSet;

                    /**
                     * spark作业executor个数
                     */
                    int64_t m_appExecutorNums;
                    bool m_appExecutorNumsHasBeenSet;

                    /**
                     * 该字段已下线，请使用字段Datasource
                     */
                    std::string m_eni;
                    bool m_eniHasBeenSet;

                    /**
                     * 是否本地上传，可去cos,lakefs
                     */
                    std::string m_isLocal;
                    bool m_isLocalHasBeenSet;

                    /**
                     * spark jar作业时的主类
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * spark配置，以换行符分隔
                     */
                    std::string m_appConf;
                    bool m_appConfHasBeenSet;

                    /**
                     * 是否本地上传，包含cos,lakefs
                     */
                    std::string m_isLocalJars;
                    bool m_isLocalJarsHasBeenSet;

                    /**
                     * spark jar作业依赖jars，以逗号分隔
                     */
                    std::string m_appJars;
                    bool m_appJarsHasBeenSet;

                    /**
                     * 是否本地上传，包含cos,lakefs
                     */
                    std::string m_isLocalFiles;
                    bool m_isLocalFilesHasBeenSet;

                    /**
                     * spark作业依赖资源，以逗号分隔
                     */
                    std::string m_appFiles;
                    bool m_appFilesHasBeenSet;

                    /**
                     * spark作业命令行参数
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                    /**
                     * 只对spark流任务生效
                     */
                    int64_t m_maxRetries;
                    bool m_maxRetriesHasBeenSet;

                    /**
                     * 数据源名
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * pyspark：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     */
                    std::string m_isLocalPythonFiles;
                    bool m_isLocalPythonFilesHasBeenSet;

                    /**
                     * pyspark：python依赖, 除py文件外，还支持zip/egg等归档格式，多文件以逗号分隔
                     */
                    std::string m_appPythonFiles;
                    bool m_appPythonFilesHasBeenSet;

                    /**
                     * archives：依赖上传方式，1、cos；2、lakefs（控制台使用，该方式不支持直接接口调用）
                     */
                    std::string m_isLocalArchives;
                    bool m_isLocalArchivesHasBeenSet;

                    /**
                     * archives：依赖资源
                     */
                    std::string m_appArchives;
                    bool m_appArchivesHasBeenSet;

                    /**
                     * Spark Image 版本
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPREQUEST_H_
