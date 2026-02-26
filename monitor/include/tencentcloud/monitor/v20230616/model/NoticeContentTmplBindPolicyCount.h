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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPLBINDPOLICYCOUNT_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPLBINDPOLICYCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 通知内容模板绑定告警策略数量
                */
                class NoticeContentTmplBindPolicyCount : public AbstractModel
                {
                public:
                    NoticeContentTmplBindPolicyCount();
                    ~NoticeContentTmplBindPolicyCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知内容模板ID
                     * @return NoticeContentTmplID 通知内容模板ID
                     * 
                     */
                    std::string GetNoticeContentTmplID() const;

                    /**
                     * 设置通知内容模板ID
                     * @param _noticeContentTmplID 通知内容模板ID
                     * 
                     */
                    void SetNoticeContentTmplID(const std::string& _noticeContentTmplID);

                    /**
                     * 判断参数 NoticeContentTmplID 是否已赋值
                     * @return NoticeContentTmplID 是否已赋值
                     * 
                     */
                    bool NoticeContentTmplIDHasBeenSet() const;

                    /**
                     * 获取绑定告警策略数量
                     * @return BindCount 绑定告警策略数量
                     * 
                     */
                    uint64_t GetBindCount() const;

                    /**
                     * 设置绑定告警策略数量
                     * @param _bindCount 绑定告警策略数量
                     * 
                     */
                    void SetBindCount(const uint64_t& _bindCount);

                    /**
                     * 判断参数 BindCount 是否已赋值
                     * @return BindCount 是否已赋值
                     * 
                     */
                    bool BindCountHasBeenSet() const;

                private:

                    /**
                     * 通知内容模板ID
                     */
                    std::string m_noticeContentTmplID;
                    bool m_noticeContentTmplIDHasBeenSet;

                    /**
                     * 绑定告警策略数量
                     */
                    uint64_t m_bindCount;
                    bool m_bindCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPLBINDPOLICYCOUNT_H_
