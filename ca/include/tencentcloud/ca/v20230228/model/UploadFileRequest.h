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

#ifndef TENCENTCLOUD_CA_V20230228_MODEL_UPLOADFILEREQUEST_H_
#define TENCENTCLOUD_CA_V20230228_MODEL_UPLOADFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ca/v20230228/model/FileInfo.h>


namespace TencentCloud
{
    namespace Ca
    {
        namespace V20230228
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
                     * 获取验签源文件信息列表
                     * @return FileInfos 验签源文件信息列表
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置验签源文件信息列表
                     * @param _fileInfos 验签源文件信息列表
                     * 
                     */
                    void SetFileInfos(const std::vector<FileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                private:

                    /**
                     * 验签源文件信息列表
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CA_V20230228_MODEL_UPLOADFILEREQUEST_H_
