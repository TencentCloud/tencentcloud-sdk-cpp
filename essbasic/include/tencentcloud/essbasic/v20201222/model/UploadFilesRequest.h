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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_UPLOADFILESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_UPLOADFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>
#include <tencentcloud/essbasic/v20201222/model/UploadFile.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * UploadFiles请求参数结构体
                */
                class UploadFilesRequest : public AbstractModel
                {
                public:
                    UploadFilesRequest();
                    ~UploadFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模版； 文件类型：.pdf/.html
2. DOCUMENT - 签署过程及签署后的合同文档 文件类型：.pdf/.html
3. FLOW - 签署过程 文件类型：.pdf/.html
4. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
5. BUSINESSLICENSE - 营业执照 文件类型：.jpg/.jpeg/.png
6. IDCARD - 身份证 文件类型：.jpg/.jpeg/.png
                     * @return BusinessType 文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模版； 文件类型：.pdf/.html
2. DOCUMENT - 签署过程及签署后的合同文档 文件类型：.pdf/.html
3. FLOW - 签署过程 文件类型：.pdf/.html
4. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
5. BUSINESSLICENSE - 营业执照 文件类型：.jpg/.jpeg/.png
6. IDCARD - 身份证 文件类型：.jpg/.jpeg/.png
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模版； 文件类型：.pdf/.html
2. DOCUMENT - 签署过程及签署后的合同文档 文件类型：.pdf/.html
3. FLOW - 签署过程 文件类型：.pdf/.html
4. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
5. BUSINESSLICENSE - 营业执照 文件类型：.jpg/.jpeg/.png
6. IDCARD - 身份证 文件类型：.jpg/.jpeg/.png
                     * @param _businessType 文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模版； 文件类型：.pdf/.html
2. DOCUMENT - 签署过程及签署后的合同文档 文件类型：.pdf/.html
3. FLOW - 签署过程 文件类型：.pdf/.html
4. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
5. BUSINESSLICENSE - 营业执照 文件类型：.jpg/.jpeg/.png
6. IDCARD - 身份证 文件类型：.jpg/.jpeg/.png
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取上传文件内容数组，最多支持20个文件
                     * @return FileInfos 上传文件内容数组，最多支持20个文件
                     * 
                     */
                    std::vector<UploadFile> GetFileInfos() const;

                    /**
                     * 设置上传文件内容数组，最多支持20个文件
                     * @param _fileInfos 上传文件内容数组，最多支持20个文件
                     * 
                     */
                    void SetFileInfos(const std::vector<UploadFile>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取上传文件链接数组，最多支持20个URL
                     * @return FileUrls 上传文件链接数组，最多支持20个URL
                     * 
                     */
                    std::vector<std::string> GetFileUrls() const;

                    /**
                     * 设置上传文件链接数组，最多支持20个URL
                     * @param _fileUrls 上传文件链接数组，最多支持20个URL
                     * 
                     */
                    void SetFileUrls(const std::vector<std::string>& _fileUrls);

                    /**
                     * 判断参数 FileUrls 是否已赋值
                     * @return FileUrls 是否已赋值
                     * 
                     */
                    bool FileUrlsHasBeenSet() const;

                    /**
                     * 获取是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     * @return CoverRect 是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     * 
                     */
                    bool GetCoverRect() const;

                    /**
                     * 设置是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     * @param _coverRect 是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     * 
                     */
                    void SetCoverRect(const bool& _coverRect);

                    /**
                     * 判断参数 CoverRect 是否已赋值
                     * @return CoverRect 是否已赋值
                     * 
                     */
                    bool CoverRectHasBeenSet() const;

                    /**
                     * 获取特殊文件类型需要指定文件类型：
HTML-- .html文件
                     * @return FileType 特殊文件类型需要指定文件类型：
HTML-- .html文件
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置特殊文件类型需要指定文件类型：
HTML-- .html文件
                     * @param _fileType 特殊文件类型需要指定文件类型：
HTML-- .html文件
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取用户自定义ID数组，与上传文件一一对应
                     * @return CustomIds 用户自定义ID数组，与上传文件一一对应
                     * 
                     */
                    std::vector<std::string> GetCustomIds() const;

                    /**
                     * 设置用户自定义ID数组，与上传文件一一对应
                     * @param _customIds 用户自定义ID数组，与上传文件一一对应
                     * 
                     */
                    void SetCustomIds(const std::vector<std::string>& _customIds);

                    /**
                     * 判断参数 CustomIds 是否已赋值
                     * @return CustomIds 是否已赋值
                     * 
                     */
                    bool CustomIdsHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模版； 文件类型：.pdf/.html
2. DOCUMENT - 签署过程及签署后的合同文档 文件类型：.pdf/.html
3. FLOW - 签署过程 文件类型：.pdf/.html
4. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
5. BUSINESSLICENSE - 营业执照 文件类型：.jpg/.jpeg/.png
6. IDCARD - 身份证 文件类型：.jpg/.jpeg/.png
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 上传文件内容数组，最多支持20个文件
                     */
                    std::vector<UploadFile> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 上传文件链接数组，最多支持20个URL
                     */
                    std::vector<std::string> m_fileUrls;
                    bool m_fileUrlsHasBeenSet;

                    /**
                     * 是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     */
                    bool m_coverRect;
                    bool m_coverRectHasBeenSet;

                    /**
                     * 特殊文件类型需要指定文件类型：
HTML-- .html文件
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 用户自定义ID数组，与上传文件一一对应
                     */
                    std::vector<std::string> m_customIds;
                    bool m_customIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_UPLOADFILESREQUEST_H_
