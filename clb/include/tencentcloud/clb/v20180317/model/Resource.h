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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RESOURCE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ResourceAvailability.h>
#include <tencentcloud/clb/v20180317/model/TypeInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 资源详细信息
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运营商内具体资源信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     * @return Type 运营商内具体资源信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置运营商内具体资源信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     * @param _type 运营商内具体资源信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取运营商信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     * @return Isp 运营商信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置运营商信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     * @param _isp 运营商信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取可用资源。
                     * @return AvailabilitySet 可用资源。
                     * 
                     */
                    std::vector<ResourceAvailability> GetAvailabilitySet() const;

                    /**
                     * 设置可用资源。
                     * @param _availabilitySet 可用资源。
                     * 
                     */
                    void SetAvailabilitySet(const std::vector<ResourceAvailability>& _availabilitySet);

                    /**
                     * 判断参数 AvailabilitySet 是否已赋值
                     * @return AvailabilitySet 是否已赋值
                     * 
                     */
                    bool AvailabilitySetHasBeenSet() const;

                    /**
                     * 获取运营商类型信息
                     * @return TypeSet 运营商类型信息
                     * 
                     */
                    std::vector<TypeInfo> GetTypeSet() const;

                    /**
                     * 设置运营商类型信息
                     * @param _typeSet 运营商类型信息
                     * 
                     */
                    void SetTypeSet(const std::vector<TypeInfo>& _typeSet);

                    /**
                     * 判断参数 TypeSet 是否已赋值
                     * @return TypeSet 是否已赋值
                     * 
                     */
                    bool TypeSetHasBeenSet() const;

                private:

                    /**
                     * 运营商内具体资源信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 运营商信息，如"CMCC", "CUCC", "CTCC", "BGP", "INTERNAL"。
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 可用资源。
                     */
                    std::vector<ResourceAvailability> m_availabilitySet;
                    bool m_availabilitySetHasBeenSet;

                    /**
                     * 运营商类型信息
                     */
                    std::vector<TypeInfo> m_typeSet;
                    bool m_typeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RESOURCE_H_
