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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADFILEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/AnchorExtendInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * UploadFile请求参数结构体
                */
                class UploadFileRequest : public AbstractModel
                {
                public:
                    UploadFileRequest();
                    ~UploadFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件类型
__IdCard__:身份证
__IdCardCheck__:身份证加验证(只支持人像面)
                     * @return FileType 文件类型
__IdCard__:身份证
__IdCardCheck__:身份证加验证(只支持人像面)
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型
__IdCard__:身份证
__IdCardCheck__:身份证加验证(只支持人像面)
                     * @param _fileType 文件类型
__IdCard__:身份证
__IdCardCheck__:身份证加验证(只支持人像面)
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取文件链接
__FileUrl和FileContent二选一__
                     * @return FileUrl 文件链接
__FileUrl和FileContent二选一__
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件链接
__FileUrl和FileContent二选一__
                     * @param _fileUrl 文件链接
__FileUrl和FileContent二选一__
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
                     * 获取文件内容，Base64编码
__FileUrl和FileContent二选一__
                     * @return FileContent 文件内容，Base64编码
__FileUrl和FileContent二选一__
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置文件内容，Base64编码
__FileUrl和FileContent二选一__
                     * @param _fileContent 文件内容，Base64编码
__FileUrl和FileContent二选一__
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取文件扩展信息
                     * @return FileExtendInfo 文件扩展信息
                     * 
                     */
                    std::vector<AnchorExtendInfo> GetFileExtendInfo() const;

                    /**
                     * 设置文件扩展信息
                     * @param _fileExtendInfo 文件扩展信息
                     * 
                     */
                    void SetFileExtendInfo(const std::vector<AnchorExtendInfo>& _fileExtendInfo);

                    /**
                     * 判断参数 FileExtendInfo 是否已赋值
                     * @return FileExtendInfo 是否已赋值
                     * 
                     */
                    bool FileExtendInfoHasBeenSet() const;

                private:

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件类型
__IdCard__:身份证
__IdCardCheck__:身份证加验证(只支持人像面)
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件链接
__FileUrl和FileContent二选一__
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 文件内容，Base64编码
__FileUrl和FileContent二选一__
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 文件扩展信息
                     */
                    std::vector<AnchorExtendInfo> m_fileExtendInfo;
                    bool m_fileExtendInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADFILEREQUEST_H_
