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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESKILLSCANREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESKILLSCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateSkillScan请求参数结构体
                */
                class CreateSkillScanRequest : public AbstractModel
                {
                public:
                    CreateSkillScanRequest();
                    ~CreateSkillScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ZIP 文件内容的 Base64 编码
入参限制：文件大小上限 7MB（编码前），仅接受有效的 ZIP 格式
                     * @return FileBase64 ZIP 文件内容的 Base64 编码
入参限制：文件大小上限 7MB（编码前），仅接受有效的 ZIP 格式
                     * 
                     */
                    std::string GetFileBase64() const;

                    /**
                     * 设置ZIP 文件内容的 Base64 编码
入参限制：文件大小上限 7MB（编码前），仅接受有效的 ZIP 格式
                     * @param _fileBase64 ZIP 文件内容的 Base64 编码
入参限制：文件大小上限 7MB（编码前），仅接受有效的 ZIP 格式
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
                     * 获取文件名，用于服务端日志记录
参数格式：形如 my-skill.zip
                     * @return FileName 文件名，用于服务端日志记录
参数格式：形如 my-skill.zip
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名，用于服务端日志记录
参数格式：形如 my-skill.zip
                     * @param _fileName 文件名，用于服务端日志记录
参数格式：形如 my-skill.zip
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
                     * ZIP 文件内容的 Base64 编码
入参限制：文件大小上限 7MB（编码前），仅接受有效的 ZIP 格式
                     */
                    std::string m_fileBase64;
                    bool m_fileBase64HasBeenSet;

                    /**
                     * 文件名，用于服务端日志记录
参数格式：形如 my-skill.zip
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESKILLSCANREQUEST_H_
