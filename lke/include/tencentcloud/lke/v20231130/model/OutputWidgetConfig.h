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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_OUTPUTWIDGETCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_OUTPUTWIDGETCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/WidgetParam.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Widget输出参数配置
                */
                class OutputWidgetConfig : public AbstractModel
                {
                public:
                    OutputWidgetConfig();
                    ~OutputWidgetConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取widget id
                     * @return WidgetId widget id
                     * 
                     */
                    std::string GetWidgetId() const;

                    /**
                     * 设置widget id
                     * @param _widgetId widget id
                     * 
                     */
                    void SetWidgetId(const std::string& _widgetId);

                    /**
                     * 判断参数 WidgetId 是否已赋值
                     * @return WidgetId 是否已赋值
                     * 
                     */
                    bool WidgetIdHasBeenSet() const;

                    /**
                     * 获取widget名字
                     * @return WidgetName widget名字
                     * 
                     */
                    std::string GetWidgetName() const;

                    /**
                     * 设置widget名字
                     * @param _widgetName widget名字
                     * 
                     */
                    void SetWidgetName(const std::string& _widgetName);

                    /**
                     * 判断参数 WidgetName 是否已赋值
                     * @return WidgetName 是否已赋值
                     * 
                     */
                    bool WidgetNameHasBeenSet() const;

                    /**
                     * 获取展示结果
                     * @return WidgetParam 展示结果
                     * 
                     */
                    std::vector<WidgetParam> GetWidgetParam() const;

                    /**
                     * 设置展示结果
                     * @param _widgetParam 展示结果
                     * 
                     */
                    void SetWidgetParam(const std::vector<WidgetParam>& _widgetParam);

                    /**
                     * 判断参数 WidgetParam 是否已赋值
                     * @return WidgetParam 是否已赋值
                     * 
                     */
                    bool WidgetParamHasBeenSet() const;

                private:

                    /**
                     * widget id
                     */
                    std::string m_widgetId;
                    bool m_widgetIdHasBeenSet;

                    /**
                     * widget名字
                     */
                    std::string m_widgetName;
                    bool m_widgetNameHasBeenSet;

                    /**
                     * 展示结果
                     */
                    std::vector<WidgetParam> m_widgetParam;
                    bool m_widgetParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_OUTPUTWIDGETCONFIG_H_
