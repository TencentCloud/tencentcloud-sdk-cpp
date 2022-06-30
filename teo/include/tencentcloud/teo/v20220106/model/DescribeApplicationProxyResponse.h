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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEAPPLICATIONPROXYRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEAPPLICATIONPROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ApplicationProxy.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeApplicationProxy返回参数结构体
                */
                class DescribeApplicationProxyResponse : public AbstractModel
                {
                public:
                    DescribeApplicationProxyResponse();
                    ~DescribeApplicationProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApplicationProxy> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取字段已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quota 字段已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetQuota() const;

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     */
                    bool QuotaHasBeenSet() const;

                    /**
                     * 获取表示套餐内PlatType为ip的Anycast IP实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpCount 表示套餐内PlatType为ip的Anycast IP实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIpCount() const;

                    /**
                     * 判断参数 IpCount 是否已赋值
                     * @return IpCount 是否已赋值
                     */
                    bool IpCountHasBeenSet() const;

                    /**
                     * 获取表示套餐内PlatType为domain的CNAME实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainCount 表示套餐内PlatType为domain的CNAME实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDomainCount() const;

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     */
                    bool DomainCountHasBeenSet() const;

                private:

                    /**
                     * 数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApplicationProxy> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 字段已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_quota;
                    bool m_quotaHasBeenSet;

                    /**
                     * 表示套餐内PlatType为ip的Anycast IP实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ipCount;
                    bool m_ipCountHasBeenSet;

                    /**
                     * 表示套餐内PlatType为domain的CNAME实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEAPPLICATIONPROXYRESPONSE_H_
