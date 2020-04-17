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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBESUBNETREQUEST_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBESUBNETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeSubnet请求参数结构体
                */
                class DescribeSubnetRequest : public AbstractModel
                {
                public:
                    DescribeSubnetRequest();
                    ~DescribeSubnetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量。
                     * @return Limit 返回数量。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量。
                     * @param Limit 返回数量。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param Offset 偏移量。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询指定VpcId下的子网信息。
                     * @return VpcId 查询指定VpcId下的子网信息。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置查询指定VpcId下的子网信息。
                     * @param VpcId 查询指定VpcId下的子网信息。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取查找关键字
                     * @return SearchWord 查找关键字
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置查找关键字
                     * @param SearchWord 查找关键字
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     */
                    bool SearchWordHasBeenSet() const;

                private:

                    /**
                     * 返回数量。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询指定VpcId下的子网信息。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 查找关键字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBESUBNETREQUEST_H_
