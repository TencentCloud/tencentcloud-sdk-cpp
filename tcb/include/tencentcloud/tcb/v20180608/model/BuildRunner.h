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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BUILDRUNNER_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BUILDRUNNER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 构建运行配置
                */
                class BuildRunner : public AbstractModel
                {
                public:
                    BuildRunner();
                    ~BuildRunner() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>构建服务所需 CPU 规格</p>
                     * @return Cpus <p>构建服务所需 CPU 规格</p>
                     * 
                     */
                    int64_t GetCpus() const;

                    /**
                     * 设置<p>构建服务所需 CPU 规格</p>
                     * @param _cpus <p>构建服务所需 CPU 规格</p>
                     * 
                     */
                    void SetCpus(const int64_t& _cpus);

                    /**
                     * 判断参数 Cpus 是否已赋值
                     * @return Cpus 是否已赋值
                     * 
                     */
                    bool CpusHasBeenSet() const;

                private:

                    /**
                     * <p>构建服务所需 CPU 规格</p>
                     */
                    int64_t m_cpus;
                    bool m_cpusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BUILDRUNNER_H_
