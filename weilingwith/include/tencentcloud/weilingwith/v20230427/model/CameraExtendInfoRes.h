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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CAMERAEXTENDINFORES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CAMERAEXTENDINFORES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 视频扩展信息结果
                */
                class CameraExtendInfoRes : public AbstractModel
                {
                public:
                    CameraExtendInfoRes();
                    ~CameraExtendInfoRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储方式 (nvr或cosmtav)
                     * @return SaveType 存储方式 (nvr或cosmtav)
                     * 
                     */
                    std::string GetSaveType() const;

                    /**
                     * 设置存储方式 (nvr或cosmtav)
                     * @param _saveType 存储方式 (nvr或cosmtav)
                     * 
                     */
                    void SetSaveType(const std::string& _saveType);

                    /**
                     * 判断参数 SaveType 是否已赋值
                     * @return SaveType 是否已赋值
                     * 
                     */
                    bool SaveTypeHasBeenSet() const;

                    /**
                     * 获取云存储天数（save_type是cosmtav时这个参数才有效）

                     * @return SaveDay 云存储天数（save_type是cosmtav时这个参数才有效）

                     * 
                     */
                    int64_t GetSaveDay() const;

                    /**
                     * 设置云存储天数（save_type是cosmtav时这个参数才有效）

                     * @param _saveDay 云存储天数（save_type是cosmtav时这个参数才有效）

                     * 
                     */
                    void SetSaveDay(const int64_t& _saveDay);

                    /**
                     * 判断参数 SaveDay 是否已赋值
                     * @return SaveDay 是否已赋值
                     * 
                     */
                    bool SaveDayHasBeenSet() const;

                    /**
                     * 获取实时分辨率
                     * @return LiveResolution 实时分辨率
                     * 
                     */
                    int64_t GetLiveResolution() const;

                    /**
                     * 设置实时分辨率
                     * @param _liveResolution 实时分辨率
                     * 
                     */
                    void SetLiveResolution(const int64_t& _liveResolution);

                    /**
                     * 判断参数 LiveResolution 是否已赋值
                     * @return LiveResolution 是否已赋值
                     * 
                     */
                    bool LiveResolutionHasBeenSet() const;

                    /**
                     * 获取历史分辨率
                     * @return HistoryResolution 历史分辨率
                     * 
                     */
                    int64_t GetHistoryResolution() const;

                    /**
                     * 设置历史分辨率
                     * @param _historyResolution 历史分辨率
                     * 
                     */
                    void SetHistoryResolution(const int64_t& _historyResolution);

                    /**
                     * 判断参数 HistoryResolution 是否已赋值
                     * @return HistoryResolution 是否已赋值
                     * 
                     */
                    bool HistoryResolutionHasBeenSet() const;

                private:

                    /**
                     * 存储方式 (nvr或cosmtav)
                     */
                    std::string m_saveType;
                    bool m_saveTypeHasBeenSet;

                    /**
                     * 云存储天数（save_type是cosmtav时这个参数才有效）

                     */
                    int64_t m_saveDay;
                    bool m_saveDayHasBeenSet;

                    /**
                     * 实时分辨率
                     */
                    int64_t m_liveResolution;
                    bool m_liveResolutionHasBeenSet;

                    /**
                     * 历史分辨率
                     */
                    int64_t m_historyResolution;
                    bool m_historyResolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CAMERAEXTENDINFORES_H_
