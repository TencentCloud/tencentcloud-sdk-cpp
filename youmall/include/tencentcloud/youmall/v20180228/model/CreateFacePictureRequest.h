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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_CREATEFACEPICTUREREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_CREATEFACEPICTUREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateFacePicture请求参数结构体
                */
                class CreateFacePictureRequest : public AbstractModel
                {
                public:
                    CreateFacePictureRequest();
                    ~CreateFacePictureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团ID
                     * @return CompanyId 集团ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置集团ID
                     * @param _companyId 集团ID
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取人物类型（0表示普通顾客，1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     * @return PersonType 人物类型（0表示普通顾客，1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     * 
                     */
                    int64_t GetPersonType() const;

                    /**
                     * 设置人物类型（0表示普通顾客，1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     * @param _personType 人物类型（0表示普通顾客，1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     * 
                     */
                    void SetPersonType(const int64_t& _personType);

                    /**
                     * 判断参数 PersonType 是否已赋值
                     * @return PersonType 是否已赋值
                     * 
                     */
                    bool PersonTypeHasBeenSet() const;

                    /**
                     * 获取图片BASE编码
                     * @return Picture 图片BASE编码
                     * 
                     */
                    std::string GetPicture() const;

                    /**
                     * 设置图片BASE编码
                     * @param _picture 图片BASE编码
                     * 
                     */
                    void SetPicture(const std::string& _picture);

                    /**
                     * 判断参数 Picture 是否已赋值
                     * @return Picture 是否已赋值
                     * 
                     */
                    bool PictureHasBeenSet() const;

                    /**
                     * 获取图片名称
                     * @return PictureName 图片名称
                     * 
                     */
                    std::string GetPictureName() const;

                    /**
                     * 设置图片名称
                     * @param _pictureName 图片名称
                     * 
                     */
                    void SetPictureName(const std::string& _pictureName);

                    /**
                     * 判断参数 PictureName 是否已赋值
                     * @return PictureName 是否已赋值
                     * 
                     */
                    bool PictureNameHasBeenSet() const;

                    /**
                     * 获取店铺ID，如果不填表示操作集团身份库
                     * @return ShopId 店铺ID，如果不填表示操作集团身份库
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 设置店铺ID，如果不填表示操作集团身份库
                     * @param _shopId 店铺ID，如果不填表示操作集团身份库
                     * 
                     */
                    void SetShopId(const int64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取是否强制更新：为ture时会为用户创建一个新的指定PersonType的身份;目前这个参数已废弃，可不传
                     * @return IsForceUpload 是否强制更新：为ture时会为用户创建一个新的指定PersonType的身份;目前这个参数已废弃，可不传
                     * 
                     */
                    bool GetIsForceUpload() const;

                    /**
                     * 设置是否强制更新：为ture时会为用户创建一个新的指定PersonType的身份;目前这个参数已废弃，可不传
                     * @param _isForceUpload 是否强制更新：为ture时会为用户创建一个新的指定PersonType的身份;目前这个参数已废弃，可不传
                     * 
                     */
                    void SetIsForceUpload(const bool& _isForceUpload);

                    /**
                     * 判断参数 IsForceUpload 是否已赋值
                     * @return IsForceUpload 是否已赋值
                     * 
                     */
                    bool IsForceUploadHasBeenSet() const;

                private:

                    /**
                     * 集团ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 人物类型（0表示普通顾客，1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     */
                    int64_t m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * 图片BASE编码
                     */
                    std::string m_picture;
                    bool m_pictureHasBeenSet;

                    /**
                     * 图片名称
                     */
                    std::string m_pictureName;
                    bool m_pictureNameHasBeenSet;

                    /**
                     * 店铺ID，如果不填表示操作集团身份库
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 是否强制更新：为ture时会为用户创建一个新的指定PersonType的身份;目前这个参数已废弃，可不传
                     */
                    bool m_isForceUpload;
                    bool m_isForceUploadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_CREATEFACEPICTUREREQUEST_H_
