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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATIONJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/MigrateOption.h>
#include <tencentcloud/dts/v20211206/model/DBEndpointInfo.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifyMigrationJob请求参数结构体
                */
                class ModifyMigrationJobRequest : public AbstractModel
                {
                public:
                    ModifyMigrationJobRequest();
                    ~ModifyMigrationJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return JobId 任务id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务id
                     * @param _jobId 任务id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)
                     * @return RunMode 运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)
                     * @param _runMode 运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改
                     * @return MigrateOption 迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改
                     * 
                     */
                    MigrateOption GetMigrateOption() const;

                    /**
                     * 设置迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改
                     * @param _migrateOption 迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改
                     * 
                     */
                    void SetMigrateOption(const MigrateOption& _migrateOption);

                    /**
                     * 判断参数 MigrateOption 是否已赋值
                     * @return MigrateOption 是否已赋值
                     * 
                     */
                    bool MigrateOptionHasBeenSet() const;

                    /**
                     * 获取源实例信息
                     * @return SrcInfo 源实例信息
                     * 
                     */
                    DBEndpointInfo GetSrcInfo() const;

                    /**
                     * 设置源实例信息
                     * @param _srcInfo 源实例信息
                     * 
                     */
                    void SetSrcInfo(const DBEndpointInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取目标实例信息
                     * @return DstInfo 目标实例信息
                     * 
                     */
                    DBEndpointInfo GetDstInfo() const;

                    /**
                     * 设置目标实例信息
                     * @param _dstInfo 目标实例信息
                     * 
                     */
                    void SetDstInfo(const DBEndpointInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取迁移任务名称，最大长度128
                     * @return JobName 迁移任务名称，最大长度128
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置迁移任务名称，最大长度128
                     * @param _jobName 迁移任务名称，最大长度128
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取期待启动时间，当RunMode取值为timed时，此值必填，形如："2006-01-02 15:04:05"
                     * @return ExpectRunTime 期待启动时间，当RunMode取值为timed时，此值必填，形如："2006-01-02 15:04:05"
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置期待启动时间，当RunMode取值为timed时，此值必填，形如："2006-01-02 15:04:05"
                     * @param _expectRunTime 期待启动时间，当RunMode取值为timed时，此值必填，形如："2006-01-02 15:04:05"
                     * 
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     * 
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Tags 标签信息
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置标签信息
                     * @param _tags 标签信息
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取自动重试的时间段、可设置5至720分钟、0表示不重试
                     * @return AutoRetryTimeRangeMinutes 自动重试的时间段、可设置5至720分钟、0表示不重试
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置自动重试的时间段、可设置5至720分钟、0表示不重试
                     * @param _autoRetryTimeRangeMinutes 自动重试的时间段、可设置5至720分钟、0表示不重试
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改
                     */
                    MigrateOption m_migrateOption;
                    bool m_migrateOptionHasBeenSet;

                    /**
                     * 源实例信息
                     */
                    DBEndpointInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 目标实例信息
                     */
                    DBEndpointInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 迁移任务名称，最大长度128
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 期待启动时间，当RunMode取值为timed时，此值必填，形如："2006-01-02 15:04:05"
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 自动重试的时间段、可设置5至720分钟、0表示不重试
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATIONJOBREQUEST_H_
