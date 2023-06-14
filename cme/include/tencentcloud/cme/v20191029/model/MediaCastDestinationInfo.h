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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTDESTINATIONINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTDESTINATIONINFO_H_

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
                * 点播转直播输出信息。
                */
                class MediaCastDestinationInfo : public AbstractModel
                {
                public:
                    MediaCastDestinationInfo();
                    ~MediaCastDestinationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出源 Id。由系统进行分配。
                     * @return Id 输出源 Id。由系统进行分配。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置输出源 Id。由系统进行分配。
                     * @param _id 输出源 Id。由系统进行分配。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取输出直播流地址。支持的直播流类型为 RTMP 和 SRT。
                     * @return PushUrl 输出直播流地址。支持的直播流类型为 RTMP 和 SRT。
                     * 
                     */
                    std::string GetPushUrl() const;

                    /**
                     * 设置输出直播流地址。支持的直播流类型为 RTMP 和 SRT。
                     * @param _pushUrl 输出直播流地址。支持的直播流类型为 RTMP 和 SRT。
                     * 
                     */
                    void SetPushUrl(const std::string& _pushUrl);

                    /**
                     * 判断参数 PushUrl 是否已赋值
                     * @return PushUrl 是否已赋值
                     * 
                     */
                    bool PushUrlHasBeenSet() const;

                    /**
                     * 获取输出源的名称。
                     * @return Name 输出源的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置输出源的名称。
                     * @param _name 输出源的名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 输出源 Id。由系统进行分配。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 输出直播流地址。支持的直播流类型为 RTMP 和 SRT。
                     */
                    std::string m_pushUrl;
                    bool m_pushUrlHasBeenSet;

                    /**
                     * 输出源的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTDESTINATIONINFO_H_
