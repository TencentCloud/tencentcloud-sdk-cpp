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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEADDONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEADDONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpdateAddon请求参数结构体
                */
                class UpdateAddonRequest : public AbstractModel
                {
                public:
                    UpdateAddonRequest();
                    ~UpdateAddonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取addon名称
                     * @return AddonName addon名称
                     * 
                     */
                    std::string GetAddonName() const;

                    /**
                     * 设置addon名称
                     * @param _addonName addon名称
                     * 
                     */
                    void SetAddonName(const std::string& _addonName);

                    /**
                     * 判断参数 AddonName 是否已赋值
                     * @return AddonName 是否已赋值
                     * 
                     */
                    bool AddonNameHasBeenSet() const;

                    /**
                     * 获取addon版本（不传默认不更新，不传AddonVersion时RawValues必传）
                     * @return AddonVersion addon版本（不传默认不更新，不传AddonVersion时RawValues必传）
                     * 
                     */
                    std::string GetAddonVersion() const;

                    /**
                     * 设置addon版本（不传默认不更新，不传AddonVersion时RawValues必传）
                     * @param _addonVersion addon版本（不传默认不更新，不传AddonVersion时RawValues必传）
                     * 
                     */
                    void SetAddonVersion(const std::string& _addonVersion);

                    /**
                     * 判断参数 AddonVersion 是否已赋值
                     * @return AddonVersion 是否已赋值
                     * 
                     */
                    bool AddonVersionHasBeenSet() const;

                    /**
                     * 获取addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取，不传RawValues时AddonVersion必传））
                     * @return RawValues addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取，不传RawValues时AddonVersion必传））
                     * 
                     */
                    std::string GetRawValues() const;

                    /**
                     * 设置addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取，不传RawValues时AddonVersion必传））
                     * @param _rawValues addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取，不传RawValues时AddonVersion必传））
                     * 
                     */
                    void SetRawValues(const std::string& _rawValues);

                    /**
                     * 判断参数 RawValues 是否已赋值
                     * @return RawValues 是否已赋值
                     * 
                     */
                    bool RawValuesHasBeenSet() const;

                    /**
                     * 获取addon参数的更新策略，支持replace和merge两种策略，默认值为merge，兼容旧版本API。replace：使用新RawValues全量替换addon原RawValues，merge：根据新RawValues新增或更新addon原RawValues中对应参数。
                     * @return UpdateStrategy addon参数的更新策略，支持replace和merge两种策略，默认值为merge，兼容旧版本API。replace：使用新RawValues全量替换addon原RawValues，merge：根据新RawValues新增或更新addon原RawValues中对应参数。
                     * 
                     */
                    std::string GetUpdateStrategy() const;

                    /**
                     * 设置addon参数的更新策略，支持replace和merge两种策略，默认值为merge，兼容旧版本API。replace：使用新RawValues全量替换addon原RawValues，merge：根据新RawValues新增或更新addon原RawValues中对应参数。
                     * @param _updateStrategy addon参数的更新策略，支持replace和merge两种策略，默认值为merge，兼容旧版本API。replace：使用新RawValues全量替换addon原RawValues，merge：根据新RawValues新增或更新addon原RawValues中对应参数。
                     * 
                     */
                    void SetUpdateStrategy(const std::string& _updateStrategy);

                    /**
                     * 判断参数 UpdateStrategy 是否已赋值
                     * @return UpdateStrategy 是否已赋值
                     * 
                     */
                    bool UpdateStrategyHasBeenSet() const;

                    /**
                     * 获取是否仅做更新检查，设置为true时仅做检查，不会更新组件
                     * @return DryRun 是否仅做更新检查，设置为true时仅做检查，不会更新组件
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否仅做更新检查，设置为true时仅做检查，不会更新组件
                     * @param _dryRun 是否仅做更新检查，设置为true时仅做检查，不会更新组件
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * addon名称
                     */
                    std::string m_addonName;
                    bool m_addonNameHasBeenSet;

                    /**
                     * addon版本（不传默认不更新，不传AddonVersion时RawValues必传）
                     */
                    std::string m_addonVersion;
                    bool m_addonVersionHasBeenSet;

                    /**
                     * addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取，不传RawValues时AddonVersion必传））
                     */
                    std::string m_rawValues;
                    bool m_rawValuesHasBeenSet;

                    /**
                     * addon参数的更新策略，支持replace和merge两种策略，默认值为merge，兼容旧版本API。replace：使用新RawValues全量替换addon原RawValues，merge：根据新RawValues新增或更新addon原RawValues中对应参数。
                     */
                    std::string m_updateStrategy;
                    bool m_updateStrategyHasBeenSet;

                    /**
                     * 是否仅做更新检查，设置为true时仅做检查，不会更新组件
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEADDONREQUEST_H_
