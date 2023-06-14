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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICERESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmNotice.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmNotice返回参数结构体
                */
                class DescribeAlarmNoticeResponse : public AbstractModel
                {
                public:
                    DescribeAlarmNoticeResponse();
                    ~DescribeAlarmNoticeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警通知模板详细信息
                     * @return Notice 告警通知模板详细信息
                     * 
                     */
                    AlarmNotice GetNotice() const;

                    /**
                     * 判断参数 Notice 是否已赋值
                     * @return Notice 是否已赋值
                     * 
                     */
                    bool NoticeHasBeenSet() const;

                private:

                    /**
                     * 告警通知模板详细信息
                     */
                    AlarmNotice m_notice;
                    bool m_noticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICERESPONSE_H_
