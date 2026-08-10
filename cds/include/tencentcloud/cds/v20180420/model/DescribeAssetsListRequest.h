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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEASSETSLISTREQUEST_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEASSETSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cds/v20180420/model/NameValueString.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * DescribeAssetsList请求参数结构体
                */
                class DescribeAssetsListRequest : public AbstractModel
                {
                public:
                    DescribeAssetsListRequest();
                    ~DescribeAssetsListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>限制数目</p>
                     * @return Limit <p>限制数目</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>限制数目</p>
                     * @param _limit <p>限制数目</p>
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
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
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
                     * 获取<p>实例Id/实例名称/资产名称</p>
                     * @return SearchValues <p>实例Id/实例名称/资产名称</p>
                     * 
                     */
                    std::vector<NameValueString> GetSearchValues() const;

                    /**
                     * 设置<p>实例Id/实例名称/资产名称</p>
                     * @param _searchValues <p>实例Id/实例名称/资产名称</p>
                     * 
                     */
                    void SetSearchValues(const std::vector<NameValueString>& _searchValues);

                    /**
                     * 判断参数 SearchValues 是否已赋值
                     * @return SearchValues 是否已赋值
                     * 
                     */
                    bool SearchValuesHasBeenSet() const;

                    /**
                     * 获取<p>数据资产类型</p>
                     * @return AssetsType <p>数据资产类型</p>
                     * 
                     */
                    std::string GetAssetsType() const;

                    /**
                     * 设置<p>数据资产类型</p>
                     * @param _assetsType <p>数据资产类型</p>
                     * 
                     */
                    void SetAssetsType(const std::string& _assetsType);

                    /**
                     * 判断参数 AssetsType 是否已赋值
                     * @return AssetsType 是否已赋值
                     * 
                     */
                    bool AssetsTypeHasBeenSet() const;

                    /**
                     * 获取<p>查询的资产类型（1:cdb、2:cvm、3:others）</p>
                     * @return AssetsAddType <p>查询的资产类型（1:cdb、2:cvm、3:others）</p>
                     * 
                     */
                    int64_t GetAssetsAddType() const;

                    /**
                     * 设置<p>查询的资产类型（1:cdb、2:cvm、3:others）</p>
                     * @param _assetsAddType <p>查询的资产类型（1:cdb、2:cvm、3:others）</p>
                     * 
                     */
                    void SetAssetsAddType(const int64_t& _assetsAddType);

                    /**
                     * 判断参数 AssetsAddType 是否已赋值
                     * @return AssetsAddType 是否已赋值
                     * 
                     */
                    bool AssetsAddTypeHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return RegionId <p>地域</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _regionId <p>地域</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>审计权限</p>
                     * @return Permission <p>审计权限</p>
                     * 
                     */
                    int64_t GetPermission() const;

                    /**
                     * 设置<p>审计权限</p>
                     * @param _permission <p>审计权限</p>
                     * 
                     */
                    void SetPermission(const int64_t& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return AliveStatus <p>状态</p>
                     * 
                     */
                    int64_t GetAliveStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _aliveStatus <p>状态</p>
                     * 
                     */
                    void SetAliveStatus(const int64_t& _aliveStatus);

                    /**
                     * 判断参数 AliveStatus 是否已赋值
                     * @return AliveStatus 是否已赋值
                     * 
                     */
                    bool AliveStatusHasBeenSet() const;

                    /**
                     * 获取<p>1.代理开启 0.代理关闭 -1.全查</p>
                     * @return CasbOn <p>1.代理开启 0.代理关闭 -1.全查</p>
                     * 
                     */
                    int64_t GetCasbOn() const;

                    /**
                     * 设置<p>1.代理开启 0.代理关闭 -1.全查</p>
                     * @param _casbOn <p>1.代理开启 0.代理关闭 -1.全查</p>
                     * 
                     */
                    void SetCasbOn(const int64_t& _casbOn);

                    /**
                     * 判断参数 CasbOn 是否已赋值
                     * @return CasbOn 是否已赋值
                     * 
                     */
                    bool CasbOnHasBeenSet() const;

                    /**
                     * 获取<p>1.Agent开启 0.Agent关闭 -1.全查</p>
                     * @return AgentOn <p>1.Agent开启 0.Agent关闭 -1.全查</p>
                     * 
                     */
                    int64_t GetAgentOn() const;

                    /**
                     * 设置<p>1.Agent开启 0.Agent关闭 -1.全查</p>
                     * @param _agentOn <p>1.Agent开启 0.Agent关闭 -1.全查</p>
                     * 
                     */
                    void SetAgentOn(const int64_t& _agentOn);

                    /**
                     * 判断参数 AgentOn 是否已赋值
                     * @return AgentOn 是否已赋值
                     * 
                     */
                    bool AgentOnHasBeenSet() const;

                    /**
                     * 获取<p>0.关闭，1.开启，2.关闭中，3.开启中 -1.全查</p>
                     * @return CdbOn <p>0.关闭，1.开启，2.关闭中，3.开启中 -1.全查</p>
                     * 
                     */
                    int64_t GetCdbOn() const;

                    /**
                     * 设置<p>0.关闭，1.开启，2.关闭中，3.开启中 -1.全查</p>
                     * @param _cdbOn <p>0.关闭，1.开启，2.关闭中，3.开启中 -1.全查</p>
                     * 
                     */
                    void SetCdbOn(const int64_t& _cdbOn);

                    /**
                     * 判断参数 CdbOn 是否已赋值
                     * @return CdbOn 是否已赋值
                     * 
                     */
                    bool CdbOnHasBeenSet() const;

                    /**
                     * 获取<p>扩展分类，如sensitive，指定查询支持敏感数据识别的资产</p>
                     * @return ExtendCategory <p>扩展分类，如sensitive，指定查询支持敏感数据识别的资产</p>
                     * 
                     */
                    std::string GetExtendCategory() const;

                    /**
                     * 设置<p>扩展分类，如sensitive，指定查询支持敏感数据识别的资产</p>
                     * @param _extendCategory <p>扩展分类，如sensitive，指定查询支持敏感数据识别的资产</p>
                     * 
                     */
                    void SetExtendCategory(const std::string& _extendCategory);

                    /**
                     * 判断参数 ExtendCategory 是否已赋值
                     * @return ExtendCategory 是否已赋值
                     * 
                     */
                    bool ExtendCategoryHasBeenSet() const;

                    /**
                     * 获取<p>资产组Id（Id=0 暂未分组；id&gt;0 组Id）</p>
                     * @return GroupIds <p>资产组Id（Id=0 暂未分组；id&gt;0 组Id）</p>
                     * 
                     */
                    std::vector<uint64_t> GetGroupIds() const;

                    /**
                     * 设置<p>资产组Id（Id=0 暂未分组；id&gt;0 组Id）</p>
                     * @param _groupIds <p>资产组Id（Id=0 暂未分组；id&gt;0 组Id）</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<uint64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>资产Id</p>
                     * @return Aids <p>资产Id</p>
                     * 
                     */
                    std::vector<uint64_t> GetAids() const;

                    /**
                     * 设置<p>资产Id</p>
                     * @param _aids <p>资产Id</p>
                     * 
                     */
                    void SetAids(const std::vector<uint64_t>& _aids);

                    /**
                     * 判断参数 Aids 是否已赋值
                     * @return Aids 是否已赋值
                     * 
                     */
                    bool AidsHasBeenSet() const;

                    /**
                     * 获取<p>查询绑定状态（1:查询规则绑定数量；2:查询模型绑定数量）</p>
                     * @return BindingState <p>查询绑定状态（1:查询规则绑定数量；2:查询模型绑定数量）</p>
                     * 
                     */
                    uint64_t GetBindingState() const;

                    /**
                     * 设置<p>查询绑定状态（1:查询规则绑定数量；2:查询模型绑定数量）</p>
                     * @param _bindingState <p>查询绑定状态（1:查询规则绑定数量；2:查询模型绑定数量）</p>
                     * 
                     */
                    void SetBindingState(const uint64_t& _bindingState);

                    /**
                     * 判断参数 BindingState 是否已赋值
                     * @return BindingState 是否已赋值
                     * 
                     */
                    bool BindingStateHasBeenSet() const;

                    /**
                     * 获取<p>网卡是否开启流量审计</p><p>取值范围：[-1, 1]</p>
                     * @return TrafficMirrorOn <p>网卡是否开启流量审计</p><p>取值范围：[-1, 1]</p>
                     * 
                     */
                    int64_t GetTrafficMirrorOn() const;

                    /**
                     * 设置<p>网卡是否开启流量审计</p><p>取值范围：[-1, 1]</p>
                     * @param _trafficMirrorOn <p>网卡是否开启流量审计</p><p>取值范围：[-1, 1]</p>
                     * 
                     */
                    void SetTrafficMirrorOn(const int64_t& _trafficMirrorOn);

                    /**
                     * 判断参数 TrafficMirrorOn 是否已赋值
                     * @return TrafficMirrorOn 是否已赋值
                     * 
                     */
                    bool TrafficMirrorOnHasBeenSet() const;

                private:

                    /**
                     * <p>限制数目</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>实例Id/实例名称/资产名称</p>
                     */
                    std::vector<NameValueString> m_searchValues;
                    bool m_searchValuesHasBeenSet;

                    /**
                     * <p>数据资产类型</p>
                     */
                    std::string m_assetsType;
                    bool m_assetsTypeHasBeenSet;

                    /**
                     * <p>查询的资产类型（1:cdb、2:cvm、3:others）</p>
                     */
                    int64_t m_assetsAddType;
                    bool m_assetsAddTypeHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>审计权限</p>
                     */
                    int64_t m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    int64_t m_aliveStatus;
                    bool m_aliveStatusHasBeenSet;

                    /**
                     * <p>1.代理开启 0.代理关闭 -1.全查</p>
                     */
                    int64_t m_casbOn;
                    bool m_casbOnHasBeenSet;

                    /**
                     * <p>1.Agent开启 0.Agent关闭 -1.全查</p>
                     */
                    int64_t m_agentOn;
                    bool m_agentOnHasBeenSet;

                    /**
                     * <p>0.关闭，1.开启，2.关闭中，3.开启中 -1.全查</p>
                     */
                    int64_t m_cdbOn;
                    bool m_cdbOnHasBeenSet;

                    /**
                     * <p>扩展分类，如sensitive，指定查询支持敏感数据识别的资产</p>
                     */
                    std::string m_extendCategory;
                    bool m_extendCategoryHasBeenSet;

                    /**
                     * <p>资产组Id（Id=0 暂未分组；id&gt;0 组Id）</p>
                     */
                    std::vector<uint64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>资产Id</p>
                     */
                    std::vector<uint64_t> m_aids;
                    bool m_aidsHasBeenSet;

                    /**
                     * <p>查询绑定状态（1:查询规则绑定数量；2:查询模型绑定数量）</p>
                     */
                    uint64_t m_bindingState;
                    bool m_bindingStateHasBeenSet;

                    /**
                     * <p>网卡是否开启流量审计</p><p>取值范围：[-1, 1]</p>
                     */
                    int64_t m_trafficMirrorOn;
                    bool m_trafficMirrorOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEASSETSLISTREQUEST_H_
