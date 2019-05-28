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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_AUDIOMODERATIONREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_AUDIOMODERATIONREQUEST_H_

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
                * AudioModeration请求参数结构体
                */
                class AudioModerationRequest : public AbstractModel
                {
                public:
                    AudioModerationRequest();
                    ~AudioModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取回调url
                     * @return CallbackUrl 回调url
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调url
                     * @param CallbackUrl 回调url
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取音频内容的base64
                     * @return FileContent 音频内容的base64
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置音频内容的base64
                     * @param FileContent 音频内容的base64
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取音频文件的MD5值
                     * @return FileMD5 音频文件的MD5值
                     */
                    std::string GetFileMD5() const;

                    /**
                     * 设置音频文件的MD5值
                     * @param FileMD5 音频文件的MD5值
                     */
                    void SetFileMD5(const std::string& _fileMD5);

                    /**
                     * 判断参数 FileMD5 是否已赋值
                     * @return FileMD5 是否已赋值
                     */
                    bool FileMD5HasBeenSet() const;

                    /**
                     * 获取音频内容Url ，其中FileUrl和FileContent二选一
                     * @return FileUrl 音频内容Url ，其中FileUrl和FileContent二选一
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置音频内容Url ，其中FileUrl和FileContent二选一
                     * @param FileUrl 音频内容Url ，其中FileUrl和FileContent二选一
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                private:

                    /**
                     * 回调url
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 音频内容的base64
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 音频文件的MD5值
                     */
                    std::string m_fileMD5;
                    bool m_fileMD5HasBeenSet;

                    /**
                     * 音频内容Url ，其中FileUrl和FileContent二选一
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_AUDIOMODERATIONREQUEST_H_
