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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 统一的命名空间信息
                */
                class CommonNamespace : public AbstractModel
                {
                public:
                    CommonNamespace();
                    ~CommonNamespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>命名空间标示</p>
                     * @return Id <p>命名空间标示</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>命名空间标示</p>
                     * @param _id <p>命名空间标示</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>命名空间名称</p>
                     * @return Name <p>命名空间名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>命名空间名称</p>
                     * @param _name <p>命名空间名称</p>
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
                     * 获取<p>命名空间值</p>
                     * @return Value <p>命名空间值</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>命名空间值</p>
                     * @param _value <p>命名空间值</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>产品名称</p>
                     * @return ProductName <p>产品名称</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>产品名称</p>
                     * @param _productName <p>产品名称</p>
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>配置信息</p>
                     * @return Config <p>配置信息</p>
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置<p>配置信息</p>
                     * @param _config <p>配置信息</p>
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>支持地域列表</p>
                     * @return AvailableRegions <p>支持地域列表</p>
                     * 
                     */
                    std::vector<std::string> GetAvailableRegions() const;

                    /**
                     * 设置<p>支持地域列表</p>
                     * @param _availableRegions <p>支持地域列表</p>
                     * 
                     */
                    void SetAvailableRegions(const std::vector<std::string>& _availableRegions);

                    /**
                     * 判断参数 AvailableRegions 是否已赋值
                     * @return AvailableRegions 是否已赋值
                     * 
                     */
                    bool AvailableRegionsHasBeenSet() const;

                    /**
                     * 获取<p>排序Id</p>
                     * @return SortId <p>排序Id</p>
                     * 
                     */
                    int64_t GetSortId() const;

                    /**
                     * 设置<p>排序Id</p>
                     * @param _sortId <p>排序Id</p>
                     * 
                     */
                    void SetSortId(const int64_t& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取<p>Dashboard中的唯一表示</p>
                     * @return DashboardId <p>Dashboard中的唯一表示</p>
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置<p>Dashboard中的唯一表示</p>
                     * @param _dashboardId <p>Dashboard中的唯一表示</p>
                     * 
                     */
                    void SetDashboardId(const std::string& _dashboardId);

                    /**
                     * 判断参数 DashboardId 是否已赋值
                     * @return DashboardId 是否已赋值
                     * 
                     */
                    bool DashboardIdHasBeenSet() const;

                private:

                    /**
                     * <p>命名空间标示</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>命名空间名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>命名空间值</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>产品名称</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>配置信息</p>
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>支持地域列表</p>
                     */
                    std::vector<std::string> m_availableRegions;
                    bool m_availableRegionsHasBeenSet;

                    /**
                     * <p>排序Id</p>
                     */
                    int64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * <p>Dashboard中的唯一表示</p>
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACE_H_
