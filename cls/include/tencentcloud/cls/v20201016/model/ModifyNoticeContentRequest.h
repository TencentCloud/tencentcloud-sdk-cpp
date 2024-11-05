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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYNOTICECONTENTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYNOTICECONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeContent.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyNoticeContent请求参数结构体
                */
                class ModifyNoticeContentRequest : public AbstractModel
                {
                public:
                    ModifyNoticeContentRequest();
                    ~ModifyNoticeContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通知内容模板ID。
                     * @return NoticeContentId 通知内容模板ID。
                     * 
                     */
                    std::string GetNoticeContentId() const;

                    /**
                     * 设置通知内容模板ID。
                     * @param _noticeContentId 通知内容模板ID。
                     * 
                     */
                    void SetNoticeContentId(const std::string& _noticeContentId);

                    /**
                     * 判断参数 NoticeContentId 是否已赋值
                     * @return NoticeContentId 是否已赋值
                     * 
                     */
                    bool NoticeContentIdHasBeenSet() const;

                    /**
                     * 获取通知内容模板名称。
                     * @return Name 通知内容模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置通知内容模板名称。
                     * @param _name 通知内容模板名称。
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
                     * 获取通知内容语言。

0：中文 1：英文
                     * @return Type 通知内容语言。

0：中文 1：英文
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置通知内容语言。

0：中文 1：英文
                     * @param _type 通知内容语言。

0：中文 1：英文
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取通知内容模板详细信息。
                     * @return NoticeContents 通知内容模板详细信息。
                     * 
                     */
                    std::vector<NoticeContent> GetNoticeContents() const;

                    /**
                     * 设置通知内容模板详细信息。
                     * @param _noticeContents 通知内容模板详细信息。
                     * 
                     */
                    void SetNoticeContents(const std::vector<NoticeContent>& _noticeContents);

                    /**
                     * 判断参数 NoticeContents 是否已赋值
                     * @return NoticeContents 是否已赋值
                     * 
                     */
                    bool NoticeContentsHasBeenSet() const;

                private:

                    /**
                     * 通知内容模板ID。
                     */
                    std::string m_noticeContentId;
                    bool m_noticeContentIdHasBeenSet;

                    /**
                     * 通知内容模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 通知内容语言。

0：中文 1：英文
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 通知内容模板详细信息。
                     */
                    std::vector<NoticeContent> m_noticeContents;
                    bool m_noticeContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYNOTICECONTENTREQUEST_H_
