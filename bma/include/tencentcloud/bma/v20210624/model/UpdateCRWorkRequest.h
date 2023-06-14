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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_UPDATECRWORKREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_UPDATECRWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * UpdateCRWork请求参数结构体
                */
                class UpdateCRWorkRequest : public AbstractModel
                {
                public:
                    UpdateCRWorkRequest();
                    ~UpdateCRWorkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作品ID
                     * @return WorkId 作品ID
                     * 
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置作品ID
                     * @param _workId 作品ID
                     * 
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取文件的扩展名，例如txt，docx
                     * @return ContentType 文件的扩展名，例如txt，docx
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置文件的扩展名，例如txt，docx
                     * @param _contentType 文件的扩展名，例如txt，docx
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取内容的base64编码
                     * @return Content 内容的base64编码
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容的base64编码
                     * @param _content 内容的base64编码
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取本次存证类型：0-不存证 1-存当前文件 2-存历史全量文件
                     * @return CertType 本次存证类型：0-不存证 1-存当前文件 2-存历史全量文件
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置本次存证类型：0-不存证 1-存当前文件 2-存历史全量文件
                     * @param _certType 本次存证类型：0-不存证 1-存当前文件 2-存历史全量文件
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                private:

                    /**
                     * 作品ID
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 文件的扩展名，例如txt，docx
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 内容的base64编码
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 本次存证类型：0-不存证 1-存当前文件 2-存历史全量文件
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_UPDATECRWORKREQUEST_H_
