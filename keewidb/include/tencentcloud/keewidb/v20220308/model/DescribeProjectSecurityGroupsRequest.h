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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEPROJECTSECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEPROJECTSECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeProjectSecurityGroups请求参数结构体
                */
                class DescribeProjectSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeProjectSecurityGroupsRequest();
                    ~DescribeProjectSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库引擎名称。该产品固定为 keewidb。
                     * @return Product 数据库引擎名称。该产品固定为 keewidb。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置数据库引擎名称。该产品固定为 keewidb。
                     * @param _product 数据库引擎名称。该产品固定为 keewidb。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取项目 ID。
登录 [账号中心](https://console.cloud.tencent.com/developer)，在<b>项目管理</b>中可获取项目 ID。
                     * @return ProjectId 项目 ID。
登录 [账号中心](https://console.cloud.tencent.com/developer)，在<b>项目管理</b>中可获取项目 ID。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
登录 [账号中心](https://console.cloud.tencent.com/developer)，在<b>项目管理</b>中可获取项目 ID。
                     * @param _projectId 项目 ID。
登录 [账号中心](https://console.cloud.tencent.com/developer)，在<b>项目管理</b>中可获取项目 ID。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @return Offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @param _offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页安全组的数量限制。默认为 20，最多输出100条。
                     * @return Limit 每页安全组的数量限制。默认为 20，最多输出100条。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页安全组的数量限制。默认为 20，最多输出100条。
                     * @param _limit 每页安全组的数量限制。默认为 20，最多输出100条。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索关键词，支持根据安全组 ID 或者安全组名称搜索。
                     * @return SearchKey 搜索关键词，支持根据安全组 ID 或者安全组名称搜索。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索关键词，支持根据安全组 ID 或者安全组名称搜索。
                     * @param _searchKey 搜索关键词，支持根据安全组 ID 或者安全组名称搜索。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * 数据库引擎名称。该产品固定为 keewidb。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 项目 ID。
登录 [账号中心](https://console.cloud.tencent.com/developer)，在<b>项目管理</b>中可获取项目 ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页安全组的数量限制。默认为 20，最多输出100条。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键词，支持根据安全组 ID 或者安全组名称搜索。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEPROJECTSECURITYGROUPSREQUEST_H_
