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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DRMINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DRMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SimpleAesDrm.h>
#include <tencentcloud/mps/v20190612/model/SpekeDrm.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Drm 加密信息。
                */
                class DrmInfo : public AbstractModel
                {
                public:
                    DrmInfo();
                    ~DrmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加密类型：

- simpleaes
只能用于HLS，切片格式支持ts和mp4
只能使用切片模式，不能使用singlefile模式

- fairplay：
只能用于HLS，切片格式只能是mp4
可以使用切片模式或singlefile模式

- widevine：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

- playready：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

                     * @return Type 加密类型：

- simpleaes
只能用于HLS，切片格式支持ts和mp4
只能使用切片模式，不能使用singlefile模式

- fairplay：
只能用于HLS，切片格式只能是mp4
可以使用切片模式或singlefile模式

- widevine：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

- playready：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置加密类型：

- simpleaes
只能用于HLS，切片格式支持ts和mp4
只能使用切片模式，不能使用singlefile模式

- fairplay：
只能用于HLS，切片格式只能是mp4
可以使用切片模式或singlefile模式

- widevine：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

- playready：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

                     * @param _type 加密类型：

- simpleaes
只能用于HLS，切片格式支持ts和mp4
只能使用切片模式，不能使用singlefile模式

- fairplay：
只能用于HLS，切片格式只能是mp4
可以使用切片模式或singlefile模式

- widevine：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

- playready：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取SimpleAes 加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SimpleAesDrm SimpleAes 加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SimpleAesDrm GetSimpleAesDrm() const;

                    /**
                     * 设置SimpleAes 加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _simpleAesDrm SimpleAes 加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimpleAesDrm(const SimpleAesDrm& _simpleAesDrm);

                    /**
                     * 判断参数 SimpleAesDrm 是否已赋值
                     * @return SimpleAesDrm 是否已赋值
                     * 
                     */
                    bool SimpleAesDrmHasBeenSet() const;

                    /**
                     * 获取FairPlay，WideVine，PlayReady 加密信息。
                     * @return SpekeDrm FairPlay，WideVine，PlayReady 加密信息。
                     * 
                     */
                    SpekeDrm GetSpekeDrm() const;

                    /**
                     * 设置FairPlay，WideVine，PlayReady 加密信息。
                     * @param _spekeDrm FairPlay，WideVine，PlayReady 加密信息。
                     * 
                     */
                    void SetSpekeDrm(const SpekeDrm& _spekeDrm);

                    /**
                     * 判断参数 SpekeDrm 是否已赋值
                     * @return SpekeDrm 是否已赋值
                     * 
                     */
                    bool SpekeDrmHasBeenSet() const;

                private:

                    /**
                     * 加密类型：

- simpleaes
只能用于HLS，切片格式支持ts和mp4
只能使用切片模式，不能使用singlefile模式

- fairplay：
只能用于HLS，切片格式只能是mp4
可以使用切片模式或singlefile模式

- widevine：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

- playready：
可以用于HLS和DASH，切片格式只能是mp4
输出HLS：可以使用切片模式或singlefile模式
输出DASH：只能singlefile模式

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * SimpleAes 加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SimpleAesDrm m_simpleAesDrm;
                    bool m_simpleAesDrmHasBeenSet;

                    /**
                     * FairPlay，WideVine，PlayReady 加密信息。
                     */
                    SpekeDrm m_spekeDrm;
                    bool m_spekeDrmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DRMINFO_H_
