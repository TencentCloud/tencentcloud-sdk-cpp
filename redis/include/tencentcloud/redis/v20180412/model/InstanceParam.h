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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAM_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例参数
                */
                class InstanceParam : public AbstractModel
                {
                public:
                    InstanceParam();
                    ~InstanceParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设置参数的名称。例如timeout。当前支持自定义的参数，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     * @return Key 设置参数的名称。例如timeout。当前支持自定义的参数，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置设置参数的名称。例如timeout。当前支持自定义的参数，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     * @param _key 设置参数的名称。例如timeout。当前支持自定义的参数，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取设置参数名称对应的运行值。例如timeout对应运行值可设置为120， 单位为秒（s）。指当客户端连接闲置时间达到120 s时，将关闭连接。更多参数取值信息，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     * @return Value 设置参数名称对应的运行值。例如timeout对应运行值可设置为120， 单位为秒（s）。指当客户端连接闲置时间达到120 s时，将关闭连接。更多参数取值信息，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置设置参数名称对应的运行值。例如timeout对应运行值可设置为120， 单位为秒（s）。指当客户端连接闲置时间达到120 s时，将关闭连接。更多参数取值信息，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     * @param _value 设置参数名称对应的运行值。例如timeout对应运行值可设置为120， 单位为秒（s）。指当客户端连接闲置时间达到120 s时，将关闭连接。更多参数取值信息，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 设置参数的名称。例如timeout。当前支持自定义的参数，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 设置参数名称对应的运行值。例如timeout对应运行值可设置为120， 单位为秒（s）。指当客户端连接闲置时间达到120 s时，将关闭连接。更多参数取值信息，请参见<a href="https://cloud.tencent.com/document/product/239/49925">参数配置</a>。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAM_H_
