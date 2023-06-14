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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTSBYROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTSBYROOMREQUEST_H_

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
                * DescribeDocumentsByRoom请求参数结构体
                */
                class DescribeDocumentsByRoomRequest : public AbstractModel
                {
                public:
                    DescribeDocumentsByRoomRequest();
                    ~DescribeDocumentsByRoomRequest() = default;
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
                     * 获取低代码互动课堂的SdkAppId
                     * @return SdkAppId 低代码互动课堂的SdkAppId
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId
                     * @param _sdkAppId 低代码互动课堂的SdkAppId
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分页查询当前页数，从1开始递增，默认值为1
                     * @return Page 分页查询当前页数，从1开始递增，默认值为1
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置分页查询当前页数，从1开始递增，默认值为1
                     * @param _page 分页查询当前页数，从1开始递增，默认值为1
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页数据量，最大1000，默认值为100
                     * @return Limit 每页数据量，最大1000，默认值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数据量，最大1000，默认值为100
                     * @param _limit 每页数据量，最大1000，默认值为100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取课件权限。
[0]：获取owner的私有课件；
[1]：获取owner的公开课件;
[0,1]：则获取owner的私有课件和公开课件；
[2]：获取owner的私有课件和所有人(包括owner)的公开课件。
默认值为[2]
                     * @return Permission 课件权限。
[0]：获取owner的私有课件；
[1]：获取owner的公开课件;
[0,1]：则获取owner的私有课件和公开课件；
[2]：获取owner的私有课件和所有人(包括owner)的公开课件。
默认值为[2]
                     * 
                     */
                    std::vector<uint64_t> GetPermission() const;

                    /**
                     * 设置课件权限。
[0]：获取owner的私有课件；
[1]：获取owner的公开课件;
[0,1]：则获取owner的私有课件和公开课件；
[2]：获取owner的私有课件和所有人(包括owner)的公开课件。
默认值为[2]
                     * @param _permission 课件权限。
[0]：获取owner的私有课件；
[1]：获取owner的公开课件;
[0,1]：则获取owner的私有课件和公开课件；
[2]：获取owner的私有课件和所有人(包括owner)的公开课件。
默认值为[2]
                     * 
                     */
                    void SetPermission(const std::vector<uint64_t>& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取文档所有者的user_id，不填默认获取SdkAppId下所有课件
                     * @return Owner 文档所有者的user_id，不填默认获取SdkAppId下所有课件
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置文档所有者的user_id，不填默认获取SdkAppId下所有课件
                     * @param _owner 文档所有者的user_id，不填默认获取SdkAppId下所有课件
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * 房间ID。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 低代码互动课堂的SdkAppId
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分页查询当前页数，从1开始递增，默认值为1
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页数据量，最大1000，默认值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 课件权限。
[0]：获取owner的私有课件；
[1]：获取owner的公开课件;
[0,1]：则获取owner的私有课件和公开课件；
[2]：获取owner的私有课件和所有人(包括owner)的公开课件。
默认值为[2]
                     */
                    std::vector<uint64_t> m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 文档所有者的user_id，不填默认获取SdkAppId下所有课件
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTSBYROOMREQUEST_H_
