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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEVASLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEVASLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeVasList请求参数结构体
                */
                class DescribeVasListRequest : public AbstractModel
                {
                public:
                    DescribeVasListRequest();
                    ~DescribeVasListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认值为0。
                     * @return Offset 偏移量，默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0。
                     * @param _offset 偏移量，默认值为0。
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
                     * 获取限制数量，默认值为20。
                     * @return Limit 限制数量，默认值为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数量，默认值为20。
                     * @param _limit 限制数量，默认值为20。
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
                     * 获取域名ID
                     * @return DomainId 域名ID
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID
                     * @param _domainId 域名ID
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取使用资源 ID 列表查询
                     * @return ResourceIdList 使用资源 ID 列表查询
                     * 
                     */
                    std::vector<std::string> GetResourceIdList() const;

                    /**
                     * 设置使用资源 ID 列表查询
                     * @param _resourceIdList 使用资源 ID 列表查询
                     * 
                     */
                    void SetResourceIdList(const std::vector<std::string>& _resourceIdList);

                    /**
                     * 判断参数 ResourceIdList 是否已赋值
                     * @return ResourceIdList 是否已赋值
                     * 
                     */
                    bool ResourceIdListHasBeenSet() const;

                    /**
                     * 获取增值服务类型
                     * @return LimitType 增值服务类型
                     * 
                     */
                    std::string GetLimitType() const;

                    /**
                     * 设置增值服务类型
                     * @param _limitType 增值服务类型
                     * 
                     */
                    void SetLimitType(const std::string& _limitType);

                    /**
                     * 判断参数 LimitType 是否已赋值
                     * @return LimitType 是否已赋值
                     * 
                     */
                    bool LimitTypeHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数量，默认值为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 域名ID
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 使用资源 ID 列表查询
                     */
                    std::vector<std::string> m_resourceIdList;
                    bool m_resourceIdListHasBeenSet;

                    /**
                     * 增值服务类型
                     */
                    std::string m_limitType;
                    bool m_limitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEVASLISTREQUEST_H_
