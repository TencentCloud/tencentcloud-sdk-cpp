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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_VIEW_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_VIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据同步view的描述
                */
                class View : public AbstractModel
                {
                public:
                    View();
                    ~View() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取view名
                     * @return ViewName view名
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置view名
                     * @param _viewName view名
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
                     * 获取预留字段、目前暂时不支持view的重命名
                     * @return NewViewName 预留字段、目前暂时不支持view的重命名
                     * 
                     */
                    std::string GetNewViewName() const;

                    /**
                     * 设置预留字段、目前暂时不支持view的重命名
                     * @param _newViewName 预留字段、目前暂时不支持view的重命名
                     * 
                     */
                    void SetNewViewName(const std::string& _newViewName);

                    /**
                     * 判断参数 NewViewName 是否已赋值
                     * @return NewViewName 是否已赋值
                     * 
                     */
                    bool NewViewNameHasBeenSet() const;

                private:

                    /**
                     * view名
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 预留字段、目前暂时不支持view的重命名
                     */
                    std::string m_newViewName;
                    bool m_newViewNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_VIEW_H_
