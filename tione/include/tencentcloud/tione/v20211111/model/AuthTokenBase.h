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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKENBASE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKENBASE_H_

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
                * AuthToken 的基础信息
                */
                class AuthTokenBase : public AbstractModel
                {
                public:
                    AuthTokenBase();
                    ~AuthTokenBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取token 值
                     * @return Value token 值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置token 值
                     * @param _value token 值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取token 别名
                     * @return Name token 别名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置token 别名
                     * @param _name token 别名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取token 描述
                     * @return Description token 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置token 描述
                     * @param _description token 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取token 创建时间
                     * @return CreateTime token 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置token 创建时间
                     * @param _createTime token 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取token状态
                     * @return Status token状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置token状态
                     * @param _status token状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * token 值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * token 别名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * token 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * token 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * token状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKENBASE_H_
