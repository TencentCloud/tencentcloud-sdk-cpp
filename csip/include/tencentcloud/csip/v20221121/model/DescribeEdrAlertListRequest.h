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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEdrAlertList请求参数结构体
                */
                class DescribeEdrAlertListRequest : public AbstractModel
                {
                public:
                    DescribeEdrAlertListRequest();
                    ~DescribeEdrAlertListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，支持的 Name 如下：<br/>【资源属性过滤】（前缀模糊，后端自动反查资产后按实例过滤）<br/>InstanceName - string - 是否必填：否 - 资产名称（前缀匹配）<br/>InstanceID - string - 是否必填：否 - 实例ID（前缀匹配）<br/>IP - string - 是否必填：否 - IP地址，支持内网/外网IP（前缀匹配）<br/>Tags - string - 是否必填：否 - 腾讯云标签，格式 tagKey$tagValue（仅单账号场景生效）<br/>CSIPTag - string - 是否必填：否 - 安全中心标签名称（前缀匹配，按语言环境匹配中/英文字段）<br/>AssetTagIds - string - 是否必填：否 - 安全中心资产标签ID（精确匹配，多个标签ID之间为或关系；标签ID可通过资产中心标签树接口 DescribeAssetTagTree 获取）<br/>【容器维度过滤】（前缀模糊，命中后仅返回容器告警）<br/>ClusterName - string - 是否必填：否 - 集群名称（前缀匹配）<br/>ContainerName - string - 是否必填：否 - 容器名称（前缀匹配）<br/>【告警字段过滤】（精确匹配，支持多值）<br/>Status - int - 是否必填：否 - 处理状态<br/>Level - int - 是否必填：否 - 威胁等级<br/>AlertCategory - string - 是否必填：否 - 告警大类<br/>AlertSubType - string - 是否必填：否 - 告警子类型<br/>AttackStage - string - 是否必填：否 - 攻击阶段<br/>DetectMode - string - 是否必填：否 - 检测模式<br/>AlertSource - string - 是否必填：否 - 告警来源（HOST/CONTAINER）<br/>AlertId - string - 是否必填：否 - 告警ID<br/>InstanceId - string - 是否必填：否 - 实例ID（精确匹配）<br/>ContainerId - string - 是否必填：否 - 容器ID（精确匹配）<br/>ClusterId - string - 是否必填：否 - 集群ID（精确匹配）<br/>【时间范围】<br/>StartTime - string - 是否必填：否 - 开始时间，格式 2006-01-02 15:04:05（默认近180天）<br/>EndTime - string - 是否必填：否 - 结束时间，格式 2006-01-02 15:04:05（默认当前时间）</p>
                     * @return Filters <p>过滤条件，支持的 Name 如下：<br/>【资源属性过滤】（前缀模糊，后端自动反查资产后按实例过滤）<br/>InstanceName - string - 是否必填：否 - 资产名称（前缀匹配）<br/>InstanceID - string - 是否必填：否 - 实例ID（前缀匹配）<br/>IP - string - 是否必填：否 - IP地址，支持内网/外网IP（前缀匹配）<br/>Tags - string - 是否必填：否 - 腾讯云标签，格式 tagKey$tagValue（仅单账号场景生效）<br/>CSIPTag - string - 是否必填：否 - 安全中心标签名称（前缀匹配，按语言环境匹配中/英文字段）<br/>AssetTagIds - string - 是否必填：否 - 安全中心资产标签ID（精确匹配，多个标签ID之间为或关系；标签ID可通过资产中心标签树接口 DescribeAssetTagTree 获取）<br/>【容器维度过滤】（前缀模糊，命中后仅返回容器告警）<br/>ClusterName - string - 是否必填：否 - 集群名称（前缀匹配）<br/>ContainerName - string - 是否必填：否 - 容器名称（前缀匹配）<br/>【告警字段过滤】（精确匹配，支持多值）<br/>Status - int - 是否必填：否 - 处理状态<br/>Level - int - 是否必填：否 - 威胁等级<br/>AlertCategory - string - 是否必填：否 - 告警大类<br/>AlertSubType - string - 是否必填：否 - 告警子类型<br/>AttackStage - string - 是否必填：否 - 攻击阶段<br/>DetectMode - string - 是否必填：否 - 检测模式<br/>AlertSource - string - 是否必填：否 - 告警来源（HOST/CONTAINER）<br/>AlertId - string - 是否必填：否 - 告警ID<br/>InstanceId - string - 是否必填：否 - 实例ID（精确匹配）<br/>ContainerId - string - 是否必填：否 - 容器ID（精确匹配）<br/>ClusterId - string - 是否必填：否 - 集群ID（精确匹配）<br/>【时间范围】<br/>StartTime - string - 是否必填：否 - 开始时间，格式 2006-01-02 15:04:05（默认近180天）<br/>EndTime - string - 是否必填：否 - 结束时间，格式 2006-01-02 15:04:05（默认当前时间）</p>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，支持的 Name 如下：<br/>【资源属性过滤】（前缀模糊，后端自动反查资产后按实例过滤）<br/>InstanceName - string - 是否必填：否 - 资产名称（前缀匹配）<br/>InstanceID - string - 是否必填：否 - 实例ID（前缀匹配）<br/>IP - string - 是否必填：否 - IP地址，支持内网/外网IP（前缀匹配）<br/>Tags - string - 是否必填：否 - 腾讯云标签，格式 tagKey$tagValue（仅单账号场景生效）<br/>CSIPTag - string - 是否必填：否 - 安全中心标签名称（前缀匹配，按语言环境匹配中/英文字段）<br/>AssetTagIds - string - 是否必填：否 - 安全中心资产标签ID（精确匹配，多个标签ID之间为或关系；标签ID可通过资产中心标签树接口 DescribeAssetTagTree 获取）<br/>【容器维度过滤】（前缀模糊，命中后仅返回容器告警）<br/>ClusterName - string - 是否必填：否 - 集群名称（前缀匹配）<br/>ContainerName - string - 是否必填：否 - 容器名称（前缀匹配）<br/>【告警字段过滤】（精确匹配，支持多值）<br/>Status - int - 是否必填：否 - 处理状态<br/>Level - int - 是否必填：否 - 威胁等级<br/>AlertCategory - string - 是否必填：否 - 告警大类<br/>AlertSubType - string - 是否必填：否 - 告警子类型<br/>AttackStage - string - 是否必填：否 - 攻击阶段<br/>DetectMode - string - 是否必填：否 - 检测模式<br/>AlertSource - string - 是否必填：否 - 告警来源（HOST/CONTAINER）<br/>AlertId - string - 是否必填：否 - 告警ID<br/>InstanceId - string - 是否必填：否 - 实例ID（精确匹配）<br/>ContainerId - string - 是否必填：否 - 容器ID（精确匹配）<br/>ClusterId - string - 是否必填：否 - 集群ID（精确匹配）<br/>【时间范围】<br/>StartTime - string - 是否必填：否 - 开始时间，格式 2006-01-02 15:04:05（默认近180天）<br/>EndTime - string - 是否必填：否 - 结束时间，格式 2006-01-02 15:04:05（默认当前时间）</p>
                     * @param _filters <p>过滤条件，支持的 Name 如下：<br/>【资源属性过滤】（前缀模糊，后端自动反查资产后按实例过滤）<br/>InstanceName - string - 是否必填：否 - 资产名称（前缀匹配）<br/>InstanceID - string - 是否必填：否 - 实例ID（前缀匹配）<br/>IP - string - 是否必填：否 - IP地址，支持内网/外网IP（前缀匹配）<br/>Tags - string - 是否必填：否 - 腾讯云标签，格式 tagKey$tagValue（仅单账号场景生效）<br/>CSIPTag - string - 是否必填：否 - 安全中心标签名称（前缀匹配，按语言环境匹配中/英文字段）<br/>AssetTagIds - string - 是否必填：否 - 安全中心资产标签ID（精确匹配，多个标签ID之间为或关系；标签ID可通过资产中心标签树接口 DescribeAssetTagTree 获取）<br/>【容器维度过滤】（前缀模糊，命中后仅返回容器告警）<br/>ClusterName - string - 是否必填：否 - 集群名称（前缀匹配）<br/>ContainerName - string - 是否必填：否 - 容器名称（前缀匹配）<br/>【告警字段过滤】（精确匹配，支持多值）<br/>Status - int - 是否必填：否 - 处理状态<br/>Level - int - 是否必填：否 - 威胁等级<br/>AlertCategory - string - 是否必填：否 - 告警大类<br/>AlertSubType - string - 是否必填：否 - 告警子类型<br/>AttackStage - string - 是否必填：否 - 攻击阶段<br/>DetectMode - string - 是否必填：否 - 检测模式<br/>AlertSource - string - 是否必填：否 - 告警来源（HOST/CONTAINER）<br/>AlertId - string - 是否必填：否 - 告警ID<br/>InstanceId - string - 是否必填：否 - 实例ID（精确匹配）<br/>ContainerId - string - 是否必填：否 - 容器ID（精确匹配）<br/>ClusterId - string - 是否必填：否 - 集群ID（精确匹配）<br/>【时间范围】<br/>StartTime - string - 是否必填：否 - 开始时间，格式 2006-01-02 15:04:05（默认近180天）<br/>EndTime - string - 是否必填：否 - 结束时间，格式 2006-01-02 15:04:05（默认当前时间）</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>限制条数,默认10,最大100</p>
                     * @return Limit <p>限制条数,默认10,最大100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>限制条数,默认10,最大100</p>
                     * @param _limit <p>限制条数,默认10,最大100</p>
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
                     * 获取<p>偏移量,默认0</p>
                     * @return Offset <p>偏移量,默认0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量,默认0</p>
                     * @param _offset <p>偏移量,默认0</p>
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
                     * 获取<p>排序方式: [ASC:升序|DESC:降序]</p>
                     * @return Order <p>排序方式: [ASC:升序|DESC:降序]</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方式: [ASC:升序|DESC:降序]</p>
                     * @param _order <p>排序方式: [ASC:升序|DESC:降序]</p>
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
                     * 获取<p>可选排序列: [LatestDetectTime]</p>
                     * @return By <p>可选排序列: [LatestDetectTime]</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>可选排序列: [LatestDetectTime]</p>
                     * @param _by <p>可选排序列: [LatestDetectTime]</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>过滤条件，支持的 Name 如下：<br/>【资源属性过滤】（前缀模糊，后端自动反查资产后按实例过滤）<br/>InstanceName - string - 是否必填：否 - 资产名称（前缀匹配）<br/>InstanceID - string - 是否必填：否 - 实例ID（前缀匹配）<br/>IP - string - 是否必填：否 - IP地址，支持内网/外网IP（前缀匹配）<br/>Tags - string - 是否必填：否 - 腾讯云标签，格式 tagKey$tagValue（仅单账号场景生效）<br/>CSIPTag - string - 是否必填：否 - 安全中心标签名称（前缀匹配，按语言环境匹配中/英文字段）<br/>AssetTagIds - string - 是否必填：否 - 安全中心资产标签ID（精确匹配，多个标签ID之间为或关系；标签ID可通过资产中心标签树接口 DescribeAssetTagTree 获取）<br/>【容器维度过滤】（前缀模糊，命中后仅返回容器告警）<br/>ClusterName - string - 是否必填：否 - 集群名称（前缀匹配）<br/>ContainerName - string - 是否必填：否 - 容器名称（前缀匹配）<br/>【告警字段过滤】（精确匹配，支持多值）<br/>Status - int - 是否必填：否 - 处理状态<br/>Level - int - 是否必填：否 - 威胁等级<br/>AlertCategory - string - 是否必填：否 - 告警大类<br/>AlertSubType - string - 是否必填：否 - 告警子类型<br/>AttackStage - string - 是否必填：否 - 攻击阶段<br/>DetectMode - string - 是否必填：否 - 检测模式<br/>AlertSource - string - 是否必填：否 - 告警来源（HOST/CONTAINER）<br/>AlertId - string - 是否必填：否 - 告警ID<br/>InstanceId - string - 是否必填：否 - 实例ID（精确匹配）<br/>ContainerId - string - 是否必填：否 - 容器ID（精确匹配）<br/>ClusterId - string - 是否必填：否 - 集群ID（精确匹配）<br/>【时间范围】<br/>StartTime - string - 是否必填：否 - 开始时间，格式 2006-01-02 15:04:05（默认近180天）<br/>EndTime - string - 是否必填：否 - 结束时间，格式 2006-01-02 15:04:05（默认当前时间）</p>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>限制条数,默认10,最大100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量,默认0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序方式: [ASC:升序|DESC:降序]</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>可选排序列: [LatestDetectTime]</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTLISTREQUEST_H_
