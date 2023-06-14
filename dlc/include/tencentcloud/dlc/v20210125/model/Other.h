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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_OTHER_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_OTHER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据格式其它类型。
                */
                class Other : public AbstractModel
                {
                public:
                    Other();
                    ~Other() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取枚举类型，默认值为Json，可选值为[Json, Parquet, ORC, AVRD]之一。
                     * @return Format 枚举类型，默认值为Json，可选值为[Json, Parquet, ORC, AVRD]之一。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置枚举类型，默认值为Json，可选值为[Json, Parquet, ORC, AVRD]之一。
                     * @param _format 枚举类型，默认值为Json，可选值为[Json, Parquet, ORC, AVRD]之一。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 枚举类型，默认值为Json，可选值为[Json, Parquet, ORC, AVRD]之一。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_OTHER_H_
