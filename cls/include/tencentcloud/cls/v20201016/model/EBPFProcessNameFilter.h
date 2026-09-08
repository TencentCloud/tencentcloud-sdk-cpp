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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EBPFPROCESSNAMEFILTER_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EBPFPROCESSNAMEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * eBPF 进程名过滤器
                */
                class EBPFProcessNameFilter : public AbstractModel
                {
                public:
                    EBPFProcessNameFilter();
                    ~EBPFProcessNameFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     * @return Mode <p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     * @param _mode <p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>进程名列表</p>
                     * @return ProcessNames <p>进程名列表</p>
                     * 
                     */
                    std::vector<std::string> GetProcessNames() const;

                    /**
                     * 设置<p>进程名列表</p>
                     * @param _processNames <p>进程名列表</p>
                     * 
                     */
                    void SetProcessNames(const std::vector<std::string>& _processNames);

                    /**
                     * 判断参数 ProcessNames 是否已赋值
                     * @return ProcessNames 是否已赋值
                     * 
                     */
                    bool ProcessNamesHasBeenSet() const;

                private:

                    /**
                     * <p>过滤模式</p><p>枚举值：</p><ul><li>0： 不过滤</li><li>1： 白名单</li><li>2： 黑名单</li></ul>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>进程名列表</p>
                     */
                    std::vector<std::string> m_processNames;
                    bool m_processNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EBPFPROCESSNAMEFILTER_H_
