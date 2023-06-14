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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSWATERKEYREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSWATERKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyDDoSWaterKey请求参数结构体
                */
                class ModifyDDoSWaterKeyRequest : public AbstractModel
                {
                public:
                    ModifyDDoSWaterKeyRequest();
                    ~ModifyDDoSWaterKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取密钥操作，取值：[add（添加），delete（删除），open（开启），close（关闭），get（获取密钥）]
                     * @return Method 密钥操作，取值：[add（添加），delete（删除），open（开启），close（关闭），get（获取密钥）]
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置密钥操作，取值：[add（添加），delete（删除），open（开启），close（关闭），get（获取密钥）]
                     * @param _method 密钥操作，取值：[add（添加），delete（删除），open（开启），close（关闭），get（获取密钥）]
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取密钥ID，当添加密钥操作时可以不填或填0，其他操作时必须填写；
                     * @return KeyId 密钥ID，当添加密钥操作时可以不填或填0，其他操作时必须填写；
                     * 
                     */
                    uint64_t GetKeyId() const;

                    /**
                     * 设置密钥ID，当添加密钥操作时可以不填或填0，其他操作时必须填写；
                     * @param _keyId 密钥ID，当添加密钥操作时可以不填或填0，其他操作时必须填写；
                     * 
                     */
                    void SetKeyId(const uint64_t& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 密钥操作，取值：[add（添加），delete（删除），open（开启），close（关闭），get（获取密钥）]
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 密钥ID，当添加密钥操作时可以不填或填0，其他操作时必须填写；
                     */
                    uint64_t m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSWATERKEYREQUEST_H_
