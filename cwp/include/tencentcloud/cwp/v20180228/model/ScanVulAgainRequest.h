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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULAGAINREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULAGAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ScanVulAgain请求参数结构体
                */
                class ScanVulAgainRequest : public AbstractModel
                {
                public:
                    ScanVulAgainRequest();
                    ~ScanVulAgainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞事件id串，多个用英文逗号分隔
                     * @return EventIds 漏洞事件id串，多个用英文逗号分隔
                     * 
                     */
                    std::string GetEventIds() const;

                    /**
                     * 设置漏洞事件id串，多个用英文逗号分隔
                     * @param _eventIds 漏洞事件id串，多个用英文逗号分隔
                     * 
                     */
                    void SetEventIds(const std::string& _eventIds);

                    /**
                     * 判断参数 EventIds 是否已赋值
                     * @return EventIds 是否已赋值
                     * 
                     */
                    bool EventIdsHasBeenSet() const;

                    /**
                     * 获取重新检查的机器uuid,多个逗号分隔
                     * @return Uuids 重新检查的机器uuid,多个逗号分隔
                     * 
                     */
                    std::string GetUuids() const;

                    /**
                     * 设置重新检查的机器uuid,多个逗号分隔
                     * @param _uuids 重新检查的机器uuid,多个逗号分隔
                     * 
                     */
                    void SetUuids(const std::string& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                private:

                    /**
                     * 漏洞事件id串，多个用英文逗号分隔
                     */
                    std::string m_eventIds;
                    bool m_eventIdsHasBeenSet;

                    /**
                     * 重新检查的机器uuid,多个逗号分隔
                     */
                    std::string m_uuids;
                    bool m_uuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULAGAINREQUEST_H_
