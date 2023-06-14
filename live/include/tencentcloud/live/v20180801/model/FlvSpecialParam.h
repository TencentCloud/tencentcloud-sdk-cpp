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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_FLVSPECIALPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_FLVSPECIALPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * flv格式特殊配置
                */
                class FlvSpecialParam : public AbstractModel
                {
                public:
                    FlvSpecialParam();
                    ~FlvSpecialParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启边录边传，仅flv格式有效。
                     * @return UploadInRecording 是否开启边录边传，仅flv格式有效。
                     * 
                     */
                    bool GetUploadInRecording() const;

                    /**
                     * 设置是否开启边录边传，仅flv格式有效。
                     * @param _uploadInRecording 是否开启边录边传，仅flv格式有效。
                     * 
                     */
                    void SetUploadInRecording(const bool& _uploadInRecording);

                    /**
                     * 判断参数 UploadInRecording 是否已赋值
                     * @return UploadInRecording 是否已赋值
                     * 
                     */
                    bool UploadInRecordingHasBeenSet() const;

                private:

                    /**
                     * 是否开启边录边传，仅flv格式有效。
                     */
                    bool m_uploadInRecording;
                    bool m_uploadInRecordingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_FLVSPECIALPARAM_H_
