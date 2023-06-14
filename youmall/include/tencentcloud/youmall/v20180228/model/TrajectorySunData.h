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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_TRAJECTORYSUNDATA_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_TRAJECTORYSUNDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 轨迹动线信息子结构
                */
                class TrajectorySunData : public AbstractModel
                {
                public:
                    TrajectorySunData();
                    ~TrajectorySunData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域动线，形如 x-x-x-x-x，其中 x 为区域 ID
                     * @return Zones 区域动线，形如 x-x-x-x-x，其中 x 为区域 ID
                     * 
                     */
                    std::string GetZones() const;

                    /**
                     * 设置区域动线，形如 x-x-x-x-x，其中 x 为区域 ID
                     * @param _zones 区域动线，形如 x-x-x-x-x，其中 x 为区域 ID
                     * 
                     */
                    void SetZones(const std::string& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取该动线出现次数
                     * @return Count 该动线出现次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置该动线出现次数
                     * @param _count 该动线出现次数
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
                     * 获取该动线平均停留时间（秒）
                     * @return AvgStayTime 该动线平均停留时间（秒）
                     * 
                     */
                    int64_t GetAvgStayTime() const;

                    /**
                     * 设置该动线平均停留时间（秒）
                     * @param _avgStayTime 该动线平均停留时间（秒）
                     * 
                     */
                    void SetAvgStayTime(const int64_t& _avgStayTime);

                    /**
                     * 判断参数 AvgStayTime 是否已赋值
                     * @return AvgStayTime 是否已赋值
                     * 
                     */
                    bool AvgStayTimeHasBeenSet() const;

                private:

                    /**
                     * 区域动线，形如 x-x-x-x-x，其中 x 为区域 ID
                     */
                    std::string m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 该动线出现次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 该动线平均停留时间（秒）
                     */
                    int64_t m_avgStayTime;
                    bool m_avgStayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_TRAJECTORYSUNDATA_H_
