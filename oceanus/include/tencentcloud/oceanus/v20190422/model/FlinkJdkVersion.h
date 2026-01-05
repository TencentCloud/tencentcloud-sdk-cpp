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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_FLINKJDKVERSION_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_FLINKJDKVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * flink jdk版本
                */
                class FlinkJdkVersion : public AbstractModel
                {
                public:
                    FlinkJdkVersion();
                    ~FlinkJdkVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取flink版本
                     * @return FlinkVersion flink版本
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置flink版本
                     * @param _flinkVersion flink版本
                     * 
                     */
                    void SetFlinkVersion(const std::string& _flinkVersion);

                    /**
                     * 判断参数 FlinkVersion 是否已赋值
                     * @return FlinkVersion 是否已赋值
                     * 
                     */
                    bool FlinkVersionHasBeenSet() const;

                    /**
                     * 获取jdk版本
                     * @return JdkVersions jdk版本
                     * 
                     */
                    std::vector<std::string> GetJdkVersions() const;

                    /**
                     * 设置jdk版本
                     * @param _jdkVersions jdk版本
                     * 
                     */
                    void SetJdkVersions(const std::vector<std::string>& _jdkVersions);

                    /**
                     * 判断参数 JdkVersions 是否已赋值
                     * @return JdkVersions 是否已赋值
                     * 
                     */
                    bool JdkVersionsHasBeenSet() const;

                private:

                    /**
                     * flink版本
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * jdk版本
                     */
                    std::vector<std::string> m_jdkVersions;
                    bool m_jdkVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_FLINKJDKVERSION_H_
