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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_APPCHART_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_APPCHART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * app所支持的chart
                */
                class AppChart : public AbstractModel
                {
                public:
                    AppChart();
                    ~AppChart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取chart名称
                     * @return Name chart名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置chart名称
                     * @param _name chart名称
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
                     * 获取chart的标签
                     * @return Label chart的标签
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置chart的标签
                     * @param _label chart的标签
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取chart的版本
                     * @return LatestVersion chart的版本
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置chart的版本
                     * @param _latestVersion chart的版本
                     * 
                     */
                    void SetLatestVersion(const std::string& _latestVersion);

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                private:

                    /**
                     * chart名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * chart的标签
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * chart的版本
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_APPCHART_H_
