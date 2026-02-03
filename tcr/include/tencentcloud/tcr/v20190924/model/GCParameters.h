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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_GCPARAMETERS_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_GCPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * GC 参数
                */
                class GCParameters : public AbstractModel
                {
                public:
                    GCParameters();
                    ~GCParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模拟运行
                     * @return Dryrun 模拟运行
                     * 
                     */
                    bool GetDryrun() const;

                    /**
                     * 设置模拟运行
                     * @param _dryrun 模拟运行
                     * 
                     */
                    void SetDryrun(const bool& _dryrun);

                    /**
                     * 判断参数 Dryrun 是否已赋值
                     * @return Dryrun 是否已赋值
                     * 
                     */
                    bool DryrunHasBeenSet() const;

                private:

                    /**
                     * 模拟运行
                     */
                    bool m_dryrun;
                    bool m_dryrunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_GCPARAMETERS_H_
