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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RELEASEVALUES_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RELEASEVALUES_H_

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
                * 应用市场自定义参数
                */
                class ReleaseValues : public AbstractModel
                {
                public:
                    ReleaseValues();
                    ~ReleaseValues() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义参数原始值
                     * @return RawOriginal 自定义参数原始值
                     * 
                     */
                    std::string GetRawOriginal() const;

                    /**
                     * 设置自定义参数原始值
                     * @param _rawOriginal 自定义参数原始值
                     * 
                     */
                    void SetRawOriginal(const std::string& _rawOriginal);

                    /**
                     * 判断参数 RawOriginal 是否已赋值
                     * @return RawOriginal 是否已赋值
                     * 
                     */
                    bool RawOriginalHasBeenSet() const;

                    /**
                     * 获取自定义参数值类型
                     * @return ValuesType 自定义参数值类型
                     * 
                     */
                    std::string GetValuesType() const;

                    /**
                     * 设置自定义参数值类型
                     * @param _valuesType 自定义参数值类型
                     * 
                     */
                    void SetValuesType(const std::string& _valuesType);

                    /**
                     * 判断参数 ValuesType 是否已赋值
                     * @return ValuesType 是否已赋值
                     * 
                     */
                    bool ValuesTypeHasBeenSet() const;

                private:

                    /**
                     * 自定义参数原始值
                     */
                    std::string m_rawOriginal;
                    bool m_rawOriginalHasBeenSet;

                    /**
                     * 自定义参数值类型
                     */
                    std::string m_valuesType;
                    bool m_valuesTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RELEASEVALUES_H_
