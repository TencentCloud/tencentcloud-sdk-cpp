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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLCOSTDISTRIBUTION_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLCOSTDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 分段耗时 SQL 分布
                */
                class SqlCostDistribution : public AbstractModel
                {
                public:
                    SqlCostDistribution();
                    ~SqlCostDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sql条数。
                     * @return Count sql条数。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置sql条数。
                     * @param _count sql条数。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取分段耗时下边界，单位是秒。
                     * @return From 分段耗时下边界，单位是秒。
                     * 
                     */
                    double GetFrom() const;

                    /**
                     * 设置分段耗时下边界，单位是秒。
                     * @param _from 分段耗时下边界，单位是秒。
                     * 
                     */
                    void SetFrom(const double& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取分段耗时上边界，单位是秒。
                     * @return To 分段耗时上边界，单位是秒。
                     * 
                     */
                    double GetTo() const;

                    /**
                     * 设置分段耗时上边界，单位是秒。
                     * @param _to 分段耗时上边界，单位是秒。
                     * 
                     */
                    void SetTo(const double& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取耗时占比。
                     * @return Ratio 耗时占比。
                     * 
                     */
                    double GetRatio() const;

                    /**
                     * 设置耗时占比。
                     * @param _ratio 耗时占比。
                     * 
                     */
                    void SetRatio(const double& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                private:

                    /**
                     * sql条数。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 分段耗时下边界，单位是秒。
                     */
                    double m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 分段耗时上边界，单位是秒。
                     */
                    double m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 耗时占比。
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLCOSTDISTRIBUTION_H_
