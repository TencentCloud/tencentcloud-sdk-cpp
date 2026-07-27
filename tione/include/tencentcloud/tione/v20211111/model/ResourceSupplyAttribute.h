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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCESUPPLYATTRIBUTE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCESUPPLYATTRIBUTE_H_

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
                * 资源供应属性
                */
                class ResourceSupplyAttribute : public AbstractModel
                {
                public:
                    ResourceSupplyAttribute();
                    ~ResourceSupplyAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源供应类型。TIDE:潮汐;SPOT:竞价;空:常规按量后付费</p>
                     * @return SupplyType <p>资源供应类型。TIDE:潮汐;SPOT:竞价;空:常规按量后付费</p>
                     * 
                     */
                    std::string GetSupplyType() const;

                    /**
                     * 设置<p>资源供应类型。TIDE:潮汐;SPOT:竞价;空:常规按量后付费</p>
                     * @param _supplyType <p>资源供应类型。TIDE:潮汐;SPOT:竞价;空:常规按量后付费</p>
                     * 
                     */
                    void SetSupplyType(const std::string& _supplyType);

                    /**
                     * 判断参数 SupplyType 是否已赋值
                     * @return SupplyType 是否已赋值
                     * 
                     */
                    bool SupplyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>资源供应类型。TIDE:潮汐;SPOT:竞价;空:常规按量后付费</p>
                     */
                    std::string m_supplyType;
                    bool m_supplyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCESUPPLYATTRIBUTE_H_
