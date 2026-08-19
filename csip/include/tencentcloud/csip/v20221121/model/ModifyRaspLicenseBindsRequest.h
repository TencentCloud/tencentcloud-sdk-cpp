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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRASPLICENSEBINDSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRASPLICENSEBINDSREQUEST_H_

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
                * ModifyRaspLicenseBinds请求参数结构体
                */
                class ModifyRaspLicenseBindsRequest : public AbstractModel
                {
                public:
                    ModifyRaspLicenseBindsRequest();
                    ~ModifyRaspLicenseBindsRequest() = default;
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
                     * 获取资源ID
                     * @return ResourceID 资源ID
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置资源ID
                     * @param _resourceID 资源ID
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取计费项类型
- sv_yunjing_vas_small 小型包
- sv_yunjing_vas_medium 中型包
- sv_yunjing_vas_large 大型包
- sv_yunjing_vas_expansion 扩展包
                     * @return InquireKey 计费项类型
- sv_yunjing_vas_small 小型包
- sv_yunjing_vas_medium 中型包
- sv_yunjing_vas_large 大型包
- sv_yunjing_vas_expansion 扩展包
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置计费项类型
- sv_yunjing_vas_small 小型包
- sv_yunjing_vas_medium 中型包
- sv_yunjing_vas_large 大型包
- sv_yunjing_vas_expansion 扩展包
                     * @param _inquireKey 计费项类型
- sv_yunjing_vas_small 小型包
- sv_yunjing_vas_medium 中型包
- sv_yunjing_vas_large 大型包
- sv_yunjing_vas_expansion 扩展包
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取实例ID数组
                     * @return QUUID 实例ID数组
                     * 
                     */
                    std::vector<std::string> GetQUUID() const;

                    /**
                     * 设置实例ID数组
                     * @param _qUUID 实例ID数组
                     * 
                     */
                    void SetQUUID(const std::vector<std::string>& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取是否全部机器实例
                     * @return IsALL 是否全部机器实例
                     * 
                     */
                    bool GetIsALL() const;

                    /**
                     * 设置是否全部机器实例
                     * @param _isALL 是否全部机器实例
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
                     * 获取过滤参数,该参数需要IsALL=true时生效,表示筛选的结果作用到QUUID里
                     * @return Filters 过滤参数,该参数需要IsALL=true时生效,表示筛选的结果作用到QUUID里
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤参数,该参数需要IsALL=true时生效,表示筛选的结果作用到QUUID里
                     * @param _filters 过滤参数,该参数需要IsALL=true时生效,表示筛选的结果作用到QUUID里
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
                     * 资源ID
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 计费项类型
- sv_yunjing_vas_small 小型包
- sv_yunjing_vas_medium 中型包
- sv_yunjing_vas_large 大型包
- sv_yunjing_vas_expansion 扩展包
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * 实例ID数组
                     */
                    std::vector<std::string> m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * 是否全部机器实例
                     */
                    bool m_isALL;
                    bool m_isALLHasBeenSet;

                    /**
                     * 过滤参数,该参数需要IsALL=true时生效,表示筛选的结果作用到QUUID里
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRASPLICENSEBINDSREQUEST_H_
