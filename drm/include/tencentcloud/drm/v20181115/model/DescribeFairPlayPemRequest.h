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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEFAIRPLAYPEMREQUEST_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEFAIRPLAYPEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * DescribeFairPlayPem请求参数结构体
                */
                class DescribeFairPlayPemRequest : public AbstractModel
                {
                public:
                    DescribeFairPlayPemRequest();
                    ~DescribeFairPlayPemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     * @return BailorId 委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     * 
                     */
                    uint64_t GetBailorId() const;

                    /**
                     * 设置委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     * @param _bailorId 委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     * 
                     */
                    void SetBailorId(const uint64_t& _bailorId);

                    /**
                     * 判断参数 BailorId 是否已赋值
                     * @return BailorId 是否已赋值
                     * 
                     */
                    bool BailorIdHasBeenSet() const;

                    /**
                     * 获取需要查询的pem id。
当该值未填入时，将返回所有的私钥信息。
                     * @return FairPlayPemId 需要查询的pem id。
当该值未填入时，将返回所有的私钥信息。
                     * 
                     */
                    uint64_t GetFairPlayPemId() const;

                    /**
                     * 设置需要查询的pem id。
当该值未填入时，将返回所有的私钥信息。
                     * @param _fairPlayPemId 需要查询的pem id。
当该值未填入时，将返回所有的私钥信息。
                     * 
                     */
                    void SetFairPlayPemId(const uint64_t& _fairPlayPemId);

                    /**
                     * 判断参数 FairPlayPemId 是否已赋值
                     * @return FairPlayPemId 是否已赋值
                     * 
                     */
                    bool FairPlayPemIdHasBeenSet() const;

                private:

                    /**
                     * 委托者Id,适用于托管自身证书的客户。普通客户无需填该字段。
                     */
                    uint64_t m_bailorId;
                    bool m_bailorIdHasBeenSet;

                    /**
                     * 需要查询的pem id。
当该值未填入时，将返回所有的私钥信息。
                     */
                    uint64_t m_fairPlayPemId;
                    bool m_fairPlayPemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEFAIRPLAYPEMREQUEST_H_
