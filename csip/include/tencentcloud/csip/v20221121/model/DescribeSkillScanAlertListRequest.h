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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSkillScanAlertList请求参数结构体
                */
                class DescribeSkillScanAlertListRequest : public AbstractModel
                {
                public:
                    DescribeSkillScanAlertListRequest();
                    ~DescribeSkillScanAlertListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移量
取值范围：[0, +∞)
默认值：0
                     * @return Offset 分页偏移量
取值范围：[0, +∞)
默认值：0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
取值范围：[0, +∞)
默认值：0
                     * @param _offset 分页偏移量
取值范围：[0, +∞)
默认值：0
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
                     * 获取每页返回数量
取值范围：[1, 200]
默认值：10
                     * @return Limit 每页返回数量
取值范围：[1, 200]
默认值：10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页返回数量
取值范围：[1, 200]
默认值：10
                     * @param _limit 每页返回数量
取值范围：[1, 200]
默认值：10
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
                     * 获取过滤条件列表，支持的过滤字段：BelongAssetType（归属资产类型 HOST/CONTAINER，未指定默认 HOST）、ContainerId（容器 ID，仅容器告警生效）、RiskLevel（风险等级，精确匹配）、Status（处理状态，精确匹配）、SkillName（Skill 名称，模糊匹配）、UUID（主机 UUID，精确匹配）、Level（告警级别，精确匹配）、ContentHash（文件 SHA256，精确匹配）、InstanceID（实例 ID，精确匹配）、InstanceName（实例名称，模糊匹配）、SkillPath（Skill 路径，模糊匹配）
                     * @return Filters 过滤条件列表，支持的过滤字段：BelongAssetType（归属资产类型 HOST/CONTAINER，未指定默认 HOST）、ContainerId（容器 ID，仅容器告警生效）、RiskLevel（风险等级，精确匹配）、Status（处理状态，精确匹配）、SkillName（Skill 名称，模糊匹配）、UUID（主机 UUID，精确匹配）、Level（告警级别，精确匹配）、ContentHash（文件 SHA256，精确匹配）、InstanceID（实例 ID，精确匹配）、InstanceName（实例名称，模糊匹配）、SkillPath（Skill 路径，模糊匹配）
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件列表，支持的过滤字段：BelongAssetType（归属资产类型 HOST/CONTAINER，未指定默认 HOST）、ContainerId（容器 ID，仅容器告警生效）、RiskLevel（风险等级，精确匹配）、Status（处理状态，精确匹配）、SkillName（Skill 名称，模糊匹配）、UUID（主机 UUID，精确匹配）、Level（告警级别，精确匹配）、ContentHash（文件 SHA256，精确匹配）、InstanceID（实例 ID，精确匹配）、InstanceName（实例名称，模糊匹配）、SkillPath（Skill 路径，模糊匹配）
                     * @param _filters 过滤条件列表，支持的过滤字段：BelongAssetType（归属资产类型 HOST/CONTAINER，未指定默认 HOST）、ContainerId（容器 ID，仅容器告警生效）、RiskLevel（风险等级，精确匹配）、Status（处理状态，精确匹配）、SkillName（Skill 名称，模糊匹配）、UUID（主机 UUID，精确匹配）、Level（告警级别，精确匹配）、ContentHash（文件 SHA256，精确匹配）、InstanceID（实例 ID，精确匹配）、InstanceName（实例名称，模糊匹配）、SkillPath（Skill 路径，模糊匹配）
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序方式
枚举值：
ASC：升序
DESC：降序
默认值：DESC
                     * @return Order 排序方式
枚举值：
ASC：升序
DESC：降序
默认值：DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
枚举值：
ASC：升序
DESC：降序
默认值：DESC
                     * @param _order 排序方式
枚举值：
ASC：升序
DESC：降序
默认值：DESC
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
                     * 获取排序字段
枚举值：
CreateTime：首次检出时间
SecurityScore：安全评分
UpdateTime：更新时间
默认值：CreateTime
                     * @return By 排序字段
枚举值：
CreateTime：首次检出时间
SecurityScore：安全评分
UpdateTime：更新时间
默认值：CreateTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
枚举值：
CreateTime：首次检出时间
SecurityScore：安全评分
UpdateTime：更新时间
默认值：CreateTime
                     * @param _by 排序字段
枚举值：
CreateTime：首次检出时间
SecurityScore：安全评分
UpdateTime：更新时间
默认值：CreateTime
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
                     * 获取集团账号的成员 id
                     * @return MemberId 集团账号的成员 id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员 id
                     * @param _memberId 集团账号的成员 id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量
取值范围：[0, +∞)
默认值：0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页返回数量
取值范围：[1, 200]
默认值：10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件列表，支持的过滤字段：BelongAssetType（归属资产类型 HOST/CONTAINER，未指定默认 HOST）、ContainerId（容器 ID，仅容器告警生效）、RiskLevel（风险等级，精确匹配）、Status（处理状态，精确匹配）、SkillName（Skill 名称，模糊匹配）、UUID（主机 UUID，精确匹配）、Level（告警级别，精确匹配）、ContentHash（文件 SHA256，精确匹配）、InstanceID（实例 ID，精确匹配）、InstanceName（实例名称，模糊匹配）、SkillPath（Skill 路径，模糊匹配）
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式
枚举值：
ASC：升序
DESC：降序
默认值：DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
枚举值：
CreateTime：首次检出时间
SecurityScore：安全评分
UpdateTime：更新时间
默认值：CreateTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 集团账号的成员 id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTLISTREQUEST_H_
