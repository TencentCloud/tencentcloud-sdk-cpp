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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TYPEINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/SpecAvailability.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 运营商类型信息
                */
                class TypeInfo : public AbstractModel
                {
                public:
                    TypeInfo();
                    ~TypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运营商类型
                     * @return Type 运营商类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置运营商类型
                     * @param _type 运营商类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取规格可用性
                     * @return SpecAvailabilitySet 规格可用性
                     * 
                     */
                    std::vector<SpecAvailability> GetSpecAvailabilitySet() const;

                    /**
                     * 设置规格可用性
                     * @param _specAvailabilitySet 规格可用性
                     * 
                     */
                    void SetSpecAvailabilitySet(const std::vector<SpecAvailability>& _specAvailabilitySet);

                    /**
                     * 判断参数 SpecAvailabilitySet 是否已赋值
                     * @return SpecAvailabilitySet 是否已赋值
                     * 
                     */
                    bool SpecAvailabilitySetHasBeenSet() const;

                private:

                    /**
                     * 运营商类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 规格可用性
                     */
                    std::vector<SpecAvailability> m_specAvailabilitySet;
                    bool m_specAvailabilitySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TYPEINFO_H_
