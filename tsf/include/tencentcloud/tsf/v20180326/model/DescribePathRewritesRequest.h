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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPATHREWRITESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPATHREWRITESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribePathRewrites请求参数结构体
                */
                class DescribePathRewritesRequest : public AbstractModel
                {
                public:
                    DescribePathRewritesRequest();
                    ~DescribePathRewritesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关部署组ID
                     * @return GatewayGroupId 网关部署组ID
                     * 
                     */
                    std::string GetGatewayGroupId() const;

                    /**
                     * 设置网关部署组ID
                     * @param _gatewayGroupId 网关部署组ID
                     * 
                     */
                    void SetGatewayGroupId(const std::string& _gatewayGroupId);

                    /**
                     * 判断参数 GatewayGroupId 是否已赋值
                     * @return GatewayGroupId 是否已赋值
                     * 
                     */
                    bool GatewayGroupIdHasBeenSet() const;

                    /**
                     * 获取根据正则表达式或替换的内容模糊查询
                     * @return SearchWord 根据正则表达式或替换的内容模糊查询
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置根据正则表达式或替换的内容模糊查询
                     * @param _searchWord 根据正则表达式或替换的内容模糊查询
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取每页数量
                     * @return Limit 每页数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数量
                     * @param _limit 每页数量
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
                     * 获取起始偏移量
                     * @return Offset 起始偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始偏移量
                     * @param _offset 起始偏移量
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
                     * 网关部署组ID
                     */
                    std::string m_gatewayGroupId;
                    bool m_gatewayGroupIdHasBeenSet;

                    /**
                     * 根据正则表达式或替换的内容模糊查询
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 每页数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPATHREWRITESREQUEST_H_
