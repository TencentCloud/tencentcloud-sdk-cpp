/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_UPLOADMINIPROGRAMSOURCEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_UPLOADMINIPROGRAMSOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * UploadMiniProgramSource请求参数结构体
                */
                class UploadMiniProgramSourceRequest : public AbstractModel
                {
                public:
                    UploadMiniProgramSourceRequest();
                    ~UploadMiniProgramSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>源码zip的Base64，请求包上限10240KB</p>
                     * @return FileBase64 <p>源码zip的Base64，请求包上限10240KB</p>
                     * 
                     */
                    std::string GetFileBase64() const;

                    /**
                     * 设置<p>源码zip的Base64，请求包上限10240KB</p>
                     * @param _fileBase64 <p>源码zip的Base64，请求包上限10240KB</p>
                     * 
                     */
                    void SetFileBase64(const std::string& _fileBase64);

                    /**
                     * 判断参数 FileBase64 是否已赋值
                     * @return FileBase64 是否已赋值
                     * 
                     */
                    bool FileBase64HasBeenSet() const;

                    /**
                     * 获取<p>应用版本（可选）</p>
                     * @return Release <p>应用版本（可选）</p>
                     * 
                     */
                    std::string GetRelease() const;

                    /**
                     * 设置<p>应用版本（可选）</p>
                     * @param _release <p>应用版本（可选）</p>
                     * 
                     */
                    void SetRelease(const std::string& _release);

                    /**
                     * 判断参数 Release 是否已赋值
                     * @return Release 是否已赋值
                     * 
                     */
                    bool ReleaseHasBeenSet() const;

                    /**
                     * 获取<p>原始文件名（可选）</p>
                     * @return FileName <p>原始文件名（可选）</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>原始文件名（可选）</p>
                     * @param _fileName <p>原始文件名（可选）</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>源码zip的Base64，请求包上限10240KB</p>
                     */
                    std::string m_fileBase64;
                    bool m_fileBase64HasBeenSet;

                    /**
                     * <p>应用版本（可选）</p>
                     */
                    std::string m_release;
                    bool m_releaseHasBeenSet;

                    /**
                     * <p>原始文件名（可选）</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_UPLOADMINIPROGRAMSOURCEREQUEST_H_
