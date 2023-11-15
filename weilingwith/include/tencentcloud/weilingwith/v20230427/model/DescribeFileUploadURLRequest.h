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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEFILEUPLOADURLREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEFILEUPLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeFileUploadURL请求参数结构体
                */
                class DescribeFileUploadURLRequest : public AbstractModel
                {
                public:
                    DescribeFileUploadURLRequest();
                    ~DescribeFileUploadURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间Id
                     * @return WorkspaceId 工作空间Id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间Id
                     * @param _workspaceId 工作空间Id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param _fileName 文件名称
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
                     * 获取文件大小
                     * @return FileSize 文件大小
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小
                     * @param _fileSize 文件大小
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取文件MD5
                     * @return FileMD5 文件MD5
                     * 
                     */
                    std::string GetFileMD5() const;

                    /**
                     * 设置文件MD5
                     * @param _fileMD5 文件MD5
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
                     * 获取存储类型
                     * @return SaveType 存储类型
                     * 
                     */
                    std::string GetSaveType() const;

                    /**
                     * 设置存储类型
                     * @param _saveType 存储类型
                     * 
                     */
                    void SetSaveType(const std::string& _saveType);

                    /**
                     * 判断参数 SaveType 是否已赋值
                     * @return SaveType 是否已赋值
                     * 
                     */
                    bool SaveTypeHasBeenSet() const;

                    /**
                     * 获取过期时间，过期时间戳，精确到秒的时间戳，noExpireFlag为false时必填

                     * @return FileExpireTime 过期时间，过期时间戳，精确到秒的时间戳，noExpireFlag为false时必填

                     * 
                     */
                    int64_t GetFileExpireTime() const;

                    /**
                     * 设置过期时间，过期时间戳，精确到秒的时间戳，noExpireFlag为false时必填

                     * @param _fileExpireTime 过期时间，过期时间戳，精确到秒的时间戳，noExpireFlag为false时必填

                     * 
                     */
                    void SetFileExpireTime(const int64_t& _fileExpireTime);

                    /**
                     * 判断参数 FileExpireTime 是否已赋值
                     * @return FileExpireTime 是否已赋值
                     * 
                     */
                    bool FileExpireTimeHasBeenSet() const;

                    /**
                     * 获取永不过期标记
                     * @return NoExpireFlag 永不过期标记
                     * 
                     */
                    bool GetNoExpireFlag() const;

                    /**
                     * 设置永不过期标记
                     * @param _noExpireFlag 永不过期标记
                     * 
                     */
                    void SetNoExpireFlag(const bool& _noExpireFlag);

                    /**
                     * 判断参数 NoExpireFlag 是否已赋值
                     * @return NoExpireFlag 是否已赋值
                     * 
                     */
                    bool NoExpireFlagHasBeenSet() const;

                private:

                    /**
                     * 工作空间Id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 文件MD5
                     */
                    std::string m_fileMD5;
                    bool m_fileMD5HasBeenSet;

                    /**
                     * 存储类型
                     */
                    std::string m_saveType;
                    bool m_saveTypeHasBeenSet;

                    /**
                     * 过期时间，过期时间戳，精确到秒的时间戳，noExpireFlag为false时必填

                     */
                    int64_t m_fileExpireTime;
                    bool m_fileExpireTimeHasBeenSet;

                    /**
                     * 永不过期标记
                     */
                    bool m_noExpireFlag;
                    bool m_noExpireFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEFILEUPLOADURLREQUEST_H_
