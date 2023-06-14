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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TIMEINTERVAL_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TIMEINTERVAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 左闭右开时间区间，包括起始时间和结束时间，格式为"%Y-%m-%d %H:%M:%S"
                */
                class TimeInterval : public AbstractModel
                {
                public:
                    TimeInterval();
                    ~TimeInterval() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取起始时间（包括在内），格式"%Y-%m-%d %H:%M:%S"
                     * @return Start 起始时间（包括在内），格式"%Y-%m-%d %H:%M:%S"
                     * 
                     */
                    std::string GetStart() const;

                    /**
                     * 设置起始时间（包括在内），格式"%Y-%m-%d %H:%M:%S"
                     * @param _start 起始时间（包括在内），格式"%Y-%m-%d %H:%M:%S"
                     * 
                     */
                    void SetStart(const std::string& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取结束时间（不包括在内），格式"%Y-%m-%d %H:%M:%S"
                     * @return End 结束时间（不包括在内），格式"%Y-%m-%d %H:%M:%S"
                     * 
                     */
                    std::string GetEnd() const;

                    /**
                     * 设置结束时间（不包括在内），格式"%Y-%m-%d %H:%M:%S"
                     * @param _end 结束时间（不包括在内），格式"%Y-%m-%d %H:%M:%S"
                     * 
                     */
                    void SetEnd(const std::string& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * 起始时间（包括在内），格式"%Y-%m-%d %H:%M:%S"
                     */
                    std::string m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 结束时间（不包括在内），格式"%Y-%m-%d %H:%M:%S"
                     */
                    std::string m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TIMEINTERVAL_H_
