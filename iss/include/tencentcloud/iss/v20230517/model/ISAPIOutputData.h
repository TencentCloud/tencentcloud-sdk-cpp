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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ISAPIOUTPUTDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ISAPIOUTPUTDATA_H_

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
                * ISUP智能安全接入 API返回数据
                */
                class ISAPIOutputData : public AbstractModel
                {
                public:
                    ISAPIOutputData();
                    ~ISAPIOutputData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出参数
                     * @return OutputData 输出参数
                     * 
                     */
                    std::string GetOutputData() const;

                    /**
                     * 设置输出参数
                     * @param _outputData 输出参数
                     * 
                     */
                    void SetOutputData(const std::string& _outputData);

                    /**
                     * 判断参数 OutputData 是否已赋值
                     * @return OutputData 是否已赋值
                     * 
                     */
                    bool OutputDataHasBeenSet() const;

                private:

                    /**
                     * 输出参数
                     */
                    std::string m_outputData;
                    bool m_outputDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ISAPIOUTPUTDATA_H_
