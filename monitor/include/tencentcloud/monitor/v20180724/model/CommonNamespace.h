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
                     * 获取命名空间标示
                     * @return Id 命名空间标示
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置命名空间标示
                     * @param _id 命名空间标示
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
                     * 获取命名空间名称
                     * @return Name 命名空间名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置命名空间名称
                     * @param _name 命名空间名称
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
                     * 获取命名空间值
                     * @return Value 命名空间值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置命名空间值
                     * @param _value 命名空间值
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
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
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
                     * 获取配置信息
                     * @return Config 配置信息
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置信息
                     * @param _config 配置信息
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
                     * 获取支持地域列表
                     * @return AvailableRegions 支持地域列表
                     * 
                     */
                    std::vector<std::string> GetAvailableRegions() const;

                    /**
                     * 设置支持地域列表
                     * @param _availableRegions 支持地域列表
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
                     * 获取排序Id
                     * @return SortId 排序Id
                     * 
                     */
                    int64_t GetSortId() const;

                    /**
                     * 设置排序Id
                     * @param _sortId 排序Id
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
                     * 获取Dashboard中的唯一表示
                     * @return DashboardId Dashboard中的唯一表示
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置Dashboard中的唯一表示
                     * @param _dashboardId Dashboard中的唯一表示
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
                     * 命名空间标示
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 配置信息
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 支持地域列表
                     */
                    std::vector<std::string> m_availableRegions;
                    bool m_availableRegionsHasBeenSet;

                    /**
                     * 排序Id
                     */
                    int64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * Dashboard中的唯一表示
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACE_H_
