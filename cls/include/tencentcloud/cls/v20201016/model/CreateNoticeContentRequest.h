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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATENOTICECONTENTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATENOTICECONTENTREQUEST_H_

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
                * CreateNoticeContent请求参数结构体
                */
                class CreateNoticeContentRequest : public AbstractModel
                {
                public:
                    CreateNoticeContentRequest();
                    ~CreateNoticeContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板名称。
                     * @return Name 模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称。
                     * @param _name 模板名称。
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
                     * 获取模板内容语言。0：中文1：英文
                     * @return Type 模板内容语言。0：中文1：英文
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置模板内容语言。0：中文1：英文
                     * @param _type 模板内容语言。0：中文1：英文
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
                     * 获取模板详细配置。
                     * @return NoticeContents 模板详细配置。
                     * 
                     */
                    std::vector<NoticeContent> GetNoticeContents() const;

                    /**
                     * 设置模板详细配置。
                     * @param _noticeContents 模板详细配置。
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
                     * 模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板内容语言。0：中文1：英文
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 模板详细配置。
                     */
                    std::vector<NoticeContent> m_noticeContents;
                    bool m_noticeContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATENOTICECONTENTREQUEST_H_
