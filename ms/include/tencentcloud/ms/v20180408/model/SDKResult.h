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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_SDKRESULT_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_SDKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 渠道合作加固sdk加固结果
                */
                class SDKResult : public AbstractModel
                {
                public:
                    SDKResult();
                    ~SDKResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加固任务结果Id
                     * @return ResultId 加固任务结果Id
                     * 
                     */
                    std::string GetResultId() const;

                    /**
                     * 设置加固任务结果Id
                     * @param _resultId 加固任务结果Id
                     * 
                     */
                    void SetResultId(const std::string& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     * 
                     */
                    bool ResultIdHasBeenSet() const;

                private:

                    /**
                     * 加固任务结果Id
                     */
                    std::string m_resultId;
                    bool m_resultIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_SDKRESULT_H_
