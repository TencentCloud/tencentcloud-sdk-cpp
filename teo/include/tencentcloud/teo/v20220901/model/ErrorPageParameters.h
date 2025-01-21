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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ERRORPAGEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ERRORPAGEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ErrorPage.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 自定义错误页面配置参数。
                */
                class ErrorPageParameters : public AbstractModel
                {
                public:
                    ErrorPageParameters();
                    ~ErrorPageParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义错误页面配置列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorPageParams 自定义错误页面配置列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ErrorPage> GetErrorPageParams() const;

                    /**
                     * 设置自定义错误页面配置列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorPageParams 自定义错误页面配置列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorPageParams(const std::vector<ErrorPage>& _errorPageParams);

                    /**
                     * 判断参数 ErrorPageParams 是否已赋值
                     * @return ErrorPageParams 是否已赋值
                     * 
                     */
                    bool ErrorPageParamsHasBeenSet() const;

                private:

                    /**
                     * 自定义错误页面配置列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ErrorPage> m_errorPageParams;
                    bool m_errorPageParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ERRORPAGEPARAMETERS_H_
