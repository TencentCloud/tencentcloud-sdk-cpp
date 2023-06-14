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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONFEATUREINFOREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONFEATUREINFOREQUEST_H_

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
                * ModifyPersonFeatureInfo请求参数结构体
                */
                class ModifyPersonFeatureInfoRequest : public AbstractModel
                {
                public:
                    ModifyPersonFeatureInfoRequest();
                    ~ModifyPersonFeatureInfoRequest() = default;
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
                     * 获取需要修改的顾客id
                     * @return PersonId 需要修改的顾客id
                     * 
                     */
                    int64_t GetPersonId() const;

                    /**
                     * 设置需要修改的顾客id
                     * @param _personId 需要修改的顾客id
                     * 
                     */
                    void SetPersonId(const int64_t& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

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
                     * 获取图片名称（尽量不要重复）
                     * @return PictureName 图片名称（尽量不要重复）
                     * 
                     */
                    std::string GetPictureName() const;

                    /**
                     * 设置图片名称（尽量不要重复）
                     * @param _pictureName 图片名称（尽量不要重复）
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
                     * 获取人物类型，仅能操作黑白名单顾客（1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     * @return PersonType 人物类型，仅能操作黑白名单顾客（1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     * 
                     */
                    int64_t GetPersonType() const;

                    /**
                     * 设置人物类型，仅能操作黑白名单顾客（1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     * @param _personType 人物类型，仅能操作黑白名单顾客（1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
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

                private:

                    /**
                     * 集团ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 需要修改的顾客id
                     */
                    int64_t m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 图片BASE编码
                     */
                    std::string m_picture;
                    bool m_pictureHasBeenSet;

                    /**
                     * 图片名称（尽量不要重复）
                     */
                    std::string m_pictureName;
                    bool m_pictureNameHasBeenSet;

                    /**
                     * 人物类型，仅能操作黑白名单顾客（1 白名单，2 表示黑名单，101表示集团白名单，102表示集团黑名单）
                     */
                    int64_t m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * 店铺ID，如果不填表示操作集团身份库
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_MODIFYPERSONFEATUREINFOREQUEST_H_
