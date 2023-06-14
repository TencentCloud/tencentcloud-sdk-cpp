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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEMODERATIONREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * ImageModeration请求参数结构体
                */
                class ImageModerationRequest : public AbstractModel
                {
                public:
                    ImageModerationRequest();
                    ~ImageModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件地址
                     * @return FileUrl 文件地址
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件地址
                     * @param _fileUrl 文件地址
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取文件MD5值
                     * @return FileMD5 文件MD5值
                     * 
                     */
                    std::string GetFileMD5() const;

                    /**
                     * 设置文件MD5值
                     * @param _fileMD5 文件MD5值
                     * 
                     */
                    void SetFileMD5(const std::string& _fileMD5);

                    /**
                     * 判断参数 FileMD5 是否已赋值
                     * @return FileMD5 是否已赋值
                     * 
                     */
                    bool FileMD5HasBeenSet() const;

                    /**
                     * 获取文件内容 Base64,与FileUrl必须二填一
                     * @return FileContent 文件内容 Base64,与FileUrl必须二填一
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置文件内容 Base64,与FileUrl必须二填一
                     * @param _fileContent 文件内容 Base64,与FileUrl必须二填一
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                private:

                    /**
                     * 文件地址
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 文件MD5值
                     */
                    std::string m_fileMD5;
                    bool m_fileMD5HasBeenSet;

                    /**
                     * 文件内容 Base64,与FileUrl必须二填一
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEMODERATIONREQUEST_H_
