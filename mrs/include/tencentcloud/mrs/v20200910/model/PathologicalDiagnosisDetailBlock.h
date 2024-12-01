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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGICALDIAGNOSISDETAILBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGICALDIAGNOSISDETAILBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 病理详细
                */
                class PathologicalDiagnosisDetailBlock : public AbstractModel
                {
                public:
                    PathologicalDiagnosisDetailBlock();
                    ~PathologicalDiagnosisDetailBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部位
                     * @return Part 部位
                     * 
                     */
                    std::string GetPart() const;

                    /**
                     * 设置部位
                     * @param _part 部位
                     * 
                     */
                    void SetPart(const std::string& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     * 
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return HistologicalType 类型
                     * 
                     */
                    std::string GetHistologicalType() const;

                    /**
                     * 设置类型
                     * @param _histologicalType 类型
                     * 
                     */
                    void SetHistologicalType(const std::string& _histologicalType);

                    /**
                     * 判断参数 HistologicalType 是否已赋值
                     * @return HistologicalType 是否已赋值
                     * 
                     */
                    bool HistologicalTypeHasBeenSet() const;

                    /**
                     * 获取等级
                     * @return HistologicalGrade 等级
                     * 
                     */
                    std::string GetHistologicalGrade() const;

                    /**
                     * 设置等级
                     * @param _histologicalGrade 等级
                     * 
                     */
                    void SetHistologicalGrade(const std::string& _histologicalGrade);

                    /**
                     * 判断参数 HistologicalGrade 是否已赋值
                     * @return HistologicalGrade 是否已赋值
                     * 
                     */
                    bool HistologicalGradeHasBeenSet() const;

                private:

                    /**
                     * 部位
                     */
                    std::string m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_histologicalType;
                    bool m_histologicalTypeHasBeenSet;

                    /**
                     * 等级
                     */
                    std::string m_histologicalGrade;
                    bool m_histologicalGradeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PATHOLOGICALDIAGNOSISDETAILBLOCK_H_
