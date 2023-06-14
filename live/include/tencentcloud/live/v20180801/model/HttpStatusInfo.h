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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSINFO_H_

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
                * 播放错误码信息
                */
                class HttpStatusInfo : public AbstractModel
                {
                public:
                    HttpStatusInfo();
                    ~HttpStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播放HTTP状态码。
                     * @return HttpStatus 播放HTTP状态码。
                     * 
                     */
                    std::string GetHttpStatus() const;

                    /**
                     * 设置播放HTTP状态码。
                     * @param _httpStatus 播放HTTP状态码。
                     * 
                     */
                    void SetHttpStatus(const std::string& _httpStatus);

                    /**
                     * 判断参数 HttpStatus 是否已赋值
                     * @return HttpStatus 是否已赋值
                     * 
                     */
                    bool HttpStatusHasBeenSet() const;

                    /**
                     * 获取个数。
                     * @return Num 个数。
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置个数。
                     * @param _num 个数。
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * 播放HTTP状态码。
                     */
                    std::string m_httpStatus;
                    bool m_httpStatusHasBeenSet;

                    /**
                     * 个数。
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSINFO_H_
