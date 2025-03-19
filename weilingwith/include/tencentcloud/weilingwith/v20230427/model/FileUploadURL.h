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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_FILEUPLOADURL_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_FILEUPLOADURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 获取文件上传URL接口回包
                */
                class FileUploadURL : public AbstractModel
                {
                public:
                    FileUploadURL();
                    ~FileUploadURL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上传地址
                     * @return UploadURL 上传地址
                     * 
                     */
                    std::string GetUploadURL() const;

                    /**
                     * 设置上传地址
                     * @param _uploadURL 上传地址
                     * 
                     */
                    void SetUploadURL(const std::string& _uploadURL);

                    /**
                     * 判断参数 UploadURL 是否已赋值
                     * @return UploadURL 是否已赋值
                     * 
                     */
                    bool UploadURLHasBeenSet() const;

                    /**
                     * 获取文件Id
                     * @return FileId 文件Id
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件Id
                     * @param _fileId 文件Id
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return DownloadURL 下载地址
                     * 
                     */
                    std::string GetDownloadURL() const;

                    /**
                     * 设置下载地址
                     * @param _downloadURL 下载地址
                     * 
                     */
                    void SetDownloadURL(const std::string& _downloadURL);

                    /**
                     * 判断参数 DownloadURL 是否已赋值
                     * @return DownloadURL 是否已赋值
                     * 
                     */
                    bool DownloadURLHasBeenSet() const;

                private:

                    /**
                     * 上传地址
                     */
                    std::string m_uploadURL;
                    bool m_uploadURLHasBeenSet;

                    /**
                     * 文件Id
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 下载地址
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_FILEUPLOADURL_H_
