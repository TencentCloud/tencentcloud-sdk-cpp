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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_UPDATEVARREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_UPDATEVARREQUEST_H_

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
                * UpdateVar请求参数结构体
                */
                class UpdateVarRequest : public AbstractModel
                {
                public:
                    UpdateVarRequest();
                    ~UpdateVarRequest() = default;
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
                     * 获取<p>变量 ID。由 CreateVar 接口生成，通过 CreateVar / DescribeVar 返回结果获取。</p>
                     * @return VarId <p>变量 ID。由 CreateVar 接口生成，通过 CreateVar / DescribeVar 返回结果获取。</p>
                     * 
                     */
                    std::string GetVarId() const;

                    /**
                     * 设置<p>变量 ID。由 CreateVar 接口生成，通过 CreateVar / DescribeVar 返回结果获取。</p>
                     * @param _varId <p>变量 ID。由 CreateVar 接口生成，通过 CreateVar / DescribeVar 返回结果获取。</p>
                     * 
                     */
                    void SetVarId(const std::string& _varId);

                    /**
                     * 判断参数 VarId 是否已赋值
                     * @return VarId 是否已赋值
                     * 
                     */
                    bool VarIdHasBeenSet() const;

                    /**
                     * 获取<p>变量名称，最大支持50个字符，英文字母开头，支持英文数字与下划线”_” 。</p>
                     * @return VarName <p>变量名称，最大支持50个字符，英文字母开头，支持英文数字与下划线”_” 。</p>
                     * 
                     */
                    std::string GetVarName() const;

                    /**
                     * 设置<p>变量名称，最大支持50个字符，英文字母开头，支持英文数字与下划线”_” 。</p>
                     * @param _varName <p>变量名称，最大支持50个字符，英文字母开头，支持英文数字与下划线”_” 。</p>
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
                     * 获取<p>参数描述</p>
                     * @return VarDesc <p>参数描述</p>
                     * 
                     */
                    std::string GetVarDesc() const;

                    /**
                     * 设置<p>参数描述</p>
                     * @param _varDesc <p>参数描述</p>
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
                     * 获取<p>变量类型</p><p>枚举值：</p><ul><li>STRING： 字符串</li><li>INT： 整形</li><li>BOOL： 布尔型</li><li>OBJECT： 对象</li><li>ARRAY_STRING： 字符串数组</li><li>ARRAY_INT： 整型数组</li><li>ARRAY_FLOAT： 浮点型数组</li><li>ARRAY_BOOL： 布尔型数组</li><li>ARRAY_OBJECT： 对象数组</li><li>FILE： 文件类型</li><li>DOCUMENT： 文档类型</li><li>IMAGE： 图片类型</li><li>AUDIO： 音频</li><li>VIDEO： 视频</li><li>ARRAY_FILE： 文件数组</li><li>ARRAY_DOCUMENT： 文档数组</li><li>ARRAY_IMAGE： 图片数组</li><li>ARRAY_AUDIO： 音频数组</li><li>ARRAY_VIDEO： 视频数组</li><li>SECRET： 秘钥</li><li>ARRAY_ARRAY： 多维数组</li></ul><p>默认值：STRING</p>
                     * @return VarType <p>变量类型</p><p>枚举值：</p><ul><li>STRING： 字符串</li><li>INT： 整形</li><li>BOOL： 布尔型</li><li>OBJECT： 对象</li><li>ARRAY_STRING： 字符串数组</li><li>ARRAY_INT： 整型数组</li><li>ARRAY_FLOAT： 浮点型数组</li><li>ARRAY_BOOL： 布尔型数组</li><li>ARRAY_OBJECT： 对象数组</li><li>FILE： 文件类型</li><li>DOCUMENT： 文档类型</li><li>IMAGE： 图片类型</li><li>AUDIO： 音频</li><li>VIDEO： 视频</li><li>ARRAY_FILE： 文件数组</li><li>ARRAY_DOCUMENT： 文档数组</li><li>ARRAY_IMAGE： 图片数组</li><li>ARRAY_AUDIO： 音频数组</li><li>ARRAY_VIDEO： 视频数组</li><li>SECRET： 秘钥</li><li>ARRAY_ARRAY： 多维数组</li></ul><p>默认值：STRING</p>
                     * 
                     */
                    std::string GetVarType() const;

                    /**
                     * 设置<p>变量类型</p><p>枚举值：</p><ul><li>STRING： 字符串</li><li>INT： 整形</li><li>BOOL： 布尔型</li><li>OBJECT： 对象</li><li>ARRAY_STRING： 字符串数组</li><li>ARRAY_INT： 整型数组</li><li>ARRAY_FLOAT： 浮点型数组</li><li>ARRAY_BOOL： 布尔型数组</li><li>ARRAY_OBJECT： 对象数组</li><li>FILE： 文件类型</li><li>DOCUMENT： 文档类型</li><li>IMAGE： 图片类型</li><li>AUDIO： 音频</li><li>VIDEO： 视频</li><li>ARRAY_FILE： 文件数组</li><li>ARRAY_DOCUMENT： 文档数组</li><li>ARRAY_IMAGE： 图片数组</li><li>ARRAY_AUDIO： 音频数组</li><li>ARRAY_VIDEO： 视频数组</li><li>SECRET： 秘钥</li><li>ARRAY_ARRAY： 多维数组</li></ul><p>默认值：STRING</p>
                     * @param _varType <p>变量类型</p><p>枚举值：</p><ul><li>STRING： 字符串</li><li>INT： 整形</li><li>BOOL： 布尔型</li><li>OBJECT： 对象</li><li>ARRAY_STRING： 字符串数组</li><li>ARRAY_INT： 整型数组</li><li>ARRAY_FLOAT： 浮点型数组</li><li>ARRAY_BOOL： 布尔型数组</li><li>ARRAY_OBJECT： 对象数组</li><li>FILE： 文件类型</li><li>DOCUMENT： 文档类型</li><li>IMAGE： 图片类型</li><li>AUDIO： 音频</li><li>VIDEO： 视频</li><li>ARRAY_FILE： 文件数组</li><li>ARRAY_DOCUMENT： 文档数组</li><li>ARRAY_IMAGE： 图片数组</li><li>ARRAY_AUDIO： 音频数组</li><li>ARRAY_VIDEO： 视频数组</li><li>SECRET： 秘钥</li><li>ARRAY_ARRAY： 多维数组</li></ul><p>默认值：STRING</p>
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
                     * 获取<p>自定义变量默认值，<code>VarDefaultValue</code>&nbsp;默认为空</p>
                     * @return VarDefaultValue <p>自定义变量默认值，<code>VarDefaultValue</code>&nbsp;默认为空</p>
                     * 
                     */
                    std::string GetVarDefaultValue() const;

                    /**
                     * 设置<p>自定义变量默认值，<code>VarDefaultValue</code>&nbsp;默认为空</p>
                     * @param _varDefaultValue <p>自定义变量默认值，<code>VarDefaultValue</code>&nbsp;默认为空</p>
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
                     * 获取<p>自定义变量文件默认名称，<code>VarDefaultFileName</code> 默认为空</p>
                     * @return VarDefaultFileName <p>自定义变量文件默认名称，<code>VarDefaultFileName</code> 默认为空</p>
                     * 
                     */
                    std::string GetVarDefaultFileName() const;

                    /**
                     * 设置<p>自定义变量文件默认名称，<code>VarDefaultFileName</code> 默认为空</p>
                     * @param _varDefaultFileName <p>自定义变量文件默认名称，<code>VarDefaultFileName</code> 默认为空</p>
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
                     * <p>变量 ID。由 CreateVar 接口生成，通过 CreateVar / DescribeVar 返回结果获取。</p>
                     */
                    std::string m_varId;
                    bool m_varIdHasBeenSet;

                    /**
                     * <p>变量名称，最大支持50个字符，英文字母开头，支持英文数字与下划线”_” 。</p>
                     */
                    std::string m_varName;
                    bool m_varNameHasBeenSet;

                    /**
                     * <p>参数描述</p>
                     */
                    std::string m_varDesc;
                    bool m_varDescHasBeenSet;

                    /**
                     * <p>变量类型</p><p>枚举值：</p><ul><li>STRING： 字符串</li><li>INT： 整形</li><li>BOOL： 布尔型</li><li>OBJECT： 对象</li><li>ARRAY_STRING： 字符串数组</li><li>ARRAY_INT： 整型数组</li><li>ARRAY_FLOAT： 浮点型数组</li><li>ARRAY_BOOL： 布尔型数组</li><li>ARRAY_OBJECT： 对象数组</li><li>FILE： 文件类型</li><li>DOCUMENT： 文档类型</li><li>IMAGE： 图片类型</li><li>AUDIO： 音频</li><li>VIDEO： 视频</li><li>ARRAY_FILE： 文件数组</li><li>ARRAY_DOCUMENT： 文档数组</li><li>ARRAY_IMAGE： 图片数组</li><li>ARRAY_AUDIO： 音频数组</li><li>ARRAY_VIDEO： 视频数组</li><li>SECRET： 秘钥</li><li>ARRAY_ARRAY： 多维数组</li></ul><p>默认值：STRING</p>
                     */
                    std::string m_varType;
                    bool m_varTypeHasBeenSet;

                    /**
                     * <p>自定义变量默认值，<code>VarDefaultValue</code>&nbsp;默认为空</p>
                     */
                    std::string m_varDefaultValue;
                    bool m_varDefaultValueHasBeenSet;

                    /**
                     * <p>自定义变量文件默认名称，<code>VarDefaultFileName</code> 默认为空</p>
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

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UPDATEVARREQUEST_H_
