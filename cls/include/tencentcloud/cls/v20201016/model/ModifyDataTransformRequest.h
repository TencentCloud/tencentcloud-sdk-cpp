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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>
#include <tencentcloud/cls/v20201016/model/DataTransformSqlDataSource.h>
#include <tencentcloud/cls/v20201016/model/EnvInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyDataTransform请求参数结构体
                */
                class ModifyDataTransformRequest : public AbstractModel
                {
                public:
                    ModifyDataTransformRequest();
                    ~ModifyDataTransformRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据加工任务ID
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
                     * @return TaskId 数据加工任务ID
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置数据加工任务ID
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
                     * @param _taskId 数据加工任务ID
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
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
                     * 获取加工任务名称
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务名称。

名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
                     * @return Name 加工任务名称
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务名称。

名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置加工任务名称
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务名称。

名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
                     * @param _name 加工任务名称
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务名称。

名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * @return EtlContent 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * @param _etlContent 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * 
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     * 
                     */
                    bool EtlContentHasBeenSet() const;

                    /**
                     * 获取任务启动状态. 默认为1，开启,  2关闭
                     * @return EnableFlag 任务启动状态. 默认为1，开启,  2关闭
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置任务启动状态. 默认为1，开启,  2关闭
                     * @param _enableFlag 任务启动状态. 默认为1，开启,  2关闭
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取加工任务目的topic_id以及别名
                     * @return DstResources 加工任务目的topic_id以及别名
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置加工任务目的topic_id以及别名
                     * @param _dstResources 加工任务目的topic_id以及别名
                     * 
                     */
                    void SetDstResources(const std::vector<DataTransformResouceInfo>& _dstResources);

                    /**
                     * 判断参数 DstResources 是否已赋值
                     * @return DstResources 是否已赋值
                     * 
                     */
                    bool DstResourcesHasBeenSet() const;

                    /**
                     * 获取超限之后是否丢弃日志数据
                     * @return BackupGiveUpData 超限之后是否丢弃日志数据
                     * 
                     */
                    bool GetBackupGiveUpData() const;

                    /**
                     * 设置超限之后是否丢弃日志数据
                     * @param _backupGiveUpData 超限之后是否丢弃日志数据
                     * 
                     */
                    void SetBackupGiveUpData(const bool& _backupGiveUpData);

                    /**
                     * 判断参数 BackupGiveUpData 是否已赋值
                     * @return BackupGiveUpData 是否已赋值
                     * 
                     */
                    bool BackupGiveUpDataHasBeenSet() const;

                    /**
                     * 获取是否开启投递服务日志。1关闭，2开启
                     * @return HasServicesLog 是否开启投递服务日志。1关闭，2开启
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置是否开启投递服务日志。1关闭，2开启
                     * @param _hasServicesLog 是否开启投递服务日志。1关闭，2开启
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取保留失败日志状态。 1:不保留，2:保留
                     * @return KeepFailureLog 保留失败日志状态。 1:不保留，2:保留
                     * 
                     */
                    uint64_t GetKeepFailureLog() const;

                    /**
                     * 设置保留失败日志状态。 1:不保留，2:保留
                     * @param _keepFailureLog 保留失败日志状态。 1:不保留，2:保留
                     * 
                     */
                    void SetKeepFailureLog(const uint64_t& _keepFailureLog);

                    /**
                     * 判断参数 KeepFailureLog 是否已赋值
                     * @return KeepFailureLog 是否已赋值
                     * 
                     */
                    bool KeepFailureLogHasBeenSet() const;

                    /**
                     * 获取失败日志的字段名称
                     * @return FailureLogKey 失败日志的字段名称
                     * 
                     */
                    std::string GetFailureLogKey() const;

                    /**
                     * 设置失败日志的字段名称
                     * @param _failureLogKey 失败日志的字段名称
                     * 
                     */
                    void SetFailureLogKey(const std::string& _failureLogKey);

                    /**
                     * 判断参数 FailureLogKey 是否已赋值
                     * @return FailureLogKey 是否已赋值
                     * 
                     */
                    bool FailureLogKeyHasBeenSet() const;

                    /**
                     * 获取外部数据源信息
                     * @return DataTransformSqlDataSources 外部数据源信息
                     * 
                     */
                    std::vector<DataTransformSqlDataSource> GetDataTransformSqlDataSources() const;

                    /**
                     * 设置外部数据源信息
                     * @param _dataTransformSqlDataSources 外部数据源信息
                     * 
                     */
                    void SetDataTransformSqlDataSources(const std::vector<DataTransformSqlDataSource>& _dataTransformSqlDataSources);

                    /**
                     * 判断参数 DataTransformSqlDataSources 是否已赋值
                     * @return DataTransformSqlDataSources 是否已赋值
                     * 
                     */
                    bool DataTransformSqlDataSourcesHasBeenSet() const;

                    /**
                     * 获取设置的环境变量
                     * @return EnvInfos 设置的环境变量
                     * 
                     */
                    std::vector<EnvInfo> GetEnvInfos() const;

                    /**
                     * 设置设置的环境变量
                     * @param _envInfos 设置的环境变量
                     * 
                     */
                    void SetEnvInfos(const std::vector<EnvInfo>& _envInfos);

                    /**
                     * 判断参数 EnvInfos 是否已赋值
                     * @return EnvInfos 是否已赋值
                     * 
                     */
                    bool EnvInfosHasBeenSet() const;

                private:

                    /**
                     * 数据加工任务ID
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 加工任务名称
- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务名称。

名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * 任务启动状态. 默认为1，开启,  2关闭
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * 加工任务目的topic_id以及别名
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * 超限之后是否丢弃日志数据
                     */
                    bool m_backupGiveUpData;
                    bool m_backupGiveUpDataHasBeenSet;

                    /**
                     * 是否开启投递服务日志。1关闭，2开启
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * 保留失败日志状态。 1:不保留，2:保留
                     */
                    uint64_t m_keepFailureLog;
                    bool m_keepFailureLogHasBeenSet;

                    /**
                     * 失败日志的字段名称
                     */
                    std::string m_failureLogKey;
                    bool m_failureLogKeyHasBeenSet;

                    /**
                     * 外部数据源信息
                     */
                    std::vector<DataTransformSqlDataSource> m_dataTransformSqlDataSources;
                    bool m_dataTransformSqlDataSourcesHasBeenSet;

                    /**
                     * 设置的环境变量
                     */
                    std::vector<EnvInfo> m_envInfos;
                    bool m_envInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_
