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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICERESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateAlarmNotice返回参数结构体
                */
                class CreateAlarmNoticeResponse : public AbstractModel
                {
                public:
                    CreateAlarmNoticeResponse();
                    ~CreateAlarmNoticeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警通知模板ID
                     * @return NoticeId 告警通知模板ID
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                private:

                    /**
                     * 告警通知模板ID
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICERESPONSE_H_
