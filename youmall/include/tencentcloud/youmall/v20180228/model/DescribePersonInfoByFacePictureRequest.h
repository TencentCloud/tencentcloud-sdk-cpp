/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONINFOBYFACEPICTUREREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONINFOBYFACEPICTUREREQUEST_H_

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
                * DescribePersonInfoByFacePicture请求参数结构体
                */
                class DescribePersonInfoByFacePictureRequest : public AbstractModel
                {
                public:
                    DescribePersonInfoByFacePictureRequest();
                    ~DescribePersonInfoByFacePictureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @return CompanyId 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @param _companyId 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
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
                     * 获取优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
                     * @return ShopId 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 设置优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
                     * @param _shopId 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
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
                     * 获取人脸图片BASE编码
                     * @return Picture 人脸图片BASE编码
                     * 
                     */
                    std::string GetPicture() const;

                    /**
                     * 设置人脸图片BASE编码
                     * @param _picture 人脸图片BASE编码
                     * 
                     */
                    void SetPicture(const std::string& _picture);

                    /**
                     * 判断参数 Picture 是否已赋值
                     * @return Picture 是否已赋值
                     * 
                     */
                    bool PictureHasBeenSet() const;

                private:

                    /**
                     * 优mall集团id，通过"指定身份标识获取客户门店列表"接口获取
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 优mall店铺id，通过"指定身份标识获取客户门店列表"接口获取
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 人脸图片BASE编码
                     */
                    std::string m_picture;
                    bool m_pictureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONINFOBYFACEPICTUREREQUEST_H_
