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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCDELIVERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCDELIVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DlcInfo.h>
#include <tencentcloud/cls/v20201016/model/DlcFailHandle.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递DLC任务配置信息
                */
                class DlcDeliverInfo : public AbstractModel
                {
                public:
                    DlcDeliverInfo();
                    ~DlcDeliverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务id。</p>
                     * @return TaskId <p>任务id。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id。</p>
                     * @param _taskId <p>任务id。</p>
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
                     * 获取<p>账号id。</p>
                     * @return Uin <p>账号id。</p>
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置<p>账号id。</p>
                     * @param _uin <p>账号id。</p>
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>日志主题id。</p>
                     * @return TopicId <p>日志主题id。</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id。</p>
                     * @param _topicId <p>日志主题id。</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称。</p>
                     * @return Name <p>任务名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名称。</p>
                     * @param _name <p>任务名称。</p>
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
                     * 获取<p>投递类型，0：实时投递，1：历史投递</p>
                     * @return DeliverType <p>投递类型，0：实时投递，1：历史投递</p>
                     * 
                     */
                    uint64_t GetDeliverType() const;

                    /**
                     * 设置<p>投递类型，0：实时投递，1：历史投递</p>
                     * @param _deliverType <p>投递类型，0：实时投递，1：历史投递</p>
                     * 
                     */
                    void SetDeliverType(const uint64_t& _deliverType);

                    /**
                     * 判断参数 DeliverType 是否已赋值
                     * @return DeliverType 是否已赋值
                     * 
                     */
                    bool DeliverTypeHasBeenSet() const;

                    /**
                     * 获取<p>投递文件大小，单位MB</p>
                     * @return MaxSize <p>投递文件大小，单位MB</p>
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<p>投递文件大小，单位MB</p>
                     * @param _maxSize <p>投递文件大小，单位MB</p>
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>投递间隔 单位秒</p>
                     * @return Interval <p>投递间隔 单位秒</p>
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>投递间隔 单位秒</p>
                     * @param _interval <p>投递间隔 单位秒</p>
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>投递时间范围的开始时间</p>
                     * @return StartTime <p>投递时间范围的开始时间</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>投递时间范围的开始时间</p>
                     * @param _startTime <p>投递时间范围的开始时间</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>投递时间范围的结束时间</p>
                     * @return EndTime <p>投递时间范围的结束时间</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>投递时间范围的结束时间</p>
                     * @param _endTime <p>投递时间范围的结束时间</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>dlc配置信息</p>
                     * @return DlcInfo <p>dlc配置信息</p>
                     * 
                     */
                    DlcInfo GetDlcInfo() const;

                    /**
                     * 设置<p>dlc配置信息</p>
                     * @param _dlcInfo <p>dlc配置信息</p>
                     * 
                     */
                    void SetDlcInfo(const DlcInfo& _dlcInfo);

                    /**
                     * 判断参数 DlcInfo 是否已赋值
                     * @return DlcInfo 是否已赋值
                     * 
                     */
                    bool DlcInfoHasBeenSet() const;

                    /**
                     * 获取<p>是否开启投递服务日志。1关闭，2开启</p>
                     * @return HasServicesLog <p>是否开启投递服务日志。1关闭，2开启</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>是否开启投递服务日志。1关闭，2开启</p>
                     * @param _hasServicesLog <p>是否开启投递服务日志。1关闭，2开启</p>
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
                     * 获取<p>任务状态。</p>
                     * @return Status <p>任务状态。</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态。</p>
                     * @param _status <p>任务状态。</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务进度。历史投递任务生效。</p>
                     * @return Progress <p>任务进度。历史投递任务生效。</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>任务进度。历史投递任务生效。</p>
                     * @param _progress <p>任务进度。历史投递任务生效。</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>日志主题类型。0:标准主题，1:指标主题</p>
                     * @return BizType <p>日志主题类型。0:标准主题，1:指标主题</p>
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置<p>日志主题类型。0:标准主题，1:指标主题</p>
                     * @param _bizType <p>日志主题类型。0:标准主题，1:指标主题</p>
                     * 
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间。</p>
                     * @return CreateTime <p>任务创建时间。</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间。</p>
                     * @param _createTime <p>任务创建时间。</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务修改时间。</p>
                     * @return UpdateTime <p>任务修改时间。</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>任务修改时间。</p>
                     * @param _updateTime <p>任务修改时间。</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>自动创建dlc字段</p><p>默认值：false</p><p>当您的日志中有新增字段时，系统自动将其投递至DLC</p>
                     * @return AutoCreateField <p>自动创建dlc字段</p><p>默认值：false</p><p>当您的日志中有新增字段时，系统自动将其投递至DLC</p>
                     * 
                     */
                    bool GetAutoCreateField() const;

                    /**
                     * 设置<p>自动创建dlc字段</p><p>默认值：false</p><p>当您的日志中有新增字段时，系统自动将其投递至DLC</p>
                     * @param _autoCreateField <p>自动创建dlc字段</p><p>默认值：false</p><p>当您的日志中有新增字段时，系统自动将其投递至DLC</p>
                     * 
                     */
                    void SetAutoCreateField(const bool& _autoCreateField);

                    /**
                     * 判断参数 AutoCreateField 是否已赋值
                     * @return AutoCreateField 是否已赋值
                     * 
                     */
                    bool AutoCreateFieldHasBeenSet() const;

                    /**
                     * 获取<p>将投递失败的日志存储至DLC表</p>
                     * @return DlcFailHandle <p>将投递失败的日志存储至DLC表</p>
                     * 
                     */
                    DlcFailHandle GetDlcFailHandle() const;

                    /**
                     * 设置<p>将投递失败的日志存储至DLC表</p>
                     * @param _dlcFailHandle <p>将投递失败的日志存储至DLC表</p>
                     * 
                     */
                    void SetDlcFailHandle(const DlcFailHandle& _dlcFailHandle);

                    /**
                     * 判断参数 DlcFailHandle 是否已赋值
                     * @return DlcFailHandle 是否已赋值
                     * 
                     */
                    bool DlcFailHandleHasBeenSet() const;

                    /**
                     * 获取<p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
                     * @return DSLFilter <p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
                     * @param _dSLFilter <p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
                     * 
                     */
                    void SetDSLFilter(const std::string& _dSLFilter);

                    /**
                     * 判断参数 DSLFilter 是否已赋值
                     * @return DSLFilter 是否已赋值
                     * 
                     */
                    bool DSLFilterHasBeenSet() const;

                private:

                    /**
                     * <p>任务id。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>账号id。</p>
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>日志主题id。</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>任务名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>投递类型，0：实时投递，1：历史投递</p>
                     */
                    uint64_t m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * <p>投递文件大小，单位MB</p>
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>投递间隔 单位秒</p>
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>投递时间范围的开始时间</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>投递时间范围的结束时间</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>dlc配置信息</p>
                     */
                    DlcInfo m_dlcInfo;
                    bool m_dlcInfoHasBeenSet;

                    /**
                     * <p>是否开启投递服务日志。1关闭，2开启</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>任务状态。</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务进度。历史投递任务生效。</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>日志主题类型。0:标准主题，1:指标主题</p>
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>任务创建时间。</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务修改时间。</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>自动创建dlc字段</p><p>默认值：false</p><p>当您的日志中有新增字段时，系统自动将其投递至DLC</p>
                     */
                    bool m_autoCreateField;
                    bool m_autoCreateFieldHasBeenSet;

                    /**
                     * <p>将投递失败的日志存储至DLC表</p>
                     */
                    DlcFailHandle m_dlcFailHandle;
                    bool m_dlcFailHandleHasBeenSet;

                    /**
                     * <p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCDELIVERINFO_H_
