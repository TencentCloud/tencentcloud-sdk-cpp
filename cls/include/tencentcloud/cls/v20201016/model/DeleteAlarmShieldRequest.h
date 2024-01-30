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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEALARMSHIELDREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEALARMSHIELDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteAlarmShield请求参数结构体
                */
                class DeleteAlarmShieldRequest : public AbstractModel
                {
                public:
                    DeleteAlarmShieldRequest();
                    ~DeleteAlarmShieldRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取屏蔽规则id。
                     * @return TaskId 屏蔽规则id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置屏蔽规则id。
                     * @param _taskId 屏蔽规则id。
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
                     * 获取通知渠道组id。
                     * @return AlarmNoticeId 通知渠道组id。
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置通知渠道组id。
                     * @param _alarmNoticeId 通知渠道组id。
                     * 
                     */
                    void SetAlarmNoticeId(const std::string& _alarmNoticeId);

                    /**
                     * 判断参数 AlarmNoticeId 是否已赋值
                     * @return AlarmNoticeId 是否已赋值
                     * 
                     */
                    bool AlarmNoticeIdHasBeenSet() const;

                private:

                    /**
                     * 屏蔽规则id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 通知渠道组id。
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEALARMSHIELDREQUEST_H_
