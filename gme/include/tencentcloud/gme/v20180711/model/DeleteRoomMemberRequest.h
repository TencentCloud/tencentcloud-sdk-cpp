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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DeleteRoomMember请求参数结构体
                */
                class DeleteRoomMemberRequest : public AbstractModel
                {
                public:
                    DeleteRoomMemberRequest();
                    ~DeleteRoomMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要操作的房间id
                     * @return RoomId 要操作的房间id
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置要操作的房间id
                     * @param _roomId 要操作的房间id
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
                     * 获取剔除类型 1-删除房间 2-剔除用户
                     * @return DeleteType 剔除类型 1-删除房间 2-剔除用户
                     * 
                     */
                    uint64_t GetDeleteType() const;

                    /**
                     * 设置剔除类型 1-删除房间 2-剔除用户
                     * @param _deleteType 剔除类型 1-删除房间 2-剔除用户
                     * 
                     */
                    void SetDeleteType(const uint64_t& _deleteType);

                    /**
                     * 判断参数 DeleteType 是否已赋值
                     * @return DeleteType 是否已赋值
                     * 
                     */
                    bool DeleteTypeHasBeenSet() const;

                    /**
                     * 获取应用id
                     * @return BizId 应用id
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用id
                     * @param _bizId 应用id
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取要剔除的用户列表（整型）
                     * @return Uids 要剔除的用户列表（整型）
                     * 
                     */
                    std::vector<std::string> GetUids() const;

                    /**
                     * 设置要剔除的用户列表（整型）
                     * @param _uids 要剔除的用户列表（整型）
                     * 
                     */
                    void SetUids(const std::vector<std::string>& _uids);

                    /**
                     * 判断参数 Uids 是否已赋值
                     * @return Uids 是否已赋值
                     * 
                     */
                    bool UidsHasBeenSet() const;

                    /**
                     * 获取要剔除的用户列表（字符串类型）
                     * @return StrUids 要剔除的用户列表（字符串类型）
                     * 
                     */
                    std::vector<std::string> GetStrUids() const;

                    /**
                     * 设置要剔除的用户列表（字符串类型）
                     * @param _strUids 要剔除的用户列表（字符串类型）
                     * 
                     */
                    void SetStrUids(const std::vector<std::string>& _strUids);

                    /**
                     * 判断参数 StrUids 是否已赋值
                     * @return StrUids 是否已赋值
                     * 
                     */
                    bool StrUidsHasBeenSet() const;

                private:

                    /**
                     * 要操作的房间id
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 剔除类型 1-删除房间 2-剔除用户
                     */
                    uint64_t m_deleteType;
                    bool m_deleteTypeHasBeenSet;

                    /**
                     * 应用id
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 要剔除的用户列表（整型）
                     */
                    std::vector<std::string> m_uids;
                    bool m_uidsHasBeenSet;

                    /**
                     * 要剔除的用户列表（字符串类型）
                     */
                    std::vector<std::string> m_strUids;
                    bool m_strUidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERREQUEST_H_
