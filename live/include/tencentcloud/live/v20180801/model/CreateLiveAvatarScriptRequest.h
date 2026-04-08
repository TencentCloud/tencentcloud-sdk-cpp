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
                     * 获取<p>话术标题。限制500字节。</p>
                     * @return Title <p>话术标题。限制500字节。</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>话术标题。限制500字节。</p>
                     * @param _title <p>话术标题。限制500字节。</p>
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
                     * 获取<p>话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。</p>
                     * @return Content <p>话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。</p>
                     * @param _content <p>话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。</p>
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
                     * 获取<p>话术所属的数字人直播间 ID。</p>
                     * @return RoomId <p>话术所属的数字人直播间 ID。</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>话术所属的数字人直播间 ID。</p>
                     * @param _roomId <p>话术所属的数字人直播间 ID。</p>
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
                     * 获取<p>话术插入时，可根据已有话术位置，指定新话术插入位置。<br>如已有三条话术100，200，300。<br>新话术可选择150插入到第一条和第二条中间。</p>
                     * @return SpecifyPosition <p>话术插入时，可根据已有话术位置，指定新话术插入位置。<br>如已有三条话术100，200，300。<br>新话术可选择150插入到第一条和第二条中间。</p>
                     * 
                     */
                    int64_t GetSpecifyPosition() const;

                    /**
                     * 设置<p>话术插入时，可根据已有话术位置，指定新话术插入位置。<br>如已有三条话术100，200，300。<br>新话术可选择150插入到第一条和第二条中间。</p>
                     * @param _specifyPosition <p>话术插入时，可根据已有话术位置，指定新话术插入位置。<br>如已有三条话术100，200，300。<br>新话术可选择150插入到第一条和第二条中间。</p>
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
                     * 获取<p>操作者。</p>
                     * @return Operator <p>操作者。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作者。</p>
                     * @param _operator <p>操作者。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>话术所属的数字人产品 ID。</p>
                     * @return ProductId <p>话术所属的数字人产品 ID。</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>话术所属的数字人产品 ID。</p>
                     * @param _productId <p>话术所属的数字人产品 ID。</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                private:

                    /**
                     * <p>话术标题。限制500字节。</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>话术内容。中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>话术所属的数字人直播间 ID。</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>话术插入时，可根据已有话术位置，指定新话术插入位置。<br>如已有三条话术100，200，300。<br>新话术可选择150插入到第一条和第二条中间。</p>
                     */
                    int64_t m_specifyPosition;
                    bool m_specifyPositionHasBeenSet;

                    /**
                     * <p>操作者。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>话术所属的数字人产品 ID。</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARSCRIPTREQUEST_H_
