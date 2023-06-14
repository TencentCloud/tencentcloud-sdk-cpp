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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_ENVVALUESELECTOR_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_ENVVALUESELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 环境变量选择
                */
                class EnvValueSelector : public AbstractModel
                {
                public:
                    EnvValueSelector();
                    ~EnvValueSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健名
                     * @return Key 健名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置健名
                     * @param _key 健名
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
                     * 获取对象名
                     * @return ObjectName 对象名
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置对象名
                     * @param _objectName 对象名
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取对象值
                     * @return ObjectType 对象值
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置对象值
                     * @param _objectType 对象值
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                private:

                    /**
                     * 健名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 对象名
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * 对象值
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_ENVVALUESELECTOR_H_
