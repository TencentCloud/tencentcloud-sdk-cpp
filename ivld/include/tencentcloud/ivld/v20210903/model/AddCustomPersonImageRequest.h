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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_ADDCUSTOMPERSONIMAGEREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_ADDCUSTOMPERSONIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * AddCustomPersonImage请求参数结构体
                */
                class AddCustomPersonImageRequest : public AbstractModel
                {
                public:
                    AddCustomPersonImageRequest();
                    ~AddCustomPersonImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义人物Id
                     * @return PersonId 自定义人物Id
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置自定义人物Id
                     * @param _personId 自定义人物Id
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
                     * 获取自定义人物图片地址
                     * @return ImageURL 自定义人物图片地址
                     * 
                     */
                    std::string GetImageURL() const;

                    /**
                     * 设置自定义人物图片地址
                     * @param _imageURL 自定义人物图片地址
                     * 
                     */
                    void SetImageURL(const std::string& _imageURL);

                    /**
                     * 判断参数 ImageURL 是否已赋值
                     * @return ImageURL 是否已赋值
                     * 
                     */
                    bool ImageURLHasBeenSet() const;

                    /**
                     * 获取图片数据base64之后的结果
                     * @return Image 图片数据base64之后的结果
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片数据base64之后的结果
                     * @param _image 图片数据base64之后的结果
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                private:

                    /**
                     * 自定义人物Id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 自定义人物图片地址
                     */
                    std::string m_imageURL;
                    bool m_imageURLHasBeenSet;

                    /**
                     * 图片数据base64之后的结果
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_ADDCUSTOMPERSONIMAGEREQUEST_H_
