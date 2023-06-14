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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_CREATELICENSERESPONSE_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_CREATELICENSERESPONSE_H_

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
                * CreateLicense返回参数结构体
                */
                class CreateLicenseResponse : public AbstractModel
                {
                public:
                    CreateLicenseResponse();
                    ~CreateLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64 编码的许可证二进制数据。
                     * @return License Base64 编码的许可证二进制数据。
                     * 
                     */
                    std::string GetLicense() const;

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取加密内容的内容ID
                     * @return ContentId 加密内容的内容ID
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                private:

                    /**
                     * Base64 编码的许可证二进制数据。
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 加密内容的内容ID
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_CREATELICENSERESPONSE_H_
