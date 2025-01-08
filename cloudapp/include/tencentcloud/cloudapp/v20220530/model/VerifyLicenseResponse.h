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

#ifndef TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_VERIFYLICENSERESPONSE_H_
#define TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_VERIFYLICENSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudapp/v20220530/model/License.h>


namespace TencentCloud
{
    namespace Cloudapp
    {
        namespace V20220530
        {
            namespace Model
            {
                /**
                * VerifyLicense返回参数结构体
                */
                class VerifyLicenseResponse : public AbstractModel
                {
                public:
                    VerifyLicenseResponse();
                    ~VerifyLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取软件的详细授权信息。
                     * @return License 软件的详细授权信息。
                     * 
                     */
                    License GetLicense() const;

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取当前请求服务端的时间戳，格式为RFC3339
                     * @return Timestamp 当前请求服务端的时间戳，格式为RFC3339
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取对License字段对应的json数据的签名
                     * @return Signature 对License字段对应的json数据的签名
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     * 
                     */
                    bool SignatureHasBeenSet() const;

                private:

                    /**
                     * 软件的详细授权信息。
                     */
                    License m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 当前请求服务端的时间戳，格式为RFC3339
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 对License字段对应的json数据的签名
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAPP_V20220530_MODEL_VERIFYLICENSERESPONSE_H_
