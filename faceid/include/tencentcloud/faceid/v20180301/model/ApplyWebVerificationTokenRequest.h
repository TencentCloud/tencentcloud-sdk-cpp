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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ApplyWebVerificationToken请求参数结构体
                */
                class ApplyWebVerificationTokenRequest : public AbstractModel
                {
                public:
                    ApplyWebVerificationTokenRequest();
                    ~ApplyWebVerificationTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取核验结束后重定向的Web回跳地址。
                     * @return RedirectUrl 核验结束后重定向的Web回跳地址。
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置核验结束后重定向的Web回跳地址。
                     * @param RedirectUrl 核验结束后重定向的Web回跳地址。
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取人脸比对照片的腾讯云对象存储地址，可以使用以下两种方式：
1. 调用CreateUploadUrl接口生成，确保成功上传照片后再调用此接口。
2. 使用已有的腾讯云对象存储地址，如果是私有读写桶，请使用预签名URL授予下载权限，对象存储地域需要和入参Region保持一致。
                     * @return CompareImageUrl 人脸比对照片的腾讯云对象存储地址，可以使用以下两种方式：
1. 调用CreateUploadUrl接口生成，确保成功上传照片后再调用此接口。
2. 使用已有的腾讯云对象存储地址，如果是私有读写桶，请使用预签名URL授予下载权限，对象存储地域需要和入参Region保持一致。
                     */
                    std::string GetCompareImageUrl() const;

                    /**
                     * 设置人脸比对照片的腾讯云对象存储地址，可以使用以下两种方式：
1. 调用CreateUploadUrl接口生成，确保成功上传照片后再调用此接口。
2. 使用已有的腾讯云对象存储地址，如果是私有读写桶，请使用预签名URL授予下载权限，对象存储地域需要和入参Region保持一致。
                     * @param CompareImageUrl 人脸比对照片的腾讯云对象存储地址，可以使用以下两种方式：
1. 调用CreateUploadUrl接口生成，确保成功上传照片后再调用此接口。
2. 使用已有的腾讯云对象存储地址，如果是私有读写桶，请使用预签名URL授予下载权限，对象存储地域需要和入参Region保持一致。
                     */
                    void SetCompareImageUrl(const std::string& _compareImageUrl);

                    /**
                     * 判断参数 CompareImageUrl 是否已赋值
                     * @return CompareImageUrl 是否已赋值
                     */
                    bool CompareImageUrlHasBeenSet() const;

                    /**
                     * 获取人脸比对照片（CompareImageUrl）内容的MD5散列值。
                     * @return CompareImageMd5 人脸比对照片（CompareImageUrl）内容的MD5散列值。
                     */
                    std::string GetCompareImageMd5() const;

                    /**
                     * 设置人脸比对照片（CompareImageUrl）内容的MD5散列值。
                     * @param CompareImageMd5 人脸比对照片（CompareImageUrl）内容的MD5散列值。
                     */
                    void SetCompareImageMd5(const std::string& _compareImageMd5);

                    /**
                     * 判断参数 CompareImageMd5 是否已赋值
                     * @return CompareImageMd5 是否已赋值
                     */
                    bool CompareImageMd5HasBeenSet() const;

                private:

                    /**
                     * 核验结束后重定向的Web回跳地址。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * 人脸比对照片的腾讯云对象存储地址，可以使用以下两种方式：
1. 调用CreateUploadUrl接口生成，确保成功上传照片后再调用此接口。
2. 使用已有的腾讯云对象存储地址，如果是私有读写桶，请使用预签名URL授予下载权限，对象存储地域需要和入参Region保持一致。
                     */
                    std::string m_compareImageUrl;
                    bool m_compareImageUrlHasBeenSet;

                    /**
                     * 人脸比对照片（CompareImageUrl）内容的MD5散列值。
                     */
                    std::string m_compareImageMd5;
                    bool m_compareImageMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENREQUEST_H_
