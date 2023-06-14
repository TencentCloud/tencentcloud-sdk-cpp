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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESQLFILTERREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESQLFILTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CreateSqlFilter请求参数结构体
                */
                class CreateSqlFilterRequest : public AbstractModel
                {
                public:
                    CreateSqlFilterRequest();
                    ~CreateSqlFilterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
                     * @return SqlType SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
                     * @param _sqlType SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取关键字，用于筛选SQL语句，多个关键字用英文逗号分隔，逗号不能作为关键词，多个关键词之间的关系为“逻辑与”。
                     * @return FilterKey 关键字，用于筛选SQL语句，多个关键字用英文逗号分隔，逗号不能作为关键词，多个关键词之间的关系为“逻辑与”。
                     * 
                     */
                    std::string GetFilterKey() const;

                    /**
                     * 设置关键字，用于筛选SQL语句，多个关键字用英文逗号分隔，逗号不能作为关键词，多个关键词之间的关系为“逻辑与”。
                     * @param _filterKey 关键字，用于筛选SQL语句，多个关键字用英文逗号分隔，逗号不能作为关键词，多个关键词之间的关系为“逻辑与”。
                     * 
                     */
                    void SetFilterKey(const std::string& _filterKey);

                    /**
                     * 判断参数 FilterKey 是否已赋值
                     * @return FilterKey 是否已赋值
                     * 
                     */
                    bool FilterKeyHasBeenSet() const;

                    /**
                     * 获取最大并发度，取值不能小于0，如果该值设为 0，则表示限制所有匹配的SQL执行。
                     * @return MaxConcurrency 最大并发度，取值不能小于0，如果该值设为 0，则表示限制所有匹配的SQL执行。
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置最大并发度，取值不能小于0，如果该值设为 0，则表示限制所有匹配的SQL执行。
                     * @param _maxConcurrency 最大并发度，取值不能小于0，如果该值设为 0，则表示限制所有匹配的SQL执行。
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取限流时长，单位秒，支持-1和小于2147483647的正整数，-1表示永不过期。
                     * @return Duration 限流时长，单位秒，支持-1和小于2147483647的正整数，-1表示永不过期。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置限流时长，单位秒，支持-1和小于2147483647的正整数，-1表示永不过期。
                     * @param _duration 限流时长，单位秒，支持-1和小于2147483647的正整数，-1表示永不过期。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     * @return SessionToken 通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     * 
                     */
                    std::string GetSessionToken() const;

                    /**
                     * 设置通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     * @param _sessionToken 通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     * 
                     */
                    void SetSessionToken(const std::string& _sessionToken);

                    /**
                     * 判断参数 SessionToken 是否已赋值
                     * @return SessionToken 是否已赋值
                     * 
                     */
                    bool SessionTokenHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * 关键字，用于筛选SQL语句，多个关键字用英文逗号分隔，逗号不能作为关键词，多个关键词之间的关系为“逻辑与”。
                     */
                    std::string m_filterKey;
                    bool m_filterKeyHasBeenSet;

                    /**
                     * 最大并发度，取值不能小于0，如果该值设为 0，则表示限制所有匹配的SQL执行。
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * 限流时长，单位秒，支持-1和小于2147483647的正整数，-1表示永不过期。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     */
                    std::string m_sessionToken;
                    bool m_sessionTokenHasBeenSet;

                    /**
                     * 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESQLFILTERREQUEST_H_
