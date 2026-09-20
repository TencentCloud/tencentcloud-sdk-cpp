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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWSIMPLESECRETKEY_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWSIMPLESECRETKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 简单密钥信息
                */
                class AIGWSimpleSecretKey : public AbstractModel
                {
                public:
                    AIGWSimpleSecretKey();
                    ~AIGWSimpleSecretKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>密钥ID</p>
                     * @return SecretKeyId <p>密钥ID</p>
                     * 
                     */
                    std::string GetSecretKeyId() const;

                    /**
                     * 设置<p>密钥ID</p>
                     * @param _secretKeyId <p>密钥ID</p>
                     * 
                     */
                    void SetSecretKeyId(const std::string& _secretKeyId);

                    /**
                     * 判断参数 SecretKeyId 是否已赋值
                     * @return SecretKeyId 是否已赋值
                     * 
                     */
                    bool SecretKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>密钥名称</p>
                     * @return Name <p>密钥名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>密钥名称</p>
                     * @param _name <p>密钥名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>启用状态</p><p>枚举值：</p><ul><li>Enable： 启动</li><li>Disable： 禁用</li></ul>
                     * @return Status <p>启用状态</p><p>枚举值：</p><ul><li>Enable： 启动</li><li>Disable： 禁用</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>启用状态</p><p>枚举值：</p><ul><li>Enable： 启动</li><li>Disable： 禁用</li></ul>
                     * @param _status <p>启用状态</p><p>枚举值：</p><ul><li>Enable： 启动</li><li>Disable： 禁用</li></ul>
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
                     * 获取<p>密钥类型</p><p>枚举值：</p><ul><li>ApiKey： ApiKey类型</li></ul>
                     * @return SecretType <p>密钥类型</p><p>枚举值：</p><ul><li>ApiKey： ApiKey类型</li></ul>
                     * 
                     */
                    std::string GetSecretType() const;

                    /**
                     * 设置<p>密钥类型</p><p>枚举值：</p><ul><li>ApiKey： ApiKey类型</li></ul>
                     * @param _secretType <p>密钥类型</p><p>枚举值：</p><ul><li>ApiKey： ApiKey类型</li></ul>
                     * 
                     */
                    void SetSecretType(const std::string& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>参数格式：2026-09-03 14:11:05</p>
                     * @return CreateTime <p>创建时间</p><p>参数格式：2026-09-03 14:11:05</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：2026-09-03 14:11:05</p>
                     * @param _createTime <p>创建时间</p><p>参数格式：2026-09-03 14:11:05</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>密钥ID</p>
                     */
                    std::string m_secretKeyId;
                    bool m_secretKeyIdHasBeenSet;

                    /**
                     * <p>密钥名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>启用状态</p><p>枚举值：</p><ul><li>Enable： 启动</li><li>Disable： 禁用</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>密钥类型</p><p>枚举值：</p><ul><li>ApiKey： ApiKey类型</li></ul>
                     */
                    std::string m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：2026-09-03 14:11:05</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWSIMPLESECRETKEY_H_
