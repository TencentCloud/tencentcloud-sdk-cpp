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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DEVICEACCOUNT_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DEVICEACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 主机账号
                */
                class DeviceAccount : public AbstractModel
                {
                public:
                    DeviceAccount();
                    ~DeviceAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号ID
                     * @return Id 账号ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置账号ID
                     * @param _id 账号ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return DeviceId 主机ID
                     * 
                     */
                    uint64_t GetDeviceId() const;

                    /**
                     * 设置主机ID
                     * @param _deviceId 主机ID
                     * 
                     */
                    void SetDeviceId(const uint64_t& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取账号名
                     * @return Account 账号名
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置账号名
                     * @param _account 账号名
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取true-已托管密码，false-未托管密码
                     * @return BoundPassword true-已托管密码，false-未托管密码
                     * 
                     */
                    bool GetBoundPassword() const;

                    /**
                     * 设置true-已托管密码，false-未托管密码
                     * @param _boundPassword true-已托管密码，false-未托管密码
                     * 
                     */
                    void SetBoundPassword(const bool& _boundPassword);

                    /**
                     * 判断参数 BoundPassword 是否已赋值
                     * @return BoundPassword 是否已赋值
                     * 
                     */
                    bool BoundPasswordHasBeenSet() const;

                    /**
                     * 获取true-已托管私钥，false-未托管私钥
                     * @return BoundPrivateKey true-已托管私钥，false-未托管私钥
                     * 
                     */
                    bool GetBoundPrivateKey() const;

                    /**
                     * 设置true-已托管私钥，false-未托管私钥
                     * @param _boundPrivateKey true-已托管私钥，false-未托管私钥
                     * 
                     */
                    void SetBoundPrivateKey(const bool& _boundPrivateKey);

                    /**
                     * 判断参数 BoundPrivateKey 是否已赋值
                     * @return BoundPrivateKey 是否已赋值
                     * 
                     */
                    bool BoundPrivateKeyHasBeenSet() const;

                    /**
                     * 获取是否托管凭证, true-托管，false-未托管
                     * @return BoundKubeconfig 是否托管凭证, true-托管，false-未托管
                     * 
                     */
                    bool GetBoundKubeconfig() const;

                    /**
                     * 设置是否托管凭证, true-托管，false-未托管
                     * @param _boundKubeconfig 是否托管凭证, true-托管，false-未托管
                     * 
                     */
                    void SetBoundKubeconfig(const bool& _boundKubeconfig);

                    /**
                     * 判断参数 BoundKubeconfig 是否已赋值
                     * @return BoundKubeconfig 是否已赋值
                     * 
                     */
                    bool BoundKubeconfigHasBeenSet() const;

                    /**
                     * 获取是否为k8s资产管理账号	
                     * @return IsK8SManageAccount 是否为k8s资产管理账号	
                     * 
                     */
                    bool GetIsK8SManageAccount() const;

                    /**
                     * 设置是否为k8s资产管理账号	
                     * @param _isK8SManageAccount 是否为k8s资产管理账号	
                     * 
                     */
                    void SetIsK8SManageAccount(const bool& _isK8SManageAccount);

                    /**
                     * 判断参数 IsK8SManageAccount 是否已赋值
                     * @return IsK8SManageAccount 是否已赋值
                     * 
                     */
                    bool IsK8SManageAccountHasBeenSet() const;

                private:

                    /**
                     * 账号ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机ID
                     */
                    uint64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 账号名
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * true-已托管密码，false-未托管密码
                     */
                    bool m_boundPassword;
                    bool m_boundPasswordHasBeenSet;

                    /**
                     * true-已托管私钥，false-未托管私钥
                     */
                    bool m_boundPrivateKey;
                    bool m_boundPrivateKeyHasBeenSet;

                    /**
                     * 是否托管凭证, true-托管，false-未托管
                     */
                    bool m_boundKubeconfig;
                    bool m_boundKubeconfigHasBeenSet;

                    /**
                     * 是否为k8s资产管理账号	
                     */
                    bool m_isK8SManageAccount;
                    bool m_isK8SManageAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DEVICEACCOUNT_H_
