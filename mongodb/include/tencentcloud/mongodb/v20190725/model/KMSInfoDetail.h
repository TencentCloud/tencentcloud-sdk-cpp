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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_KMSINFODETAIL_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_KMSINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * KMS密钥信息
                */
                class KMSInfoDetail : public AbstractModel
                {
                public:
                    KMSInfoDetail();
                    ~KMSInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主密钥 ID。
                     * @return KeyId 主密钥 ID。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置主密钥 ID。
                     * @param _keyId 主密钥 ID。
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取主密钥名称。
                     * @return KeyName 主密钥名称。
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置主密钥名称。
                     * @param _keyName 主密钥名称。
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取实例与密钥绑定时间。
                     * @return CreateTime 实例与密钥绑定时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例与密钥绑定时间。
                     * @param _createTime 实例与密钥绑定时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取密钥状态。
                     * @return Status 密钥状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置密钥状态。
                     * @param _status 密钥状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取密钥用途。
                     * @return KeyUsage 密钥用途。
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置密钥用途。
                     * @param _keyUsage 密钥用途。
                     * 
                     */
                    void SetKeyUsage(const std::string& _keyUsage);

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     * 
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取密钥来源。
                     * @return KeyOrigin 密钥来源。
                     * 
                     */
                    std::string GetKeyOrigin() const;

                    /**
                     * 设置密钥来源。
                     * @param _keyOrigin 密钥来源。
                     * 
                     */
                    void SetKeyOrigin(const std::string& _keyOrigin);

                    /**
                     * 判断参数 KeyOrigin 是否已赋值
                     * @return KeyOrigin 是否已赋值
                     * 
                     */
                    bool KeyOriginHasBeenSet() const;

                    /**
                     * 获取kms所在地域。
                     * @return KmsRegion kms所在地域。
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置kms所在地域。
                     * @param _kmsRegion kms所在地域。
                     * 
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                private:

                    /**
                     * 主密钥 ID。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 主密钥名称。
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 实例与密钥绑定时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 密钥状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 密钥用途。
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * 密钥来源。
                     */
                    std::string m_keyOrigin;
                    bool m_keyOriginHasBeenSet;

                    /**
                     * kms所在地域。
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_KMSINFODETAIL_H_
