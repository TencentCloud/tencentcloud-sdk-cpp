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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_RECORDQUALITY_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_RECORDQUALITY_H_

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
                class RecordQuality : public AbstractModel
                {
                public:
                    RecordQuality();
                    ~RecordQuality() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取病历是否有问题
                     * @return Hit 病历是否有问题
                     * 
                     */
                    bool GetHit() const;

                    /**
                     * 设置病历是否有问题
                     * @param _hit 病历是否有问题
                     * 
                     */
                    void SetHit(const bool& _hit);

                    /**
                     * 判断参数 Hit 是否已赋值
                     * @return Hit 是否已赋值
                     * 
                     */
                    bool HitHasBeenSet() const;

                    /**
                     * 获取完整性问题
                     * @return Completeness 完整性问题
                     * 
                     */
                    std::string GetCompleteness() const;

                    /**
                     * 设置完整性问题
                     * @param _completeness 完整性问题
                     * 
                     */
                    void SetCompleteness(const std::string& _completeness);

                    /**
                     * 判断参数 Completeness 是否已赋值
                     * @return Completeness 是否已赋值
                     * 
                     */
                    bool CompletenessHasBeenSet() const;

                    /**
                     * 获取及时性问题
                     * @return Timeliness 及时性问题
                     * 
                     */
                    std::string GetTimeliness() const;

                    /**
                     * 设置及时性问题
                     * @param _timeliness 及时性问题
                     * 
                     */
                    void SetTimeliness(const std::string& _timeliness);

                    /**
                     * 判断参数 Timeliness 是否已赋值
                     * @return Timeliness 是否已赋值
                     * 
                     */
                    bool TimelinessHasBeenSet() const;

                    /**
                     * 获取逻辑性问题
                     * @return Logical 逻辑性问题
                     * 
                     */
                    std::string GetLogical() const;

                    /**
                     * 设置逻辑性问题
                     * @param _logical 逻辑性问题
                     * 
                     */
                    void SetLogical(const std::string& _logical);

                    /**
                     * 判断参数 Logical 是否已赋值
                     * @return Logical 是否已赋值
                     * 
                     */
                    bool LogicalHasBeenSet() const;

                private:

                    /**
                     * 病历是否有问题
                     */
                    bool m_hit;
                    bool m_hitHasBeenSet;

                    /**
                     * 完整性问题
                     */
                    std::string m_completeness;
                    bool m_completenessHasBeenSet;

                    /**
                     * 及时性问题
                     */
                    std::string m_timeliness;
                    bool m_timelinessHasBeenSet;

                    /**
                     * 逻辑性问题
                     */
                    std::string m_logical;
                    bool m_logicalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_RECORDQUALITY_H_
