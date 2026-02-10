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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncInputExtendedParameter.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片处理配置。
                */
                class ProcessImageAsyncTaskInput : public AbstractModel
                {
                public:
                    ProcessImageAsyncTaskInput();
                    ~ProcessImageAsyncTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片异步处理模板ID。
                     * @return Definition 图片异步处理模板ID。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置图片异步处理模板ID。
                     * @param _definition 图片异步处理模板ID。
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
                     * 获取图片异步处理扩展参数。
                     * @return ExtendedParameter 图片异步处理扩展参数。
                     * 
                     */
                    ProcessImageAsyncInputExtendedParameter GetExtendedParameter() const;

                    /**
                     * 设置图片异步处理扩展参数。
                     * @param _extendedParameter 图片异步处理扩展参数。
                     * 
                     */
                    void SetExtendedParameter(const ProcessImageAsyncInputExtendedParameter& _extendedParameter);

                    /**
                     * 判断参数 ExtendedParameter 是否已赋值
                     * @return ExtendedParameter 是否已赋值
                     * 
                     */
                    bool ExtendedParameterHasBeenSet() const;

                private:

                    /**
                     * 图片异步处理模板ID。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 图片异步处理扩展参数。
                     */
                    ProcessImageAsyncInputExtendedParameter m_extendedParameter;
                    bool m_extendedParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASKINPUT_H_
