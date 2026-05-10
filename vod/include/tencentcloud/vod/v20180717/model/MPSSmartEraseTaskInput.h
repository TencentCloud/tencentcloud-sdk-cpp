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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSRawSmartEraseParameter.h>
#include <tencentcloud/vod/v20180717/model/MPSOverrideEraseParameter.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能擦除任务
                */
                class MPSSmartEraseTaskInput : public AbstractModel
                {
                public:
                    MPSSmartEraseTaskInput();
                    ~MPSSmartEraseTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>智能擦除模板id。</p>
                     * @return Definition <p>智能擦除模板id。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>智能擦除模板id。</p>
                     * @param _definition <p>智能擦除模板id。</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。</p>
                     * @return RawParameter <p>智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。</p>
                     * 
                     */
                    MPSRawSmartEraseParameter GetRawParameter() const;

                    /**
                     * 设置<p>智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。</p>
                     * @param _rawParameter <p>智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。</p>
                     * 
                     */
                    void SetRawParameter(const MPSRawSmartEraseParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取<p>智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。</p>
                     * @return OverrideParameter <p>智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。</p>
                     * 
                     */
                    MPSOverrideEraseParameter GetOverrideParameter() const;

                    /**
                     * 设置<p>智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。</p>
                     * @param _overrideParameter <p>智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。</p>
                     * 
                     */
                    void SetOverrideParameter(const MPSOverrideEraseParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     * 
                     */
                    bool OverrideParameterHasBeenSet() const;

                private:

                    /**
                     * <p>智能擦除模板id。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。</p>
                     */
                    MPSRawSmartEraseParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * <p>智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。</p>
                     */
                    MPSOverrideEraseParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETASKINPUT_H_
