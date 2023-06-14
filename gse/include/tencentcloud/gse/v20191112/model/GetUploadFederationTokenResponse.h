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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GETUPLOADFEDERATIONTOKENRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GETUPLOADFEDERATIONTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/AssetCredentials.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * GetUploadFederationToken返回参数结构体
                */
                class GetUploadFederationTokenResponse : public AbstractModel
                {
                public:
                    GetUploadFederationTokenResponse();
                    ~GetUploadFederationTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取临时证书的过期时间，Unix 时间戳，精确到秒
                     * @return ExpiredTime 临时证书的过期时间，Unix 时间戳，精确到秒
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取临时证书
                     * @return AssetCredentials 临时证书
                     * 
                     */
                    AssetCredentials GetAssetCredentials() const;

                    /**
                     * 判断参数 AssetCredentials 是否已赋值
                     * @return AssetCredentials 是否已赋值
                     * 
                     */
                    bool AssetCredentialsHasBeenSet() const;

                private:

                    /**
                     * 临时证书的过期时间，Unix 时间戳，精确到秒
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 临时证书
                     */
                    AssetCredentials m_assetCredentials;
                    bool m_assetCredentialsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GETUPLOADFEDERATIONTOKENRESPONSE_H_
