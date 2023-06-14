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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GETUPLOADCREDENTIALSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GETUPLOADCREDENTIALSREQUEST_H_

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
                * GetUploadCredentials请求参数结构体
                */
                class GetUploadCredentialsRequest : public AbstractModel
                {
                public:
                    GetUploadCredentialsRequest();
                    ~GetUploadCredentialsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     * @return AssetRegion 生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     * 
                     */
                    std::string GetAssetRegion() const;

                    /**
                     * 设置生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     * @param _assetRegion 生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     * 
                     */
                    void SetAssetRegion(const std::string& _assetRegion);

                    /**
                     * 判断参数 AssetRegion 是否已赋值
                     * @return AssetRegion 是否已赋值
                     * 
                     */
                    bool AssetRegionHasBeenSet() const;

                    /**
                     * 获取生成包的ZIP包名，例如：server.zip
                     * @return BucketKey 生成包的ZIP包名，例如：server.zip
                     * 
                     */
                    std::string GetBucketKey() const;

                    /**
                     * 设置生成包的ZIP包名，例如：server.zip
                     * @param _bucketKey 生成包的ZIP包名，例如：server.zip
                     * 
                     */
                    void SetBucketKey(const std::string& _bucketKey);

                    /**
                     * 判断参数 BucketKey 是否已赋值
                     * @return BucketKey 是否已赋值
                     * 
                     */
                    bool BucketKeyHasBeenSet() const;

                private:

                    /**
                     * 生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     */
                    std::string m_assetRegion;
                    bool m_assetRegionHasBeenSet;

                    /**
                     * 生成包的ZIP包名，例如：server.zip
                     */
                    std::string m_bucketKey;
                    bool m_bucketKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GETUPLOADCREDENTIALSREQUEST_H_
