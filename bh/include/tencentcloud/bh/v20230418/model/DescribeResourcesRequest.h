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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBERESOURCESREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeResources请求参数结构体
                */
                class DescribeResourcesRequest : public AbstractModel
                {
                public:
                    DescribeResourcesRequest();
                    ~DescribeResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>地域码, 如: ap-guangzhou</p>
                     * @return ApCode <p>地域码, 如: ap-guangzhou</p>
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置<p>地域码, 如: ap-guangzhou</p>
                     * @param _apCode <p>地域码, 如: ap-guangzhou</p>
                     * 
                     */
                    void SetApCode(const std::string& _apCode);

                    /**
                     * 判断参数 ApCode 是否已赋值
                     * @return ApCode 是否已赋值
                     * 
                     */
                    bool ApCodeHasBeenSet() const;

                    /**
                     * 获取<p>按照堡垒机开通的 VPC 实例ID查询</p>
                     * @return VpcId <p>按照堡垒机开通的 VPC 实例ID查询</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>按照堡垒机开通的 VPC 实例ID查询</p>
                     * @param _vpcId <p>按照堡垒机开通的 VPC 实例ID查询</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId</p>
                     * @return ResourceIds <p>资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置<p>资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId</p>
                     * @param _resourceIds <p>资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId</p>
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>每页条目数量</p>
                     * @return Limit <p>每页条目数量</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页条目数量</p>
                     * @param _limit <p>每页条目数量</p>
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
                     * 获取<p>分页偏移位置</p>
                     * @return Offset <p>分页偏移位置</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移位置</p>
                     * @param _offset <p>分页偏移位置</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>地域码, 如: ap-guangzhou</p>
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * <p>按照堡垒机开通的 VPC 实例ID查询</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>每页条目数量</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移位置</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBERESOURCESREQUEST_H_
