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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEAITASKRESULTREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEAITASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DescribeAITaskResult请求参数结构体
                */
                class DescribeAITaskResultRequest : public AbstractModel
                {
                public:
                    DescribeAITaskResultRequest();
                    ~DescribeAITaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AI 任务 ID
                     * @return TaskId AI 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置AI 任务 ID
                     * @param _taskId AI 任务 ID
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
                     * 获取通道ID
                     * @return ChannelId 通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID
                     * @param _channelId 通道ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取桶内文件的路径。
                     * @return Object 桶内文件的路径。
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置桶内文件的路径。
                     * @param _object 桶内文件的路径。
                     * 
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取AI 任务识别类型。可选值为 Facemask(口罩识别)、Chefhat(厨师帽识别)、Smoking(抽烟检测)、Chefcloth(厨师服识别)、PhoneCall(接打电话识别)、Pet(宠物识别)、Body(人体识别)和 Car(车辆车牌识别)
                     * @return DetectType AI 任务识别类型。可选值为 Facemask(口罩识别)、Chefhat(厨师帽识别)、Smoking(抽烟检测)、Chefcloth(厨师服识别)、PhoneCall(接打电话识别)、Pet(宠物识别)、Body(人体识别)和 Car(车辆车牌识别)
                     * 
                     */
                    std::string GetDetectType() const;

                    /**
                     * 设置AI 任务识别类型。可选值为 Facemask(口罩识别)、Chefhat(厨师帽识别)、Smoking(抽烟检测)、Chefcloth(厨师服识别)、PhoneCall(接打电话识别)、Pet(宠物识别)、Body(人体识别)和 Car(车辆车牌识别)
                     * @param _detectType AI 任务识别类型。可选值为 Facemask(口罩识别)、Chefhat(厨师帽识别)、Smoking(抽烟检测)、Chefcloth(厨师服识别)、PhoneCall(接打电话识别)、Pet(宠物识别)、Body(人体识别)和 Car(车辆车牌识别)
                     * 
                     */
                    void SetDetectType(const std::string& _detectType);

                    /**
                     * 判断参数 DetectType 是否已赋值
                     * @return DetectType 是否已赋值
                     * 
                     */
                    bool DetectTypeHasBeenSet() const;

                    /**
                     * 获取开始时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     * @return BeginTime 开始时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     * @param _beginTime 开始时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     * @return EndTime 结束时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     * @param _endTime 结束时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取页码。默认为1
                     * @return PageNumber 页码。默认为1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码。默认为1
                     * @param _pageNumber 页码。默认为1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页 AI 识别结果数量。可选值1～100，默认为10（按时间倒序显示识别结果）
                     * @return PageSize 每页 AI 识别结果数量。可选值1～100，默认为10（按时间倒序显示识别结果）
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页 AI 识别结果数量。可选值1～100，默认为10（按时间倒序显示识别结果）
                     * @param _pageSize 每页 AI 识别结果数量。可选值1～100，默认为10（按时间倒序显示识别结果）
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * AI 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 桶内文件的路径。
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * AI 任务识别类型。可选值为 Facemask(口罩识别)、Chefhat(厨师帽识别)、Smoking(抽烟检测)、Chefcloth(厨师服识别)、PhoneCall(接打电话识别)、Pet(宠物识别)、Body(人体识别)和 Car(车辆车牌识别)
                     */
                    std::string m_detectType;
                    bool m_detectTypeHasBeenSet;

                    /**
                     * 开始时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间时间。秒级时间戳。开始时间和结束时间跨度小于等于30天
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 页码。默认为1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页 AI 识别结果数量。可选值1～100，默认为10（按时间倒序显示识别结果）
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEAITASKRESULTREQUEST_H_
