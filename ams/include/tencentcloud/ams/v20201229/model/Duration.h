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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_DURATION_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_DURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 命中音频时间位置
                */
                class Duration : public AbstractModel
                {
                public:
                    Duration();
                    ~Duration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>开始时间</p><p>单位：秒</p>
                     * @return Start <p>开始时间</p><p>单位：秒</p>
                     * 
                     */
                    double GetStart() const;

                    /**
                     * 设置<p>开始时间</p><p>单位：秒</p>
                     * @param _start <p>开始时间</p><p>单位：秒</p>
                     * 
                     */
                    void SetStart(const double& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p><p>单位：秒</p>
                     * @return End <p>结束时间</p><p>单位：秒</p>
                     * 
                     */
                    double GetEnd() const;

                    /**
                     * 设置<p>结束时间</p><p>单位：秒</p>
                     * @param _end <p>结束时间</p><p>单位：秒</p>
                     * 
                     */
                    void SetEnd(const double& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间</p><p>单位：秒</p>
                     */
                    double m_start;
                    bool m_startHasBeenSet;

                    /**
                     * <p>结束时间</p><p>单位：秒</p>
                     */
                    double m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_DURATION_H_
