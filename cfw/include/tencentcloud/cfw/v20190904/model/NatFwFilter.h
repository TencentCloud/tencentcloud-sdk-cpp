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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATFWFILTER_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATFWFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * nat fw 实例展示的过滤列表
                */
                class NatFwFilter : public AbstractModel
                {
                public:
                    NatFwFilter();
                    ~NatFwFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤的类型，例如实例id
                     * @return FilterType 过滤的类型，例如实例id
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置过滤的类型，例如实例id
                     * @param _filterType 过滤的类型，例如实例id
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取过滤的内容，以',' 分隔
                     * @return FilterContent 过滤的内容，以',' 分隔
                     * 
                     */
                    std::string GetFilterContent() const;

                    /**
                     * 设置过滤的内容，以',' 分隔
                     * @param _filterContent 过滤的内容，以',' 分隔
                     * 
                     */
                    void SetFilterContent(const std::string& _filterContent);

                    /**
                     * 判断参数 FilterContent 是否已赋值
                     * @return FilterContent 是否已赋值
                     * 
                     */
                    bool FilterContentHasBeenSet() const;

                private:

                    /**
                     * 过滤的类型，例如实例id
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 过滤的内容，以',' 分隔
                     */
                    std::string m_filterContent;
                    bool m_filterContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATFWFILTER_H_
