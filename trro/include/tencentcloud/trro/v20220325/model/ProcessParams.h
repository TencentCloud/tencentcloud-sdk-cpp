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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_PROCESSPARAMS_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_PROCESSPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 标注处理参数
                */
                class ProcessParams : public AbstractModel
                {
                public:
                    ProcessParams();
                    ~ProcessParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标注处理模式，预留字段</p>
                     * @return Mode <p>标注处理模式，预留字段</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>标注处理模式，预留字段</p>
                     * @param _mode <p>标注处理模式，预留字段</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>标注档位</p>
                     * @return Edition <p>标注档位</p>
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置<p>标注档位</p>
                     * @param _edition <p>标注档位</p>
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取<p>通用扩展参数，json格式字符串</p>
                     * @return ExtraParams <p>通用扩展参数，json格式字符串</p>
                     * 
                     */
                    std::string GetExtraParams() const;

                    /**
                     * 设置<p>通用扩展参数，json格式字符串</p>
                     * @param _extraParams <p>通用扩展参数，json格式字符串</p>
                     * 
                     */
                    void SetExtraParams(const std::string& _extraParams);

                    /**
                     * 判断参数 ExtraParams 是否已赋值
                     * @return ExtraParams 是否已赋值
                     * 
                     */
                    bool ExtraParamsHasBeenSet() const;

                private:

                    /**
                     * <p>标注处理模式，预留字段</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>标注档位</p>
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * <p>通用扩展参数，json格式字符串</p>
                     */
                    std::string m_extraParams;
                    bool m_extraParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_PROCESSPARAMS_H_
