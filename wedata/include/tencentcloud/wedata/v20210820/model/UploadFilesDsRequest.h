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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADFILESDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADFILESDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UploadFilesDs请求参数结构体
                */
                class UploadFilesDsRequest : public AbstractModel
                {
                public:
                    UploadFilesDsRequest();
                    ~UploadFilesDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回值
                     * @return ProjectId 返回值
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置返回值
                     * @param _projectId 返回值
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取临时文件名列表，如果有重复会自动去重
                     * @return FileNames 临时文件名列表，如果有重复会自动去重
                     * 
                     */
                    std::vector<std::string> GetFileNames() const;

                    /**
                     * 设置临时文件名列表，如果有重复会自动去重
                     * @param _fileNames 临时文件名列表，如果有重复会自动去重
                     * 
                     */
                    void SetFileNames(const std::vector<std::string>& _fileNames);

                    /**
                     * 判断参数 FileNames 是否已赋值
                     * @return FileNames 是否已赋值
                     * 
                     */
                    bool FileNamesHasBeenSet() const;

                    /**
                     * 获取跨域访问域名，文件最终上传到共享存储，上传时可能会出现跨域问题，如果是跨域请求，请填写该值，请注意，该值只在公有云(即访问COS)生效
                     * @return OriginDomain 跨域访问域名，文件最终上传到共享存储，上传时可能会出现跨域问题，如果是跨域请求，请填写该值，请注意，该值只在公有云(即访问COS)生效
                     * 
                     */
                    std::string GetOriginDomain() const;

                    /**
                     * 设置跨域访问域名，文件最终上传到共享存储，上传时可能会出现跨域问题，如果是跨域请求，请填写该值，请注意，该值只在公有云(即访问COS)生效
                     * @param _originDomain 跨域访问域名，文件最终上传到共享存储，上传时可能会出现跨域问题，如果是跨域请求，请填写该值，请注意，该值只在公有云(即访问COS)生效
                     * 
                     */
                    void SetOriginDomain(const std::string& _originDomain);

                    /**
                     * 判断参数 OriginDomain 是否已赋值
                     * @return OriginDomain 是否已赋值
                     * 
                     */
                    bool OriginDomainHasBeenSet() const;

                private:

                    /**
                     * 返回值
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 临时文件名列表，如果有重复会自动去重
                     */
                    std::vector<std::string> m_fileNames;
                    bool m_fileNamesHasBeenSet;

                    /**
                     * 跨域访问域名，文件最终上传到共享存储，上传时可能会出现跨域问题，如果是跨域请求，请填写该值，请注意，该值只在公有云(即访问COS)生效
                     */
                    std::string m_originDomain;
                    bool m_originDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADFILESDSREQUEST_H_
