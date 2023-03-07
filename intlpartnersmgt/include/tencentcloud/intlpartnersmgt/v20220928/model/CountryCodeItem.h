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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COUNTRYCODEITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COUNTRYCODEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * 获取国家码接口的一个元素类型
                */
                class CountryCodeItem : public AbstractModel
                {
                public:
                    CountryCodeItem();
                    ~CountryCodeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国家英文名
                     * @return EnName 国家英文名
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置国家英文名
                     * @param EnName 国家英文名
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取国家中文名
                     * @return Name 国家中文名
                     */
                    std::string GetName() const;

                    /**
                     * 设置国家中文名
                     * @param Name 国家中文名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取ISO2标准国家/地区代码
                     * @return IOS2 ISO2标准国家/地区代码
                     */
                    std::string GetIOS2() const;

                    /**
                     * 设置ISO2标准国家/地区代码
                     * @param IOS2 ISO2标准国家/地区代码
                     */
                    void SetIOS2(const std::string& _iOS2);

                    /**
                     * 判断参数 IOS2 是否已赋值
                     * @return IOS2 是否已赋值
                     */
                    bool IOS2HasBeenSet() const;

                    /**
                     * 获取ISO3标准国家/地区代码
                     * @return IOS3 ISO3标准国家/地区代码
                     */
                    std::string GetIOS3() const;

                    /**
                     * 设置ISO3标准国家/地区代码
                     * @param IOS3 ISO3标准国家/地区代码
                     */
                    void SetIOS3(const std::string& _iOS3);

                    /**
                     * 判断参数 IOS3 是否已赋值
                     * @return IOS3 是否已赋值
                     */
                    bool IOS3HasBeenSet() const;

                    /**
                     * 获取电话代码
                     * @return Code 电话代码
                     */
                    std::string GetCode() const;

                    /**
                     * 设置电话代码
                     * @param Code 电话代码
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 国家英文名
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * 国家中文名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ISO2标准国家/地区代码
                     */
                    std::string m_iOS2;
                    bool m_iOS2HasBeenSet;

                    /**
                     * ISO3标准国家/地区代码
                     */
                    std::string m_iOS3;
                    bool m_iOS3HasBeenSet;

                    /**
                     * 电话代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COUNTRYCODEITEM_H_
