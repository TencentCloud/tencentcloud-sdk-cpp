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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTINSTANCERECOURCE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTINSTANCERECOURCE_H_

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
                * 资源包中包含的资源。
                */
                class ProductInstanceRecource : public AbstractModel
                {
                public:
                    ProductInstanceRecource();
                    ~ProductInstanceRecource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型。
<li>Storage：存储资源包。</li>
<li>Traffic：流量资源包。</li>
<li>Transcode：普通转码资源包。</li>
<li>TESHD：极速高清转码资源包。</li>
<li>Review：音视频审核转码资源包。</li>
<li>MediaProcess：媒体处理时长资源包。</li>
                     * @return ResourceType 资源类型。
<li>Storage：存储资源包。</li>
<li>Traffic：流量资源包。</li>
<li>Transcode：普通转码资源包。</li>
<li>TESHD：极速高清转码资源包。</li>
<li>Review：音视频审核转码资源包。</li>
<li>MediaProcess：媒体处理时长资源包。</li>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型。
<li>Storage：存储资源包。</li>
<li>Traffic：流量资源包。</li>
<li>Transcode：普通转码资源包。</li>
<li>TESHD：极速高清转码资源包。</li>
<li>Review：音视频审核转码资源包。</li>
<li>MediaProcess：媒体处理时长资源包。</li>
                     * @param _resourceType 资源类型。
<li>Storage：存储资源包。</li>
<li>Traffic：流量资源包。</li>
<li>Transcode：普通转码资源包。</li>
<li>TESHD：极速高清转码资源包。</li>
<li>Review：音视频审核转码资源包。</li>
<li>MediaProcess：媒体处理时长资源包。</li>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源包额度。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     * @return Amount 资源包额度。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     * 
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置资源包额度。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     * @param _amount 资源包额度。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     * 
                     */
                    void SetAmount(const int64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取资源包余量。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     * @return Left 资源包余量。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     * 
                     */
                    int64_t GetLeft() const;

                    /**
                     * 设置资源包余量。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     * @param _left 资源包余量。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     * 
                     */
                    void SetLeft(const int64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                private:

                    /**
                     * 资源类型。
<li>Storage：存储资源包。</li>
<li>Traffic：流量资源包。</li>
<li>Transcode：普通转码资源包。</li>
<li>TESHD：极速高清转码资源包。</li>
<li>Review：音视频审核转码资源包。</li>
<li>MediaProcess：媒体处理时长资源包。</li>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源包额度。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 资源包余量。
<li>音视频存储资源包，单位为字节。</li>
<li>音视频转码资源包，单位为秒。</li>
<li>音视频审核资源包，单位为秒。</li>
<li>音视频极速高清资源包，单位为秒。</li>
<li>音视频加速资源包，单位为字节。</li>
<li>媒体处理时长资源包，单位为秒。</li>
                     */
                    int64_t m_left;
                    bool m_leftHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTINSTANCERECOURCE_H_
