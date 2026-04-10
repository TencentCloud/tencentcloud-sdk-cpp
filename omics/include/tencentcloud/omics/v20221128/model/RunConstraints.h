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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNCONSTRAINTS_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNCONSTRAINTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 运行限制
                */
                class RunConstraints : public AbstractModel
                {
                public:
                    RunConstraints();
                    ~RunConstraints() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>运行时可选的Nextflow版本</p>
                     * @return NextflowVersion <p>运行时可选的Nextflow版本</p>
                     * 
                     */
                    std::vector<std::string> GetNextflowVersion() const;

                    /**
                     * 设置<p>运行时可选的Nextflow版本</p>
                     * @param _nextflowVersion <p>运行时可选的Nextflow版本</p>
                     * 
                     */
                    void SetNextflowVersion(const std::vector<std::string>& _nextflowVersion);

                    /**
                     * 判断参数 NextflowVersion 是否已赋值
                     * @return NextflowVersion 是否已赋值
                     * 
                     */
                    bool NextflowVersionHasBeenSet() const;

                private:

                    /**
                     * <p>运行时可选的Nextflow版本</p>
                     */
                    std::vector<std::string> m_nextflowVersion;
                    bool m_nextflowVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNCONSTRAINTS_H_
