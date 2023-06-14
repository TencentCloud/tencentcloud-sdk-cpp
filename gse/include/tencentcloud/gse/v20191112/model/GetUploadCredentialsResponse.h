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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GETUPLOADCREDENTIALSRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GETUPLOADCREDENTIALSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * GetUploadCredentials返回参数结构体
                */
                class GetUploadCredentialsResponse : public AbstractModel
                {
                public:
                    GetUploadCredentialsResponse();
                    ~GetUploadCredentialsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取上传文件授权信息Auth
                     * @return BucketAuth 上传文件授权信息Auth
                     * 
                     */
                    std::string GetBucketAuth() const;

                    /**
                     * 判断参数 BucketAuth 是否已赋值
                     * @return BucketAuth 是否已赋值
                     * 
                     */
                    bool BucketAuthHasBeenSet() const;

                    /**
                     * 获取Bucket名字
                     * @return BucketName Bucket名字
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取生成包所在地域
                     * @return AssetRegion 生成包所在地域
                     * 
                     */
                    std::string GetAssetRegion() const;

                    /**
                     * 判断参数 AssetRegion 是否已赋值
                     * @return AssetRegion 是否已赋值
                     * 
                     */
                    bool AssetRegionHasBeenSet() const;

                private:

                    /**
                     * 上传文件授权信息Auth
                     */
                    std::string m_bucketAuth;
                    bool m_bucketAuthHasBeenSet;

                    /**
                     * Bucket名字
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 生成包所在地域
                     */
                    std::string m_assetRegion;
                    bool m_assetRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GETUPLOADCREDENTIALSRESPONSE_H_
