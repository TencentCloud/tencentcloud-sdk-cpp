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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTIFYRELATEDNOTICE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTIFYRELATEDNOTICE_H_

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
                * 通知历史中关联的通知模板信息
                */
                class NotifyRelatedNotice : public AbstractModel
                {
                public:
                    NotifyRelatedNotice();
                    ~NotifyRelatedNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知模板ID
                     * @return NoticeId 通知模板ID
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置通知模板ID
                     * @param _noticeId 通知模板ID
                     * 
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取通知模板的名称
                     * @return NoticeName 通知模板的名称
                     * 
                     */
                    std::string GetNoticeName() const;

                    /**
                     * 设置通知模板的名称
                     * @param _noticeName 通知模板的名称
                     * 
                     */
                    void SetNoticeName(const std::string& _noticeName);

                    /**
                     * 判断参数 NoticeName 是否已赋值
                     * @return NoticeName 是否已赋值
                     * 
                     */
                    bool NoticeNameHasBeenSet() const;

                private:

                    /**
                     * 通知模板ID
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * 通知模板的名称
                     */
                    std::string m_noticeName;
                    bool m_noticeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTIFYRELATEDNOTICE_H_
