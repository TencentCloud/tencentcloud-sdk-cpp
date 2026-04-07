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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROGRAMALERTCOUNTS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROGRAMALERTCOUNTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 线性组装Program聚合告警信息
                */
                class ProgramAlertCounts : public AbstractModel
                {
                public:
                    ProgramAlertCounts();
                    ~ProgramAlertCounts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Program ID。</p>
                     * @return ProgramId <p>Program ID。</p>
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置<p>Program ID。</p>
                     * @param _programId <p>Program ID。</p>
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取<p>Program名称。</p>
                     * @return ProgramName <p>Program名称。</p>
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置<p>Program名称。</p>
                     * @param _programName <p>Program名称。</p>
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                    /**
                     * 获取<p>告警分类。</p>
                     * @return Category <p>告警分类。</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>告警分类。</p>
                     * @param _category <p>告警分类。</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>出现次数</p>
                     * @return Count <p>出现次数</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置<p>出现次数</p>
                     * @param _count <p>出现次数</p>
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>更新时间。</p>
                     * @return LastModifiedTime <p>更新时间。</p>
                     * 
                     */
                    uint64_t GetLastModifiedTime() const;

                    /**
                     * 设置<p>更新时间。</p>
                     * @param _lastModifiedTime <p>更新时间。</p>
                     * 
                     */
                    void SetLastModifiedTime(const uint64_t& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Program ID。</p>
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * <p>Program名称。</p>
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * <p>告警分类。</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>出现次数</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>更新时间。</p>
                     */
                    uint64_t m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROGRAMALERTCOUNTS_H_
