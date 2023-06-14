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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CREATEAIFORMTASKREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CREATEAIFORMTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/SmartFormFileUrl.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * CreateAIFormTask请求参数结构体
                */
                class CreateAIFormTaskRequest : public AbstractModel
                {
                public:
                    CreateAIFormTaskRequest();
                    ~CreateAIFormTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取多个文件的URL列表
                     * @return FileList 多个文件的URL列表
                     * 
                     */
                    std::vector<SmartFormFileUrl> GetFileList() const;

                    /**
                     * 设置多个文件的URL列表
                     * @param _fileList 多个文件的URL列表
                     * 
                     */
                    void SetFileList(const std::vector<SmartFormFileUrl>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                    /**
                     * 获取备注信息1
                     * @return FirstNotes 备注信息1
                     * 
                     */
                    std::string GetFirstNotes() const;

                    /**
                     * 设置备注信息1
                     * @param _firstNotes 备注信息1
                     * 
                     */
                    void SetFirstNotes(const std::string& _firstNotes);

                    /**
                     * 判断参数 FirstNotes 是否已赋值
                     * @return FirstNotes 是否已赋值
                     * 
                     */
                    bool FirstNotesHasBeenSet() const;

                    /**
                     * 获取备注信息2
                     * @return SecondNotes 备注信息2
                     * 
                     */
                    std::string GetSecondNotes() const;

                    /**
                     * 设置备注信息2
                     * @param _secondNotes 备注信息2
                     * 
                     */
                    void SetSecondNotes(const std::string& _secondNotes);

                    /**
                     * 判断参数 SecondNotes 是否已赋值
                     * @return SecondNotes 是否已赋值
                     * 
                     */
                    bool SecondNotesHasBeenSet() const;

                    /**
                     * 获取文件类型
                     * @return FileType 文件类型
                     * 
                     */
                    uint64_t GetFileType() const;

                    /**
                     * 设置文件类型
                     * @param _fileType 文件类型
                     * 
                     */
                    void SetFileType(const uint64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * 多个文件的URL列表
                     */
                    std::vector<SmartFormFileUrl> m_fileList;
                    bool m_fileListHasBeenSet;

                    /**
                     * 备注信息1
                     */
                    std::string m_firstNotes;
                    bool m_firstNotesHasBeenSet;

                    /**
                     * 备注信息2
                     */
                    std::string m_secondNotes;
                    bool m_secondNotesHasBeenSet;

                    /**
                     * 文件类型
                     */
                    uint64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CREATEAIFORMTASKREQUEST_H_
