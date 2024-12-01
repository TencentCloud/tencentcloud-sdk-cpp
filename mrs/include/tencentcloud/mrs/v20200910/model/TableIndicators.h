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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TABLEINDICATORS_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TABLEINDICATORS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/IndicatorItemV2.h>
#include <tencentcloud/mrs/v20200910/model/BaseItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 检验报告结构
                */
                class TableIndicators : public AbstractModel
                {
                public:
                    TableIndicators();
                    ~TableIndicators() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目列表
                     * @return Indicators 项目列表
                     * 
                     */
                    std::vector<IndicatorItemV2> GetIndicators() const;

                    /**
                     * 设置项目列表
                     * @param _indicators 项目列表
                     * 
                     */
                    void SetIndicators(const std::vector<IndicatorItemV2>& _indicators);

                    /**
                     * 判断参数 Indicators 是否已赋值
                     * @return Indicators 是否已赋值
                     * 
                     */
                    bool IndicatorsHasBeenSet() const;

                    /**
                     * 获取采样标本
                     * @return Sample 采样标本
                     * 
                     */
                    BaseItem GetSample() const;

                    /**
                     * 设置采样标本
                     * @param _sample 采样标本
                     * 
                     */
                    void SetSample(const BaseItem& _sample);

                    /**
                     * 判断参数 Sample 是否已赋值
                     * @return Sample 是否已赋值
                     * 
                     */
                    bool SampleHasBeenSet() const;

                private:

                    /**
                     * 项目列表
                     */
                    std::vector<IndicatorItemV2> m_indicators;
                    bool m_indicatorsHasBeenSet;

                    /**
                     * 采样标本
                     */
                    BaseItem m_sample;
                    bool m_sampleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TABLEINDICATORS_H_
