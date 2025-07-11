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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICECONTENTTMPLBINDINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICECONTENTTMPLBINDINFO_H_

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
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 通知内容模板绑定信息
                */
                class NoticeContentTmplBindInfo : public AbstractModel
                {
                public:
                    NoticeContentTmplBindInfo();
                    ~NoticeContentTmplBindInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知内容模板ID
                     * @return ContentTmplID 通知内容模板ID
                     * 
                     */
                    std::string GetContentTmplID() const;

                    /**
                     * 设置通知内容模板ID
                     * @param _contentTmplID 通知内容模板ID
                     * 
                     */
                    void SetContentTmplID(const std::string& _contentTmplID);

                    /**
                     * 判断参数 ContentTmplID 是否已赋值
                     * @return ContentTmplID 是否已赋值
                     * 
                     */
                    bool ContentTmplIDHasBeenSet() const;

                    /**
                     * 获取通知模板ID
                     * @return NoticeID 通知模板ID
                     * 
                     */
                    std::string GetNoticeID() const;

                    /**
                     * 设置通知模板ID
                     * @param _noticeID 通知模板ID
                     * 
                     */
                    void SetNoticeID(const std::string& _noticeID);

                    /**
                     * 判断参数 NoticeID 是否已赋值
                     * @return NoticeID 是否已赋值
                     * 
                     */
                    bool NoticeIDHasBeenSet() const;

                private:

                    /**
                     * 通知内容模板ID
                     */
                    std::string m_contentTmplID;
                    bool m_contentTmplIDHasBeenSet;

                    /**
                     * 通知模板ID
                     */
                    std::string m_noticeID;
                    bool m_noticeIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICECONTENTTMPLBINDINFO_H_
