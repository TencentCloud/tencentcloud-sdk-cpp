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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTDESTINATIONSTATUS_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTDESTINATIONSTATUS_H_

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
                * 点播转直播输出源状态信息。
                */
                class MediaCastDestinationStatus : public AbstractModel
                {
                public:
                    MediaCastDestinationStatus();
                    ~MediaCastDestinationStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出源 Id，由系统分配。
                     * @return Id 输出源 Id，由系统分配。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置输出源 Id，由系统分配。
                     * @param _id 输出源 Id，由系统分配。
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
                     * 获取输出源直播地址。
                     * @return PushUrl 输出源直播地址。
                     * 
                     */
                    std::string GetPushUrl() const;

                    /**
                     * 设置输出源直播地址。
                     * @param _pushUrl 输出源直播地址。
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
                     * 获取输出源的状态。取值有：
<li> Working ：运行中；</li>
<li> Stopped：停止输出；</li>
<li> Failed：输出失败。</li>
                     * @return Status 输出源的状态。取值有：
<li> Working ：运行中；</li>
<li> Stopped：停止输出；</li>
<li> Failed：输出失败。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置输出源的状态。取值有：
<li> Working ：运行中；</li>
<li> Stopped：停止输出；</li>
<li> Failed：输出失败。</li>
                     * @param _status 输出源的状态。取值有：
<li> Working ：运行中；</li>
<li> Stopped：停止输出；</li>
<li> Failed：输出失败。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 输出源 Id，由系统分配。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 输出源直播地址。
                     */
                    std::string m_pushUrl;
                    bool m_pushUrlHasBeenSet;

                    /**
                     * 输出源的状态。取值有：
<li> Working ：运行中；</li>
<li> Stopped：停止输出；</li>
<li> Failed：输出失败。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTDESTINATIONSTATUS_H_
