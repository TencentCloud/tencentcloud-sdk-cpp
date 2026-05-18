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
                     * 获取<p>变量名</p>
                     * @return Name <p>变量名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>变量名</p>
                     * @param _name <p>变量名</p>
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
                     * 获取<p>变量值</p>
                     * @return Value <p>变量值</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>变量值</p>
                     * @param _value <p>变量值</p>
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
                     * 获取<p>变量类型  1：显式   2：隐藏</p>
                     * @return Type <p>变量类型  1：显式   2：隐藏</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>变量类型  1：显式   2：隐藏</p>
                     * @param _type <p>变量类型  1：显式   2：隐藏</p>
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
                     * 获取<p>描述信息</p>
                     * @return Remark <p>描述信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>描述信息</p>
                     * @param _remark <p>描述信息</p>
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
                     * 获取<p>工作空间 SerialId</p>
                     * @return WorkSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置<p>工作空间 SerialId</p>
                     * @param _workSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     * @return ValueType <p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     * 
                     */
                    int64_t GetValueType() const;

                    /**
                     * 设置<p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     * @param _valueType <p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     * 
                     */
                    void SetValueType(const int64_t& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取<p>凭据所在地域</p>
                     * @return SecretRegion <p>凭据所在地域</p>
                     * 
                     */
                    std::string GetSecretRegion() const;

                    /**
                     * 设置<p>凭据所在地域</p>
                     * @param _secretRegion <p>凭据所在地域</p>
                     * 
                     */
                    void SetSecretRegion(const std::string& _secretRegion);

                    /**
                     * 判断参数 SecretRegion 是否已赋值
                     * @return SecretRegion 是否已赋值
                     * 
                     */
                    bool SecretRegionHasBeenSet() const;

                    /**
                     * 获取<p>凭据名称</p>
                     * @return SecretName <p>凭据名称</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>凭据名称</p>
                     * @param _secretName <p>凭据名称</p>
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取<p>凭据版本</p>
                     * @return SecretVersionId <p>凭据版本</p>
                     * 
                     */
                    std::string GetSecretVersionId() const;

                    /**
                     * 设置<p>凭据版本</p>
                     * @param _secretVersionId <p>凭据版本</p>
                     * 
                     */
                    void SetSecretVersionId(const std::string& _secretVersionId);

                    /**
                     * 判断参数 SecretVersionId 是否已赋值
                     * @return SecretVersionId 是否已赋值
                     * 
                     */
                    bool SecretVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>凭据值md5</p>
                     * @return SecretValueMd5 <p>凭据值md5</p>
                     * 
                     */
                    std::string GetSecretValueMd5() const;

                    /**
                     * 设置<p>凭据值md5</p>
                     * @param _secretValueMd5 <p>凭据值md5</p>
                     * 
                     */
                    void SetSecretValueMd5(const std::string& _secretValueMd5);

                    /**
                     * 判断参数 SecretValueMd5 是否已赋值
                     * @return SecretValueMd5 是否已赋值
                     * 
                     */
                    bool SecretValueMd5HasBeenSet() const;

                private:

                    /**
                     * <p>变量名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>变量值</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>变量类型  1：显式   2：隐藏</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>描述信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>工作空间 SerialId</p>
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * <p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     */
                    int64_t m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * <p>凭据所在地域</p>
                     */
                    std::string m_secretRegion;
                    bool m_secretRegionHasBeenSet;

                    /**
                     * <p>凭据名称</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>凭据版本</p>
                     */
                    std::string m_secretVersionId;
                    bool m_secretVersionIdHasBeenSet;

                    /**
                     * <p>凭据值md5</p>
                     */
                    std::string m_secretValueMd5;
                    bool m_secretValueMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEVARIABLEREQUEST_H_
