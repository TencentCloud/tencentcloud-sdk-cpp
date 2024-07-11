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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEEMPLOYEEQUALIFICATIONSEALQRCODERESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEEMPLOYEEQUALIFICATIONSEALQRCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateEmployeeQualificationSealQrCode返回参数结构体
                */
                class CreateEmployeeQualificationSealQrCodeResponse : public AbstractModel
                {
                public:
                    CreateEmployeeQualificationSealQrCodeResponse();
                    ~CreateEmployeeQualificationSealQrCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取二维码图片的Base64  注:  `此二维码的有效时间为7天，过期后需要重新生成新的二维码图片`
                     * @return QrcodeBase64 二维码图片的Base64  注:  `此二维码的有效时间为7天，过期后需要重新生成新的二维码图片`
                     * 
                     */
                    std::string GetQrcodeBase64() const;

                    /**
                     * 判断参数 QrcodeBase64 是否已赋值
                     * @return QrcodeBase64 是否已赋值
                     * 
                     */
                    bool QrcodeBase64HasBeenSet() const;

                private:

                    /**
                     * 二维码图片的Base64  注:  `此二维码的有效时间为7天，过期后需要重新生成新的二维码图片`
                     */
                    std::string m_qrcodeBase64;
                    bool m_qrcodeBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEEMPLOYEEQUALIFICATIONSEALQRCODERESPONSE_H_
