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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_CREATEFACEREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_CREATEFACEREQUEST_H_

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
                * CreateFace请求参数结构体
                */
                class CreateFaceRequest : public AbstractModel
                {
                public:
                    CreateFaceRequest();
                    ~CreateFaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人员唯一标识符
                     * @return PersonId 人员唯一标识符
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员唯一标识符
                     * @param _personId 人员唯一标识符
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取图片数据 base64 字符串，与 Urls 参数选择一个输入
                     * @return Images 图片数据 base64 字符串，与 Urls 参数选择一个输入
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置图片数据 base64 字符串，与 Urls 参数选择一个输入
                     * @param _images 图片数据 base64 字符串，与 Urls 参数选择一个输入
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取人员库唯一标识符
                     * @return LibraryId 人员库唯一标识符
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置人员库唯一标识符
                     * @param _libraryId 人员库唯一标识符
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取图片下载地址，与 Images 参数选择一个输入
                     * @return Urls 图片下载地址，与 Images 参数选择一个输入
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置图片下载地址，与 Images 参数选择一个输入
                     * @param _urls 图片下载地址，与 Images 参数选择一个输入
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                private:

                    /**
                     * 人员唯一标识符
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 图片数据 base64 字符串，与 Urls 参数选择一个输入
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 人员库唯一标识符
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 图片下载地址，与 Images 参数选择一个输入
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_CREATEFACEREQUEST_H_
