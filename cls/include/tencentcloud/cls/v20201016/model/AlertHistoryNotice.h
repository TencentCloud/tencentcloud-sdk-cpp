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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALERTHISTORYNOTICE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALERTHISTORYNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 告警通知渠道组详情
                */
                class AlertHistoryNotice : public AbstractModel
                {
                public:
                    AlertHistoryNotice();
                    ~AlertHistoryNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知渠道组名称
                     * @return Name 通知渠道组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置通知渠道组名称
                     * @param _name 通知渠道组名称
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
                     * 获取通知渠道组ID
                     * @return AlarmNoticeId 通知渠道组ID
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置通知渠道组ID
                     * @param _alarmNoticeId 通知渠道组ID
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
                     * 通知渠道组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 通知渠道组ID
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALERTHISTORYNOTICE_H_
