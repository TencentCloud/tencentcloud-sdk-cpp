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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ModifyProtectionSetting.h>
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
                * ModifyProtectionSetting请求参数结构体
                */
                class ModifyProtectionSettingRequest : public AbstractModel
                {
                public:
                    ModifyProtectionSettingRequest();
                    ~ModifyProtectionSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
                     * @return AssetType 资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
                     * @param _assetType 资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
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
                     * 获取防护配置
                     * @return Config 防护配置
                     * 
                     */
                    std::vector<ModifyProtectionSetting> GetConfig() const;

                    /**
                     * 设置防护配置
                     * @param _config 防护配置
                     * 
                     */
                    void SetConfig(const std::vector<ModifyProtectionSetting>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取是否全部,这里需要配合筛选条件Filters
                     * @return IsALL 是否全部,这里需要配合筛选条件Filters
                     * 
                     */
                    bool GetIsALL() const;

                    /**
                     * 设置是否全部,这里需要配合筛选条件Filters
                     * @param _isALL 是否全部,这里需要配合筛选条件Filters
                     * 
                     */
                    void SetIsALL(const bool& _isALL);

                    /**
                     * 判断参数 IsALL 是否已赋值
                     * @return IsALL 是否已赋值
                     * 
                     */
                    bool IsALLHasBeenSet() const;

                    /**
                     * 获取过滤参数,这里IsALL=true生效,结果作用到Config里
                     * @return Filters 过滤参数,这里IsALL=true生效,结果作用到Config里
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤参数,这里IsALL=true生效,结果作用到Config里
                     * @param _filters 过滤参数,这里IsALL=true生效,结果作用到Config里
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
                     * 资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 防护配置
                     */
                    std::vector<ModifyProtectionSetting> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 是否全部,这里需要配合筛选条件Filters
                     */
                    bool m_isALL;
                    bool m_isALLHasBeenSet;

                    /**
                     * 过滤参数,这里IsALL=true生效,结果作用到Config里
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTINGREQUEST_H_
