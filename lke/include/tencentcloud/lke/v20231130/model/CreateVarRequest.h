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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEVARREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEVARREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateVar请求参数结构体
                */
                class CreateVarRequest : public AbstractModel
                {
                public:
                    CreateVarRequest();
                    ~CreateVarRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return AppBizId 应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID
                     * @param _appBizId 应用ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取变量名称，不允许重复，最大支持50个字符
                     * @return VarName 变量名称，不允许重复，最大支持50个字符
                     * 
                     */
                    std::string GetVarName() const;

                    /**
                     * 设置变量名称，不允许重复，最大支持50个字符
                     * @param _varName 变量名称，不允许重复，最大支持50个字符
                     * 
                     */
                    void SetVarName(const std::string& _varName);

                    /**
                     * 判断参数 VarName 是否已赋值
                     * @return VarName 是否已赋值
                     * 
                     */
                    bool VarNameHasBeenSet() const;

                    /**
                     * 获取变量描述，最大支持120个字符
                     * @return VarDesc 变量描述，最大支持120个字符
                     * 
                     */
                    std::string GetVarDesc() const;

                    /**
                     * 设置变量描述，最大支持120个字符
                     * @param _varDesc 变量描述，最大支持120个字符
                     * 
                     */
                    void SetVarDesc(const std::string& _varDesc);

                    /**
                     * 判断参数 VarDesc 是否已赋值
                     * @return VarDesc 是否已赋值
                     * 
                     */
                    bool VarDescHasBeenSet() const;

                    /**
                     * 获取变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持"STRING"类型使用
                     * @return VarType 变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持"STRING"类型使用
                     * 
                     */
                    std::string GetVarType() const;

                    /**
                     * 设置变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持"STRING"类型使用
                     * @param _varType 变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持"STRING"类型使用
                     * 
                     */
                    void SetVarType(const std::string& _varType);

                    /**
                     * 判断参数 VarType 是否已赋值
                     * @return VarType 是否已赋值
                     * 
                     */
                    bool VarTypeHasBeenSet() const;

                    /**
                     * 获取自定义变量默认值
                     * @return VarDefaultValue 自定义变量默认值
                     * 
                     */
                    std::string GetVarDefaultValue() const;

                    /**
                     * 设置自定义变量默认值
                     * @param _varDefaultValue 自定义变量默认值
                     * 
                     */
                    void SetVarDefaultValue(const std::string& _varDefaultValue);

                    /**
                     * 判断参数 VarDefaultValue 是否已赋值
                     * @return VarDefaultValue 是否已赋值
                     * 
                     */
                    bool VarDefaultValueHasBeenSet() const;

                    /**
                     * 获取自定义变量文件默认名称
                     * @return VarDefaultFileName 自定义变量文件默认名称
                     * 
                     */
                    std::string GetVarDefaultFileName() const;

                    /**
                     * 设置自定义变量文件默认名称
                     * @param _varDefaultFileName 自定义变量文件默认名称
                     * 
                     */
                    void SetVarDefaultFileName(const std::string& _varDefaultFileName);

                    /**
                     * 判断参数 VarDefaultFileName 是否已赋值
                     * @return VarDefaultFileName 是否已赋值
                     * 
                     */
                    bool VarDefaultFileNameHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 变量名称，不允许重复，最大支持50个字符
                     */
                    std::string m_varName;
                    bool m_varNameHasBeenSet;

                    /**
                     * 变量描述，最大支持120个字符
                     */
                    std::string m_varDesc;
                    bool m_varDescHasBeenSet;

                    /**
                     * 变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持"STRING"类型使用
                     */
                    std::string m_varType;
                    bool m_varTypeHasBeenSet;

                    /**
                     * 自定义变量默认值
                     */
                    std::string m_varDefaultValue;
                    bool m_varDefaultValueHasBeenSet;

                    /**
                     * 自定义变量文件默认名称
                     */
                    std::string m_varDefaultFileName;
                    bool m_varDefaultFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEVARREQUEST_H_
