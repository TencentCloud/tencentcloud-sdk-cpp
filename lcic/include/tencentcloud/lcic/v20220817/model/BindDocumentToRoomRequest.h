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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BINDDOCUMENTTOROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BINDDOCUMENTTOROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BindDocumentToRoom请求参数结构体
                */
                class BindDocumentToRoomRequest : public AbstractModel
                {
                public:
                    BindDocumentToRoomRequest();
                    ~BindDocumentToRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取房间ID。
                     * @return RoomId 房间ID。
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置房间ID。
                     * @param _roomId 房间ID。
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取文档ID。
                     * @return DocumentId 文档ID。
                     * 
                     */
                    std::string GetDocumentId() const;

                    /**
                     * 设置文档ID。
                     * @param _documentId 文档ID。
                     * 
                     */
                    void SetDocumentId(const std::string& _documentId);

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     * 
                     */
                    bool DocumentIdHasBeenSet() const;

                    /**
                     * 获取绑定类型。后台可透传到客户端，默认为0。除以下例值外支持自定义该字段，并在前端实现相应业务逻辑，示例参考：
示例值：0，仅绑定课件到房间
示例值：1，绑定课件到房间后，默认展示课件
                     * @return BindType 绑定类型。后台可透传到客户端，默认为0。除以下例值外支持自定义该字段，并在前端实现相应业务逻辑，示例参考：
示例值：0，仅绑定课件到房间
示例值：1，绑定课件到房间后，默认展示课件
                     * 
                     */
                    uint64_t GetBindType() const;

                    /**
                     * 设置绑定类型。后台可透传到客户端，默认为0。除以下例值外支持自定义该字段，并在前端实现相应业务逻辑，示例参考：
示例值：0，仅绑定课件到房间
示例值：1，绑定课件到房间后，默认展示课件
                     * @param _bindType 绑定类型。后台可透传到客户端，默认为0。除以下例值外支持自定义该字段，并在前端实现相应业务逻辑，示例参考：
示例值：0，仅绑定课件到房间
示例值：1，绑定课件到房间后，默认展示课件
                     * 
                     */
                    void SetBindType(const uint64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                private:

                    /**
                     * 房间ID。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 文档ID。
                     */
                    std::string m_documentId;
                    bool m_documentIdHasBeenSet;

                    /**
                     * 绑定类型。后台可透传到客户端，默认为0。除以下例值外支持自定义该字段，并在前端实现相应业务逻辑，示例参考：
示例值：0，仅绑定课件到房间
示例值：1，绑定课件到房间后，默认展示课件
                     */
                    uint64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BINDDOCUMENTTOROOMREQUEST_H_
