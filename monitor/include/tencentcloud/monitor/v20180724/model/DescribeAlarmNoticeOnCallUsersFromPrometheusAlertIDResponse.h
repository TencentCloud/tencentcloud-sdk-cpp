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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICEONCALLUSERSFROMPROMETHEUSALERTIDRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICEONCALLUSERSFROMPROMETHEUSALERTIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/NoticeOnCallUsersInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmNoticeOnCallUsersFromPrometheusAlertID返回参数结构体
                */
                class DescribeAlarmNoticeOnCallUsersFromPrometheusAlertIDResponse : public AbstractModel
                {
                public:
                    DescribeAlarmNoticeOnCallUsersFromPrometheusAlertIDResponse();
                    ~DescribeAlarmNoticeOnCallUsersFromPrometheusAlertIDResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警通知模板列表</p>
                     * @return Notices <p>告警通知模板列表</p>
                     * 
                     */
                    std::vector<NoticeOnCallUsersInfo> GetNotices() const;

                    /**
                     * 判断参数 Notices 是否已赋值
                     * @return Notices 是否已赋值
                     * 
                     */
                    bool NoticesHasBeenSet() const;

                private:

                    /**
                     * <p>告警通知模板列表</p>
                     */
                    std::vector<NoticeOnCallUsersInfo> m_notices;
                    bool m_noticesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICEONCALLUSERSFROMPROMETHEUSALERTIDRESPONSE_H_
