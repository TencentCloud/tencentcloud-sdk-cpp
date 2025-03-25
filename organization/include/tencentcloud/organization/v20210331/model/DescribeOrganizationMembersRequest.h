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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/Tag.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganizationMembers请求参数结构体
                */
                class DescribeOrganizationMembersRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMembersRequest();
                    ~DescribeOrganizationMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量。取值是limit的整数倍，默认值 : 0
                     * @return Offset 偏移量。取值是limit的整数倍，默认值 : 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。取值是limit的整数倍，默认值 : 0
                     * @param _offset 偏移量。取值是limit的整数倍，默认值 : 0
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
                     * 获取限制数目。取值范围：1~50，默认值：10
                     * @return Limit 限制数目。取值范围：1~50，默认值：10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目。取值范围：1~50，默认值：10
                     * @param _limit 限制数目。取值范围：1~50，默认值：10
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
                     * 获取国际站：en，国内站：zh
                     * @return Lang 国际站：en，国内站：zh
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置国际站：en，国内站：zh
                     * @param _lang 国际站：en，国内站：zh
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取成员名称或者成员ID搜索。
                     * @return SearchKey 成员名称或者成员ID搜索。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置成员名称或者成员ID搜索。
                     * @param _searchKey 成员名称或者成员ID搜索。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取主体名称搜索。
                     * @return AuthName 主体名称搜索。
                     * 
                     */
                    std::string GetAuthName() const;

                    /**
                     * 设置主体名称搜索。
                     * @param _authName 主体名称搜索。
                     * 
                     */
                    void SetAuthName(const std::string& _authName);

                    /**
                     * 判断参数 AuthName 是否已赋值
                     * @return AuthName 是否已赋值
                     * 
                     */
                    bool AuthNameHasBeenSet() const;

                    /**
                     * 获取可信服务产品简称。可信服务管理员查询时必须指定
                     * @return Product 可信服务产品简称。可信服务管理员查询时必须指定
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置可信服务产品简称。可信服务管理员查询时必须指定
                     * @param _product 可信服务产品简称。可信服务管理员查询时必须指定
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
                     * 获取成员标签搜索列表，最大10个
                     * @return Tags 成员标签搜索列表，最大10个
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置成员标签搜索列表，最大10个
                     * @param _tags 成员标签搜索列表，最大10个
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取组织单元ID
                     * @return NodeId 组织单元ID
                     * 
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 设置组织单元ID
                     * @param _nodeId 组织单元ID
                     * 
                     */
                    void SetNodeId(const uint64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取组织单元名称
                     * @return NodeName 组织单元名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置组织单元名称
                     * @param _nodeName 组织单元名称
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                private:

                    /**
                     * 偏移量。取值是limit的整数倍，默认值 : 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目。取值范围：1~50，默认值：10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 国际站：en，国内站：zh
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * 成员名称或者成员ID搜索。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 主体名称搜索。
                     */
                    std::string m_authName;
                    bool m_authNameHasBeenSet;

                    /**
                     * 可信服务产品简称。可信服务管理员查询时必须指定
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 成员标签搜索列表，最大10个
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 组织单元ID
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 组织单元名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSREQUEST_H_
