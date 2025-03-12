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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_VIEWITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_VIEWITEM_H_

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
                * 视图对象
                */
                class ViewItem : public AbstractModel
                {
                public:
                    ViewItem();
                    ~ViewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视图名称
                     * @return ViewName 视图名称
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置视图名称
                     * @param _viewName 视图名称
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
                     * 获取迁移后的视图名称
                     * @return NewViewName 迁移后的视图名称
                     * 
                     */
                    std::string GetNewViewName() const;

                    /**
                     * 设置迁移后的视图名称
                     * @param _newViewName 迁移后的视图名称
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
                     * 视图名称
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 迁移后的视图名称
                     */
                    std::string m_newViewName;
                    bool m_newViewNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_VIEWITEM_H_
