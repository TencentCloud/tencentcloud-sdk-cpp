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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_SELECTEDITEMS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_SELECTEDITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 选中的项目
                */
                class SelectedItems : public AbstractModel
                {
                public:
                    SelectedItems();
                    ~SelectedItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取选中项目名字
                     * @return ItemName 选中项目名字
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置选中项目名字
                     * @param _itemName 选中项目名字
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取ingress gw的名称列表
                     * @return Gateways ingress gw的名称列表
                     * 
                     */
                    std::vector<std::string> GetGateways() const;

                    /**
                     * 设置ingress gw的名称列表
                     * @param _gateways ingress gw的名称列表
                     * 
                     */
                    void SetGateways(const std::vector<std::string>& _gateways);

                    /**
                     * 判断参数 Gateways 是否已赋值
                     * @return Gateways 是否已赋值
                     * 
                     */
                    bool GatewaysHasBeenSet() const;

                private:

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 选中项目名字
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * ingress gw的名称列表
                     */
                    std::vector<std::string> m_gateways;
                    bool m_gatewaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_SELECTEDITEMS_H_
