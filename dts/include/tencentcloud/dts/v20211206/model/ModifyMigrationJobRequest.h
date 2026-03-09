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
                     * 获取<p>任务id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
                     * @return JobId <p>任务id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>任务id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
                     * @param _jobId <p>任务id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
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
                     * 获取<p>运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)</p>
                     * @return RunMode <p>运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)</p>
                     * @param _runMode <p>运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)</p>
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
                     * 获取<p>迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改</p>
                     * @return MigrateOption <p>迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改</p>
                     * 
                     */
                    MigrateOption GetMigrateOption() const;

                    /**
                     * 设置<p>迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改</p>
                     * @param _migrateOption <p>迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改</p>
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
                     * 获取<p>源实例信息</p>
                     * @return SrcInfo <p>源实例信息</p>
                     * 
                     */
                    DBEndpointInfo GetSrcInfo() const;

                    /**
                     * 设置<p>源实例信息</p>
                     * @param _srcInfo <p>源实例信息</p>
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
                     * 获取<p>目标实例信息</p>
                     * @return DstInfo <p>目标实例信息</p>
                     * 
                     */
                    DBEndpointInfo GetDstInfo() const;

                    /**
                     * 设置<p>目标实例信息</p>
                     * @param _dstInfo <p>目标实例信息</p>
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
                     * 获取<p>迁移任务名称，最大长度128</p>
                     * @return JobName <p>迁移任务名称，最大长度128</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>迁移任务名称，最大长度128</p>
                     * @param _jobName <p>迁移任务名称，最大长度128</p>
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
                     * 获取<p>期待启动时间，当RunMode取值为timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
                     * @return ExpectRunTime <p>期待启动时间，当RunMode取值为timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置<p>期待启动时间，当RunMode取值为timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
                     * @param _expectRunTime <p>期待启动时间，当RunMode取值为timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
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
                     * 获取<p>标签信息</p>
                     * @return Tags <p>标签信息</p>
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tags <p>标签信息</p>
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
                     * 获取<p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
                     * @return AutoRetryTimeRangeMinutes <p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置<p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
                     * @param _autoRetryTimeRangeMinutes <p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
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
                     * <p>任务id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>迁移任务配置选项，描述任务如何执行迁移等一系列配置信息；字段下的RateLimitOption不可配置、如果需要修改任务的限速信息、请在任务运行后通过ModifyMigrateRateLimit接口修改</p>
                     */
                    MigrateOption m_migrateOption;
                    bool m_migrateOptionHasBeenSet;

                    /**
                     * <p>源实例信息</p>
                     */
                    DBEndpointInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * <p>目标实例信息</p>
                     */
                    DBEndpointInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * <p>迁移任务名称，最大长度128</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>期待启动时间，当RunMode取值为timed时，此值必填，形如：&quot;2006-01-02 15:04:05&quot;</p>
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>自动重试的时间段、可设置5至720分钟、0表示不重试</p>
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATIONJOBREQUEST_H_
