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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GROUPIDOFUIDINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GROUPIDOFUIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 子用户和用户组关联信息
                */
                class GroupIdOfUidInfo : public AbstractModel
                {
                public:
                    GroupIdOfUidInfo();
                    ~GroupIdOfUidInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户组 ID
                     * @return GroupId 用户组 ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置用户组 ID
                     * @param _groupId 用户组 ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取子用户 UID
                     * @return Uid 子用户 UID
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置子用户 UID
                     * @param _uid 子用户 UID
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取子用户 Uin，Uid和Uin至少有一个必填
                     * @return Uin 子用户 Uin，Uid和Uin至少有一个必填
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置子用户 Uin，Uid和Uin至少有一个必填
                     * @param _uin 子用户 Uin，Uid和Uin至少有一个必填
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 用户组 ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 子用户 UID
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 子用户 Uin，Uid和Uin至少有一个必填
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GROUPIDOFUIDINFO_H_
