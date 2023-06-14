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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPIPINSTANCESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPIPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/TagFilter.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeListBGPIPInstances请求参数结构体
                */
                class DescribeListBGPIPInstancesRequest : public AbstractModel
                {
                public:
                    DescribeListBGPIPInstancesRequest();
                    ~DescribeListBGPIPInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页起始偏移，取值为(页码-1)*一页条数
                     * @return Offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页起始偏移，取值为(页码-1)*一页条数
                     * @param _offset 页起始偏移，取值为(页码-1)*一页条数
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
                     * 获取一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     * @return Limit 一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     * @param _limit 一页条数，当Limit=0时，默认一页条数为20;最大取值为100
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
                     * 获取IP搜索
                     * @return FilterIp IP搜索
                     * 
                     */
                    std::string GetFilterIp() const;

                    /**
                     * 设置IP搜索
                     * @param _filterIp IP搜索
                     * 
                     */
                    void SetFilterIp(const std::string& _filterIp);

                    /**
                     * 判断参数 FilterIp 是否已赋值
                     * @return FilterIp 是否已赋值
                     * 
                     */
                    bool FilterIpHasBeenSet() const;

                    /**
                     * 获取资产实例ID搜索，例如，bgpip-00000001
                     * @return FilterInstanceId 资产实例ID搜索，例如，bgpip-00000001
                     * 
                     */
                    std::string GetFilterInstanceId() const;

                    /**
                     * 设置资产实例ID搜索，例如，bgpip-00000001
                     * @param _filterInstanceId 资产实例ID搜索，例如，bgpip-00000001
                     * 
                     */
                    void SetFilterInstanceId(const std::string& _filterInstanceId);

                    /**
                     * 判断参数 FilterInstanceId 是否已赋值
                     * @return FilterInstanceId 是否已赋值
                     * 
                     */
                    bool FilterInstanceIdHasBeenSet() const;

                    /**
                     * 获取高防IP线路搜索，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     * @return FilterLine 高防IP线路搜索，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     * 
                     */
                    uint64_t GetFilterLine() const;

                    /**
                     * 设置高防IP线路搜索，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     * @param _filterLine 高防IP线路搜索，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     * 
                     */
                    void SetFilterLine(const uint64_t& _filterLine);

                    /**
                     * 判断参数 FilterLine 是否已赋值
                     * @return FilterLine 是否已赋值
                     * 
                     */
                    bool FilterLineHasBeenSet() const;

                    /**
                     * 获取地域搜索，例如，ap-guangzhou
                     * @return FilterRegion 地域搜索，例如，ap-guangzhou
                     * 
                     */
                    std::string GetFilterRegion() const;

                    /**
                     * 设置地域搜索，例如，ap-guangzhou
                     * @param _filterRegion 地域搜索，例如，ap-guangzhou
                     * 
                     */
                    void SetFilterRegion(const std::string& _filterRegion);

                    /**
                     * 判断参数 FilterRegion 是否已赋值
                     * @return FilterRegion 是否已赋值
                     * 
                     */
                    bool FilterRegionHasBeenSet() const;

                    /**
                     * 获取名称搜索
                     * @return FilterName 名称搜索
                     * 
                     */
                    std::string GetFilterName() const;

                    /**
                     * 设置名称搜索
                     * @param _filterName 名称搜索
                     * 
                     */
                    void SetFilterName(const std::string& _filterName);

                    /**
                     * 判断参数 FilterName 是否已赋值
                     * @return FilterName 是否已赋值
                     * 
                     */
                    bool FilterNameHasBeenSet() const;

                    /**
                     * 获取是否只获取高防弹性公网IP实例。填写时，只能填写1或者0。当填写1时，表示返回高防弹性公网IP实例。当填写0时，表示返回非高防弹性公网IP实例。
                     * @return FilterEipType 是否只获取高防弹性公网IP实例。填写时，只能填写1或者0。当填写1时，表示返回高防弹性公网IP实例。当填写0时，表示返回非高防弹性公网IP实例。
                     * 
                     */
                    int64_t GetFilterEipType() const;

                    /**
                     * 设置是否只获取高防弹性公网IP实例。填写时，只能填写1或者0。当填写1时，表示返回高防弹性公网IP实例。当填写0时，表示返回非高防弹性公网IP实例。
                     * @param _filterEipType 是否只获取高防弹性公网IP实例。填写时，只能填写1或者0。当填写1时，表示返回高防弹性公网IP实例。当填写0时，表示返回非高防弹性公网IP实例。
                     * 
                     */
                    void SetFilterEipType(const int64_t& _filterEipType);

                    /**
                     * 判断参数 FilterEipType 是否已赋值
                     * @return FilterEipType 是否已赋值
                     * 
                     */
                    bool FilterEipTypeHasBeenSet() const;

                    /**
                     * 获取高防弹性公网IP实例的绑定状态搜索条件，取值范围 [BINDING、 BIND、UNBINDING、UNBIND]。该搜索条件只在FilterEipType=1时才有效。
                     * @return FilterEipEipAddressStatus 高防弹性公网IP实例的绑定状态搜索条件，取值范围 [BINDING、 BIND、UNBINDING、UNBIND]。该搜索条件只在FilterEipType=1时才有效。
                     * 
                     */
                    std::vector<std::string> GetFilterEipEipAddressStatus() const;

                    /**
                     * 设置高防弹性公网IP实例的绑定状态搜索条件，取值范围 [BINDING、 BIND、UNBINDING、UNBIND]。该搜索条件只在FilterEipType=1时才有效。
                     * @param _filterEipEipAddressStatus 高防弹性公网IP实例的绑定状态搜索条件，取值范围 [BINDING、 BIND、UNBINDING、UNBIND]。该搜索条件只在FilterEipType=1时才有效。
                     * 
                     */
                    void SetFilterEipEipAddressStatus(const std::vector<std::string>& _filterEipEipAddressStatus);

                    /**
                     * 判断参数 FilterEipEipAddressStatus 是否已赋值
                     * @return FilterEipEipAddressStatus 是否已赋值
                     * 
                     */
                    bool FilterEipEipAddressStatusHasBeenSet() const;

                    /**
                     * 获取是否只获取安全加速实例。填写时，只能填写1或者0。当填写1时，表示返回安全加速实例。当填写0时，表示返回非安全加速实例。
                     * @return FilterDamDDoSStatus 是否只获取安全加速实例。填写时，只能填写1或者0。当填写1时，表示返回安全加速实例。当填写0时，表示返回非安全加速实例。
                     * 
                     */
                    int64_t GetFilterDamDDoSStatus() const;

                    /**
                     * 设置是否只获取安全加速实例。填写时，只能填写1或者0。当填写1时，表示返回安全加速实例。当填写0时，表示返回非安全加速实例。
                     * @param _filterDamDDoSStatus 是否只获取安全加速实例。填写时，只能填写1或者0。当填写1时，表示返回安全加速实例。当填写0时，表示返回非安全加速实例。
                     * 
                     */
                    void SetFilterDamDDoSStatus(const int64_t& _filterDamDDoSStatus);

                    /**
                     * 判断参数 FilterDamDDoSStatus 是否已赋值
                     * @return FilterDamDDoSStatus 是否已赋值
                     * 
                     */
                    bool FilterDamDDoSStatusHasBeenSet() const;

                    /**
                     * 获取获取特定状态的资源，运行中填idle，攻击中填attacking，封堵中填blocking，试用资源填trial
                     * @return FilterStatus 获取特定状态的资源，运行中填idle，攻击中填attacking，封堵中填blocking，试用资源填trial
                     * 
                     */
                    std::string GetFilterStatus() const;

                    /**
                     * 设置获取特定状态的资源，运行中填idle，攻击中填attacking，封堵中填blocking，试用资源填trial
                     * @param _filterStatus 获取特定状态的资源，运行中填idle，攻击中填attacking，封堵中填blocking，试用资源填trial
                     * 
                     */
                    void SetFilterStatus(const std::string& _filterStatus);

                    /**
                     * 判断参数 FilterStatus 是否已赋值
                     * @return FilterStatus 是否已赋值
                     * 
                     */
                    bool FilterStatusHasBeenSet() const;

                    /**
                     * 获取获取特定的实例Cname
                     * @return FilterCname 获取特定的实例Cname
                     * 
                     */
                    std::string GetFilterCname() const;

                    /**
                     * 设置获取特定的实例Cname
                     * @param _filterCname 获取特定的实例Cname
                     * 
                     */
                    void SetFilterCname(const std::string& _filterCname);

                    /**
                     * 判断参数 FilterCname 是否已赋值
                     * @return FilterCname 是否已赋值
                     * 
                     */
                    bool FilterCnameHasBeenSet() const;

                    /**
                     * 获取批量查询实例ID对应的高防IP实例资源
                     * @return FilterInstanceIdList 批量查询实例ID对应的高防IP实例资源
                     * 
                     */
                    std::vector<std::string> GetFilterInstanceIdList() const;

                    /**
                     * 设置批量查询实例ID对应的高防IP实例资源
                     * @param _filterInstanceIdList 批量查询实例ID对应的高防IP实例资源
                     * 
                     */
                    void SetFilterInstanceIdList(const std::vector<std::string>& _filterInstanceIdList);

                    /**
                     * 判断参数 FilterInstanceIdList 是否已赋值
                     * @return FilterInstanceIdList 是否已赋值
                     * 
                     */
                    bool FilterInstanceIdListHasBeenSet() const;

                    /**
                     * 获取标签搜索
                     * @return FilterTag 标签搜索
                     * 
                     */
                    TagFilter GetFilterTag() const;

                    /**
                     * 设置标签搜索
                     * @param _filterTag 标签搜索
                     * 
                     */
                    void SetFilterTag(const TagFilter& _filterTag);

                    /**
                     * 判断参数 FilterTag 是否已赋值
                     * @return FilterTag 是否已赋值
                     * 
                     */
                    bool FilterTagHasBeenSet() const;

                    /**
                     * 获取按照套餐类型进行过滤
                     * @return FilterPackType 按照套餐类型进行过滤
                     * 
                     */
                    std::vector<std::string> GetFilterPackType() const;

                    /**
                     * 设置按照套餐类型进行过滤
                     * @param _filterPackType 按照套餐类型进行过滤
                     * 
                     */
                    void SetFilterPackType(const std::vector<std::string>& _filterPackType);

                    /**
                     * 判断参数 FilterPackType 是否已赋值
                     * @return FilterPackType 是否已赋值
                     * 
                     */
                    bool FilterPackTypeHasBeenSet() const;

                    /**
                     * 获取重保护航搜索
                     * @return FilterConvoy 重保护航搜索
                     * 
                     */
                    uint64_t GetFilterConvoy() const;

                    /**
                     * 设置重保护航搜索
                     * @param _filterConvoy 重保护航搜索
                     * 
                     */
                    void SetFilterConvoy(const uint64_t& _filterConvoy);

                    /**
                     * 判断参数 FilterConvoy 是否已赋值
                     * @return FilterConvoy 是否已赋值
                     * 
                     */
                    bool FilterConvoyHasBeenSet() const;

                private:

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * IP搜索
                     */
                    std::string m_filterIp;
                    bool m_filterIpHasBeenSet;

                    /**
                     * 资产实例ID搜索，例如，bgpip-00000001
                     */
                    std::string m_filterInstanceId;
                    bool m_filterInstanceIdHasBeenSet;

                    /**
                     * 高防IP线路搜索，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     */
                    uint64_t m_filterLine;
                    bool m_filterLineHasBeenSet;

                    /**
                     * 地域搜索，例如，ap-guangzhou
                     */
                    std::string m_filterRegion;
                    bool m_filterRegionHasBeenSet;

                    /**
                     * 名称搜索
                     */
                    std::string m_filterName;
                    bool m_filterNameHasBeenSet;

                    /**
                     * 是否只获取高防弹性公网IP实例。填写时，只能填写1或者0。当填写1时，表示返回高防弹性公网IP实例。当填写0时，表示返回非高防弹性公网IP实例。
                     */
                    int64_t m_filterEipType;
                    bool m_filterEipTypeHasBeenSet;

                    /**
                     * 高防弹性公网IP实例的绑定状态搜索条件，取值范围 [BINDING、 BIND、UNBINDING、UNBIND]。该搜索条件只在FilterEipType=1时才有效。
                     */
                    std::vector<std::string> m_filterEipEipAddressStatus;
                    bool m_filterEipEipAddressStatusHasBeenSet;

                    /**
                     * 是否只获取安全加速实例。填写时，只能填写1或者0。当填写1时，表示返回安全加速实例。当填写0时，表示返回非安全加速实例。
                     */
                    int64_t m_filterDamDDoSStatus;
                    bool m_filterDamDDoSStatusHasBeenSet;

                    /**
                     * 获取特定状态的资源，运行中填idle，攻击中填attacking，封堵中填blocking，试用资源填trial
                     */
                    std::string m_filterStatus;
                    bool m_filterStatusHasBeenSet;

                    /**
                     * 获取特定的实例Cname
                     */
                    std::string m_filterCname;
                    bool m_filterCnameHasBeenSet;

                    /**
                     * 批量查询实例ID对应的高防IP实例资源
                     */
                    std::vector<std::string> m_filterInstanceIdList;
                    bool m_filterInstanceIdListHasBeenSet;

                    /**
                     * 标签搜索
                     */
                    TagFilter m_filterTag;
                    bool m_filterTagHasBeenSet;

                    /**
                     * 按照套餐类型进行过滤
                     */
                    std::vector<std::string> m_filterPackType;
                    bool m_filterPackTypeHasBeenSet;

                    /**
                     * 重保护航搜索
                     */
                    uint64_t m_filterConvoy;
                    bool m_filterConvoyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPIPINSTANCESREQUEST_H_
