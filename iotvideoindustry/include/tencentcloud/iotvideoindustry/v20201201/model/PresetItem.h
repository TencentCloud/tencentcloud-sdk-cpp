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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_PRESETITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_PRESETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 预置位结构出参
                */
                class PresetItem : public AbstractModel
                {
                public:
                    PresetItem();
                    ~PresetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预置位ID
                     * @return PresetId 预置位ID
                     * 
                     */
                    int64_t GetPresetId() const;

                    /**
                     * 设置预置位ID
                     * @param _presetId 预置位ID
                     * 
                     */
                    void SetPresetId(const int64_t& _presetId);

                    /**
                     * 判断参数 PresetId 是否已赋值
                     * @return PresetId 是否已赋值
                     * 
                     */
                    bool PresetIdHasBeenSet() const;

                    /**
                     * 获取预置位名称
                     * @return PresetName 预置位名称
                     * 
                     */
                    std::string GetPresetName() const;

                    /**
                     * 设置预置位名称
                     * @param _presetName 预置位名称
                     * 
                     */
                    void SetPresetName(const std::string& _presetName);

                    /**
                     * 判断参数 PresetName 是否已赋值
                     * @return PresetName 是否已赋值
                     * 
                     */
                    bool PresetNameHasBeenSet() const;

                    /**
                     * 获取预置位状态 0:未设置预置位 1:已设置预置位 2:已设置预置位&看守位
                     * @return Status 预置位状态 0:未设置预置位 1:已设置预置位 2:已设置预置位&看守位
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置预置位状态 0:未设置预置位 1:已设置预置位 2:已设置预置位&看守位
                     * @param _status 预置位状态 0:未设置预置位 1:已设置预置位 2:已设置预置位&看守位
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取预置位启用时的自动归位时间
                     * @return ResetTime 预置位启用时的自动归位时间
                     * 
                     */
                    int64_t GetResetTime() const;

                    /**
                     * 设置预置位启用时的自动归位时间
                     * @param _resetTime 预置位启用时的自动归位时间
                     * 
                     */
                    void SetResetTime(const int64_t& _resetTime);

                    /**
                     * 判断参数 ResetTime 是否已赋值
                     * @return ResetTime 是否已赋值
                     * 
                     */
                    bool ResetTimeHasBeenSet() const;

                private:

                    /**
                     * 预置位ID
                     */
                    int64_t m_presetId;
                    bool m_presetIdHasBeenSet;

                    /**
                     * 预置位名称
                     */
                    std::string m_presetName;
                    bool m_presetNameHasBeenSet;

                    /**
                     * 预置位状态 0:未设置预置位 1:已设置预置位 2:已设置预置位&看守位
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 预置位启用时的自动归位时间
                     */
                    int64_t m_resetTime;
                    bool m_resetTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_PRESETITEM_H_
