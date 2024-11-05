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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETENOTICECONTENTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETENOTICECONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteNoticeContent请求参数结构体
                */
                class DeleteNoticeContentRequest : public AbstractModel
                {
                public:
                    DeleteNoticeContentRequest();
                    ~DeleteNoticeContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通知内容模板ID
                     * @return NoticeContentId 通知内容模板ID
                     * 
                     */
                    std::string GetNoticeContentId() const;

                    /**
                     * 设置通知内容模板ID
                     * @param _noticeContentId 通知内容模板ID
                     * 
                     */
                    void SetNoticeContentId(const std::string& _noticeContentId);

                    /**
                     * 判断参数 NoticeContentId 是否已赋值
                     * @return NoticeContentId 是否已赋值
                     * 
                     */
                    bool NoticeContentIdHasBeenSet() const;

                private:

                    /**
                     * 通知内容模板ID
                     */
                    std::string m_noticeContentId;
                    bool m_noticeContentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETENOTICECONTENTREQUEST_H_
