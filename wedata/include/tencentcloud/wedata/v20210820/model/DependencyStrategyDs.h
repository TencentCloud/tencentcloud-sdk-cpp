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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYSTRATEGYDS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYSTRATEGYDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 依赖配置策略
                */
                class DependencyStrategyDs : public AbstractModel
                {
                public:
                    DependencyStrategyDs();
                    ~DependencyStrategyDs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取等待（默认策略）或 执行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PollingNullStrategy 等待（默认策略）或 执行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPollingNullStrategy() const;

                    /**
                     * 设置等待（默认策略）或 执行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pollingNullStrategy 等待（默认策略）或 执行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPollingNullStrategy(const std::string& _pollingNullStrategy);

                    /**
                     * 判断参数 PollingNullStrategy 是否已赋值
                     * @return PollingNullStrategy 是否已赋值
                     * 
                     */
                    bool PollingNullStrategyHasBeenSet() const;

                private:

                    /**
                     * 等待（默认策略）或 执行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pollingNullStrategy;
                    bool m_pollingNullStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYSTRATEGYDS_H_
