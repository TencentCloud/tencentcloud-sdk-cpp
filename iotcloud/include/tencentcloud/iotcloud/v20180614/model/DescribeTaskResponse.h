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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBETASKRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * DescribeTask返回参数结构体
                */
                class DescribeTaskResponse : public AbstractModel
                {
                public:
                    DescribeTaskResponse();
                    ~DescribeTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型，目前取值为 “UpdateShadow” 或者 “PublishMessage”
                     * @return Type 任务类型，目前取值为 “UpdateShadow” 或者 “PublishMessage”
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取任务 ID
                     * @return Id 任务 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取产品 ID
                     * @return ProductId 产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取状态。1表示等待处理，2表示调度处理中，3表示已完成，4表示失败，5表示已取消
                     * @return Status 状态。1表示等待处理，2表示调度处理中，3表示已完成，4表示失败，5表示已取消
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间，Unix 时间戳
                     * @return CreateTime 任务创建时间，Unix 时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后任务更新时间，Unix 时间戳
                     * @return UpdateTime 最后任务更新时间，Unix 时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取任务完成时间，Unix 时间戳
                     * @return DoneTime 任务完成时间，Unix 时间戳
                     * 
                     */
                    uint64_t GetDoneTime() const;

                    /**
                     * 判断参数 DoneTime 是否已赋值
                     * @return DoneTime 是否已赋值
                     * 
                     */
                    bool DoneTimeHasBeenSet() const;

                    /**
                     * 获取被调度时间，Unix 时间戳
                     * @return ScheduleTime 被调度时间，Unix 时间戳
                     * 
                     */
                    uint64_t GetScheduleTime() const;

                    /**
                     * 判断参数 ScheduleTime 是否已赋值
                     * @return ScheduleTime 是否已赋值
                     * 
                     */
                    bool ScheduleTimeHasBeenSet() const;

                    /**
                     * 获取返回的错误码
                     * @return RetCode 返回的错误码
                     * 
                     */
                    uint64_t GetRetCode() const;

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                    /**
                     * 获取返回的错误信息
                     * @return ErrMsg 返回的错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取完成任务的设备比例
                     * @return Percent 完成任务的设备比例
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取匹配到的需执行任务的设备数目
                     * @return AllDeviceCnt 匹配到的需执行任务的设备数目
                     * 
                     */
                    uint64_t GetAllDeviceCnt() const;

                    /**
                     * 判断参数 AllDeviceCnt 是否已赋值
                     * @return AllDeviceCnt 是否已赋值
                     * 
                     */
                    bool AllDeviceCntHasBeenSet() const;

                    /**
                     * 获取已完成任务的设备数目
                     * @return DoneDeviceCnt 已完成任务的设备数目
                     * 
                     */
                    uint64_t GetDoneDeviceCnt() const;

                    /**
                     * 判断参数 DoneDeviceCnt 是否已赋值
                     * @return DoneDeviceCnt 是否已赋值
                     * 
                     */
                    bool DoneDeviceCntHasBeenSet() const;

                private:

                    /**
                     * 任务类型，目前取值为 “UpdateShadow” 或者 “PublishMessage”
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 状态。1表示等待处理，2表示调度处理中，3表示已完成，4表示失败，5表示已取消
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务创建时间，Unix 时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后任务更新时间，Unix 时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务完成时间，Unix 时间戳
                     */
                    uint64_t m_doneTime;
                    bool m_doneTimeHasBeenSet;

                    /**
                     * 被调度时间，Unix 时间戳
                     */
                    uint64_t m_scheduleTime;
                    bool m_scheduleTimeHasBeenSet;

                    /**
                     * 返回的错误码
                     */
                    uint64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * 返回的错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 完成任务的设备比例
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 匹配到的需执行任务的设备数目
                     */
                    uint64_t m_allDeviceCnt;
                    bool m_allDeviceCntHasBeenSet;

                    /**
                     * 已完成任务的设备数目
                     */
                    uint64_t m_doneDeviceCnt;
                    bool m_doneDeviceCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBETASKRESPONSE_H_
