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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_LOGINHEADER_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_LOGINHEADER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 登录接口请求头
                */
                class LoginHeader : public AbstractModel
                {
                public:
                    LoginHeader();
                    ~LoginHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机构ID
                     * @return HospitalId 机构ID
                     * 
                     */
                    std::string GetHospitalId() const;

                    /**
                     * 设置机构ID
                     * @param _hospitalId 机构ID
                     * 
                     */
                    void SetHospitalId(const std::string& _hospitalId);

                    /**
                     * 判断参数 HospitalId 是否已赋值
                     * @return HospitalId 是否已赋值
                     * 
                     */
                    bool HospitalIdHasBeenSet() const;

                    /**
                     * 获取合作方ID
                     * @return PartnerId 合作方ID
                     * 
                     */
                    std::string GetPartnerId() const;

                    /**
                     * 设置合作方ID
                     * @param _partnerId 合作方ID
                     * 
                     */
                    void SetPartnerId(const std::string& _partnerId);

                    /**
                     * 判断参数 PartnerId 是否已赋值
                     * @return PartnerId 是否已赋值
                     * 
                     */
                    bool PartnerIdHasBeenSet() const;

                    /**
                     * 获取加密时间戳毫秒
                     * @return Timestamp 加密时间戳毫秒
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置加密时间戳毫秒
                     * @param _timestamp 加密时间戳毫秒
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取签名数据
                     * @return Signature 签名数据
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置签名数据
                     * @param _signature 签名数据
                     * 
                     */
                    void SetSignature(const std::string& _signature);

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     * 
                     */
                    bool SignatureHasBeenSet() const;

                    /**
                     * 获取平台ID，平台版登录时传入
                     * @return PlatformId 平台ID，平台版登录时传入
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置平台ID，平台版登录时传入
                     * @param _platformId 平台ID，平台版登录时传入
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                private:

                    /**
                     * 机构ID
                     */
                    std::string m_hospitalId;
                    bool m_hospitalIdHasBeenSet;

                    /**
                     * 合作方ID
                     */
                    std::string m_partnerId;
                    bool m_partnerIdHasBeenSet;

                    /**
                     * 加密时间戳毫秒
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 签名数据
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * 平台ID，平台版登录时传入
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_LOGINHEADER_H_
