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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_ALLMUTESLICE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_ALLMUTESLICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/MuteSlice.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 如果请求中开启了静音检测开关，则会返回所有的静音片段（静音时长超过阈值的片段）。
                */
                class AllMuteSlice : public AbstractModel
                {
                public:
                    AllMuteSlice();
                    ~AllMuteSlice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所有静音片段。
                     * @return MuteSlice 所有静音片段。
                     * 
                     */
                    std::vector<MuteSlice> GetMuteSlice() const;

                    /**
                     * 设置所有静音片段。
                     * @param _muteSlice 所有静音片段。
                     * 
                     */
                    void SetMuteSlice(const std::vector<MuteSlice>& _muteSlice);

                    /**
                     * 判断参数 MuteSlice 是否已赋值
                     * @return MuteSlice 是否已赋值
                     * 
                     */
                    bool MuteSliceHasBeenSet() const;

                    /**
                     * 获取静音时长占比。
                     * @return MuteRatio 静音时长占比。
                     * 
                     */
                    double GetMuteRatio() const;

                    /**
                     * 设置静音时长占比。
                     * @param _muteRatio 静音时长占比。
                     * 
                     */
                    void SetMuteRatio(const double& _muteRatio);

                    /**
                     * 判断参数 MuteRatio 是否已赋值
                     * @return MuteRatio 是否已赋值
                     * 
                     */
                    bool MuteRatioHasBeenSet() const;

                    /**
                     * 获取静音总时长。
                     * @return TotalMuteDuration 静音总时长。
                     * 
                     */
                    int64_t GetTotalMuteDuration() const;

                    /**
                     * 设置静音总时长。
                     * @param _totalMuteDuration 静音总时长。
                     * 
                     */
                    void SetTotalMuteDuration(const int64_t& _totalMuteDuration);

                    /**
                     * 判断参数 TotalMuteDuration 是否已赋值
                     * @return TotalMuteDuration 是否已赋值
                     * 
                     */
                    bool TotalMuteDurationHasBeenSet() const;

                private:

                    /**
                     * 所有静音片段。
                     */
                    std::vector<MuteSlice> m_muteSlice;
                    bool m_muteSliceHasBeenSet;

                    /**
                     * 静音时长占比。
                     */
                    double m_muteRatio;
                    bool m_muteRatioHasBeenSet;

                    /**
                     * 静音总时长。
                     */
                    int64_t m_totalMuteDuration;
                    bool m_totalMuteDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_ALLMUTESLICE_H_
