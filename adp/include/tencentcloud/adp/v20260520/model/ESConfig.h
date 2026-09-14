/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_ESCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_ESCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ES 配置
                */
                class ESConfig : public AbstractModel
                {
                public:
                    ESConfig();
                    ~ESConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否支持修改存储方式</p>
                     * @return CanModify <p>是否支持修改存储方式</p>
                     * 
                     */
                    bool GetCanModify() const;

                    /**
                     * 设置<p>是否支持修改存储方式</p>
                     * @param _canModify <p>是否支持修改存储方式</p>
                     * 
                     */
                    void SetCanModify(const bool& _canModify);

                    /**
                     * 判断参数 CanModify 是否已赋值
                     * @return CanModify 是否已赋值
                     * 
                     */
                    bool CanModifyHasBeenSet() const;

                    /**
                     * 获取<p>ES 密码（加密后）</p>
                     * @return EncryptedPassword <p>ES 密码（加密后）</p>
                     * 
                     */
                    std::string GetEncryptedPassword() const;

                    /**
                     * 设置<p>ES 密码（加密后）</p>
                     * @param _encryptedPassword <p>ES 密码（加密后）</p>
                     * 
                     */
                    void SetEncryptedPassword(const std::string& _encryptedPassword);

                    /**
                     * 判断参数 EncryptedPassword 是否已赋值
                     * @return EncryptedPassword 是否已赋值
                     * 
                     */
                    bool EncryptedPasswordHasBeenSet() const;

                    /**
                     * 获取<p>ES 集群 ID</p>
                     * @return InstanceId <p>ES 集群 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ES 集群 ID</p>
                     * @param _instanceId <p>ES 集群 ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>存储类型：1=默认存储，2=自定义存储<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ES_STORAGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>ES_STORAGE_TYPE_DEFAULT</td><td>1</td><td>默认存储</td></tr><tr><td>ES_STORAGE_TYPE_CUSTOM</td><td>2</td><td>自定义存储</td></tr></tbody></table></p>
                     * @return StorageType <p>存储类型：1=默认存储，2=自定义存储<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ES_STORAGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>ES_STORAGE_TYPE_DEFAULT</td><td>1</td><td>默认存储</td></tr><tr><td>ES_STORAGE_TYPE_CUSTOM</td><td>2</td><td>自定义存储</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置<p>存储类型：1=默认存储，2=自定义存储<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ES_STORAGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>ES_STORAGE_TYPE_DEFAULT</td><td>1</td><td>默认存储</td></tr><tr><td>ES_STORAGE_TYPE_CUSTOM</td><td>2</td><td>自定义存储</td></tr></tbody></table></p>
                     * @param _storageType <p>存储类型：1=默认存储，2=自定义存储<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ES_STORAGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>ES_STORAGE_TYPE_DEFAULT</td><td>1</td><td>默认存储</td></tr><tr><td>ES_STORAGE_TYPE_CUSTOM</td><td>2</td><td>自定义存储</td></tr></tbody></table></p>
                     * 
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>ES 用户名</p>
                     * @return UserName <p>ES 用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>ES 用户名</p>
                     * @param _userName <p>ES 用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * <p>是否支持修改存储方式</p>
                     */
                    bool m_canModify;
                    bool m_canModifyHasBeenSet;

                    /**
                     * <p>ES 密码（加密后）</p>
                     */
                    std::string m_encryptedPassword;
                    bool m_encryptedPasswordHasBeenSet;

                    /**
                     * <p>ES 集群 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>存储类型：1=默认存储，2=自定义存储<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ES_STORAGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>ES_STORAGE_TYPE_DEFAULT</td><td>1</td><td>默认存储</td></tr><tr><td>ES_STORAGE_TYPE_CUSTOM</td><td>2</td><td>自定义存储</td></tr></tbody></table></p>
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>ES 用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_ESCONFIG_H_
