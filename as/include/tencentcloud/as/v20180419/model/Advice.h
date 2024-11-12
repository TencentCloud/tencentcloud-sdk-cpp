/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ADVICE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ADVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 伸缩配置建议。
                */
                class Advice : public AbstractModel
                {
                public:
                    Advice();
                    ~Advice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取问题描述。
                     * @return Problem 问题描述。
                     * 
                     */
                    std::string GetProblem() const;

                    /**
                     * 设置问题描述。
                     * @param _problem 问题描述。
                     * 
                     */
                    void SetProblem(const std::string& _problem);

                    /**
                     * 判断参数 Problem 是否已赋值
                     * @return Problem 是否已赋值
                     * 
                     */
                    bool ProblemHasBeenSet() const;

                    /**
                     * 获取问题详情。
                     * @return Detail 问题详情。
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置问题详情。
                     * @param _detail 问题详情。
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取建议解决方案。
                     * @return Solution 建议解决方案。
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置建议解决方案。
                     * @param _solution 建议解决方案。
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取伸缩建议警告级别。取值范围：
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     * @return Level 伸缩建议警告级别。取值范围：
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置伸缩建议警告级别。取值范围：
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     * @param _level 伸缩建议警告级别。取值范围：
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 问题描述。
                     */
                    std::string m_problem;
                    bool m_problemHasBeenSet;

                    /**
                     * 问题详情。
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 建议解决方案。
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 伸缩建议警告级别。取值范围：
<li>WARNING：警告级别</li>
<li>CRITICAL：严重级别</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ADVICE_H_
