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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MEMORYPICTURE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MEMORYPICTURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/CurvePoint.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * Jvm监控内存数据封装
                */
                class MemoryPicture : public AbstractModel
                {
                public:
                    MemoryPicture();
                    ~MemoryPicture() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内存最大值
                     * @return Max 内存最大值
                     * 
                     */
                    std::vector<CurvePoint> GetMax() const;

                    /**
                     * 设置内存最大值
                     * @param _max 内存最大值
                     * 
                     */
                    void SetMax(const std::vector<CurvePoint>& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取已用内存大小
                     * @return Used 已用内存大小
                     * 
                     */
                    std::vector<CurvePoint> GetUsed() const;

                    /**
                     * 设置已用内存大小
                     * @param _used 已用内存大小
                     * 
                     */
                    void SetUsed(const std::vector<CurvePoint>& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取系统分配内存大小
                     * @return Committed 系统分配内存大小
                     * 
                     */
                    std::vector<CurvePoint> GetCommitted() const;

                    /**
                     * 设置系统分配内存大小
                     * @param _committed 系统分配内存大小
                     * 
                     */
                    void SetCommitted(const std::vector<CurvePoint>& _committed);

                    /**
                     * 判断参数 Committed 是否已赋值
                     * @return Committed 是否已赋值
                     * 
                     */
                    bool CommittedHasBeenSet() const;

                private:

                    /**
                     * 内存最大值
                     */
                    std::vector<CurvePoint> m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 已用内存大小
                     */
                    std::vector<CurvePoint> m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * 系统分配内存大小
                     */
                    std::vector<CurvePoint> m_committed;
                    bool m_committedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MEMORYPICTURE_H_
