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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTERREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * VoiceFilter请求参数结构体
                */
                class VoiceFilterRequest : public AbstractModel
                {
                public:
                    VoiceFilterRequest();
                    ~VoiceFilterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @return BizId 应用ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @param BizId 应用ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取文件ID，表示文件唯一ID
                     * @return FileId 文件ID，表示文件唯一ID
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件ID，表示文件唯一ID
                     * @param FileId 文件ID，表示文件唯一ID
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param FileName 文件名
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件url，urlencode编码，FileUrl和FileContent二选一
                     * @return FileUrl 文件url，urlencode编码，FileUrl和FileContent二选一
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件url，urlencode编码，FileUrl和FileContent二选一
                     * @param FileUrl 文件url，urlencode编码，FileUrl和FileContent二选一
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取文件内容，base64编码，FileUrl和FileContent二选一
                     * @return FileContent 文件内容，base64编码，FileUrl和FileContent二选一
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置文件内容，base64编码，FileUrl和FileContent二选一
                     * @param FileContent 文件内容，base64编码，FileUrl和FileContent二选一
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return OpenId 用户ID
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户ID
                     * @param OpenId 用户ID
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID，登录[控制台](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 文件ID，表示文件唯一ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件url，urlencode编码，FileUrl和FileContent二选一
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 文件内容，base64编码，FileUrl和FileContent二选一
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTERREQUEST_H_
