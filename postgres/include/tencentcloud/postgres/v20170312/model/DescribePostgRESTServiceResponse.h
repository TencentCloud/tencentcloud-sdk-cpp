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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPOSTGRESTSERVICERESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPOSTGRESTSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribePostgRESTService返回参数结构体
                */
                class DescribePostgRESTServiceResponse : public AbstractModel
                {
                public:
                    DescribePostgRESTServiceResponse();
                    ~DescribePostgRESTServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>PostgREST服务运行状态</p><p>枚举值：</p><ul><li>closed： 已关闭</li><li>creating： 创建中</li><li>running： 运行中</li></ul><p>默认值：closed</p>
                     * @return Status <p>PostgREST服务运行状态</p><p>枚举值：</p><ul><li>closed： 已关闭</li><li>creating： 创建中</li><li>running： 运行中</li></ul><p>默认值：closed</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>参数格式：2026-05-10 10:00:00</p>
                     * @return CreateTime <p>创建时间</p><p>参数格式：2026-05-10 10:00:00</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>PostgREST服务网络连接信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAccessList <p>PostgREST服务网络连接信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DBInstanceNetInfo> GetNetworkAccessList() const;

                    /**
                     * 判断参数 NetworkAccessList 是否已赋值
                     * @return NetworkAccessList 是否已赋值
                     * 
                     */
                    bool NetworkAccessListHasBeenSet() const;

                    /**
                     * 获取<p>PostgREST服务JWT值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JWTSecret <p>PostgREST服务JWT值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJWTSecret() const;

                    /**
                     * 判断参数 JWTSecret 是否已赋值
                     * @return JWTSecret 是否已赋值
                     * 
                     */
                    bool JWTSecretHasBeenSet() const;

                private:

                    /**
                     * <p>PostgREST服务运行状态</p><p>枚举值：</p><ul><li>closed： 已关闭</li><li>creating： 创建中</li><li>running： 运行中</li></ul><p>默认值：closed</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：2026-05-10 10:00:00</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>PostgREST服务网络连接信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DBInstanceNetInfo> m_networkAccessList;
                    bool m_networkAccessListHasBeenSet;

                    /**
                     * <p>PostgREST服务JWT值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jWTSecret;
                    bool m_jWTSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPOSTGRESTSERVICERESPONSE_H_
