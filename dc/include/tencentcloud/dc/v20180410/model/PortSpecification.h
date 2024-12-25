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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_PORTSPECIFICATION_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_PORTSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 端口规格
                */
                class PortSpecification : public AbstractModel
                {
                public:
                    PortSpecification();
                    ~PortSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口名称
                     * @return InternationalName 端口名称
                     * 
                     */
                    std::string GetInternationalName() const;

                    /**
                     * 设置端口名称
                     * @param _internationalName 端口名称
                     * 
                     */
                    void SetInternationalName(const std::string& _internationalName);

                    /**
                     * 判断参数 InternationalName 是否已赋值
                     * @return InternationalName 是否已赋值
                     * 
                     */
                    bool InternationalNameHasBeenSet() const;

                    /**
                     * 获取端口规格（M）
                     * @return Specification 端口规格（M）
                     * 
                     */
                    uint64_t GetSpecification() const;

                    /**
                     * 设置端口规格（M）
                     * @param _specification 端口规格（M）
                     * 
                     */
                    void SetSpecification(const uint64_t& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取端口类型：T-电口，X-光口
                     * @return PortType 端口类型：T-电口，X-光口
                     * 
                     */
                    std::string GetPortType() const;

                    /**
                     * 设置端口类型：T-电口，X-光口
                     * @param _portType 端口类型：T-电口，X-光口
                     * 
                     */
                    void SetPortType(const std::string& _portType);

                    /**
                     * 判断参数 PortType 是否已赋值
                     * @return PortType 是否已赋值
                     * 
                     */
                    bool PortTypeHasBeenSet() const;

                private:

                    /**
                     * 端口名称
                     */
                    std::string m_internationalName;
                    bool m_internationalNameHasBeenSet;

                    /**
                     * 端口规格（M）
                     */
                    uint64_t m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 端口类型：T-电口，X-光口
                     */
                    std::string m_portType;
                    bool m_portTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_PORTSPECIFICATION_H_
