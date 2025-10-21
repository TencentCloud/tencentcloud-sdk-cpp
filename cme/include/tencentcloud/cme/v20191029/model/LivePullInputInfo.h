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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_LIVEPULLINPUTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_LIVEPULLINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 直播拉流信息
                */
                class LivePullInputInfo : public AbstractModel
                {
                public:
                    LivePullInputInfo();
                    ~LivePullInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播拉流地址。
                     * @return InputUrl 直播拉流地址。
                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置直播拉流地址。
                     * @param _inputUrl 直播拉流地址。
                     * 
                     */
                    void SetInputUrl(const std::string& _inputUrl);

                    /**
                     * 判断参数 InputUrl 是否已赋值
                     * @return InputUrl 是否已赋值
                     * 
                     */
                    bool InputUrlHasBeenSet() const;

                private:

                    /**
                     * 直播拉流地址。
                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_LIVEPULLINPUTINFO_H_
