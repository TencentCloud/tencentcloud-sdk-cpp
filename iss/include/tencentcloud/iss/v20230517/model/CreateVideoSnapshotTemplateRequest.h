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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEOSNAPSHOTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEOSNAPSHOTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/EffectiveTime.h>
#include <tencentcloud/iss/v20230517/model/MultiVideoSnapshotMode.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * CreateVideoSnapshotTemplate请求参数结构体
                */
                class CreateVideoSnapshotTemplateRequest : public AbstractModel
                {
                public:
                    CreateVideoSnapshotTemplateRequest();
                    ~CreateVideoSnapshotTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模板名称： 中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
                     * @return Name <p>模板名称： 中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模板名称： 中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
                     * @param _name <p>模板名称： 中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>截图类型： 1-实时截帧 2-低频截帧<br>注意：实时截帧在生效时段期间一直拉取实时流， 低频截帧在生效时段期间按需拉取实时流，每次拉流的最短持续时间不低于1分钟</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @return Type <p>截图类型： 1-实时截帧 2-低频截帧<br>注意：实时截帧在生效时段期间一直拉取实时流， 低频截帧在生效时段期间按需拉取实时流，每次拉流的最短持续时间不低于1分钟</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>截图类型： 1-实时截帧 2-低频截帧<br>注意：实时截帧在生效时段期间一直拉取实时流， 低频截帧在生效时段期间按需拉取实时流，每次拉流的最短持续时间不低于1分钟</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @param _type <p>截图类型： 1-实时截帧 2-低频截帧<br>注意：实时截帧在生效时段期间一直拉取实时流， 低频截帧在生效时段期间按需拉取实时流，每次拉流的最短持续时间不低于1分钟</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>截帧频率： Type = 1时，取值[5, 180]秒 Type = 2时 取值[30, 36000]秒</p>
                     * @return Interval <p>截帧频率： Type = 1时，取值[5, 180]秒 Type = 2时 取值[30, 36000]秒</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>截帧频率： Type = 1时，取值[5, 180]秒 Type = 2时 取值[30, 36000]秒</p>
                     * @param _interval <p>截帧频率： Type = 1时，取值[5, 180]秒 Type = 2时 取值[30, 36000]秒</p>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>生效时段，注：数组大小不超过100个且每个时间段不低于1分钟</p>
                     * @return Times <p>生效时段，注：数组大小不超过100个且每个时间段不低于1分钟</p>
                     * 
                     */
                    std::vector<EffectiveTime> GetTimes() const;

                    /**
                     * 设置<p>生效时段，注：数组大小不超过100个且每个时间段不低于1分钟</p>
                     * @param _times <p>生效时段，注：数组大小不超过100个且每个时间段不低于1分钟</p>
                     * 
                     */
                    void SetTimes(const std::vector<EffectiveTime>& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                    /**
                     * 获取<p>多张模式</p>
                     * @return MultiMode <p>多张模式</p>
                     * 
                     */
                    MultiVideoSnapshotMode GetMultiMode() const;

                    /**
                     * 设置<p>多张模式</p>
                     * @param _multiMode <p>多张模式</p>
                     * 
                     */
                    void SetMultiMode(const MultiVideoSnapshotMode& _multiMode);

                    /**
                     * 判断参数 MultiMode 是否已赋值
                     * @return MultiMode 是否已赋值
                     * 
                     */
                    bool MultiModeHasBeenSet() const;

                private:

                    /**
                     * <p>模板名称： 中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>截图类型： 1-实时截帧 2-低频截帧<br>注意：实时截帧在生效时段期间一直拉取实时流， 低频截帧在生效时段期间按需拉取实时流，每次拉流的最短持续时间不低于1分钟</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>截帧频率： Type = 1时，取值[5, 180]秒 Type = 2时 取值[30, 36000]秒</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>生效时段，注：数组大小不超过100个且每个时间段不低于1分钟</p>
                     */
                    std::vector<EffectiveTime> m_times;
                    bool m_timesHasBeenSet;

                    /**
                     * <p>多张模式</p>
                     */
                    MultiVideoSnapshotMode m_multiMode;
                    bool m_multiModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEOSNAPSHOTTEMPLATEREQUEST_H_
