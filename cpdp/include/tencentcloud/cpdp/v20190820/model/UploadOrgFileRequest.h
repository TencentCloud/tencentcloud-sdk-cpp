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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADORGFILEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADORGFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * UploadOrgFile请求参数结构体
                */
                class UploadOrgFileRequest : public AbstractModel
                {
                public:
                    UploadOrgFileRequest();
                    ~UploadOrgFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收单系统分配的开放ID
                     * @return OpenId 收单系统分配的开放ID
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置收单系统分配的开放ID
                     * @param _openId 收单系统分配的开放ID
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取收单系统分配的密钥
                     * @return OpenKey 收单系统分配的密钥
                     * 
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置收单系统分配的密钥
                     * @param _openKey 收单系统分配的密钥
                     * 
                     */
                    void SetOpenKey(const std::string& _openKey);

                    /**
                     * 判断参数 OpenKey 是否已赋值
                     * @return OpenKey 是否已赋值
                     * 
                     */
                    bool OpenKeyHasBeenSet() const;

                    /**
                     * 获取存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
                     * @return Storage 存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
                     * 
                     */
                    std::string GetStorage() const;

                    /**
                     * 设置存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
                     * @param _storage 存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
                     * 
                     */
                    void SetStorage(const std::string& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取文件的md5值（为防止平台多次上传重复文件，文件名为文件md5,且不会覆盖，重复上传返回第一次上传成功的文件路径）
                     * @return FileMd5 文件的md5值（为防止平台多次上传重复文件，文件名为文件md5,且不会覆盖，重复上传返回第一次上传成功的文件路径）
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置文件的md5值（为防止平台多次上传重复文件，文件名为文件md5,且不会覆盖，重复上传返回第一次上传成功的文件路径）
                     * @param _fileMd5 文件的md5值（为防止平台多次上传重复文件，文件名为文件md5,且不会覆盖，重复上传返回第一次上传成功的文件路径）
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取文件内容（先将图片转换成二进制，再进行base64加密）
                     * @return FileContent 文件内容（先将图片转换成二进制，再进行base64加密）
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置文件内容（先将图片转换成二进制，再进行base64加密）
                     * @param _fileContent 文件内容（先将图片转换成二进制，再进行base64加密）
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
                     * 获取文件扩展名（png,jpg,gif）
                     * @return FileExtension 文件扩展名（png,jpg,gif）
                     * 
                     */
                    std::string GetFileExtension() const;

                    /**
                     * 设置文件扩展名（png,jpg,gif）
                     * @param _fileExtension 文件扩展名（png,jpg,gif）
                     * 
                     */
                    void SetFileExtension(const std::string& _fileExtension);

                    /**
                     * 判断参数 FileExtension 是否已赋值
                     * @return FileExtension 是否已赋值
                     * 
                     */
                    bool FileExtensionHasBeenSet() const;

                    /**
                     * 获取沙箱环境填sandbox，正式环境不填
                     * @return Profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置沙箱环境填sandbox，正式环境不填
                     * @param _profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 收单系统分配的开放ID
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 收单系统分配的密钥
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
                     */
                    std::string m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 文件的md5值（为防止平台多次上传重复文件，文件名为文件md5,且不会覆盖，重复上传返回第一次上传成功的文件路径）
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 文件内容（先将图片转换成二进制，再进行base64加密）
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 文件扩展名（png,jpg,gif）
                     */
                    std::string m_fileExtension;
                    bool m_fileExtensionHasBeenSet;

                    /**
                     * 沙箱环境填sandbox，正式环境不填
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADORGFILEREQUEST_H_
