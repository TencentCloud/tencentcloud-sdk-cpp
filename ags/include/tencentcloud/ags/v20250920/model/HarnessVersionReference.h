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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_HARNESSVERSIONREFERENCE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_HARNESSVERSIONREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 资产版本支持的 Harness 引擎与具体版本。HarnessEngine 和 HarnessEngineVersion 原样使用 DescribeHarnessEngineList 返回的选项，两个字段共同确定兼容性。
                */
                class HarnessVersionReference : public AbstractModel
                {
                public:
                    HarnessVersionReference();
                    ~HarnessVersionReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Harness 引擎标识，原样使用 DescribeHarnessEngineList 返回的 HarnessEngine，例如 pi。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或范围表达式。与同一对象的 HarnessEngineVersion 共同标识支持的版本。</p>
                     * @return HarnessEngine <p>Harness 引擎标识，原样使用 DescribeHarnessEngineList 返回的 HarnessEngine，例如 pi。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或范围表达式。与同一对象的 HarnessEngineVersion 共同标识支持的版本。</p>
                     * 
                     */
                    std::string GetHarnessEngine() const;

                    /**
                     * 设置<p>Harness 引擎标识，原样使用 DescribeHarnessEngineList 返回的 HarnessEngine，例如 pi。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或范围表达式。与同一对象的 HarnessEngineVersion 共同标识支持的版本。</p>
                     * @param _harnessEngine <p>Harness 引擎标识，原样使用 DescribeHarnessEngineList 返回的 HarnessEngine，例如 pi。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或范围表达式。与同一对象的 HarnessEngineVersion 共同标识支持的版本。</p>
                     * 
                     */
                    void SetHarnessEngine(const std::string& _harnessEngine);

                    /**
                     * 判断参数 HarnessEngine 是否已赋值
                     * @return HarnessEngine 是否已赋值
                     * 
                     */
                    bool HarnessEngineHasBeenSet() const;

                    /**
                     * 获取<p>Harness 引擎的具体版本，原样使用 DescribeHarnessEngineList 返回的 HarnessEngineVersion，例如 1.3.0。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或版本范围。必须与同一个对象的 HarnessEngine 精确匹配；不能只比较版本号，也不自行拼接标识。</p>
                     * @return HarnessEngineVersion <p>Harness 引擎的具体版本，原样使用 DescribeHarnessEngineList 返回的 HarnessEngineVersion，例如 1.3.0。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或版本范围。必须与同一个对象的 HarnessEngine 精确匹配；不能只比较版本号，也不自行拼接标识。</p>
                     * 
                     */
                    std::string GetHarnessEngineVersion() const;

                    /**
                     * 设置<p>Harness 引擎的具体版本，原样使用 DescribeHarnessEngineList 返回的 HarnessEngineVersion，例如 1.3.0。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或版本范围。必须与同一个对象的 HarnessEngine 精确匹配；不能只比较版本号，也不自行拼接标识。</p>
                     * @param _harnessEngineVersion <p>Harness 引擎的具体版本，原样使用 DescribeHarnessEngineList 返回的 HarnessEngineVersion，例如 1.3.0。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或版本范围。必须与同一个对象的 HarnessEngine 精确匹配；不能只比较版本号，也不自行拼接标识。</p>
                     * 
                     */
                    void SetHarnessEngineVersion(const std::string& _harnessEngineVersion);

                    /**
                     * 判断参数 HarnessEngineVersion 是否已赋值
                     * @return HarnessEngineVersion 是否已赋值
                     * 
                     */
                    bool HarnessEngineVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Harness 引擎标识，原样使用 DescribeHarnessEngineList 返回的 HarnessEngine，例如 pi。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或范围表达式。与同一对象的 HarnessEngineVersion 共同标识支持的版本。</p>
                     */
                    std::string m_harnessEngine;
                    bool m_harnessEngineHasBeenSet;

                    /**
                     * <p>Harness 引擎的具体版本，原样使用 DescribeHarnessEngineList 返回的 HarnessEngineVersion，例如 1.3.0。</p><p>参数格式：必填，1 至 128 字符，区分大小写，不含空白、通配符或版本范围。必须与同一个对象的 HarnessEngine 精确匹配；不能只比较版本号，也不自行拼接标识。</p>
                     */
                    std::string m_harnessEngineVersion;
                    bool m_harnessEngineVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_HARNESSVERSIONREFERENCE_H_
