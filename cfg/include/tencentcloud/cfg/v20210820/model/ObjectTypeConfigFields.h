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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPECONFIGFIELDS_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPECONFIGFIELDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 对象类型字段类型
                */
                class ObjectTypeConfigFields : public AbstractModel
                {
                public:
                    ObjectTypeConfigFields();
                    ~ObjectTypeConfigFields() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取instanceId
                     * @return Key instanceId
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置instanceId
                     * @param _key instanceId
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
                     * 获取实例id
                     * @return Header 实例id
                     * 
                     */
                    std::string GetHeader() const;

                    /**
                     * 设置实例id
                     * @param _header 实例id
                     * 
                     */
                    void SetHeader(const std::string& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取字段值是否需要转译，当不需要转译时，此字段返回null
                     * @return Transfer 字段值是否需要转译，当不需要转译时，此字段返回null
                     * 
                     */
                    std::string GetTransfer() const;

                    /**
                     * 设置字段值是否需要转译，当不需要转译时，此字段返回null
                     * @param _transfer 字段值是否需要转译，当不需要转译时，此字段返回null
                     * 
                     */
                    void SetTransfer(const std::string& _transfer);

                    /**
                     * 判断参数 Transfer 是否已赋值
                     * @return Transfer 是否已赋值
                     * 
                     */
                    bool TransferHasBeenSet() const;

                    /**
                     * 获取tke的pod字段信息解析
                     * @return JsonParse tke的pod字段信息解析
                     * 
                     */
                    std::string GetJsonParse() const;

                    /**
                     * 设置tke的pod字段信息解析
                     * @param _jsonParse tke的pod字段信息解析
                     * 
                     */
                    void SetJsonParse(const std::string& _jsonParse);

                    /**
                     * 判断参数 JsonParse 是否已赋值
                     * @return JsonParse 是否已赋值
                     * 
                     */
                    bool JsonParseHasBeenSet() const;

                    /**
                     * 获取字段类型 0:str 1:list
                     * @return Type 字段类型 0:str 1:list
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置字段类型 0:str 1:list
                     * @param _type 字段类型 0:str 1:list
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * instanceId
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * 字段值是否需要转译，当不需要转译时，此字段返回null
                     */
                    std::string m_transfer;
                    bool m_transferHasBeenSet;

                    /**
                     * tke的pod字段信息解析
                     */
                    std::string m_jsonParse;
                    bool m_jsonParseHasBeenSet;

                    /**
                     * 字段类型 0:str 1:list
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPECONFIGFIELDS_H_
