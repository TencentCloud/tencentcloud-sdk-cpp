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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SQLGATEWAYENDPOINT_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SQLGATEWAYENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 对外接口访问信息
                */
                class SqlGatewayEndpoint : public AbstractModel
                {
                public:
                    SqlGatewayEndpoint();
                    ~SqlGatewayEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>类型</p><p>枚举值：</p><ul><li>rest： rest</li><li>hiveserver2： hiveserver2</li><li>pg： pg</li></ul>
                     * @return Type <p>类型</p><p>枚举值：</p><ul><li>rest： rest</li><li>hiveserver2： hiveserver2</li><li>pg： pg</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p><p>枚举值：</p><ul><li>rest： rest</li><li>hiveserver2： hiveserver2</li><li>pg： pg</li></ul>
                     * @param _type <p>类型</p><p>枚举值：</p><ul><li>rest： rest</li><li>hiveserver2： hiveserver2</li><li>pg： pg</li></ul>
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
                     * 获取<p>地址</p>
                     * @return Address <p>地址</p>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>地址</p>
                     * @param _address <p>地址</p>
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>是否开启</p>
                     * @return Enabled <p>是否开启</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否开启</p>
                     * @param _enabled <p>是否开启</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>其他信息</p>
                     * @return Extra <p>其他信息</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>其他信息</p>
                     * @param _extra <p>其他信息</p>
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * <p>类型</p><p>枚举值：</p><ul><li>rest： rest</li><li>hiveserver2： hiveserver2</li><li>pg： pg</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>地址</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>是否开启</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>其他信息</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SQLGATEWAYENDPOINT_H_
