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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPUBLICCONFIGWITHDETAILRESPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPUBLICCONFIGWITHDETAILRESPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreatePublicConfigWithDetailResp请求参数结构体
                */
                class CreatePublicConfigWithDetailRespRequest : public AbstractModel
                {
                public:
                    CreatePublicConfigWithDetailRespRequest();
                    ~CreatePublicConfigWithDetailRespRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置项名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”、“_”），且不能以分隔符开头或结尾。
                     * @return ConfigName 配置项名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”、“_”），且不能以分隔符开头或结尾。
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置项名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”、“_”），且不能以分隔符开头或结尾。
                     * @param _configName 配置项名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”、“_”），且不能以分隔符开头或结尾。
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取配置项版本，最多支持60个字符，只能包含小写字母、数字及分隔符("-",".")，且必须以小写字母或数字开头、以小写字母或数字结尾，中间不能有连续的"-"或"."。
                     * @return ConfigVersion 配置项版本，最多支持60个字符，只能包含小写字母、数字及分隔符("-",".")，且必须以小写字母或数字开头、以小写字母或数字结尾，中间不能有连续的"-"或"."。
                     * 
                     */
                    std::string GetConfigVersion() const;

                    /**
                     * 设置配置项版本，最多支持60个字符，只能包含小写字母、数字及分隔符("-",".")，且必须以小写字母或数字开头、以小写字母或数字结尾，中间不能有连续的"-"或"."。
                     * @param _configVersion 配置项版本，最多支持60个字符，只能包含小写字母、数字及分隔符("-",".")，且必须以小写字母或数字开头、以小写字母或数字结尾，中间不能有连续的"-"或"."。
                     * 
                     */
                    void SetConfigVersion(const std::string& _configVersion);

                    /**
                     * 判断参数 ConfigVersion 是否已赋值
                     * @return ConfigVersion 是否已赋值
                     * 
                     */
                    bool ConfigVersionHasBeenSet() const;

                    /**
                     * 获取配置项值，总是接收yaml格式的内容。
                     * @return ConfigValue 配置项值，总是接收yaml格式的内容。
                     * 
                     */
                    std::string GetConfigValue() const;

                    /**
                     * 设置配置项值，总是接收yaml格式的内容。
                     * @param _configValue 配置项值，总是接收yaml格式的内容。
                     * 
                     */
                    void SetConfigValue(const std::string& _configValue);

                    /**
                     * 判断参数 ConfigValue 是否已赋值
                     * @return ConfigValue 是否已赋值
                     * 
                     */
                    bool ConfigValueHasBeenSet() const;

                    /**
                     * 获取配置项版本描述，最多支持200个字符。
                     * @return ConfigVersionDesc 配置项版本描述，最多支持200个字符。
                     * 
                     */
                    std::string GetConfigVersionDesc() const;

                    /**
                     * 设置配置项版本描述，最多支持200个字符。
                     * @param _configVersionDesc 配置项版本描述，最多支持200个字符。
                     * 
                     */
                    void SetConfigVersionDesc(const std::string& _configVersionDesc);

                    /**
                     * 判断参数 ConfigVersionDesc 是否已赋值
                     * @return ConfigVersionDesc 是否已赋值
                     * 
                     */
                    bool ConfigVersionDescHasBeenSet() const;

                    /**
                     * 获取配置项类型，固定值。
                     * @return ConfigType 配置项类型，固定值。
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置配置项类型，固定值。
                     * @param _configType 配置项类型，固定值。
                     * 
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取Base64编码的配置项。
- true：开启
- false：关闭
                     * @return EncodeWithBase64 Base64编码的配置项。
- true：开启
- false：关闭
                     * 
                     */
                    bool GetEncodeWithBase64() const;

                    /**
                     * 设置Base64编码的配置项。
- true：开启
- false：关闭
                     * @param _encodeWithBase64 Base64编码的配置项。
- true：开启
- false：关闭
                     * 
                     */
                    void SetEncodeWithBase64(const bool& _encodeWithBase64);

                    /**
                     * 判断参数 EncodeWithBase64 是否已赋值
                     * @return EncodeWithBase64 是否已赋值
                     * 
                     */
                    bool EncodeWithBase64HasBeenSet() const;

                    /**
                     * 获取需要绑定的数据集ID。该参数可以通过调用 [DescribePrograms](https://cloud.tencent.com/document/product/649/73477) 的返回值中的 ProgramId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/privilege?tab=program&roleId=role-yrle4doy)查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/product/649/108544)创建新的数据集。
                     * @return ProgramIdList 需要绑定的数据集ID。该参数可以通过调用 [DescribePrograms](https://cloud.tencent.com/document/product/649/73477) 的返回值中的 ProgramId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/privilege?tab=program&roleId=role-yrle4doy)查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/product/649/108544)创建新的数据集。
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置需要绑定的数据集ID。该参数可以通过调用 [DescribePrograms](https://cloud.tencent.com/document/product/649/73477) 的返回值中的 ProgramId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/privilege?tab=program&roleId=role-yrle4doy)查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/product/649/108544)创建新的数据集。
                     * @param _programIdList 需要绑定的数据集ID。该参数可以通过调用 [DescribePrograms](https://cloud.tencent.com/document/product/649/73477) 的返回值中的 ProgramId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/privilege?tab=program&roleId=role-yrle4doy)查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/product/649/108544)创建新的数据集。
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                private:

                    /**
                     * 配置项名称，最多支持60个字符，只能包含字母、数字及分隔符（“-”、“_”），且不能以分隔符开头或结尾。
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置项版本，最多支持60个字符，只能包含小写字母、数字及分隔符("-",".")，且必须以小写字母或数字开头、以小写字母或数字结尾，中间不能有连续的"-"或"."。
                     */
                    std::string m_configVersion;
                    bool m_configVersionHasBeenSet;

                    /**
                     * 配置项值，总是接收yaml格式的内容。
                     */
                    std::string m_configValue;
                    bool m_configValueHasBeenSet;

                    /**
                     * 配置项版本描述，最多支持200个字符。
                     */
                    std::string m_configVersionDesc;
                    bool m_configVersionDescHasBeenSet;

                    /**
                     * 配置项类型，固定值。
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * Base64编码的配置项。
- true：开启
- false：关闭
                     */
                    bool m_encodeWithBase64;
                    bool m_encodeWithBase64HasBeenSet;

                    /**
                     * 需要绑定的数据集ID。该参数可以通过调用 [DescribePrograms](https://cloud.tencent.com/document/product/649/73477) 的返回值中的 ProgramId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/privilege?tab=program&roleId=role-yrle4doy)查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/product/649/108544)创建新的数据集。
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPUBLICCONFIGWITHDETAILRESPREQUEST_H_
