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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNMETADATAFILERESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNMETADATAFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * GetRunMetadataFile返回参数结构体
                */
                class GetRunMetadataFileResponse : public AbstractModel
                {
                public:
                    GetRunMetadataFileResponse();
                    ~GetRunMetadataFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件预签名链接，一分钟内有效。
                     * @return CosSignedUrl 文件预签名链接，一分钟内有效。
                     * 
                     */
                    std::string GetCosSignedUrl() const;

                    /**
                     * 判断参数 CosSignedUrl 是否已赋值
                     * @return CosSignedUrl 是否已赋值
                     * 
                     */
                    bool CosSignedUrlHasBeenSet() const;

                    /**
                     * 获取批量文件预签名链接，一分钟内有效。
                     * @return CosSignedUrls 批量文件预签名链接，一分钟内有效。
                     * 
                     */
                    std::vector<std::string> GetCosSignedUrls() const;

                    /**
                     * 判断参数 CosSignedUrls 是否已赋值
                     * @return CosSignedUrls 是否已赋值
                     * 
                     */
                    bool CosSignedUrlsHasBeenSet() const;

                private:

                    /**
                     * 文件预签名链接，一分钟内有效。
                     */
                    std::string m_cosSignedUrl;
                    bool m_cosSignedUrlHasBeenSet;

                    /**
                     * 批量文件预签名链接，一分钟内有效。
                     */
                    std::vector<std::string> m_cosSignedUrls;
                    bool m_cosSignedUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNMETADATAFILERESPONSE_H_
