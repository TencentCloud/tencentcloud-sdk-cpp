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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETDOCPREVIEWRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETDOCPREVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetDocPreview返回参数结构体
                */
                class GetDocPreviewResponse : public AbstractModel
                {
                public:
                    GetDocPreviewResponse();
                    ~GetDocPreviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件名, 发布端固定使用这个名称
                     * @return FileName 文件名, 发布端固定使用这个名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件类型
                     * @return FileType 文件类型
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取cos路径

                     * @return CosUrl cos路径

                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取cos临时地址

                     * @return Url cos临时地址

                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取cos桶

                     * @return Bucket cos桶

                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取存在文档重命名情况下的新名称, 评测端优先使用这个名称
                     * @return NewName 存在文档重命名情况下的新名称, 评测端优先使用这个名称
                     * 
                     */
                    std::string GetNewName() const;

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     * 
                     */
                    bool NewNameHasBeenSet() const;

                    /**
                     * 获取文件md结果cos临时地址
                     * @return ParseResultCosUrl 文件md结果cos临时地址
                     * 
                     */
                    std::string GetParseResultCosUrl() const;

                    /**
                     * 判断参数 ParseResultCosUrl 是否已赋值
                     * @return ParseResultCosUrl 是否已赋值
                     * 
                     */
                    bool ParseResultCosUrlHasBeenSet() const;

                private:

                    /**
                     * 文件名, 发布端固定使用这个名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * cos路径

                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * cos临时地址

                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * cos桶

                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 存在文档重命名情况下的新名称, 评测端优先使用这个名称
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                    /**
                     * 文件md结果cos临时地址
                     */
                    std::string m_parseResultCosUrl;
                    bool m_parseResultCosUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETDOCPREVIEWRESPONSE_H_
