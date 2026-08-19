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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWFILTER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 资产搜索视图
                */
                class AssetViewFilter : public AbstractModel
                {
                public:
                    AssetViewFilter();
                    ~AssetViewFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视图ID</p>
                     * @return ViewID <p>视图ID</p>
                     * 
                     */
                    uint64_t GetViewID() const;

                    /**
                     * 设置<p>视图ID</p>
                     * @param _viewID <p>视图ID</p>
                     * 
                     */
                    void SetViewID(const uint64_t& _viewID);

                    /**
                     * 判断参数 ViewID 是否已赋值
                     * @return ViewID 是否已赋值
                     * 
                     */
                    bool ViewIDHasBeenSet() const;

                    /**
                     * 获取<p>视图名称</p>
                     * @return ViewName <p>视图名称</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>视图名称</p>
                     * @param _viewName <p>视图名称</p>
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取<p>视图过滤项</p>
                     * @return Filters <p>视图过滤项</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>视图过滤项</p>
                     * @param _filters <p>视图过滤项</p>
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
                     * <p>视图ID</p>
                     */
                    uint64_t m_viewID;
                    bool m_viewIDHasBeenSet;

                    /**
                     * <p>视图名称</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>视图过滤项</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWFILTER_H_
