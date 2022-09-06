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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_UPLOADFILESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_UPLOADFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Caller.h>
#include <tencentcloud/ess/v20201111/model/UploadFile.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
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
                     * 获取文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf .doc .docx .html
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
3. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
                     * @return BusinessType 文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf .doc .docx .html
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
3. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf .doc .docx .html
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
3. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
                     * @param BusinessType 文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf .doc .docx .html
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
3. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param Caller 调用方信息
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取上传文件内容数组，最多支持20个文件
                     * @return FileInfos 上传文件内容数组，最多支持20个文件
                     */
                    std::vector<UploadFile> GetFileInfos() const;

                    /**
                     * 设置上传文件内容数组，最多支持20个文件
                     * @param FileInfos 上传文件内容数组，最多支持20个文件
                     */
                    void SetFileInfos(const std::vector<UploadFile>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取不再使用，上传文件链接数组，最多支持20个URL
                     * @return FileUrls 不再使用，上传文件链接数组，最多支持20个URL
                     */
                    std::string GetFileUrls() const;

                    /**
                     * 设置不再使用，上传文件链接数组，最多支持20个URL
                     * @param FileUrls 不再使用，上传文件链接数组，最多支持20个URL
                     */
                    void SetFileUrls(const std::string& _fileUrls);

                    /**
                     * 判断参数 FileUrls 是否已赋值
                     * @return FileUrls 是否已赋值
                     */
                    bool FileUrlsHasBeenSet() const;

                    /**
                     * 获取此参数只对 PDF 文件有效。是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     * @return CoverRect 此参数只对 PDF 文件有效。是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     */
                    bool GetCoverRect() const;

                    /**
                     * 设置此参数只对 PDF 文件有效。是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     * @param CoverRect 此参数只对 PDF 文件有效。是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     */
                    void SetCoverRect(const bool& _coverRect);

                    /**
                     * 判断参数 CoverRect 是否已赋值
                     * @return CoverRect 是否已赋值
                     */
                    bool CoverRectHasBeenSet() const;

                    /**
                     * 获取文件类型， 默认通过文件内容解析得到文件类型，客户可以显示的说明上传文件的类型。
如：PDF 表示上传的文件 xxx.pdf的文件类型是 PDF
                     * @return FileType 文件类型， 默认通过文件内容解析得到文件类型，客户可以显示的说明上传文件的类型。
如：PDF 表示上传的文件 xxx.pdf的文件类型是 PDF
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型， 默认通过文件内容解析得到文件类型，客户可以显示的说明上传文件的类型。
如：PDF 表示上传的文件 xxx.pdf的文件类型是 PDF
                     * @param FileType 文件类型， 默认通过文件内容解析得到文件类型，客户可以显示的说明上传文件的类型。
如：PDF 表示上传的文件 xxx.pdf的文件类型是 PDF
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取用户自定义ID数组，与上传文件一一对应
                     * @return CustomIds 用户自定义ID数组，与上传文件一一对应
                     */
                    std::vector<std::string> GetCustomIds() const;

                    /**
                     * 设置用户自定义ID数组，与上传文件一一对应
                     * @param CustomIds 用户自定义ID数组，与上传文件一一对应
                     */
                    void SetCustomIds(const std::vector<std::string>& _customIds);

                    /**
                     * 判断参数 CustomIds 是否已赋值
                     * @return CustomIds 是否已赋值
                     */
                    bool CustomIdsHasBeenSet() const;

                private:

                    /**
                     * 文件对应业务类型，用于区分文件存储路径：
1. TEMPLATE - 模板； 文件类型：.pdf .doc .docx .html
2. DOCUMENT - 签署过程及签署后的合同文档/图片控件 文件类型：.pdf/.jpg/.png
3. SEAL - 印章； 文件类型：.jpg/.jpeg/.png
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 上传文件内容数组，最多支持20个文件
                     */
                    std::vector<UploadFile> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 不再使用，上传文件链接数组，最多支持20个URL
                     */
                    std::string m_fileUrls;
                    bool m_fileUrlsHasBeenSet;

                    /**
                     * 此参数只对 PDF 文件有效。是否将pdf灰色矩阵置白
true--是，处理置白
false--否，不处理
                     */
                    bool m_coverRect;
                    bool m_coverRectHasBeenSet;

                    /**
                     * 文件类型， 默认通过文件内容解析得到文件类型，客户可以显示的说明上传文件的类型。
如：PDF 表示上传的文件 xxx.pdf的文件类型是 PDF
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

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_UPLOADFILESREQUEST_H_
