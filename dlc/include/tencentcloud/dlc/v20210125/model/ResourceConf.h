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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCECONF_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据治理资源配置项
                */
                class ResourceConf : public AbstractModel
                {
                public:
                    ResourceConf();
                    ~ResourceConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当为TCLake优化资源时，优化任务的并行度
                     * @return Parallelism 当为TCLake优化资源时，优化任务的并行度
                     * 
                     */
                    int64_t GetParallelism() const;

                    /**
                     * 设置当为TCLake优化资源时，优化任务的并行度
                     * @param _parallelism 当为TCLake优化资源时，优化任务的并行度
                     * 
                     */
                    void SetParallelism(const int64_t& _parallelism);

                    /**
                     * 判断参数 Parallelism 是否已赋值
                     * @return Parallelism 是否已赋值
                     * 
                     */
                    bool ParallelismHasBeenSet() const;

                private:

                    /**
                     * 当为TCLake优化资源时，优化任务的并行度
                     */
                    int64_t m_parallelism;
                    bool m_parallelismHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCECONF_H_
