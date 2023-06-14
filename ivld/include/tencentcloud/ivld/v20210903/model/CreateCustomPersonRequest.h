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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_CREATECUSTOMPERSONREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_CREATECUSTOMPERSONREQUEST_H_

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
                * CreateCustomPerson请求参数结构体
                */
                class CreateCustomPersonRequest : public AbstractModel
                {
                public:
                    CreateCustomPersonRequest();
                    ~CreateCustomPersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义人物姓名
                     * @return Name 自定义人物姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义人物姓名
                     * @param _name 自定义人物姓名
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
                     * 获取自定义人物简要信息(仅用于标记，不支持检索)
                     * @return BasicInfo 自定义人物简要信息(仅用于标记，不支持检索)
                     * 
                     */
                    std::string GetBasicInfo() const;

                    /**
                     * 设置自定义人物简要信息(仅用于标记，不支持检索)
                     * @param _basicInfo 自定义人物简要信息(仅用于标记，不支持检索)
                     * 
                     */
                    void SetBasicInfo(const std::string& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     * 
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取自定义分类ID，如不存在接口会报错
                     * @return CategoryId 自定义分类ID，如不存在接口会报错
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置自定义分类ID，如不存在接口会报错
                     * @param _categoryId 自定义分类ID，如不存在接口会报错
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取自定义人物图片URL，可支持任意地址，推荐使用COS
                     * @return ImageURL 自定义人物图片URL，可支持任意地址，推荐使用COS
                     * 
                     */
                    std::string GetImageURL() const;

                    /**
                     * 设置自定义人物图片URL，可支持任意地址，推荐使用COS
                     * @param _imageURL 自定义人物图片URL，可支持任意地址，推荐使用COS
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
                     * 获取原始图片base64编码后的数据
                     * @return Image 原始图片base64编码后的数据
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置原始图片base64编码后的数据
                     * @param _image 原始图片base64编码后的数据
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
                     * 自定义人物姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义人物简要信息(仅用于标记，不支持检索)
                     */
                    std::string m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 自定义分类ID，如不存在接口会报错
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 自定义人物图片URL，可支持任意地址，推荐使用COS
                     */
                    std::string m_imageURL;
                    bool m_imageURLHasBeenSet;

                    /**
                     * 原始图片base64编码后的数据
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_CREATECUSTOMPERSONREQUEST_H_
