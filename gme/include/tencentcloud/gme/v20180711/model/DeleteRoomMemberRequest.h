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
                     * 获取<p>要操作的房间id</p>
                     * @return RoomId <p>要操作的房间id</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>要操作的房间id</p>
                     * @param _roomId <p>要操作的房间id</p>
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
                     * 获取<p>剔除类型 1-删除房间 2-剔除用户</p>
                     * @return DeleteType <p>剔除类型 1-删除房间 2-剔除用户</p>
                     * 
                     */
                    uint64_t GetDeleteType() const;

                    /**
                     * 设置<p>剔除类型 1-删除房间 2-剔除用户</p>
                     * @param _deleteType <p>剔除类型 1-删除房间 2-剔除用户</p>
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
                     * 获取<p>应用id</p>
                     * @return BizId <p>应用id</p>
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _bizId <p>应用id</p>
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
                     * 获取<p>要剔除的用户列表（整型）</p>
                     * @return Uids <p>要剔除的用户列表（整型）</p>
                     * 
                     */
                    std::vector<std::string> GetUids() const;

                    /**
                     * 设置<p>要剔除的用户列表（整型）</p>
                     * @param _uids <p>要剔除的用户列表（整型）</p>
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
                     * 获取<p>要剔除的用户列表（字符串类型）</p>
                     * @return StrUids <p>要剔除的用户列表（字符串类型）</p>
                     * 
                     */
                    std::vector<std::string> GetStrUids() const;

                    /**
                     * 设置<p>要剔除的用户列表（字符串类型）</p>
                     * @param _strUids <p>要剔除的用户列表（字符串类型）</p>
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
                     * <p>要操作的房间id</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>剔除类型 1-删除房间 2-剔除用户</p>
                     */
                    uint64_t m_deleteType;
                    bool m_deleteTypeHasBeenSet;

                    /**
                     * <p>应用id</p>
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * <p>要剔除的用户列表（整型）</p>
                     */
                    std::vector<std::string> m_uids;
                    bool m_uidsHasBeenSet;

                    /**
                     * <p>要剔除的用户列表（字符串类型）</p>
                     */
                    std::vector<std::string> m_strUids;
                    bool m_strUidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERREQUEST_H_
