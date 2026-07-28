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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_LIVEMODERATIONSTORAGEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_LIVEMODERATIONSTORAGEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/CloudModerationStorage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 直播流aI理解的转存文件存储参数
                */
                class LiveModerationStorageParams : public AbstractModel
                {
                public:
                    LiveModerationStorageParams();
                    ~LiveModerationStorageParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>直播流ai理解文件转存</p>
                     * @return CloudModerationStorage <p>直播流ai理解文件转存</p>
                     * 
                     */
                    CloudModerationStorage GetCloudModerationStorage() const;

                    /**
                     * 设置<p>直播流ai理解文件转存</p>
                     * @param _cloudModerationStorage <p>直播流ai理解文件转存</p>
                     * 
                     */
                    void SetCloudModerationStorage(const CloudModerationStorage& _cloudModerationStorage);

                    /**
                     * 判断参数 CloudModerationStorage 是否已赋值
                     * @return CloudModerationStorage 是否已赋值
                     * 
                     */
                    bool CloudModerationStorageHasBeenSet() const;

                private:

                    /**
                     * <p>直播流ai理解文件转存</p>
                     */
                    CloudModerationStorage m_cloudModerationStorage;
                    bool m_cloudModerationStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_LIVEMODERATIONSTORAGEPARAMS_H_
