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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARTEMPORARYSCRIPTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARTEMPORARYSCRIPTINFO_H_

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
                * 数字人直播间临时话术信息。
                */
                class AvatarTemporaryScriptInfo : public AbstractModel
                {
                public:
                    AvatarTemporaryScriptInfo();
                    ~AvatarTemporaryScriptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取话术内容。
                     * @return Content 话术内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置话术内容。
                     * @param _content 话术内容。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @return CreateTime 话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @param _createTime 话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 话术内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARTEMPORARYSCRIPTINFO_H_
