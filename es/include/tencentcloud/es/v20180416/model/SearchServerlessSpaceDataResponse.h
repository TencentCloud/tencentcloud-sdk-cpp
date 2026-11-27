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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SEARCHSERVERLESSSPACEDATARESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SEARCHSERVERLESSSPACEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * SearchServerlessSpaceData返回参数结构体
                */
                class SearchServerlessSpaceDataResponse : public AbstractModel
                {
                public:
                    SearchServerlessSpaceDataResponse();
                    ~SearchServerlessSpaceDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>请求状态</p>
                     * @return HttpStatus <p>请求状态</p>
                     * 
                     */
                    int64_t GetHttpStatus() const;

                    /**
                     * 判断参数 HttpStatus 是否已赋值
                     * @return HttpStatus 是否已赋值
                     * 
                     */
                    bool HttpStatusHasBeenSet() const;

                    /**
                     * 获取<p>返回结果</p>
                     * @return Result <p>返回结果</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * <p>请求状态</p>
                     */
                    int64_t m_httpStatus;
                    bool m_httpStatusHasBeenSet;

                    /**
                     * <p>返回结果</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SEARCHSERVERLESSSPACEDATARESPONSE_H_
