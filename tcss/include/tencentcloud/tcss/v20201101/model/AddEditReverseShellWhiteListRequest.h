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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITREVERSESHELLWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITREVERSESHELLWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ReverseShellWhiteListInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddEditReverseShellWhiteList请求参数结构体
                */
                class AddEditReverseShellWhiteListRequest : public AbstractModel
                {
                public:
                    AddEditReverseShellWhiteListRequest();
                    ~AddEditReverseShellWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取增加或编辑白名单信息。新增白名单时WhiteListInfo.id为空，编辑白名单WhiteListInfo.id不能为空。
                     * @return WhiteListInfo 增加或编辑白名单信息。新增白名单时WhiteListInfo.id为空，编辑白名单WhiteListInfo.id不能为空。
                     * 
                     */
                    ReverseShellWhiteListInfo GetWhiteListInfo() const;

                    /**
                     * 设置增加或编辑白名单信息。新增白名单时WhiteListInfo.id为空，编辑白名单WhiteListInfo.id不能为空。
                     * @param _whiteListInfo 增加或编辑白名单信息。新增白名单时WhiteListInfo.id为空，编辑白名单WhiteListInfo.id不能为空。
                     * 
                     */
                    void SetWhiteListInfo(const ReverseShellWhiteListInfo& _whiteListInfo);

                    /**
                     * 判断参数 WhiteListInfo 是否已赋值
                     * @return WhiteListInfo 是否已赋值
                     * 
                     */
                    bool WhiteListInfoHasBeenSet() const;

                    /**
                     * 获取仅在添加事件白名单时候使用
                     * @return EventId 仅在添加事件白名单时候使用
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置仅在添加事件白名单时候使用
                     * @param _eventId 仅在添加事件白名单时候使用
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * 增加或编辑白名单信息。新增白名单时WhiteListInfo.id为空，编辑白名单WhiteListInfo.id不能为空。
                     */
                    ReverseShellWhiteListInfo m_whiteListInfo;
                    bool m_whiteListInfoHasBeenSet;

                    /**
                     * 仅在添加事件白名单时候使用
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITREVERSESHELLWHITELISTREQUEST_H_
