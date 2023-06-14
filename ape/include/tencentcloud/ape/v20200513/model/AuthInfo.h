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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_AUTHINFO_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_AUTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * 授权人信息
                */
                class AuthInfo : public AbstractModel
                {
                public:
                    AuthInfo();
                    ~AuthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键
                     * @return Id 主键
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置主键
                     * @param _id 主键
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取授权人名称
                     * @return Name 授权人名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置授权人名称
                     * @param _name 授权人名称
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
                     * 获取身份证号/社会信用代码
                     * @return Code 身份证号/社会信用代码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置身份证号/社会信用代码
                     * @param _code 身份证号/社会信用代码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取授权人类型
                     * @return Type 授权人类型
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置授权人类型
                     * @param _type 授权人类型
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 主键
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 授权人名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 身份证号/社会信用代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 授权人类型
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_AUTHINFO_H_
