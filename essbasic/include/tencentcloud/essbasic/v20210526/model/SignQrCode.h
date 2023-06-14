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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNQRCODE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNQRCODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 一码多扫签署二维码对象
                */
                class SignQrCode : public AbstractModel
                {
                public:
                    SignQrCode();
                    ~SignQrCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取二维码id
                     * @return QrCodeId 二维码id
                     * 
                     */
                    std::string GetQrCodeId() const;

                    /**
                     * 设置二维码id
                     * @param _qrCodeId 二维码id
                     * 
                     */
                    void SetQrCodeId(const std::string& _qrCodeId);

                    /**
                     * 判断参数 QrCodeId 是否已赋值
                     * @return QrCodeId 是否已赋值
                     * 
                     */
                    bool QrCodeIdHasBeenSet() const;

                    /**
                     * 获取二维码url
                     * @return QrCodeUrl 二维码url
                     * 
                     */
                    std::string GetQrCodeUrl() const;

                    /**
                     * 设置二维码url
                     * @param _qrCodeUrl 二维码url
                     * 
                     */
                    void SetQrCodeUrl(const std::string& _qrCodeUrl);

                    /**
                     * 判断参数 QrCodeUrl 是否已赋值
                     * @return QrCodeUrl 是否已赋值
                     * 
                     */
                    bool QrCodeUrlHasBeenSet() const;

                    /**
                     * 获取二维码过期时间
                     * @return ExpiredTime 二维码过期时间
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置二维码过期时间
                     * @param _expiredTime 二维码过期时间
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 二维码id
                     */
                    std::string m_qrCodeId;
                    bool m_qrCodeIdHasBeenSet;

                    /**
                     * 二维码url
                     */
                    std::string m_qrCodeUrl;
                    bool m_qrCodeUrlHasBeenSet;

                    /**
                     * 二维码过期时间
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNQRCODE_H_
