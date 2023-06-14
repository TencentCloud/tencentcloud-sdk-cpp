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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEFACEIDBYTEMPIDREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEFACEIDBYTEMPIDREQUEST_H_

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
                * DescribeFaceIdByTempId请求参数结构体
                */
                class DescribeFaceIdByTempIdRequest : public AbstractModel
                {
                public:
                    DescribeFaceIdByTempIdRequest();
                    ~DescribeFaceIdByTempIdRequest() = default;
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
                     * 获取临时id
                     * @return TempId 临时id
                     * 
                     */
                    std::string GetTempId() const;

                    /**
                     * 设置临时id
                     * @param _tempId 临时id
                     * 
                     */
                    void SetTempId(const std::string& _tempId);

                    /**
                     * 判断参数 TempId 是否已赋值
                     * @return TempId 是否已赋值
                     * 
                     */
                    bool TempIdHasBeenSet() const;

                    /**
                     * 获取摄像头id
                     * @return CameraId 摄像头id
                     * 
                     */
                    int64_t GetCameraId() const;

                    /**
                     * 设置摄像头id
                     * @param _cameraId 摄像头id
                     * 
                     */
                    void SetCameraId(const int64_t& _cameraId);

                    /**
                     * 判断参数 CameraId 是否已赋值
                     * @return CameraId 是否已赋值
                     * 
                     */
                    bool CameraIdHasBeenSet() const;

                    /**
                     * 获取pos机id
                     * @return PosId pos机id
                     * 
                     */
                    std::string GetPosId() const;

                    /**
                     * 设置pos机id
                     * @param _posId pos机id
                     * 
                     */
                    void SetPosId(const std::string& _posId);

                    /**
                     * 判断参数 PosId 是否已赋值
                     * @return PosId 是否已赋值
                     * 
                     */
                    bool PosIdHasBeenSet() const;

                    /**
                     * 获取图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     * @return PictureExpires 图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     * 
                     */
                    int64_t GetPictureExpires() const;

                    /**
                     * 设置图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     * @param _pictureExpires 图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     * 
                     */
                    void SetPictureExpires(const int64_t& _pictureExpires);

                    /**
                     * 判断参数 PictureExpires 是否已赋值
                     * @return PictureExpires 是否已赋值
                     * 
                     */
                    bool PictureExpiresHasBeenSet() const;

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
                     * 临时id
                     */
                    std::string m_tempId;
                    bool m_tempIdHasBeenSet;

                    /**
                     * 摄像头id
                     */
                    int64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * pos机id
                     */
                    std::string m_posId;
                    bool m_posIdHasBeenSet;

                    /**
                     * 图片url过期时间：在当前时间+PictureExpires秒后，图片url无法继续正常访问；单位s；默认值1*24*60*60（1天）
                     */
                    int64_t m_pictureExpires;
                    bool m_pictureExpiresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEFACEIDBYTEMPIDREQUEST_H_
