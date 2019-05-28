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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_UPLOADFILEREQUEST_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_UPLOADFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
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
                    std::string ToJsonString();


                    /**
                     * 获取模块名
                     * @return Module 模块名
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名
                     * @param Module 模块名
                     */
                    void SetModule(const std::string& module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名
                     * @return Operation 操作名
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名
                     * @param Operation 操作名
                     */
                    void SetOperation(const std::string& operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取文件上传地址，要求地址协议为HTTPS，且URL端口必须为443
                     * @return FileUrl 文件上传地址，要求地址协议为HTTPS，且URL端口必须为443
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件上传地址，要求地址协议为HTTPS，且URL端口必须为443
                     * @param FileUrl 文件上传地址，要求地址协议为HTTPS，且URL端口必须为443
                     */
                    void SetFileUrl(const std::string& fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param FileName 文件名
                     */
                    void SetFileName(const std::string& fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件日期
                     * @return FileDate 文件日期
                     */
                    std::string GetFileDate() const;

                    /**
                     * 设置文件日期
                     * @param FileDate 文件日期
                     */
                    void SetFileDate(const std::string& fileDate);

                    /**
                     * 判断参数 FileDate 是否已赋值
                     * @return FileDate 是否已赋值
                     */
                    bool FileDateHasBeenSet() const;

                private:

                    /**
                     * 模块名
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 文件上传地址，要求地址协议为HTTPS，且URL端口必须为443
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件日期
                     */
                    std::string m_fileDate;
                    bool m_fileDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_UPLOADFILEREQUEST_H_
