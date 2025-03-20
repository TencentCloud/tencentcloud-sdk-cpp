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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_STATISTICINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_STATISTICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/StatisticDataInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * sql会话统计信息
                */
                class StatisticInfo : public AbstractModel
                {
                public:
                    StatisticInfo();
                    ~StatisticInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计分析的维度。
                     * @return Dimension 统计分析的维度。
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置统计分析的维度。
                     * @param _dimension 统计分析的维度。
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取统计分析的维度下的统计数据详情。
                     * @return Data 统计分析的维度下的统计数据详情。
                     * 
                     */
                    std::vector<StatisticDataInfo> GetData() const;

                    /**
                     * 设置统计分析的维度下的统计数据详情。
                     * @param _data 统计分析的维度下的统计数据详情。
                     * 
                     */
                    void SetData(const std::vector<StatisticDataInfo>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 统计分析的维度。
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 统计分析的维度下的统计数据详情。
                     */
                    std::vector<StatisticDataInfo> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_STATISTICINFO_H_
