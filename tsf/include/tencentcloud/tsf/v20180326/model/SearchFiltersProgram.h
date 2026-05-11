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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SEARCHFILTERSPROGRAM_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SEARCHFILTERSPROGRAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 模糊查询数据集信息指定字段和值
                */
                class SearchFiltersProgram : public AbstractModel
                {
                public:
                    SearchFiltersProgram();
                    ~SearchFiltersProgram() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据集ID</p>
                     * @return ProgramId <p>数据集ID</p>
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置<p>数据集ID</p>
                     * @param _programId <p>数据集ID</p>
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
                     * 获取<p>数据集名称</p>
                     * @return ProgramName <p>数据集名称</p>
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置<p>数据集名称</p>
                     * @param _programName <p>数据集名称</p>
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                private:

                    /**
                     * <p>数据集ID</p>
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * <p>数据集名称</p>
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SEARCHFILTERSPROGRAM_H_
