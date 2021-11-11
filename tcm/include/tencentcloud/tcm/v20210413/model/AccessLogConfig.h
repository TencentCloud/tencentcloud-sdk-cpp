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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_ACCESSLOGCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_ACCESSLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/SelectedRange.h>
#include <tencentcloud/tcm/v20210413/model/CLS.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * AccessLog 配置
                */
                class AccessLogConfig : public AbstractModel
                {
                public:
                    AccessLogConfig();
                    ~AccessLogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用
                     * @return Enable 是否启用
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否启用
                     * @param Enable 是否启用
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取采用的模板，可选值：istio（默认）、trace
                     * @return Template 采用的模板，可选值：istio（默认）、trace
                     */
                    std::string GetTemplate() const;

                    /**
                     * 设置采用的模板，可选值：istio（默认）、trace
                     * @param Template 采用的模板，可选值：istio（默认）、trace
                     */
                    void SetTemplate(const std::string& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取选中的范围
                     * @return SelectedRange 选中的范围
                     */
                    SelectedRange GetSelectedRange() const;

                    /**
                     * 设置选中的范围
                     * @param SelectedRange 选中的范围
                     */
                    void SetSelectedRange(const SelectedRange& _selectedRange);

                    /**
                     * 判断参数 SelectedRange 是否已赋值
                     * @return SelectedRange 是否已赋值
                     */
                    bool SelectedRangeHasBeenSet() const;

                    /**
                     * 获取腾讯云日志服务相关参数
                     * @return CLS 腾讯云日志服务相关参数
                     */
                    CLS GetCLS() const;

                    /**
                     * 设置腾讯云日志服务相关参数
                     * @param CLS 腾讯云日志服务相关参数
                     */
                    void SetCLS(const CLS& _cLS);

                    /**
                     * 判断参数 CLS 是否已赋值
                     * @return CLS 是否已赋值
                     */
                    bool CLSHasBeenSet() const;

                private:

                    /**
                     * 是否启用
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 采用的模板，可选值：istio（默认）、trace
                     */
                    std::string m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 选中的范围
                     */
                    SelectedRange m_selectedRange;
                    bool m_selectedRangeHasBeenSet;

                    /**
                     * 腾讯云日志服务相关参数
                     */
                    CLS m_cLS;
                    bool m_cLSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_ACCESSLOGCONFIG_H_
