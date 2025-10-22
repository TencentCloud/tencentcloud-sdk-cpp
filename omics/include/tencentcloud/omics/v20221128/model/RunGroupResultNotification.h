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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNGROUPRESULTNOTIFICATION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNGROUPRESULTNOTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/NotificationType.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 任务批次结果通知
                */
                class RunGroupResultNotification : public AbstractModel
                {
                public:
                    RunGroupResultNotification();
                    ~RunGroupResultNotification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知类型。
                     * @return NotificationType 通知类型。
                     * 
                     */
                    NotificationType GetNotificationType() const;

                    /**
                     * 设置通知类型。
                     * @param _notificationType 通知类型。
                     * 
                     */
                    void SetNotificationType(const NotificationType& _notificationType);

                    /**
                     * 判断参数 NotificationType 是否已赋值
                     * @return NotificationType 是否已赋值
                     * 
                     */
                    bool NotificationTypeHasBeenSet() const;

                private:

                    /**
                     * 通知类型。
                     */
                    NotificationType m_notificationType;
                    bool m_notificationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNGROUPRESULTNOTIFICATION_H_
