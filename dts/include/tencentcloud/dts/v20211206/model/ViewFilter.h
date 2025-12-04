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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_VIEWFILTER_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_VIEWFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/OpFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 视图级 DDL/DML 过滤信息
                */
                class ViewFilter : public AbstractModel
                {
                public:
                    ViewFilter();
                    ~ViewFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则生效的视图名
                     * @return ViewName 规则生效的视图名
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置规则生效的视图名
                     * @param _viewName 规则生效的视图名
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
                     * 获取视图级 DDL/DML 过滤规则
                     * @return OpFilter 视图级 DDL/DML 过滤规则
                     * 
                     */
                    OpFilter GetOpFilter() const;

                    /**
                     * 设置视图级 DDL/DML 过滤规则
                     * @param _opFilter 视图级 DDL/DML 过滤规则
                     * 
                     */
                    void SetOpFilter(const OpFilter& _opFilter);

                    /**
                     * 判断参数 OpFilter 是否已赋值
                     * @return OpFilter 是否已赋值
                     * 
                     */
                    bool OpFilterHasBeenSet() const;

                private:

                    /**
                     * 规则生效的视图名
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 视图级 DDL/DML 过滤规则
                     */
                    OpFilter m_opFilter;
                    bool m_opFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_VIEWFILTER_H_
