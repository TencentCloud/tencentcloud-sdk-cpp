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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_CHIEFCOMPLAINTDETAILBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_CHIEFCOMPLAINTDETAILBLOCK_H_

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
                * 主诉详情
                */
                class ChiefComplaintDetailBlock : public AbstractModel
                {
                public:
                    ChiefComplaintDetailBlock();
                    ~ChiefComplaintDetailBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取疾病名称
                     * @return DiseaseName 疾病名称
                     * 
                     */
                    std::string GetDiseaseName() const;

                    /**
                     * 设置疾病名称
                     * @param _diseaseName 疾病名称
                     * 
                     */
                    void SetDiseaseName(const std::string& _diseaseName);

                    /**
                     * 判断参数 DiseaseName 是否已赋值
                     * @return DiseaseName 是否已赋值
                     * 
                     */
                    bool DiseaseNameHasBeenSet() const;

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
                     * 获取时间
                     * @return Time 时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间
                     * @param _time 时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取时间类型
                     * @return TimeType 时间类型
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 设置时间类型
                     * @param _timeType 时间类型
                     * 
                     */
                    void SetTimeType(const std::string& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                private:

                    /**
                     * 疾病名称
                     */
                    std::string m_diseaseName;
                    bool m_diseaseNameHasBeenSet;

                    /**
                     * 部位
                     */
                    std::string m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 时间类型
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_CHIEFCOMPLAINTDETAILBLOCK_H_
