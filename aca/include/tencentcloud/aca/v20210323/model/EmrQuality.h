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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_EMRQUALITY_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_EMRQUALITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 病历质控
                */
                class EmrQuality : public AbstractModel
                {
                public:
                    EmrQuality();
                    ~EmrQuality() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缺失体格检查项目
                     * @return MissPhysicalExamination 缺失体格检查项目
                     * 
                     */
                    std::vector<std::string> GetMissPhysicalExamination() const;

                    /**
                     * 设置缺失体格检查项目
                     * @param _missPhysicalExamination 缺失体格检查项目
                     * 
                     */
                    void SetMissPhysicalExamination(const std::vector<std::string>& _missPhysicalExamination);

                    /**
                     * 判断参数 MissPhysicalExamination 是否已赋值
                     * @return MissPhysicalExamination 是否已赋值
                     * 
                     */
                    bool MissPhysicalExaminationHasBeenSet() const;

                private:

                    /**
                     * 缺失体格检查项目
                     */
                    std::vector<std::string> m_missPhysicalExamination;
                    bool m_missPhysicalExaminationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_EMRQUALITY_H_
