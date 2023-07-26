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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_APPLETINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_APPLETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 小程序加固信息
                */
                class AppletInfo : public AbstractModel
                {
                public:
                    AppletInfo();
                    ~AppletInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户JS包
                     * @return AppletJsUrl 客户JS包
                     * 
                     */
                    std::string GetAppletJsUrl() const;

                    /**
                     * 设置客户JS包
                     * @param _appletJsUrl 客户JS包
                     * 
                     */
                    void SetAppletJsUrl(const std::string& _appletJsUrl);

                    /**
                     * 判断参数 AppletJsUrl 是否已赋值
                     * @return AppletJsUrl 是否已赋值
                     * 
                     */
                    bool AppletJsUrlHasBeenSet() const;

                    /**
                     * 获取小程序加固等级配置
1 - 开启代码混淆、代码压缩、代码反调试保护。 2 - 开启字符串编码和代码变换，代码膨胀，随机插入冗余代码，开启代码控制流平坦化，保证业务逻辑正常前提下，扁平化代码逻辑分支，破坏代码简单的线性结构。 3 - 开启代码加密，对字符串、函数、变量、属性、类、数组等结构进行加密保护，更多得代码控制流平坦化，扁平化逻辑分支。
                     * @return AppletLevel 小程序加固等级配置
1 - 开启代码混淆、代码压缩、代码反调试保护。 2 - 开启字符串编码和代码变换，代码膨胀，随机插入冗余代码，开启代码控制流平坦化，保证业务逻辑正常前提下，扁平化代码逻辑分支，破坏代码简单的线性结构。 3 - 开启代码加密，对字符串、函数、变量、属性、类、数组等结构进行加密保护，更多得代码控制流平坦化，扁平化逻辑分支。
                     * 
                     */
                    int64_t GetAppletLevel() const;

                    /**
                     * 设置小程序加固等级配置
1 - 开启代码混淆、代码压缩、代码反调试保护。 2 - 开启字符串编码和代码变换，代码膨胀，随机插入冗余代码，开启代码控制流平坦化，保证业务逻辑正常前提下，扁平化代码逻辑分支，破坏代码简单的线性结构。 3 - 开启代码加密，对字符串、函数、变量、属性、类、数组等结构进行加密保护，更多得代码控制流平坦化，扁平化逻辑分支。
                     * @param _appletLevel 小程序加固等级配置
1 - 开启代码混淆、代码压缩、代码反调试保护。 2 - 开启字符串编码和代码变换，代码膨胀，随机插入冗余代码，开启代码控制流平坦化，保证业务逻辑正常前提下，扁平化代码逻辑分支，破坏代码简单的线性结构。 3 - 开启代码加密，对字符串、函数、变量、属性、类、数组等结构进行加密保护，更多得代码控制流平坦化，扁平化逻辑分支。
                     * 
                     */
                    void SetAppletLevel(const int64_t& _appletLevel);

                    /**
                     * 判断参数 AppletLevel 是否已赋值
                     * @return AppletLevel 是否已赋值
                     * 
                     */
                    bool AppletLevelHasBeenSet() const;

                    /**
                     * 获取本次加固输出产物名称，如”test.zip“,非空必须是 ”.zip“结尾
                     * @return Name 本次加固输出产物名称，如”test.zip“,非空必须是 ”.zip“结尾
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置本次加固输出产物名称，如”test.zip“,非空必须是 ”.zip“结尾
                     * @param _name 本次加固输出产物名称，如”test.zip“,非空必须是 ”.zip“结尾
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 客户JS包
                     */
                    std::string m_appletJsUrl;
                    bool m_appletJsUrlHasBeenSet;

                    /**
                     * 小程序加固等级配置
1 - 开启代码混淆、代码压缩、代码反调试保护。 2 - 开启字符串编码和代码变换，代码膨胀，随机插入冗余代码，开启代码控制流平坦化，保证业务逻辑正常前提下，扁平化代码逻辑分支，破坏代码简单的线性结构。 3 - 开启代码加密，对字符串、函数、变量、属性、类、数组等结构进行加密保护，更多得代码控制流平坦化，扁平化逻辑分支。
                     */
                    int64_t m_appletLevel;
                    bool m_appletLevelHasBeenSet;

                    /**
                     * 本次加固输出产物名称，如”test.zip“,非空必须是 ”.zip“结尾
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_APPLETINFO_H_
