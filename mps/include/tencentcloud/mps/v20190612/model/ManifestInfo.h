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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MANIFESTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MANIFESTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 线性组装频道配置。
                */
                class ManifestInfo : public AbstractModel
                {
                public:
                    ManifestInfo();
                    ~ManifestInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>单位秒。</p>
                     * @return Windows <p>单位秒。</p>
                     * 
                     */
                    uint64_t GetWindows() const;

                    /**
                     * 设置<p>单位秒。</p>
                     * @param _windows <p>单位秒。</p>
                     * 
                     */
                    void SetWindows(const uint64_t& _windows);

                    /**
                     * 判断参数 Windows 是否已赋值
                     * @return Windows 是否已赋值
                     * 
                     */
                    bool WindowsHasBeenSet() const;

                    /**
                     * 获取<p>打到output广告标签的格式，可选Date Range、Enhanced SCTE-35和Standard SCTE-35。</p>
                     * @return AdMarkupType <p>打到output广告标签的格式，可选Date Range、Enhanced SCTE-35和Standard SCTE-35。</p>
                     * 
                     */
                    std::string GetAdMarkupType() const;

                    /**
                     * 设置<p>打到output广告标签的格式，可选Date Range、Enhanced SCTE-35和Standard SCTE-35。</p>
                     * @param _adMarkupType <p>打到output广告标签的格式，可选Date Range、Enhanced SCTE-35和Standard SCTE-35。</p>
                     * 
                     */
                    void SetAdMarkupType(const std::string& _adMarkupType);

                    /**
                     * 判断参数 AdMarkupType 是否已赋值
                     * @return AdMarkupType 是否已赋值
                     * 
                     */
                    bool AdMarkupTypeHasBeenSet() const;

                private:

                    /**
                     * <p>单位秒。</p>
                     */
                    uint64_t m_windows;
                    bool m_windowsHasBeenSet;

                    /**
                     * <p>打到output广告标签的格式，可选Date Range、Enhanced SCTE-35和Standard SCTE-35。</p>
                     */
                    std::string m_adMarkupType;
                    bool m_adMarkupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MANIFESTINFO_H_
