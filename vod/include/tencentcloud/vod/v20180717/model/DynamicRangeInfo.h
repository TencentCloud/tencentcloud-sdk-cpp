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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DYNAMICRANGEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DYNAMICRANGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 画面动态范围信息。
                */
                class DynamicRangeInfo : public AbstractModel
                {
                public:
                    DynamicRangeInfo();
                    ~DynamicRangeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画面动态范围信息。可取值：
<li>SDR：Standard Dynamic Range 标准动态范围；</li>
<li>HDR：High Dynamic Range 高动态范围。</li>
                     * @return Type 画面动态范围信息。可取值：
<li>SDR：Standard Dynamic Range 标准动态范围；</li>
<li>HDR：High Dynamic Range 高动态范围。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置画面动态范围信息。可取值：
<li>SDR：Standard Dynamic Range 标准动态范围；</li>
<li>HDR：High Dynamic Range 高动态范围。</li>
                     * @param _type 画面动态范围信息。可取值：
<li>SDR：Standard Dynamic Range 标准动态范围；</li>
<li>HDR：High Dynamic Range 高动态范围。</li>
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
                     * 获取高动态范围类型，当 Type 为 HDR 时有效。目前支持的可取值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>
                     * @return HDRType 高动态范围类型，当 Type 为 HDR 时有效。目前支持的可取值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>
                     * 
                     */
                    std::string GetHDRType() const;

                    /**
                     * 设置高动态范围类型，当 Type 为 HDR 时有效。目前支持的可取值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>
                     * @param _hDRType 高动态范围类型，当 Type 为 HDR 时有效。目前支持的可取值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>
                     * 
                     */
                    void SetHDRType(const std::string& _hDRType);

                    /**
                     * 判断参数 HDRType 是否已赋值
                     * @return HDRType 是否已赋值
                     * 
                     */
                    bool HDRTypeHasBeenSet() const;

                private:

                    /**
                     * 画面动态范围信息。可取值：
<li>SDR：Standard Dynamic Range 标准动态范围；</li>
<li>HDR：High Dynamic Range 高动态范围。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 高动态范围类型，当 Type 为 HDR 时有效。目前支持的可取值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>
                     */
                    std::string m_hDRType;
                    bool m_hDRTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DYNAMICRANGEINFO_H_
