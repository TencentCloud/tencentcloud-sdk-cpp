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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEASSETBASELINERISKEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEASSETBASELINERISKEXPORTJOBREQUEST_H_

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
                * CreateAssetBaselineRiskExportJob请求参数结构体
                */
                class CreateAssetBaselineRiskExportJobRequest : public AbstractModel
                {
                public:
                    CreateAssetBaselineRiskExportJobRequest();
                    ~CreateAssetBaselineRiskExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资产唯一标识（UUID），与 AssetType 组合定位具体资产。</p>
                     * @return AssetUniqueID <p>资产唯一标识（UUID），与 AssetType 组合定位具体资产。</p>
                     * 
                     */
                    std::string GetAssetUniqueID() const;

                    /**
                     * 设置<p>资产唯一标识（UUID），与 AssetType 组合定位具体资产。</p>
                     * @param _assetUniqueID <p>资产唯一标识（UUID），与 AssetType 组合定位具体资产。</p>
                     * 
                     */
                    void SetAssetUniqueID(const std::string& _assetUniqueID);

                    /**
                     * 判断参数 AssetUniqueID 是否已赋值
                     * @return AssetUniqueID 是否已赋值
                     * 
                     */
                    bool AssetUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>资产类型。取值：HOST（主机）、CLUSTER（集群）。</p>
                     * @return AssetType <p>资产类型。取值：HOST（主机）、CLUSTER（集群）。</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型。取值：HOST（主机）、CLUSTER（集群）。</p>
                     * @param _assetType <p>资产类型。取值：HOST（主机）、CLUSTER（集群）。</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产所属appid</p>
                     * @return AssetAppID <p>资产所属appid</p>
                     * 
                     */
                    uint64_t GetAssetAppID() const;

                    /**
                     * 设置<p>资产所属appid</p>
                     * @param _assetAppID <p>资产所属appid</p>
                     * 
                     */
                    void SetAssetAppID(const uint64_t& _assetAppID);

                    /**
                     * 判断参数 AssetAppID 是否已赋值
                     * @return AssetAppID 是否已赋值
                     * 
                     */
                    bool AssetAppIDHasBeenSet() const;

                    /**
                     * 获取<p>导出任务名字</p>
                     * @return Name <p>导出任务名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>导出任务名字</p>
                     * @param _name <p>导出任务名字</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取<p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
                     * @return Filters <p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
                     * @param _filters <p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>资产唯一标识（UUID），与 AssetType 组合定位具体资产。</p>
                     */
                    std::string m_assetUniqueID;
                    bool m_assetUniqueIDHasBeenSet;

                    /**
                     * <p>资产类型。取值：HOST（主机）、CLUSTER（集群）。</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>资产所属appid</p>
                     */
                    uint64_t m_assetAppID;
                    bool m_assetAppIDHasBeenSet;

                    /**
                     * <p>导出任务名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEASSETBASELINERISKEXPORTJOBREQUEST_H_
