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
                     * 获取任务id。
                     * @return TaskId 任务id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id。
                     * @param _taskId 任务id。
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
                     * 获取账号id。
                     * @return Uin 账号id。
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置账号id。
                     * @param _uin 账号id。
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
                     * 获取日志主题id。
                     * @return TopicId 日志主题id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id。
                     * @param _topicId 日志主题id。
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
                     * 获取任务名称。
                     * @return Name 任务名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称。
                     * @param _name 任务名称。
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
                     * 获取投递类型，0：实时投递，1：历史投递
                     * @return DeliverType 投递类型，0：实时投递，1：历史投递
                     * 
                     */
                    uint64_t GetDeliverType() const;

                    /**
                     * 设置投递类型，0：实时投递，1：历史投递
                     * @param _deliverType 投递类型，0：实时投递，1：历史投递
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
                     * 获取投递文件大小，单位MB
                     * @return MaxSize 投递文件大小，单位MB
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置投递文件大小，单位MB
                     * @param _maxSize 投递文件大小，单位MB
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
                     * 获取投递间隔 单位秒
                     * @return Interval 投递间隔 单位秒
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置投递间隔 单位秒
                     * @param _interval 投递间隔 单位秒
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
                     * 获取投递时间范围的开始时间
                     * @return StartTime 投递时间范围的开始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置投递时间范围的开始时间
                     * @param _startTime 投递时间范围的开始时间
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
                     * 获取投递时间范围的结束时间
                     * @return EndTime 投递时间范围的结束时间
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置投递时间范围的结束时间
                     * @param _endTime 投递时间范围的结束时间
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
                     * 获取dlc配置信息
                     * @return DlcInfo dlc配置信息
                     * 
                     */
                    DlcInfo GetDlcInfo() const;

                    /**
                     * 设置dlc配置信息
                     * @param _dlcInfo dlc配置信息
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
                     * 获取任务状态。
                     * @return Status 任务状态。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态。
                     * @param _status 任务状态。
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
                     * 获取任务进度。历史投递任务生效。
                     * @return Progress 任务进度。历史投递任务生效。
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置任务进度。历史投递任务生效。
                     * @param _progress 任务进度。历史投递任务生效。
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
                     * 获取日志主题类型。0:标准主题，1:指标主题
                     * @return BizType 日志主题类型。0:标准主题，1:指标主题
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置日志主题类型。0:标准主题，1:指标主题
                     * @param _bizType 日志主题类型。0:标准主题，1:指标主题
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
                     * 获取任务创建时间。
                     * @return CreateTime 任务创建时间。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
                     * @param _createTime 任务创建时间。
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
                     * 获取任务修改时间。
                     * @return UpdateTime 任务修改时间。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置任务修改时间。
                     * @param _updateTime 任务修改时间。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 账号id。
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 日志主题id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 任务名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 投递类型，0：实时投递，1：历史投递
                     */
                    uint64_t m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * 投递文件大小，单位MB
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 投递间隔 单位秒
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 投递时间范围的开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 投递时间范围的结束时间
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * dlc配置信息
                     */
                    DlcInfo m_dlcInfo;
                    bool m_dlcInfoHasBeenSet;

                    /**
                     * 是否开启投递服务日志。1关闭，2开启
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * 任务状态。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务进度。历史投递任务生效。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 日志主题类型。0:标准主题，1:指标主题
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 任务创建时间。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务修改时间。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCDELIVERINFO_H_
