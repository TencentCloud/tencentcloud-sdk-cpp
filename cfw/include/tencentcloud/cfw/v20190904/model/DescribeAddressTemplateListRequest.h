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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEADDRESSTEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEADDRESSTEMPLATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeAddressTemplateList请求参数结构体
                */
                class DescribeAddressTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeAddressTemplateListRequest();
                    ~DescribeAddressTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移量，分页用</p>
                     * @return Offset <p>偏移量，分页用</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，分页用</p>
                     * @param _offset <p>偏移量，分页用</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>条数，分页用</p>
                     * @return Limit <p>条数，分页用</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>条数，分页用</p>
                     * @param _limit <p>条数，分页用</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>排序字段，取值：UpdateTime最近更新时间，RulesNum关联规则数</p>
                     * @return By <p>排序字段，取值：UpdateTime最近更新时间，RulesNum关联规则数</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段，取值：UpdateTime最近更新时间，RulesNum关联规则数</p>
                     * @param _by <p>排序字段，取值：UpdateTime最近更新时间，RulesNum关联规则数</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取<p>排序，取值 ：asc正序，desc逆序</p>
                     * @return Order <p>排序，取值 ：asc正序，desc逆序</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序，取值 ：asc正序，desc逆序</p>
                     * @param _order <p>排序，取值 ：asc正序，desc逆序</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>搜索值</p>
                     * @return SearchValue <p>搜索值</p>
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置<p>搜索值</p>
                     * @param _searchValue <p>搜索值</p>
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取<p>检索地址模板唯一id</p>
                     * @return Uuid <p>检索地址模板唯一id</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>检索地址模板唯一id</p>
                     * @param _uuid <p>检索地址模板唯一id</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>模板类型，取值：1：ip模板，5：域名模板，6：协议端口模板</p>
                     * @return TemplateType <p>模板类型，取值：1：ip模板，5：域名模板，6：协议端口模板</p>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置<p>模板类型，取值：1：ip模板，5：域名模板，6：协议端口模板</p>
                     * @param _templateType <p>模板类型，取值：1：ip模板，5：域名模板，6：协议端口模板</p>
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取<p>模板Id</p>
                     * @return TemplateId <p>模板Id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模板Id</p>
                     * @param _templateId <p>模板Id</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>模板来源</p>
                     * @return SourceType <p>模板来源</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>模板来源</p>
                     * @param _sourceType <p>模板来源</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>偏移量，分页用</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>条数，分页用</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序字段，取值：UpdateTime最近更新时间，RulesNum关联规则数</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * <p>排序，取值 ：asc正序，desc逆序</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>搜索值</p>
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * <p>检索地址模板唯一id</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>模板类型，取值：1：ip模板，5：域名模板，6：协议端口模板</p>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>模板Id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>模板来源</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEADDRESSTEMPLATELISTREQUEST_H_
