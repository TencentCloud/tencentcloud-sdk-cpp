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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEASRHOTWORDSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEASRHOTWORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAsrHotwords请求参数结构体
                */
                class CreateAsrHotwordsRequest : public AbstractModel
                {
                public:
                    CreateAsrHotwordsRequest();
                    ~CreateAsrHotwordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0 临时热词 1 文件热词
                     * @return Type 0 临时热词 1 文件热词
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0 临时热词 1 文件热词
                     * @param _type 0 临时热词 1 文件热词
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取热词库名称
                     * @return Name 热词库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置热词库名称
                     * @param _name 热词库名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取热词库文本，Type为 0 必选
                     * @return Content 热词库文本，Type为 0 必选
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置热词库文本，Type为 0 必选
                     * @param _content 热词库文本，Type为 0 必选
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取热词库文件的 base64 的内容，Type 为 1 必选


                     * @return FileContent 热词库文件的 base64 的内容，Type 为 1 必选


                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置热词库文件的 base64 的内容，Type 为 1 必选


                     * @param _fileContent 热词库文件的 base64 的内容，Type 为 1 必选


                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取上传的文件名
                     * @return FileName 上传的文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置上传的文件名
                     * @param _fileName 上传的文件名
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
                     * 0 临时热词 1 文件热词
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 热词库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 热词库文本，Type为 0 必选
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 热词库文件的 base64 的内容，Type 为 1 必选


                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 上传的文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEASRHOTWORDSREQUEST_H_
