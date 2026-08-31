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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEVIDEOCARDBRIEF_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEVIDEOCARDBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 设备显卡简要信息
                */
                class DeviceVideoCardBrief : public AbstractModel
                {
                public:
                    DeviceVideoCardBrief();
                    ~DeviceVideoCardBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>显卡名称</p>
                     * @return VideoCardName <p>显卡名称</p>
                     * 
                     */
                    std::string GetVideoCardName() const;

                    /**
                     * 设置<p>显卡名称</p>
                     * @param _videoCardName <p>显卡名称</p>
                     * 
                     */
                    void SetVideoCardName(const std::string& _videoCardName);

                    /**
                     * 判断参数 VideoCardName 是否已赋值
                     * @return VideoCardName 是否已赋值
                     * 
                     */
                    bool VideoCardNameHasBeenSet() const;

                private:

                    /**
                     * <p>显卡名称</p>
                     */
                    std::string m_videoCardName;
                    bool m_videoCardNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEVIDEOCARDBRIEF_H_
