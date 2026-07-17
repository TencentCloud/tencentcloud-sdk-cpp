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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEMANUALINSTANCECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEMANUALINSTANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务人工设置实例配置。
                */
                class InferenceManualInstanceConfig : public AbstractModel
                {
                public:
                    InferenceManualInstanceConfig();
                    ~InferenceManualInstanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取固定实例数量。
                     * @return FixedInstanceCount 固定实例数量。
                     * 
                     */
                    int64_t GetFixedInstanceCount() const;

                    /**
                     * 设置固定实例数量。
                     * @param _fixedInstanceCount 固定实例数量。
                     * 
                     */
                    void SetFixedInstanceCount(const int64_t& _fixedInstanceCount);

                    /**
                     * 判断参数 FixedInstanceCount 是否已赋值
                     * @return FixedInstanceCount 是否已赋值
                     * 
                     */
                    bool FixedInstanceCountHasBeenSet() const;

                private:

                    /**
                     * 固定实例数量。
                     */
                    int64_t m_fixedInstanceCount;
                    bool m_fixedInstanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEMANUALINSTANCECONFIG_H_
