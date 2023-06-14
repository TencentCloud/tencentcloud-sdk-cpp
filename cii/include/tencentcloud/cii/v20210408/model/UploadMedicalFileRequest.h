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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_UPLOADMEDICALFILEREQUEST_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_UPLOADMEDICALFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * UploadMedicalFile请求参数结构体
                */
                class UploadMedicalFileRequest : public AbstractModel
                {
                public:
                    UploadMedicalFileRequest();
                    ~UploadMedicalFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件的字节内容。File与FileURL有一个不为空即可，若FileURL参数也存在，会只取File的内容。
                     * @return File 文件的字节内容。File与FileURL有一个不为空即可，若FileURL参数也存在，会只取File的内容。
                     * 
                     */
                    std::string GetFile() const;

                    /**
                     * 设置文件的字节内容。File与FileURL有一个不为空即可，若FileURL参数也存在，会只取File的内容。
                     * @param _file 文件的字节内容。File与FileURL有一个不为空即可，若FileURL参数也存在，会只取File的内容。
                     * 
                     */
                    void SetFile(const std::string& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                    /**
                     * 获取文件的URL地址。File与FileURL不能同时为空，若File参数也存在，会只取File的内容。
                     * @return FileURL 文件的URL地址。File与FileURL不能同时为空，若File参数也存在，会只取File的内容。
                     * 
                     */
                    std::string GetFileURL() const;

                    /**
                     * 设置文件的URL地址。File与FileURL不能同时为空，若File参数也存在，会只取File的内容。
                     * @param _fileURL 文件的URL地址。File与FileURL不能同时为空，若File参数也存在，会只取File的内容。
                     * 
                     */
                    void SetFileURL(const std::string& _fileURL);

                    /**
                     * 判断参数 FileURL 是否已赋值
                     * @return FileURL 是否已赋值
                     * 
                     */
                    bool FileURLHasBeenSet() const;

                private:

                    /**
                     * 文件的字节内容。File与FileURL有一个不为空即可，若FileURL参数也存在，会只取File的内容。
                     */
                    std::string m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * 文件的URL地址。File与FileURL不能同时为空，若File参数也存在，会只取File的内容。
                     */
                    std::string m_fileURL;
                    bool m_fileURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_UPLOADMEDICALFILEREQUEST_H_
