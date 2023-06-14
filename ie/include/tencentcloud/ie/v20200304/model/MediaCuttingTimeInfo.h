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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGTIMEINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGTIMEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/IntervalTime.h>
#include <tencentcloud/ie/v20200304/model/SectionTime.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 编辑处理/剪切任务/时间信息
                */
                class MediaCuttingTimeInfo : public AbstractModel
                {
                public:
                    MediaCuttingTimeInfo();
                    ~MediaCuttingTimeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间类型，可选值：
PointSet：时间点集合；
IntervalPoint：周期采样点；
SectionSet：时间片段集合。
                     * @return Type 时间类型，可选值：
PointSet：时间点集合；
IntervalPoint：周期采样点；
SectionSet：时间片段集合。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置时间类型，可选值：
PointSet：时间点集合；
IntervalPoint：周期采样点；
SectionSet：时间片段集合。
                     * @param _type 时间类型，可选值：
PointSet：时间点集合；
IntervalPoint：周期采样点；
SectionSet：时间片段集合。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取截取时间点集合，单位毫秒，Type=PointSet时必选。
                     * @return PointSet 截取时间点集合，单位毫秒，Type=PointSet时必选。
                     * 
                     */
                    std::vector<int64_t> GetPointSet() const;

                    /**
                     * 设置截取时间点集合，单位毫秒，Type=PointSet时必选。
                     * @param _pointSet 截取时间点集合，单位毫秒，Type=PointSet时必选。
                     * 
                     */
                    void SetPointSet(const std::vector<int64_t>& _pointSet);

                    /**
                     * 判断参数 PointSet 是否已赋值
                     * @return PointSet 是否已赋值
                     * 
                     */
                    bool PointSetHasBeenSet() const;

                    /**
                     * 获取周期采样点信息，Type=IntervalPoint时必选。
                     * @return IntervalPoint 周期采样点信息，Type=IntervalPoint时必选。
                     * 
                     */
                    IntervalTime GetIntervalPoint() const;

                    /**
                     * 设置周期采样点信息，Type=IntervalPoint时必选。
                     * @param _intervalPoint 周期采样点信息，Type=IntervalPoint时必选。
                     * 
                     */
                    void SetIntervalPoint(const IntervalTime& _intervalPoint);

                    /**
                     * 判断参数 IntervalPoint 是否已赋值
                     * @return IntervalPoint 是否已赋值
                     * 
                     */
                    bool IntervalPointHasBeenSet() const;

                    /**
                     * 获取时间区间集合信息，Type=SectionSet时必选。
                     * @return SectionSet 时间区间集合信息，Type=SectionSet时必选。
                     * 
                     */
                    std::vector<SectionTime> GetSectionSet() const;

                    /**
                     * 设置时间区间集合信息，Type=SectionSet时必选。
                     * @param _sectionSet 时间区间集合信息，Type=SectionSet时必选。
                     * 
                     */
                    void SetSectionSet(const std::vector<SectionTime>& _sectionSet);

                    /**
                     * 判断参数 SectionSet 是否已赋值
                     * @return SectionSet 是否已赋值
                     * 
                     */
                    bool SectionSetHasBeenSet() const;

                private:

                    /**
                     * 时间类型，可选值：
PointSet：时间点集合；
IntervalPoint：周期采样点；
SectionSet：时间片段集合。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 截取时间点集合，单位毫秒，Type=PointSet时必选。
                     */
                    std::vector<int64_t> m_pointSet;
                    bool m_pointSetHasBeenSet;

                    /**
                     * 周期采样点信息，Type=IntervalPoint时必选。
                     */
                    IntervalTime m_intervalPoint;
                    bool m_intervalPointHasBeenSet;

                    /**
                     * 时间区间集合信息，Type=SectionSet时必选。
                     */
                    std::vector<SectionTime> m_sectionSet;
                    bool m_sectionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGTIMEINFO_H_
