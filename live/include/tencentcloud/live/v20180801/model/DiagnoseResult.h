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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DIAGNOSERESULT_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DIAGNOSERESULT_H_

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
                * 媒体诊断结果，包含断流信息、低帧率信息等
                */
                class DiagnoseResult : public AbstractModel
                {
                public:
                    DiagnoseResult();
                    ~DiagnoseResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取断流信息
                     * @return StreamBrokenResults 断流信息
                     * 
                     */
                    std::vector<std::string> GetStreamBrokenResults() const;

                    /**
                     * 设置断流信息
                     * @param _streamBrokenResults 断流信息
                     * 
                     */
                    void SetStreamBrokenResults(const std::vector<std::string>& _streamBrokenResults);

                    /**
                     * 判断参数 StreamBrokenResults 是否已赋值
                     * @return StreamBrokenResults 是否已赋值
                     * 
                     */
                    bool StreamBrokenResultsHasBeenSet() const;

                    /**
                     * 获取低帧率信息
                     * @return LowFrameRateResults 低帧率信息
                     * 
                     */
                    std::vector<std::string> GetLowFrameRateResults() const;

                    /**
                     * 设置低帧率信息
                     * @param _lowFrameRateResults 低帧率信息
                     * 
                     */
                    void SetLowFrameRateResults(const std::vector<std::string>& _lowFrameRateResults);

                    /**
                     * 判断参数 LowFrameRateResults 是否已赋值
                     * @return LowFrameRateResults 是否已赋值
                     * 
                     */
                    bool LowFrameRateResultsHasBeenSet() const;

                    /**
                     * 获取流格式诊断信息
                     * @return StreamFormatResults 流格式诊断信息
                     * 
                     */
                    std::vector<std::string> GetStreamFormatResults() const;

                    /**
                     * 设置流格式诊断信息
                     * @param _streamFormatResults 流格式诊断信息
                     * 
                     */
                    void SetStreamFormatResults(const std::vector<std::string>& _streamFormatResults);

                    /**
                     * 判断参数 StreamFormatResults 是否已赋值
                     * @return StreamFormatResults 是否已赋值
                     * 
                     */
                    bool StreamFormatResultsHasBeenSet() const;

                private:

                    /**
                     * 断流信息
                     */
                    std::vector<std::string> m_streamBrokenResults;
                    bool m_streamBrokenResultsHasBeenSet;

                    /**
                     * 低帧率信息
                     */
                    std::vector<std::string> m_lowFrameRateResults;
                    bool m_lowFrameRateResultsHasBeenSet;

                    /**
                     * 流格式诊断信息
                     */
                    std::vector<std::string> m_streamFormatResults;
                    bool m_streamFormatResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DIAGNOSERESULT_H_
