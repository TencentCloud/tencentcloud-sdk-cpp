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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/TagFilter.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DescribeWhiteBoxKeyDetails请求参数结构体
                */
                class DescribeWhiteBoxKeyDetailsRequest : public AbstractModel
                {
                public:
                    DescribeWhiteBoxKeyDetailsRequest();
                    ~DescribeWhiteBoxKeyDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件：密钥的状态，0：disabled，1：enabled
                     * @return KeyStatus 过滤条件：密钥的状态，0：disabled，1：enabled
                     * 
                     */
                    int64_t GetKeyStatus() const;

                    /**
                     * 设置过滤条件：密钥的状态，0：disabled，1：enabled
                     * @param _keyStatus 过滤条件：密钥的状态，0：disabled，1：enabled
                     * 
                     */
                    void SetKeyStatus(const int64_t& _keyStatus);

                    /**
                     * 判断参数 KeyStatus 是否已赋值
                     * @return KeyStatus 是否已赋值
                     * 
                     */
                    bool KeyStatusHasBeenSet() const;

                    /**
                     * 获取含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     * @return Offset 含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     * @param _offset 含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
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
                     * 获取含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为0, 表示不分页
                     * @return Limit 含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为0, 表示不分页
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为0, 表示不分页
                     * @param _limit 含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为0, 表示不分页
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
                     * 获取标签过滤条件
                     * @return TagFilters 标签过滤条件
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤条件
                     * @param _tagFilters 标签过滤条件
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * 过滤条件：密钥的状态，0：disabled，1：enabled
                     */
                    int64_t m_keyStatus;
                    bool m_keyStatusHasBeenSet;

                    /**
                     * 含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 含义跟 SQL 查询的 Limit 一致，表示本次最多获取 Limit 个元素。缺省值为0, 表示不分页
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 标签过滤条件
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSREQUEST_H_
