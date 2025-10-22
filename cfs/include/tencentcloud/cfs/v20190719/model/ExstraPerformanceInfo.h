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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_EXSTRAPERFORMANCEINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_EXSTRAPERFORMANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 购买完额外性能之后的值
                */
                class ExstraPerformanceInfo : public AbstractModel
                {
                public:
                    ExstraPerformanceInfo();
                    ~ExstraPerformanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取fixed: 最终值固定
                     * @return Type fixed: 最终值固定
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置fixed: 最终值固定
                     * @param _type fixed: 最终值固定
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取额外购买的CFS性能值，单位MB/s。
                     * @return Performance 额外购买的CFS性能值，单位MB/s。
                     * 
                     */
                    int64_t GetPerformance() const;

                    /**
                     * 设置额外购买的CFS性能值，单位MB/s。
                     * @param _performance 额外购买的CFS性能值，单位MB/s。
                     * 
                     */
                    void SetPerformance(const int64_t& _performance);

                    /**
                     * 判断参数 Performance 是否已赋值
                     * @return Performance 是否已赋值
                     * 
                     */
                    bool PerformanceHasBeenSet() const;

                private:

                    /**
                     * fixed: 最终值固定
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 额外购买的CFS性能值，单位MB/s。
                     */
                    int64_t m_performance;
                    bool m_performanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_EXSTRAPERFORMANCEINFO_H_
