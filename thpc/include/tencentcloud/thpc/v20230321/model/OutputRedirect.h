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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_OUTPUTREDIRECT_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_OUTPUTREDIRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 输出重定向配置
                */
                class OutputRedirect : public AbstractModel
                {
                public:
                    OutputRedirect();
                    ~OutputRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出driver类型
                     * @return Driver 输出driver类型
                     * 
                     */
                    std::string GetDriver() const;

                    /**
                     * 设置输出driver类型
                     * @param _driver 输出driver类型
                     * 
                     */
                    void SetDriver(const std::string& _driver);

                    /**
                     * 判断参数 Driver 是否已赋值
                     * @return Driver 是否已赋值
                     * 
                     */
                    bool DriverHasBeenSet() const;

                    /**
                     * 获取重定向配置参数
                     * @return Options 重定向配置参数
                     * 
                     */
                    std::vector<std::string> GetOptions() const;

                    /**
                     * 设置重定向配置参数
                     * @param _options 重定向配置参数
                     * 
                     */
                    void SetOptions(const std::vector<std::string>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * 输出driver类型
                     */
                    std::string m_driver;
                    bool m_driverHasBeenSet;

                    /**
                     * 重定向配置参数
                     */
                    std::vector<std::string> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_OUTPUTREDIRECT_H_
