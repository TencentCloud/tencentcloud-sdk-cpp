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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ENABLEKEYROTATIONREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ENABLEKEYROTATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * EnableKeyRotation请求参数结构体
                */
                class EnableKeyRotationRequest : public AbstractModel
                {
                public:
                    EnableKeyRotationRequest();
                    ~EnableKeyRotationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CMK唯一标识符
                     * @return KeyId CMK唯一标识符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置CMK唯一标识符
                     * @param _keyId CMK唯一标识符
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
                     * 获取密钥轮转周期，单位天，允许范围 7 ~ 365，默认值 365。
                     * @return RotateDays 密钥轮转周期，单位天，允许范围 7 ~ 365，默认值 365。
                     * 
                     */
                    uint64_t GetRotateDays() const;

                    /**
                     * 设置密钥轮转周期，单位天，允许范围 7 ~ 365，默认值 365。
                     * @param _rotateDays 密钥轮转周期，单位天，允许范围 7 ~ 365，默认值 365。
                     * 
                     */
                    void SetRotateDays(const uint64_t& _rotateDays);

                    /**
                     * 判断参数 RotateDays 是否已赋值
                     * @return RotateDays 是否已赋值
                     * 
                     */
                    bool RotateDaysHasBeenSet() const;

                private:

                    /**
                     * CMK唯一标识符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 密钥轮转周期，单位天，允许范围 7 ~ 365，默认值 365。
                     */
                    uint64_t m_rotateDays;
                    bool m_rotateDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ENABLEKEYROTATIONREQUEST_H_
