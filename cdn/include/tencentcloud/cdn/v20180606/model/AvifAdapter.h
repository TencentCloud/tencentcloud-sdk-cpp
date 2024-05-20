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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_AVIFADAPTER_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_AVIFADAPTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 图片优化-AvifAdapter配置
                */
                class AvifAdapter : public AbstractModel
                {
                public:
                    AvifAdapter();
                    ~AvifAdapter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片优化AvifAdapter配置项开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 图片优化AvifAdapter配置项开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置图片优化AvifAdapter配置项开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 图片优化AvifAdapter配置项开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取当原图是 avif 且客户端 Accept 头包含 image/avif 时，直接返回原图。
当原图是 avif 且客户端 Accept 头不包含 image/avif 时但包含 image/webp，将 avif 转 webp 格式返回。如果 Accept 头不包含 image/webp, 则转 jpeg 返回。

可用的枚举值： 
- []
- ["webp"]
- ["jpeg"]
- ["webp", "jpeg"]

"webp"：是否开启  avif 转 webp，"jpeg": 是否开启 avif 转 jpeg。如果 webp 和 jpeg 都开启的情况下，webp 必须在 jpeg 前面。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FallbackFormats 当原图是 avif 且客户端 Accept 头包含 image/avif 时，直接返回原图。
当原图是 avif 且客户端 Accept 头不包含 image/avif 时但包含 image/webp，将 avif 转 webp 格式返回。如果 Accept 头不包含 image/webp, 则转 jpeg 返回。

可用的枚举值： 
- []
- ["webp"]
- ["jpeg"]
- ["webp", "jpeg"]

"webp"：是否开启  avif 转 webp，"jpeg": 是否开启 avif 转 jpeg。如果 webp 和 jpeg 都开启的情况下，webp 必须在 jpeg 前面。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFallbackFormats() const;

                    /**
                     * 设置当原图是 avif 且客户端 Accept 头包含 image/avif 时，直接返回原图。
当原图是 avif 且客户端 Accept 头不包含 image/avif 时但包含 image/webp，将 avif 转 webp 格式返回。如果 Accept 头不包含 image/webp, 则转 jpeg 返回。

可用的枚举值： 
- []
- ["webp"]
- ["jpeg"]
- ["webp", "jpeg"]

"webp"：是否开启  avif 转 webp，"jpeg": 是否开启 avif 转 jpeg。如果 webp 和 jpeg 都开启的情况下，webp 必须在 jpeg 前面。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fallbackFormats 当原图是 avif 且客户端 Accept 头包含 image/avif 时，直接返回原图。
当原图是 avif 且客户端 Accept 头不包含 image/avif 时但包含 image/webp，将 avif 转 webp 格式返回。如果 Accept 头不包含 image/webp, 则转 jpeg 返回。

可用的枚举值： 
- []
- ["webp"]
- ["jpeg"]
- ["webp", "jpeg"]

"webp"：是否开启  avif 转 webp，"jpeg": 是否开启 avif 转 jpeg。如果 webp 和 jpeg 都开启的情况下，webp 必须在 jpeg 前面。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFallbackFormats(const std::vector<std::string>& _fallbackFormats);

                    /**
                     * 判断参数 FallbackFormats 是否已赋值
                     * @return FallbackFormats 是否已赋值
                     * 
                     */
                    bool FallbackFormatsHasBeenSet() const;

                private:

                    /**
                     * 图片优化AvifAdapter配置项开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 当原图是 avif 且客户端 Accept 头包含 image/avif 时，直接返回原图。
当原图是 avif 且客户端 Accept 头不包含 image/avif 时但包含 image/webp，将 avif 转 webp 格式返回。如果 Accept 头不包含 image/webp, 则转 jpeg 返回。

可用的枚举值： 
- []
- ["webp"]
- ["jpeg"]
- ["webp", "jpeg"]

"webp"：是否开启  avif 转 webp，"jpeg": 是否开启 avif 转 jpeg。如果 webp 和 jpeg 都开启的情况下，webp 必须在 jpeg 前面。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_fallbackFormats;
                    bool m_fallbackFormatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_AVIFADAPTER_H_
