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
                     * 获取<p>输出driver类型</p><p>枚举值：</p><ul><li>local： 宿主机本地目录</li><li>cos： 远端cos存储</li></ul><p>默认值：local</p>
                     * @return Driver <p>输出driver类型</p><p>枚举值：</p><ul><li>local： 宿主机本地目录</li><li>cos： 远端cos存储</li></ul><p>默认值：local</p>
                     * 
                     */
                    std::string GetDriver() const;

                    /**
                     * 设置<p>输出driver类型</p><p>枚举值：</p><ul><li>local： 宿主机本地目录</li><li>cos： 远端cos存储</li></ul><p>默认值：local</p>
                     * @param _driver <p>输出driver类型</p><p>枚举值：</p><ul><li>local： 宿主机本地目录</li><li>cos： 远端cos存储</li></ul><p>默认值：local</p>
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
                     * 获取<p>重定向配置参数</p><p>日志重定向路径，用于指定任务日志的输出目标。取值格式与 Driver 类型关联：<br>当 Driver 为 local 时，格式为本地文件路径，如 stdout=/tmp/train_out.log；<br>当 Driver 为 cos 时，格式为 COS 存储桶路径，如 stdout=cos://test-123456.cos.ap-shanghai.myqcloud.com/test/.</p>
                     * @return Options <p>重定向配置参数</p><p>日志重定向路径，用于指定任务日志的输出目标。取值格式与 Driver 类型关联：<br>当 Driver 为 local 时，格式为本地文件路径，如 stdout=/tmp/train_out.log；<br>当 Driver 为 cos 时，格式为 COS 存储桶路径，如 stdout=cos://test-123456.cos.ap-shanghai.myqcloud.com/test/.</p>
                     * 
                     */
                    std::vector<std::string> GetOptions() const;

                    /**
                     * 设置<p>重定向配置参数</p><p>日志重定向路径，用于指定任务日志的输出目标。取值格式与 Driver 类型关联：<br>当 Driver 为 local 时，格式为本地文件路径，如 stdout=/tmp/train_out.log；<br>当 Driver 为 cos 时，格式为 COS 存储桶路径，如 stdout=cos://test-123456.cos.ap-shanghai.myqcloud.com/test/.</p>
                     * @param _options <p>重定向配置参数</p><p>日志重定向路径，用于指定任务日志的输出目标。取值格式与 Driver 类型关联：<br>当 Driver 为 local 时，格式为本地文件路径，如 stdout=/tmp/train_out.log；<br>当 Driver 为 cos 时，格式为 COS 存储桶路径，如 stdout=cos://test-123456.cos.ap-shanghai.myqcloud.com/test/.</p>
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
                     * <p>输出driver类型</p><p>枚举值：</p><ul><li>local： 宿主机本地目录</li><li>cos： 远端cos存储</li></ul><p>默认值：local</p>
                     */
                    std::string m_driver;
                    bool m_driverHasBeenSet;

                    /**
                     * <p>重定向配置参数</p><p>日志重定向路径，用于指定任务日志的输出目标。取值格式与 Driver 类型关联：<br>当 Driver 为 local 时，格式为本地文件路径，如 stdout=/tmp/train_out.log；<br>当 Driver 为 cos 时，格式为 COS 存储桶路径，如 stdout=cos://test-123456.cos.ap-shanghai.myqcloud.com/test/.</p>
                     */
                    std::vector<std::string> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_OUTPUTREDIRECT_H_
