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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDRETRIEVETASKREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDRETRIEVETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/ChannelInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddRecordRetrieveTask请求参数结构体
                */
                class AddRecordRetrieveTaskRequest : public AbstractModel
                {
                public:
                    AddRecordRetrieveTaskRequest();
                    ~AddRecordRetrieveTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，名称全局唯一，不能为空，不能重复
                     * @return TaskName 任务名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，名称全局唯一，不能为空，不能重复
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，名称全局唯一，不能为空，不能重复
                     * @param _taskName 任务名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，名称全局唯一，不能为空，不能重复
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
                     * 获取取回录像的开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * @return StartTime 取回录像的开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置取回录像的开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * @param _startTime 取回录像的开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
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
                     * 获取取回录像的结束时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * @return EndTime 取回录像的结束时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置取回录像的结束时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     * @param _endTime 取回录像的结束时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
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
                     * 获取取回模式， 1:极速模式，其他暂不支持
                     * @return Mode 取回模式， 1:极速模式，其他暂不支持
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置取回模式， 1:极速模式，其他暂不支持
                     * @param _mode 取回模式， 1:极速模式，其他暂不支持
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取取回录像副本有效期，最小为1天，最大为365天
                     * @return Expiration 取回录像副本有效期，最小为1天，最大为365天
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置取回录像副本有效期，最小为1天，最大为365天
                     * @param _expiration 取回录像副本有效期，最小为1天，最大为365天
                     * 
                     */
                    void SetExpiration(const int64_t& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                    /**
                     * 获取设备通道，一个任务最多32个设备通道
                     * @return Channels 设备通道，一个任务最多32个设备通道
                     * 
                     */
                    std::vector<ChannelInfo> GetChannels() const;

                    /**
                     * 设置设备通道，一个任务最多32个设备通道
                     * @param _channels 设备通道，一个任务最多32个设备通道
                     * 
                     */
                    void SetChannels(const std::vector<ChannelInfo>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取取回任务描述
                     * @return Describe 取回任务描述
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置取回任务描述
                     * @param _describe 取回任务描述
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                private:

                    /**
                     * 任务名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，名称全局唯一，不能为空，不能重复
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 取回录像的开始时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 取回录像的结束时间，UTC秒数，例如：1662114146，开始和结束时间段最长为一天，且不能跨天
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 取回模式， 1:极速模式，其他暂不支持
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 取回录像副本有效期，最小为1天，最大为365天
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * 设备通道，一个任务最多32个设备通道
                     */
                    std::vector<ChannelInfo> m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * 取回任务描述
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDRETRIEVETASKREQUEST_H_
