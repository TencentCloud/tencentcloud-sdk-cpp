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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCUSAGEDATAITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCUSAGEDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TaskStatDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 统计数据
                */
                class AigcUsageDataItem : public AbstractModel
                {
                public:
                    AigcUsageDataItem();
                    ~AigcUsageDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AIGC规格。
取值有：
<li>Qwen2.0</li>
<li>Gem2.5</li>
<li>Gem3.0_1K</li>
<li>Gem3.0_2K</li>
<li>Gem3.0_4K</li>
<li>Sora2</li>
<li>Veo3.1Standard</li>
<li>Veo3.1Fast</li>
<li>Kling2.5pro_720P</li>
<li>Kling2.5pro_1080P</li>
<li>Kling2.0&2.1std_720P</li>
<li>Kling2.0&2.1pro_1080P</li>
<li>Hailuo02&2.3_1080P</li>
<li>Hailuo02&2.3_768P</li>
<li>Hailuo2.3fast_768P</li>
<li>Hailuo2.3fast_1080P</li>
<li>Jimeng4.0</li>
<li>Jimeng3.0pro</li>
<li>Vidu2.0_720P</li>
<li>Vidu2.0_1080P</li>
<li>ViduQ2pro_720P</li>
<li>ViduQ2pro_1080P</li>
<li>ViduQ2turbo_720P</li>
<li>ViduQ2turbo_1080P</li>
<li> unknown</li>
                     * @return Specification AIGC规格。
取值有：
<li>Qwen2.0</li>
<li>Gem2.5</li>
<li>Gem3.0_1K</li>
<li>Gem3.0_2K</li>
<li>Gem3.0_4K</li>
<li>Sora2</li>
<li>Veo3.1Standard</li>
<li>Veo3.1Fast</li>
<li>Kling2.5pro_720P</li>
<li>Kling2.5pro_1080P</li>
<li>Kling2.0&2.1std_720P</li>
<li>Kling2.0&2.1pro_1080P</li>
<li>Hailuo02&2.3_1080P</li>
<li>Hailuo02&2.3_768P</li>
<li>Hailuo2.3fast_768P</li>
<li>Hailuo2.3fast_1080P</li>
<li>Jimeng4.0</li>
<li>Jimeng3.0pro</li>
<li>Vidu2.0_720P</li>
<li>Vidu2.0_1080P</li>
<li>ViduQ2pro_720P</li>
<li>ViduQ2pro_1080P</li>
<li>ViduQ2turbo_720P</li>
<li>ViduQ2turbo_1080P</li>
<li> unknown</li>
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置AIGC规格。
取值有：
<li>Qwen2.0</li>
<li>Gem2.5</li>
<li>Gem3.0_1K</li>
<li>Gem3.0_2K</li>
<li>Gem3.0_4K</li>
<li>Sora2</li>
<li>Veo3.1Standard</li>
<li>Veo3.1Fast</li>
<li>Kling2.5pro_720P</li>
<li>Kling2.5pro_1080P</li>
<li>Kling2.0&2.1std_720P</li>
<li>Kling2.0&2.1pro_1080P</li>
<li>Hailuo02&2.3_1080P</li>
<li>Hailuo02&2.3_768P</li>
<li>Hailuo2.3fast_768P</li>
<li>Hailuo2.3fast_1080P</li>
<li>Jimeng4.0</li>
<li>Jimeng3.0pro</li>
<li>Vidu2.0_720P</li>
<li>Vidu2.0_1080P</li>
<li>ViduQ2pro_720P</li>
<li>ViduQ2pro_1080P</li>
<li>ViduQ2turbo_720P</li>
<li>ViduQ2turbo_1080P</li>
<li> unknown</li>
                     * @param _specification AIGC规格。
取值有：
<li>Qwen2.0</li>
<li>Gem2.5</li>
<li>Gem3.0_1K</li>
<li>Gem3.0_2K</li>
<li>Gem3.0_4K</li>
<li>Sora2</li>
<li>Veo3.1Standard</li>
<li>Veo3.1Fast</li>
<li>Kling2.5pro_720P</li>
<li>Kling2.5pro_1080P</li>
<li>Kling2.0&2.1std_720P</li>
<li>Kling2.0&2.1pro_1080P</li>
<li>Hailuo02&2.3_1080P</li>
<li>Hailuo02&2.3_768P</li>
<li>Hailuo2.3fast_768P</li>
<li>Hailuo2.3fast_1080P</li>
<li>Jimeng4.0</li>
<li>Jimeng3.0pro</li>
<li>Vidu2.0_720P</li>
<li>Vidu2.0_1080P</li>
<li>ViduQ2pro_720P</li>
<li>ViduQ2pro_1080P</li>
<li>ViduQ2turbo_720P</li>
<li>ViduQ2turbo_1080P</li>
<li> unknown</li>
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取用量数据。
                     * @return DataSet 用量数据。
                     * 
                     */
                    std::vector<TaskStatDataItem> GetDataSet() const;

                    /**
                     * 设置用量数据。
                     * @param _dataSet 用量数据。
                     * 
                     */
                    void SetDataSet(const std::vector<TaskStatDataItem>& _dataSet);

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                private:

                    /**
                     * AIGC规格。
取值有：
<li>Qwen2.0</li>
<li>Gem2.5</li>
<li>Gem3.0_1K</li>
<li>Gem3.0_2K</li>
<li>Gem3.0_4K</li>
<li>Sora2</li>
<li>Veo3.1Standard</li>
<li>Veo3.1Fast</li>
<li>Kling2.5pro_720P</li>
<li>Kling2.5pro_1080P</li>
<li>Kling2.0&2.1std_720P</li>
<li>Kling2.0&2.1pro_1080P</li>
<li>Hailuo02&2.3_1080P</li>
<li>Hailuo02&2.3_768P</li>
<li>Hailuo2.3fast_768P</li>
<li>Hailuo2.3fast_1080P</li>
<li>Jimeng4.0</li>
<li>Jimeng3.0pro</li>
<li>Vidu2.0_720P</li>
<li>Vidu2.0_1080P</li>
<li>ViduQ2pro_720P</li>
<li>ViduQ2pro_1080P</li>
<li>ViduQ2turbo_720P</li>
<li>ViduQ2turbo_1080P</li>
<li> unknown</li>
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 用量数据。
                     */
                    std::vector<TaskStatDataItem> m_dataSet;
                    bool m_dataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCUSAGEDATAITEM_H_
