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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEDRMLICENSERESPONSE_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEDRMLICENSERESPONSE_H_

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
                * DescribeDRMLicense返回参数结构体
                */
                class DescribeDRMLicenseResponse : public AbstractModel
                {
                public:
                    DescribeDRMLicenseResponse();
                    ~DescribeDRMLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取内容ID。
                     * @return ContentId 内容ID。
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取加密密钥。
                     * @return TXEncryptionToken 加密密钥。
                     * 
                     */
                    std::string GetTXEncryptionToken() const;

                    /**
                     * 判断参数 TXEncryptionToken 是否已赋值
                     * @return TXEncryptionToken 是否已赋值
                     * 
                     */
                    bool TXEncryptionTokenHasBeenSet() const;

                private:

                    /**
                     * 内容ID。
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * 加密密钥。
                     */
                    std::string m_tXEncryptionToken;
                    bool m_tXEncryptionTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEDRMLICENSERESPONSE_H_
