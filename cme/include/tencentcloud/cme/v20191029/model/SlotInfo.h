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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_SLOTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_SLOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 卡槽信息。
                */
                class SlotInfo : public AbstractModel
                {
                public:
                    SlotInfo();
                    ~SlotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取卡槽 Id。
                     * @return Id 卡槽 Id。
                     */
                    int64_t GetId() const;

                    /**
                     * 设置卡槽 Id。
                     * @param Id 卡槽 Id。
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取素材类型，同素材素材，可取值有：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片。</li>
                     * @return Type 素材类型，同素材素材，可取值有：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置素材类型，同素材素材，可取值有：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片。</li>
                     * @param Type 素材类型，同素材素材，可取值有：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取默认素材 Id。
                     * @return DefaultMaterialId 默认素材 Id。
                     */
                    std::string GetDefaultMaterialId() const;

                    /**
                     * 设置默认素材 Id。
                     * @param DefaultMaterialId 默认素材 Id。
                     */
                    void SetDefaultMaterialId(const std::string& _defaultMaterialId);

                    /**
                     * 判断参数 DefaultMaterialId 是否已赋值
                     * @return DefaultMaterialId 是否已赋值
                     */
                    bool DefaultMaterialIdHasBeenSet() const;

                    /**
                     * 获取素材时长，单位秒。
                     * @return Duration 素材时长，单位秒。
                     */
                    double GetDuration() const;

                    /**
                     * 设置素材时长，单位秒。
                     * @param Duration 素材时长，单位秒。
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 卡槽 Id。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 素材类型，同素材素材，可取值有：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 默认素材 Id。
                     */
                    std::string m_defaultMaterialId;
                    bool m_defaultMaterialIdHasBeenSet;

                    /**
                     * 素材时长，单位秒。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_SLOTINFO_H_
