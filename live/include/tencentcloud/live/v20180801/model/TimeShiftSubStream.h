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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTSUBSTREAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTSUBSTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 时移自适应码率子流信息。
                */
                class TimeShiftSubStream : public AbstractModel
                {
                public:
                    TimeShiftSubStream();
                    ~TimeShiftSubStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时移自适应码率子流转码模板ID。
                     * @return TransCodeId 时移自适应码率子流转码模板ID。
                     * 
                     */
                    uint64_t GetTransCodeId() const;

                    /**
                     * 设置时移自适应码率子流转码模板ID。
                     * @param _transCodeId 时移自适应码率子流转码模板ID。
                     * 
                     */
                    void SetTransCodeId(const uint64_t& _transCodeId);

                    /**
                     * 判断参数 TransCodeId 是否已赋值
                     * @return TransCodeId 是否已赋值
                     * 
                     */
                    bool TransCodeIdHasBeenSet() const;

                private:

                    /**
                     * 时移自适应码率子流转码模板ID。
                     */
                    uint64_t m_transCodeId;
                    bool m_transCodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTSUBSTREAM_H_
