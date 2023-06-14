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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_MODIFYCONFIGATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_MODIFYCONFIGATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * ModifyConfigAttribute请求参数结构体
                */
                class ModifyConfigAttributeRequest : public AbstractModel
                {
                public:
                    ModifyConfigAttributeRequest();
                    ~ModifyConfigAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞告警通知等级，4位分别代表：高危、中危、低危、提示
                     * @return NoticeLevel 漏洞告警通知等级，4位分别代表：高危、中危、低危、提示
                     * 
                     */
                    std::string GetNoticeLevel() const;

                    /**
                     * 设置漏洞告警通知等级，4位分别代表：高危、中危、低危、提示
                     * @param _noticeLevel 漏洞告警通知等级，4位分别代表：高危、中危、低危、提示
                     * 
                     */
                    void SetNoticeLevel(const std::string& _noticeLevel);

                    /**
                     * 判断参数 NoticeLevel 是否已赋值
                     * @return NoticeLevel 是否已赋值
                     * 
                     */
                    bool NoticeLevelHasBeenSet() const;

                private:

                    /**
                     * 漏洞告警通知等级，4位分别代表：高危、中危、低危、提示
                     */
                    std::string m_noticeLevel;
                    bool m_noticeLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_MODIFYCONFIGATTRIBUTEREQUEST_H_
