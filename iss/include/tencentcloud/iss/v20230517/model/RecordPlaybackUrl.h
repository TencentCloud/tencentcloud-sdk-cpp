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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_RECORDPLAYBACKURL_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_RECORDPLAYBACKURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 云录像回放url
                */
                class RecordPlaybackUrl : public AbstractModel
                {
                public:
                    RecordPlaybackUrl();
                    ~RecordPlaybackUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取hls回放url
                     * @return Hls hls回放url
                     * 
                     */
                    std::string GetHls() const;

                    /**
                     * 设置hls回放url
                     * @param _hls hls回放url
                     * 
                     */
                    void SetHls(const std::string& _hls);

                    /**
                     * 判断参数 Hls 是否已赋值
                     * @return Hls 是否已赋值
                     * 
                     */
                    bool HlsHasBeenSet() const;

                private:

                    /**
                     * hls回放url
                     */
                    std::string m_hls;
                    bool m_hlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_RECORDPLAYBACKURL_H_
