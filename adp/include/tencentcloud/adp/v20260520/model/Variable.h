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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_VARIABLE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_VARIABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 变量信息
                */
                class Variable : public AbstractModel
                {
                public:
                    Variable();
                    ~Variable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>默认文件名称</p>
                     * @return DefaultFileName <p>默认文件名称</p>
                     * 
                     */
                    std::string GetDefaultFileName() const;

                    /**
                     * 设置<p>默认文件名称</p>
                     * @param _defaultFileName <p>默认文件名称</p>
                     * 
                     */
                    void SetDefaultFileName(const std::string& _defaultFileName);

                    /**
                     * 判断参数 DefaultFileName 是否已赋值
                     * @return DefaultFileName 是否已赋值
                     * 
                     */
                    bool DefaultFileNameHasBeenSet() const;

                    /**
                     * 获取<p>默认值</p>
                     * @return DefaultValue <p>默认值</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>默认值</p>
                     * @param _defaultValue <p>默认值</p>
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取<p>变量描述</p>
                     * @return Description <p>变量描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>变量描述</p>
                     * @param _description <p>变量描述</p>
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
                     * 获取<p>模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数</p>
                     * @return ModuleType <p>模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数</p>
                     * 
                     */
                    int64_t GetModuleType() const;

                    /**
                     * 设置<p>模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数</p>
                     * @param _moduleType <p>模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数</p>
                     * 
                     */
                    void SetModuleType(const int64_t& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>变量名称</p>
                     * @return Name <p>变量名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>变量名称</p>
                     * @param _name <p>变量名称</p>
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
                     * 获取<p>变量类型</p><p>枚举值：</p><ul><li>0： 字符串</li><li>1： 整数</li><li>2： 浮点数</li><li>3： 布尔值</li><li>4： 对象</li><li>5： 字符串数组</li><li>6： 整数数组</li><li>7： 浮点数数组</li><li>8： 布尔值数组</li><li>9： 对象数组</li><li>10： 文件</li><li>11： 文档</li><li>12： 图片</li><li>13： 音频</li><li>14： 视频</li><li>15： 文件数组</li><li>16： 文档数组</li><li>17： 图片数组</li><li>18： 音频数组</li><li>19： 视频数组</li><li>20： 数组的数组</li><li>21： 密钥</li></ul>
                     * @return Type <p>变量类型</p><p>枚举值：</p><ul><li>0： 字符串</li><li>1： 整数</li><li>2： 浮点数</li><li>3： 布尔值</li><li>4： 对象</li><li>5： 字符串数组</li><li>6： 整数数组</li><li>7： 浮点数数组</li><li>8： 布尔值数组</li><li>9： 对象数组</li><li>10： 文件</li><li>11： 文档</li><li>12： 图片</li><li>13： 音频</li><li>14： 视频</li><li>15： 文件数组</li><li>16： 文档数组</li><li>17： 图片数组</li><li>18： 音频数组</li><li>19： 视频数组</li><li>20： 数组的数组</li><li>21： 密钥</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>变量类型</p><p>枚举值：</p><ul><li>0： 字符串</li><li>1： 整数</li><li>2： 浮点数</li><li>3： 布尔值</li><li>4： 对象</li><li>5： 字符串数组</li><li>6： 整数数组</li><li>7： 浮点数数组</li><li>8： 布尔值数组</li><li>9： 对象数组</li><li>10： 文件</li><li>11： 文档</li><li>12： 图片</li><li>13： 音频</li><li>14： 视频</li><li>15： 文件数组</li><li>16： 文档数组</li><li>17： 图片数组</li><li>18： 音频数组</li><li>19： 视频数组</li><li>20： 数组的数组</li><li>21： 密钥</li></ul>
                     * @param _type <p>变量类型</p><p>枚举值：</p><ul><li>0： 字符串</li><li>1： 整数</li><li>2： 浮点数</li><li>3： 布尔值</li><li>4： 对象</li><li>5： 字符串数组</li><li>6： 整数数组</li><li>7： 浮点数数组</li><li>8： 布尔值数组</li><li>9： 对象数组</li><li>10： 文件</li><li>11： 文档</li><li>12： 图片</li><li>13： 音频</li><li>14： 视频</li><li>15： 文件数组</li><li>16： 文档数组</li><li>17： 图片数组</li><li>18： 音频数组</li><li>19： 视频数组</li><li>20： 数组的数组</li><li>21： 密钥</li></ul>
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
                     * 获取<p>变量ID</p>
                     * @return VariableId <p>变量ID</p>
                     * 
                     */
                    std::string GetVariableId() const;

                    /**
                     * 设置<p>变量ID</p>
                     * @param _variableId <p>变量ID</p>
                     * 
                     */
                    void SetVariableId(const std::string& _variableId);

                    /**
                     * 判断参数 VariableId 是否已赋值
                     * @return VariableId 是否已赋值
                     * 
                     */
                    bool VariableIdHasBeenSet() const;

                    /**
                     * 获取<p>是否启用网络策略(仅环境变量生效)</p>
                     * @return EnableEndpoints <p>是否启用网络策略(仅环境变量生效)</p>
                     * 
                     */
                    bool GetEnableEndpoints() const;

                    /**
                     * 设置<p>是否启用网络策略(仅环境变量生效)</p>
                     * @param _enableEndpoints <p>是否启用网络策略(仅环境变量生效)</p>
                     * 
                     */
                    void SetEnableEndpoints(const bool& _enableEndpoints);

                    /**
                     * 判断参数 EnableEndpoints 是否已赋值
                     * @return EnableEndpoints 是否已赋值
                     * 
                     */
                    bool EnableEndpointsHasBeenSet() const;

                    /**
                     * 获取<p>网络策略列表(支持: 精确域名、*.通配子域名、可带协议/端口/路径前缀)</p>
                     * @return EndpointList <p>网络策略列表(支持: 精确域名、*.通配子域名、可带协议/端口/路径前缀)</p>
                     * 
                     */
                    std::vector<std::string> GetEndpointList() const;

                    /**
                     * 设置<p>网络策略列表(支持: 精确域名、*.通配子域名、可带协议/端口/路径前缀)</p>
                     * @param _endpointList <p>网络策略列表(支持: 精确域名、*.通配子域名、可带协议/端口/路径前缀)</p>
                     * 
                     */
                    void SetEndpointList(const std::vector<std::string>& _endpointList);

                    /**
                     * 判断参数 EndpointList 是否已赋值
                     * @return EndpointList 是否已赋值
                     * 
                     */
                    bool EndpointListHasBeenSet() const;

                private:

                    /**
                     * <p>默认文件名称</p>
                     */
                    std::string m_defaultFileName;
                    bool m_defaultFileNameHasBeenSet;

                    /**
                     * <p>默认值</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>变量描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模块类型。枚举值: 1:环境参数, 2:应用参数, 3:系统参数, -1:所有参数</p>
                     */
                    int64_t m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * <p>变量名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>变量类型</p><p>枚举值：</p><ul><li>0： 字符串</li><li>1： 整数</li><li>2： 浮点数</li><li>3： 布尔值</li><li>4： 对象</li><li>5： 字符串数组</li><li>6： 整数数组</li><li>7： 浮点数数组</li><li>8： 布尔值数组</li><li>9： 对象数组</li><li>10： 文件</li><li>11： 文档</li><li>12： 图片</li><li>13： 音频</li><li>14： 视频</li><li>15： 文件数组</li><li>16： 文档数组</li><li>17： 图片数组</li><li>18： 音频数组</li><li>19： 视频数组</li><li>20： 数组的数组</li><li>21： 密钥</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>变量ID</p>
                     */
                    std::string m_variableId;
                    bool m_variableIdHasBeenSet;

                    /**
                     * <p>是否启用网络策略(仅环境变量生效)</p>
                     */
                    bool m_enableEndpoints;
                    bool m_enableEndpointsHasBeenSet;

                    /**
                     * <p>网络策略列表(支持: 精确域名、*.通配子域名、可带协议/端口/路径前缀)</p>
                     */
                    std::vector<std::string> m_endpointList;
                    bool m_endpointListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_VARIABLE_H_
