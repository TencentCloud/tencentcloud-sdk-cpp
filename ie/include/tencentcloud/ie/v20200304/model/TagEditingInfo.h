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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_TAGEDITINGINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_TAGEDITINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 视频标签识别任务参数信息
                */
                class TagEditingInfo : public AbstractModel
                {
                public:
                    TagEditingInfo();
                    ~TagEditingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启视频标签识别。0为关闭，1为开启。其他非0非1值默认为0。
                     * @return Switch 是否开启视频标签识别。0为关闭，1为开启。其他非0非1值默认为0。
                     * 
                     */
                    int64_t GetSwitch() const;

                    /**
                     * 设置是否开启视频标签识别。0为关闭，1为开启。其他非0非1值默认为0。
                     * @param _switch 是否开启视频标签识别。0为关闭，1为开启。其他非0非1值默认为0。
                     * 
                     */
                    void SetSwitch(const int64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取额外定制化服务参数。参数为序列化的Json字符串，例如：{"k1":"v1"}。
                     * @return CustomInfo 额外定制化服务参数。参数为序列化的Json字符串，例如：{"k1":"v1"}。
                     * 
                     */
                    std::string GetCustomInfo() const;

                    /**
                     * 设置额外定制化服务参数。参数为序列化的Json字符串，例如：{"k1":"v1"}。
                     * @param _customInfo 额外定制化服务参数。参数为序列化的Json字符串，例如：{"k1":"v1"}。
                     * 
                     */
                    void SetCustomInfo(const std::string& _customInfo);

                    /**
                     * 判断参数 CustomInfo 是否已赋值
                     * @return CustomInfo 是否已赋值
                     * 
                     */
                    bool CustomInfoHasBeenSet() const;

                private:

                    /**
                     * 是否开启视频标签识别。0为关闭，1为开启。其他非0非1值默认为0。
                     */
                    int64_t m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 额外定制化服务参数。参数为序列化的Json字符串，例如：{"k1":"v1"}。
                     */
                    std::string m_customInfo;
                    bool m_customInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_TAGEDITINGINFO_H_
