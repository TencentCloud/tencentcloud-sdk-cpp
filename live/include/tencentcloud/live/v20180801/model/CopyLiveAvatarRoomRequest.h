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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COPYLIVEAVATARROOMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COPYLIVEAVATARROOMREQUEST_H_

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
                * CopyLiveAvatarRoom请求参数结构体
                */
                class CopyLiveAvatarRoomRequest : public AbstractModel
                {
                public:
                    CopyLiveAvatarRoomRequest();
                    ~CopyLiveAvatarRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新直播间名称。
                     * @return Name 新直播间名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置新直播间名称。
                     * @param _name 新直播间名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取源数字人直播间 ID。
                     * @return SourceRoomId 源数字人直播间 ID。
                     * 
                     */
                    std::string GetSourceRoomId() const;

                    /**
                     * 设置源数字人直播间 ID。
                     * @param _sourceRoomId 源数字人直播间 ID。
                     * 
                     */
                    void SetSourceRoomId(const std::string& _sourceRoomId);

                    /**
                     * 判断参数 SourceRoomId 是否已赋值
                     * @return SourceRoomId 是否已赋值
                     * 
                     */
                    bool SourceRoomIdHasBeenSet() const;

                    /**
                     * 获取是否复制话术列表。默认：true。
                     * @return IsCopyScript 是否复制话术列表。默认：true。
                     * 
                     */
                    bool GetIsCopyScript() const;

                    /**
                     * 设置是否复制话术列表。默认：true。
                     * @param _isCopyScript 是否复制话术列表。默认：true。
                     * 
                     */
                    void SetIsCopyScript(const bool& _isCopyScript);

                    /**
                     * 判断参数 IsCopyScript 是否已赋值
                     * @return IsCopyScript 是否已赋值
                     * 
                     */
                    bool IsCopyScriptHasBeenSet() const;

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
                     * 新直播间名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 源数字人直播间 ID。
                     */
                    std::string m_sourceRoomId;
                    bool m_sourceRoomIdHasBeenSet;

                    /**
                     * 是否复制话术列表。默认：true。
                     */
                    bool m_isCopyScript;
                    bool m_isCopyScriptHasBeenSet;

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

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COPYLIVEAVATARROOMREQUEST_H_
