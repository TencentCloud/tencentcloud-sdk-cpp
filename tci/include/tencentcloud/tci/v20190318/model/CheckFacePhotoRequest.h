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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_CHECKFACEPHOTOREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_CHECKFACEPHOTOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * CheckFacePhoto请求参数结构体
                */
                class CheckFacePhotoRequest : public AbstractModel
                {
                public:
                    CheckFacePhotoRequest();
                    ~CheckFacePhotoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入分析对象内容
                     * @return FileContent 输入分析对象内容
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置输入分析对象内容
                     * @param _fileContent 输入分析对象内容
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
                     * 获取输入分析对象类型，picture_url:图片地址
                     * @return FileType 输入分析对象类型，picture_url:图片地址
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置输入分析对象类型，picture_url:图片地址
                     * @param _fileType 输入分析对象类型，picture_url:图片地址
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * 输入分析对象内容
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 输入分析对象类型，picture_url:图片地址
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_CHECKFACEPHOTOREQUEST_H_
