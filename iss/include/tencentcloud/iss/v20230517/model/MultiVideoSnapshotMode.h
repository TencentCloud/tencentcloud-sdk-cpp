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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_MULTIVIDEOSNAPSHOTMODE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_MULTIVIDEOSNAPSHOTMODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 多张模式参数
                */
                class MultiVideoSnapshotMode : public AbstractModel
                {
                public:
                    MultiVideoSnapshotMode();
                    ~MultiVideoSnapshotMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否启用多张模式， false时，为单张模式，忽略Interval、Total参数</p><p>默认值：false</p>
                     * @return Enable <p>是否启用多张模式， false时，为单张模式，忽略Interval、Total参数</p><p>默认值：false</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否启用多张模式， false时，为单张模式，忽略Interval、Total参数</p><p>默认值：false</p>
                     * @param _enable <p>是否启用多张模式， false时，为单张模式，忽略Interval、Total参数</p><p>默认值：false</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>截帧间隔</p><p>取值范围：[10, 600]</p><p>单位：秒</p>
                     * @return Interval <p>截帧间隔</p><p>取值范围：[10, 600]</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>截帧间隔</p><p>取值范围：[10, 600]</p><p>单位：秒</p>
                     * @param _interval <p>截帧间隔</p><p>取值范围：[10, 600]</p><p>单位：秒</p>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>截帧张数</p><p>取值范围：[1, 10]</p>
                     * @return Total <p>截帧张数</p><p>取值范围：[1, 10]</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>截帧张数</p><p>取值范围：[1, 10]</p>
                     * @param _total <p>截帧张数</p><p>取值范围：[1, 10]</p>
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用多张模式， false时，为单张模式，忽略Interval、Total参数</p><p>默认值：false</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>截帧间隔</p><p>取值范围：[10, 600]</p><p>单位：秒</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>截帧张数</p><p>取值范围：[1, 10]</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_MULTIVIDEOSNAPSHOTMODE_H_
