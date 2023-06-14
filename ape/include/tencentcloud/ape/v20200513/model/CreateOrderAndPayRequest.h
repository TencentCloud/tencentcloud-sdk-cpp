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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_CREATEORDERANDPAYREQUEST_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_CREATEORDERANDPAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * CreateOrderAndPay请求参数结构体
                */
                class CreateOrderAndPayRequest : public AbstractModel
                {
                public:
                    CreateOrderAndPayRequest();
                    ~CreateOrderAndPayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片ID
                     * @return ImageId 图片ID
                     * 
                     */
                    uint64_t GetImageId() const;

                    /**
                     * 设置图片ID
                     * @param _imageId 图片ID
                     * 
                     */
                    void SetImageId(const uint64_t& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取授权人ID
                     * @return AuthUserId 授权人ID
                     * 
                     */
                    std::string GetAuthUserId() const;

                    /**
                     * 设置授权人ID
                     * @param _authUserId 授权人ID
                     * 
                     */
                    void SetAuthUserId(const std::string& _authUserId);

                    /**
                     * 判断参数 AuthUserId 是否已赋值
                     * @return AuthUserId 是否已赋值
                     * 
                     */
                    bool AuthUserIdHasBeenSet() const;

                    /**
                     * 获取售卖组合id
                     * @return MarshalId 售卖组合id
                     * 
                     */
                    uint64_t GetMarshalId() const;

                    /**
                     * 设置售卖组合id
                     * @param _marshalId 售卖组合id
                     * 
                     */
                    void SetMarshalId(const uint64_t& _marshalId);

                    /**
                     * 判断参数 MarshalId 是否已赋值
                     * @return MarshalId 是否已赋值
                     * 
                     */
                    bool MarshalIdHasBeenSet() const;

                private:

                    /**
                     * 图片ID
                     */
                    uint64_t m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 授权人ID
                     */
                    std::string m_authUserId;
                    bool m_authUserIdHasBeenSet;

                    /**
                     * 售卖组合id
                     */
                    uint64_t m_marshalId;
                    bool m_marshalIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_CREATEORDERANDPAYREQUEST_H_
