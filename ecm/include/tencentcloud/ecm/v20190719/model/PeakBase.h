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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PEAKBASE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PEAKBASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 峰值信息
                */
                class PeakBase : public AbstractModel
                {
                public:
                    PeakBase();
                    ~PeakBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU峰值
                     * @return PeakCpuNum CPU峰值
                     * 
                     */
                    int64_t GetPeakCpuNum() const;

                    /**
                     * 设置CPU峰值
                     * @param _peakCpuNum CPU峰值
                     * 
                     */
                    void SetPeakCpuNum(const int64_t& _peakCpuNum);

                    /**
                     * 判断参数 PeakCpuNum 是否已赋值
                     * @return PeakCpuNum 是否已赋值
                     * 
                     */
                    bool PeakCpuNumHasBeenSet() const;

                    /**
                     * 获取内存峰值
                     * @return PeakMemoryNum 内存峰值
                     * 
                     */
                    int64_t GetPeakMemoryNum() const;

                    /**
                     * 设置内存峰值
                     * @param _peakMemoryNum 内存峰值
                     * 
                     */
                    void SetPeakMemoryNum(const int64_t& _peakMemoryNum);

                    /**
                     * 判断参数 PeakMemoryNum 是否已赋值
                     * @return PeakMemoryNum 是否已赋值
                     * 
                     */
                    bool PeakMemoryNumHasBeenSet() const;

                    /**
                     * 获取硬盘峰值
                     * @return PeakStorageNum 硬盘峰值
                     * 
                     */
                    int64_t GetPeakStorageNum() const;

                    /**
                     * 设置硬盘峰值
                     * @param _peakStorageNum 硬盘峰值
                     * 
                     */
                    void SetPeakStorageNum(const int64_t& _peakStorageNum);

                    /**
                     * 判断参数 PeakStorageNum 是否已赋值
                     * @return PeakStorageNum 是否已赋值
                     * 
                     */
                    bool PeakStorageNumHasBeenSet() const;

                    /**
                     * 获取记录时间
                     * @return RecordTime 记录时间
                     * 
                     */
                    std::string GetRecordTime() const;

                    /**
                     * 设置记录时间
                     * @param _recordTime 记录时间
                     * 
                     */
                    void SetRecordTime(const std::string& _recordTime);

                    /**
                     * 判断参数 RecordTime 是否已赋值
                     * @return RecordTime 是否已赋值
                     * 
                     */
                    bool RecordTimeHasBeenSet() const;

                private:

                    /**
                     * CPU峰值
                     */
                    int64_t m_peakCpuNum;
                    bool m_peakCpuNumHasBeenSet;

                    /**
                     * 内存峰值
                     */
                    int64_t m_peakMemoryNum;
                    bool m_peakMemoryNumHasBeenSet;

                    /**
                     * 硬盘峰值
                     */
                    int64_t m_peakStorageNum;
                    bool m_peakStorageNumHasBeenSet;

                    /**
                     * 记录时间
                     */
                    std::string m_recordTime;
                    bool m_recordTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PEAKBASE_H_
