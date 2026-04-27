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
                     * 获取<p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * @return AppBizId <p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置<p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * @param _appBizId <p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
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
                     * 获取<p>变量名称，不允许重复，最大支持50个字符，英文字母开头，支持英文数字与下划线”_”。</p>
                     * @return VarName <p>变量名称，不允许重复，最大支持50个字符，英文字母开头，支持英文数字与下划线”_”。</p>
                     * 
                     */
                    std::string GetVarName() const;

                    /**
                     * 设置<p>变量名称，不允许重复，最大支持50个字符，英文字母开头，支持英文数字与下划线”_”。</p>
                     * @param _varName <p>变量名称，不允许重复，最大支持50个字符，英文字母开头，支持英文数字与下划线”_”。</p>
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
                     * 获取<p>变量描述，最大支持120个字符</p>
                     * @return VarDesc <p>变量描述，最大支持120个字符</p>
                     * 
                     */
                    std::string GetVarDesc() const;

                    /**
                     * 设置<p>变量描述，最大支持120个字符</p>
                     * @param _varDesc <p>变量描述，最大支持120个字符</p>
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
                     * 获取<p>变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持&quot;STRING&quot;类型使用</p>
                     * @return VarType <p>变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持&quot;STRING&quot;类型使用</p>
                     * 
                     */
                    std::string GetVarType() const;

                    /**
                     * 设置<p>变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持&quot;STRING&quot;类型使用</p>
                     * @param _varType <p>变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持&quot;STRING&quot;类型使用</p>
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
                     * 获取<p>自定义变量默认值，<code>VarDefaultValue</code>xa0默认为空</p>
                     * @return VarDefaultValue <p>自定义变量默认值，<code>VarDefaultValue</code>xa0默认为空</p>
                     * 
                     */
                    std::string GetVarDefaultValue() const;

                    /**
                     * 设置<p>自定义变量默认值，<code>VarDefaultValue</code>xa0默认为空</p>
                     * @param _varDefaultValue <p>自定义变量默认值，<code>VarDefaultValue</code>xa0默认为空</p>
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
                     * 获取<p>自定义变量文件默认名称，<code>VarDefaultFileName</code>默认为空</p>
                     * @return VarDefaultFileName <p>自定义变量文件默认名称，<code>VarDefaultFileName</code>默认为空</p>
                     * 
                     */
                    std::string GetVarDefaultFileName() const;

                    /**
                     * 设置<p>自定义变量文件默认名称，<code>VarDefaultFileName</code>默认为空</p>
                     * @param _varDefaultFileName <p>自定义变量文件默认名称，<code>VarDefaultFileName</code>默认为空</p>
                     * 
                     */
                    void SetVarDefaultFileName(const std::string& _varDefaultFileName);

                    /**
                     * 判断参数 VarDefaultFileName 是否已赋值
                     * @return VarDefaultFileName 是否已赋值
                     * 
                     */
                    bool VarDefaultFileNameHasBeenSet() const;

                    /**
                     * 获取<p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul>
                     * @return VarModuleType <p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul>
                     * 
                     */
                    uint64_t GetVarModuleType() const;

                    /**
                     * 设置<p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul>
                     * @param _varModuleType <p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul>
                     * 
                     */
                    void SetVarModuleType(const uint64_t& _varModuleType);

                    /**
                     * 判断参数 VarModuleType 是否已赋值
                     * @return VarModuleType 是否已赋值
                     * 
                     */
                    bool VarModuleTypeHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * <p>变量名称，不允许重复，最大支持50个字符，英文字母开头，支持英文数字与下划线”_”。</p>
                     */
                    std::string m_varName;
                    bool m_varNameHasBeenSet;

                    /**
                     * <p>变量描述，最大支持120个字符</p>
                     */
                    std::string m_varDesc;
                    bool m_varDescHasBeenSet;

                    /**
                     * <p>变量类型定义，支持类型如下：(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO);传输过程是json字符串，标签中仅支持&quot;STRING&quot;类型使用</p>
                     */
                    std::string m_varType;
                    bool m_varTypeHasBeenSet;

                    /**
                     * <p>自定义变量默认值，<code>VarDefaultValue</code>xa0默认为空</p>
                     */
                    std::string m_varDefaultValue;
                    bool m_varDefaultValueHasBeenSet;

                    /**
                     * <p>自定义变量文件默认名称，<code>VarDefaultFileName</code>默认为空</p>
                     */
                    std::string m_varDefaultFileName;
                    bool m_varDefaultFileNameHasBeenSet;

                    /**
                     * <p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul>
                     */
                    uint64_t m_varModuleType;
                    bool m_varModuleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEVARREQUEST_H_
