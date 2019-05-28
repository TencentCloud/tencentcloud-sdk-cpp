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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_

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
                * 转自适应码流信息
                */
                class AdaptiveDynamicStreamingInfoItem : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingInfoItem();
                    ~AdaptiveDynamicStreamingInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转自适应码流规格。
                     * @return Definition 转自适应码流规格。
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置转自适应码流规格。
                     * @param Definition 转自适应码流规格。
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取打包格式，可能为 hls 和 dash 两种。
                     * @return Package 打包格式，可能为 hls 和 dash 两种。
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置打包格式，可能为 hls 和 dash 两种。
                     * @param Package 打包格式，可能为 hls 和 dash 两种。
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取加密类型。
                     * @return DrmType 加密类型。
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置加密类型。
                     * @param DrmType 加密类型。
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取播放地址。
                     * @return Url 播放地址。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置播放地址。
                     * @param Url 播放地址。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 转自适应码流规格。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 打包格式，可能为 hls 和 dash 两种。
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * 加密类型。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * 播放地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
