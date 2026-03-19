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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARSCRIPTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLiveAvatarScript请求参数结构体
                */
                class CreateLiveAvatarScriptRequest : public AbstractModel
                {
                public:
                    CreateLiveAvatarScriptRequest();
                    ~CreateLiveAvatarScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取话术标题。限制500字节。
                     * @return Title 话术标题。限制500字节。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置话术标题。限制500字节。
                     * @param _title 话术标题。限制500字节。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
                     * @return Content 话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
                     * @param _content 话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
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
                     * 获取话术所属的数字人直播间 ID。
                     * @return RoomId 话术所属的数字人直播间 ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置话术所属的数字人直播间 ID。
                     * @param _roomId 话术所属的数字人直播间 ID。
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取话术插入时，可根据已有话术位置，指定新话术插入位置。
如已有三条话术100，200，300。
新话术可选择150插入到第一条和第二条中间。
                     * @return SpecifyPosition 话术插入时，可根据已有话术位置，指定新话术插入位置。
如已有三条话术100，200，300。
新话术可选择150插入到第一条和第二条中间。
                     * 
                     */
                    int64_t GetSpecifyPosition() const;

                    /**
                     * 设置话术插入时，可根据已有话术位置，指定新话术插入位置。
如已有三条话术100，200，300。
新话术可选择150插入到第一条和第二条中间。
                     * @param _specifyPosition 话术插入时，可根据已有话术位置，指定新话术插入位置。
如已有三条话术100，200，300。
新话术可选择150插入到第一条和第二条中间。
                     * 
                     */
                    void SetSpecifyPosition(const int64_t& _specifyPosition);

                    /**
                     * 判断参数 SpecifyPosition 是否已赋值
                     * @return SpecifyPosition 是否已赋值
                     * 
                     */
                    bool SpecifyPositionHasBeenSet() const;

                    /**
                     * 获取操作者。
                     * @return Operator 操作者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。
                     * @param _operator 操作者。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 话术标题。限制500字节。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 话术所属的数字人直播间 ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 话术插入时，可根据已有话术位置，指定新话术插入位置。
如已有三条话术100，200，300。
新话术可选择150插入到第一条和第二条中间。
                     */
                    int64_t m_specifyPosition;
                    bool m_specifyPositionHasBeenSet;

                    /**
                     * 操作者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARSCRIPTREQUEST_H_
