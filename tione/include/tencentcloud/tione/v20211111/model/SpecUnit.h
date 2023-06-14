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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SPECUNIT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SPECUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 计费项询价单元
                */
                class SpecUnit : public AbstractModel
                {
                public:
                    SpecUnit();
                    ~SpecUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费项名称
                     * @return SpecName 计费项名称
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置计费项名称
                     * @param _specName 计费项名称
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取计费项数量,建议不超过100万
                     * @return SpecCount 计费项数量,建议不超过100万
                     * 
                     */
                    uint64_t GetSpecCount() const;

                    /**
                     * 设置计费项数量,建议不超过100万
                     * @param _specCount 计费项数量,建议不超过100万
                     * 
                     */
                    void SetSpecCount(const uint64_t& _specCount);

                    /**
                     * 判断参数 SpecCount 是否已赋值
                     * @return SpecCount 是否已赋值
                     * 
                     */
                    bool SpecCountHasBeenSet() const;

                private:

                    /**
                     * 计费项名称
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 计费项数量,建议不超过100万
                     */
                    uint64_t m_specCount;
                    bool m_specCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SPECUNIT_H_
