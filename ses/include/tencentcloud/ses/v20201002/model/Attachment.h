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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_ATTACHMENT_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_ATTACHMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 附件结构，包含附件名和base64之后的附件内容。
                */
                class Attachment : public AbstractModel
                {
                public:
                    Attachment();
                    ~Attachment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取附件名称，最大支持255个字符长度，不支持部分附件类型，详情请参考[附件类型](https://cloud.tencent.com/document/product/1288/51951)。
                     * @return FileName 附件名称，最大支持255个字符长度，不支持部分附件类型，详情请参考[附件类型](https://cloud.tencent.com/document/product/1288/51951)。
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置附件名称，最大支持255个字符长度，不支持部分附件类型，详情请参考[附件类型](https://cloud.tencent.com/document/product/1288/51951)。
                     * @param FileName 附件名称，最大支持255个字符长度，不支持部分附件类型，详情请参考[附件类型](https://cloud.tencent.com/document/product/1288/51951)。
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取base64之后的附件内容，您可以发送的附件大小上限为4 MB。 注意：腾讯云api目前要求请求包大小不得超过8 MB。如果您要发送多个附件，那么这些附件的总大小不能超过8 MB。
                     * @return Content base64之后的附件内容，您可以发送的附件大小上限为4 MB。 注意：腾讯云api目前要求请求包大小不得超过8 MB。如果您要发送多个附件，那么这些附件的总大小不能超过8 MB。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置base64之后的附件内容，您可以发送的附件大小上限为4 MB。 注意：腾讯云api目前要求请求包大小不得超过8 MB。如果您要发送多个附件，那么这些附件的总大小不能超过8 MB。
                     * @param Content base64之后的附件内容，您可以发送的附件大小上限为4 MB。 注意：腾讯云api目前要求请求包大小不得超过8 MB。如果您要发送多个附件，那么这些附件的总大小不能超过8 MB。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 附件名称，最大支持255个字符长度，不支持部分附件类型，详情请参考[附件类型](https://cloud.tencent.com/document/product/1288/51951)。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * base64之后的附件内容，您可以发送的附件大小上限为4 MB。 注意：腾讯云api目前要求请求包大小不得超过8 MB。如果您要发送多个附件，那么这些附件的总大小不能超过8 MB。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_ATTACHMENT_H_
