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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEVARIABLEREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEVARIABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateVariable请求参数结构体
                */
                class CreateVariableRequest : public AbstractModel
                {
                public:
                    CreateVariableRequest();
                    ~CreateVariableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取变量名
                     * @return Name 变量名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置变量名
                     * @param _name 变量名
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
                     * 获取变量值
                     * @return Value 变量值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置变量值
                     * @param _value 变量值
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
                     * 获取变量类型  1：显式   2：隐藏
                     * @return Type 变量类型  1：显式   2：隐藏
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置变量类型  1：显式   2：隐藏
                     * @param _type 变量类型  1：显式   2：隐藏
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Remark 描述信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置描述信息
                     * @param _remark 描述信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * 变量名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 变量值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 变量类型  1：显式   2：隐藏
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEVARIABLEREQUEST_H_
