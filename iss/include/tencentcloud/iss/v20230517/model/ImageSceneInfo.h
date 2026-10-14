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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_IMAGESCENEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_IMAGESCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/MultiSnapshotMode.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 图片场景配置
                */
                class ImageSceneInfo : public AbstractModel
                {
                public:
                    ImageSceneInfo();
                    ~ImageSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>截图类型</p><p>枚举值：</p><ul><li>1：实时截帧</li><li>2：低频截帧</li></ul>
                     * @return Type <p>截图类型</p><p>枚举值：</p><ul><li>1：实时截帧</li><li>2：低频截帧</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>截图类型</p><p>枚举值：</p><ul><li>1：实时截帧</li><li>2：低频截帧</li></ul>
                     * @param _type <p>截图类型</p><p>枚举值：</p><ul><li>1：实时截帧</li><li>2：低频截帧</li></ul>
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
                     * 获取<p>截帧频率</p><p>Type=1时取值[5, 180]秒，Type=2时取值[30, 36000]秒</p>
                     * @return Interval <p>截帧频率</p><p>Type=1时取值[5, 180]秒，Type=2时取值[30, 36000]秒</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>截帧频率</p><p>Type=1时取值[5, 180]秒，Type=2时取值[30, 36000]秒</p>
                     * @param _interval <p>截帧频率</p><p>Type=1时取值[5, 180]秒，Type=2时取值[30, 36000]秒</p>
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
                     * 获取<p>多张截图模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiMode <p>多张截图模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MultiSnapshotMode GetMultiMode() const;

                    /**
                     * 设置<p>多张截图模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiMode <p>多张截图模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiMode(const MultiSnapshotMode& _multiMode);

                    /**
                     * 判断参数 MultiMode 是否已赋值
                     * @return MultiMode 是否已赋值
                     * 
                     */
                    bool MultiModeHasBeenSet() const;

                private:

                    /**
                     * <p>截图类型</p><p>枚举值：</p><ul><li>1：实时截帧</li><li>2：低频截帧</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>截帧频率</p><p>Type=1时取值[5, 180]秒，Type=2时取值[30, 36000]秒</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>多张截图模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MultiSnapshotMode m_multiMode;
                    bool m_multiModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_IMAGESCENEINFO_H_
