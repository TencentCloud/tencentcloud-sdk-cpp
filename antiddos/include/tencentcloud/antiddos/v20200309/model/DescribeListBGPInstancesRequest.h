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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPINSTANCESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPINSTANCESREQUEST_H_

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
                * DescribeListBGPInstances请求参数结构体
                */
                class DescribeListBGPInstancesRequest : public AbstractModel
                {
                public:
                    DescribeListBGPInstancesRequest();
                    ~DescribeListBGPInstancesRequest() = default;
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
                     * 获取资产实例ID搜索，例如，bgp-00000001
                     * @return FilterInstanceId 资产实例ID搜索，例如，bgp-00000001
                     * 
                     */
                    std::string GetFilterInstanceId() const;

                    /**
                     * 设置资产实例ID搜索，例如，bgp-00000001
                     * @param _filterInstanceId 资产实例ID搜索，例如，bgp-00000001
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
                     * 获取按照线路搜索, 1: BGP; 2: 三网
                     * @return FilterLine 按照线路搜索, 1: BGP; 2: 三网
                     * 
                     */
                    uint64_t GetFilterLine() const;

                    /**
                     * 设置按照线路搜索, 1: BGP; 2: 三网
                     * @param _filterLine 按照线路搜索, 1: BGP; 2: 三网
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
                     * 获取状态搜索，idle：运行中；attacking：攻击中；blocking：封堵中
                     * @return FilterStatus 状态搜索，idle：运行中；attacking：攻击中；blocking：封堵中
                     * 
                     */
                    std::string GetFilterStatus() const;

                    /**
                     * 设置状态搜索，idle：运行中；attacking：攻击中；blocking：封堵中
                     * @param _filterStatus 状态搜索，idle：运行中；attacking：攻击中；blocking：封堵中
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
                     * 获取高防包绑定状态搜索，bounding：绑定中； failed：绑定失败
                     * @return FilterBoundStatus 高防包绑定状态搜索，bounding：绑定中； failed：绑定失败
                     * 
                     */
                    std::string GetFilterBoundStatus() const;

                    /**
                     * 设置高防包绑定状态搜索，bounding：绑定中； failed：绑定失败
                     * @param _filterBoundStatus 高防包绑定状态搜索，bounding：绑定中； failed：绑定失败
                     * 
                     */
                    void SetFilterBoundStatus(const std::string& _filterBoundStatus);

                    /**
                     * 判断参数 FilterBoundStatus 是否已赋值
                     * @return FilterBoundStatus 是否已赋值
                     * 
                     */
                    bool FilterBoundStatusHasBeenSet() const;

                    /**
                     * 获取实例id数组
                     * @return FilterInstanceIdList 实例id数组
                     * 
                     */
                    std::vector<std::string> GetFilterInstanceIdList() const;

                    /**
                     * 设置实例id数组
                     * @param _filterInstanceIdList 实例id数组
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
                     * 获取企业版搜索,  1：包含重保护航套餐下的企业版列表, 2: 不包含重保护航套餐的企业版列表
                     * @return FilterEnterpriseFlag 企业版搜索,  1：包含重保护航套餐下的企业版列表, 2: 不包含重保护航套餐的企业版列表
                     * 
                     */
                    uint64_t GetFilterEnterpriseFlag() const;

                    /**
                     * 设置企业版搜索,  1：包含重保护航套餐下的企业版列表, 2: 不包含重保护航套餐的企业版列表
                     * @param _filterEnterpriseFlag 企业版搜索,  1：包含重保护航套餐下的企业版列表, 2: 不包含重保护航套餐的企业版列表
                     * 
                     */
                    void SetFilterEnterpriseFlag(const uint64_t& _filterEnterpriseFlag);

                    /**
                     * 判断参数 FilterEnterpriseFlag 是否已赋值
                     * @return FilterEnterpriseFlag 是否已赋值
                     * 
                     */
                    bool FilterEnterpriseFlagHasBeenSet() const;

                    /**
                     * 获取轻量版搜索
                     * @return FilterLightFlag 轻量版搜索
                     * 
                     */
                    uint64_t GetFilterLightFlag() const;

                    /**
                     * 设置轻量版搜索
                     * @param _filterLightFlag 轻量版搜索
                     * 
                     */
                    void SetFilterLightFlag(const uint64_t& _filterLightFlag);

                    /**
                     * 判断参数 FilterLightFlag 是否已赋值
                     * @return FilterLightFlag 是否已赋值
                     * 
                     */
                    bool FilterLightFlagHasBeenSet() const;

                    /**
                     * 获取定制版搜索
                     * @return FilterChannelFlag 定制版搜索
                     * 
                     */
                    uint64_t GetFilterChannelFlag() const;

                    /**
                     * 设置定制版搜索
                     * @param _filterChannelFlag 定制版搜索
                     * 
                     */
                    void SetFilterChannelFlag(const uint64_t& _filterChannelFlag);

                    /**
                     * 判断参数 FilterChannelFlag 是否已赋值
                     * @return FilterChannelFlag 是否已赋值
                     * 
                     */
                    bool FilterChannelFlagHasBeenSet() const;

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
                     * 获取试用资源搜索，1: 应急防护资源；2：PLG试用资源
                     * @return FilterTrialFlag 试用资源搜索，1: 应急防护资源；2：PLG试用资源
                     * 
                     */
                    uint64_t GetFilterTrialFlag() const;

                    /**
                     * 设置试用资源搜索，1: 应急防护资源；2：PLG试用资源
                     * @param _filterTrialFlag 试用资源搜索，1: 应急防护资源；2：PLG试用资源
                     * 
                     */
                    void SetFilterTrialFlag(const uint64_t& _filterTrialFlag);

                    /**
                     * 判断参数 FilterTrialFlag 是否已赋值
                     * @return FilterTrialFlag 是否已赋值
                     * 
                     */
                    bool FilterTrialFlagHasBeenSet() const;

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

                    /**
                     * 获取默认false；接口传true，返回数据中不包含高级信息，高级信息包含：InstanceList[0].Usage。
                     * @return ExcludeAdvancedInfo 默认false；接口传true，返回数据中不包含高级信息，高级信息包含：InstanceList[0].Usage。
                     * 
                     */
                    bool GetExcludeAdvancedInfo() const;

                    /**
                     * 设置默认false；接口传true，返回数据中不包含高级信息，高级信息包含：InstanceList[0].Usage。
                     * @param _excludeAdvancedInfo 默认false；接口传true，返回数据中不包含高级信息，高级信息包含：InstanceList[0].Usage。
                     * 
                     */
                    void SetExcludeAdvancedInfo(const bool& _excludeAdvancedInfo);

                    /**
                     * 判断参数 ExcludeAdvancedInfo 是否已赋值
                     * @return ExcludeAdvancedInfo 是否已赋值
                     * 
                     */
                    bool ExcludeAdvancedInfoHasBeenSet() const;

                    /**
                     * 获取资产IP数组
                     * @return FilterAssetIpList 资产IP数组
                     * 
                     */
                    std::vector<std::string> GetFilterAssetIpList() const;

                    /**
                     * 设置资产IP数组
                     * @param _filterAssetIpList 资产IP数组
                     * 
                     */
                    void SetFilterAssetIpList(const std::vector<std::string>& _filterAssetIpList);

                    /**
                     * 判断参数 FilterAssetIpList 是否已赋值
                     * @return FilterAssetIpList 是否已赋值
                     * 
                     */
                    bool FilterAssetIpListHasBeenSet() const;

                    /**
                     * 获取是否包含基础防护增强版 0: 不包含 1: 包含
                     * @return FilterBasicPlusFlag 是否包含基础防护增强版 0: 不包含 1: 包含
                     * 
                     */
                    uint64_t GetFilterBasicPlusFlag() const;

                    /**
                     * 设置是否包含基础防护增强版 0: 不包含 1: 包含
                     * @param _filterBasicPlusFlag 是否包含基础防护增强版 0: 不包含 1: 包含
                     * 
                     */
                    void SetFilterBasicPlusFlag(const uint64_t& _filterBasicPlusFlag);

                    /**
                     * 判断参数 FilterBasicPlusFlag 是否已赋值
                     * @return FilterBasicPlusFlag 是否已赋值
                     * 
                     */
                    bool FilterBasicPlusFlagHasBeenSet() const;

                    /**
                     * 获取是否标准版2.0 0: 包含标准版2.0 0 1: 只查询标准版2.0 0 2: 不查标准版2.0
                     * @return FilterPlanCntFlag 是否标准版2.0 0: 包含标准版2.0 0 1: 只查询标准版2.0 0 2: 不查标准版2.0
                     * 
                     */
                    uint64_t GetFilterPlanCntFlag() const;

                    /**
                     * 设置是否标准版2.0 0: 包含标准版2.0 0 1: 只查询标准版2.0 0 2: 不查标准版2.0
                     * @param _filterPlanCntFlag 是否标准版2.0 0: 包含标准版2.0 0 1: 只查询标准版2.0 0 2: 不查标准版2.0
                     * 
                     */
                    void SetFilterPlanCntFlag(const uint64_t& _filterPlanCntFlag);

                    /**
                     * 判断参数 FilterPlanCntFlag 是否已赋值
                     * @return FilterPlanCntFlag 是否已赋值
                     * 
                     */
                    bool FilterPlanCntFlagHasBeenSet() const;

                    /**
                     * 获取是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品 3: 包含全部
                     * @return FilterTransRegionFlag 是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品 3: 包含全部
                     * 
                     */
                    uint64_t GetFilterTransRegionFlag() const;

                    /**
                     * 设置是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品 3: 包含全部
                     * @param _filterTransRegionFlag 是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品 3: 包含全部
                     * 
                     */
                    void SetFilterTransRegionFlag(const uint64_t& _filterTransRegionFlag);

                    /**
                     * 判断参数 FilterTransRegionFlag 是否已赋值
                     * @return FilterTransRegionFlag 是否已赋值
                     * 
                     */
                    bool FilterTransRegionFlagHasBeenSet() const;

                    /**
                     * 获取ZoneID列表
                     * @return FilterZoneIdList ZoneID列表
                     * 
                     */
                    std::vector<int64_t> GetFilterZoneIdList() const;

                    /**
                     * 设置ZoneID列表
                     * @param _filterZoneIdList ZoneID列表
                     * 
                     */
                    void SetFilterZoneIdList(const std::vector<int64_t>& _filterZoneIdList);

                    /**
                     * 判断参数 FilterZoneIdList 是否已赋值
                     * @return FilterZoneIdList 是否已赋值
                     * 
                     */
                    bool FilterZoneIdListHasBeenSet() const;

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
                     * 资产实例ID搜索，例如，bgp-00000001
                     */
                    std::string m_filterInstanceId;
                    bool m_filterInstanceIdHasBeenSet;

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
                     * 按照线路搜索, 1: BGP; 2: 三网
                     */
                    uint64_t m_filterLine;
                    bool m_filterLineHasBeenSet;

                    /**
                     * 状态搜索，idle：运行中；attacking：攻击中；blocking：封堵中
                     */
                    std::string m_filterStatus;
                    bool m_filterStatusHasBeenSet;

                    /**
                     * 高防包绑定状态搜索，bounding：绑定中； failed：绑定失败
                     */
                    std::string m_filterBoundStatus;
                    bool m_filterBoundStatusHasBeenSet;

                    /**
                     * 实例id数组
                     */
                    std::vector<std::string> m_filterInstanceIdList;
                    bool m_filterInstanceIdListHasBeenSet;

                    /**
                     * 企业版搜索,  1：包含重保护航套餐下的企业版列表, 2: 不包含重保护航套餐的企业版列表
                     */
                    uint64_t m_filterEnterpriseFlag;
                    bool m_filterEnterpriseFlagHasBeenSet;

                    /**
                     * 轻量版搜索
                     */
                    uint64_t m_filterLightFlag;
                    bool m_filterLightFlagHasBeenSet;

                    /**
                     * 定制版搜索
                     */
                    uint64_t m_filterChannelFlag;
                    bool m_filterChannelFlagHasBeenSet;

                    /**
                     * 标签搜索
                     */
                    TagFilter m_filterTag;
                    bool m_filterTagHasBeenSet;

                    /**
                     * 试用资源搜索，1: 应急防护资源；2：PLG试用资源
                     */
                    uint64_t m_filterTrialFlag;
                    bool m_filterTrialFlagHasBeenSet;

                    /**
                     * 重保护航搜索
                     */
                    uint64_t m_filterConvoy;
                    bool m_filterConvoyHasBeenSet;

                    /**
                     * 默认false；接口传true，返回数据中不包含高级信息，高级信息包含：InstanceList[0].Usage。
                     */
                    bool m_excludeAdvancedInfo;
                    bool m_excludeAdvancedInfoHasBeenSet;

                    /**
                     * 资产IP数组
                     */
                    std::vector<std::string> m_filterAssetIpList;
                    bool m_filterAssetIpListHasBeenSet;

                    /**
                     * 是否包含基础防护增强版 0: 不包含 1: 包含
                     */
                    uint64_t m_filterBasicPlusFlag;
                    bool m_filterBasicPlusFlagHasBeenSet;

                    /**
                     * 是否标准版2.0 0: 包含标准版2.0 0 1: 只查询标准版2.0 0 2: 不查标准版2.0
                     */
                    uint64_t m_filterPlanCntFlag;
                    bool m_filterPlanCntFlagHasBeenSet;

                    /**
                     * 是否跨区域产品 0: 不包含跨区域产品 1: 中国大陆跨区域产品 2: 非中国大陆跨区域产品 3: 包含全部
                     */
                    uint64_t m_filterTransRegionFlag;
                    bool m_filterTransRegionFlagHasBeenSet;

                    /**
                     * ZoneID列表
                     */
                    std::vector<int64_t> m_filterZoneIdList;
                    bool m_filterZoneIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPINSTANCESREQUEST_H_
